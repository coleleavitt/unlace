__int64 __fastcall sub_5050(__int64 a1)
{
  bool v1; // zf
  void *v3; // rsi
  __int64 v4; // r12
  const char *v5; // rdi
  char *v6; // r13
  const char *v7; // rsi
  size_t v8; // rax
  size_t v9; // r12
  void *v10; // rax
  __int64 v12; // rax
  void *v13; // rdi
  size_t v14; // r13
  __int64 v15; // rax
  __int16 v16; // [rsp+1Eh] [rbp-106Ah] BYREF
  const char *v17; // [rsp+20h] [rbp-1068h] BYREF
  __int128 v18; // [rsp+28h] [rbp-1060h]
  char s2[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v20; // [rsp+1048h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 214) == 0;
  v20 = __readfsqword(0x28u);
  v16 = !v1;
  v3 = &unk_71C5;
  if ( *(_QWORD *)(a1 + 112) )
    v3 = *(void **)(a1 + 104);
  qstrncpy(s2, v3, 4096);
  while ( 1 )
  {
    if ( !(unsigned int)sub_32B0(
                          (__int64)"Rust Options\n"
                                   "%/<#Use librustdemangle to demangle rust names#~D~emangling enabled:C>>\n"
                                   "<#Path to librustdemangle (defaults to the library that is shipped with IDA).\n"
                                   "The chosen library must export the rust_demangle_callback function.#Rust demangler:f2:0:50::>\n",
                          sub_29D0,
                          &v16,
                          s2) )
      return 0;
    v4 = *(_QWORD *)(a1 + 112);
    v5 = (const char *)&unk_71C5;
    if ( v4 )
      v5 = *(const char **)(a1 + 104);
    if ( !strcmp(v5, s2) )
      break;
    v6 = s2;
    if ( !s2[0] )
    {
      v6 = src;
      v12 = idadir(0);
      qmakepath(src, 4096, v12, "librustdemangle.so", 0);
    }
    sub_6220(a1 + 128);
    v18 = 0;
    v17 = nullptr;
    if ( (unsigned __int8)sub_6510(a1 + 128, v6, &v17) )
    {
      v8 = strlen(s2);
      v9 = v8;
      if ( v8 )
      {
        v13 = *(void **)(a1 + 104);
        v14 = v8 + 1;
        if ( *(_QWORD *)(a1 + 120) < v8 + 1 )
        {
          v15 = qvector_reserve(a1 + 104, *(_QWORD *)(a1 + 104), v14, 1);
          *(_QWORD *)(a1 + 104) = v15;
          v13 = (void *)v15;
        }
        *(_QWORD *)(a1 + 112) = v14;
        memmove(v13, s2, v9);
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + v9) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 112) = 0;
      }
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      v4 = *(_QWORD *)(a1 + 112);
      break;
    }
    v7 = (const char *)&unk_71C5;
    if ( (_QWORD)v18 )
      v7 = v17;
    sub_3110((__int64)"WARNING: %s\n", v7);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  *(_BYTE *)(a1 + 214) = v16;
  v10 = &unk_71C5;
  *(_BYTE *)(a1 + 214) &= 1u;
  if ( v4 )
    v10 = *(void **)(a1 + 104);
  reg_str_set("RustDemanglerPath", 0, v10);
  return 1;
}
