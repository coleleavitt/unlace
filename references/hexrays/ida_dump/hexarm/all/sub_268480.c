__int64 __fastcall sub_268480(__int64 a1, void **a2, unsigned int a3, _QWORD *a4, char a5)
{
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  const char *v12; // r14
  int v13; // r13d
  __int64 v15; // rdx
  __int64 v16; // rsi
  const char *v17; // rax
  const char *v18; // rcx
  const char *v19; // rdi
  __int64 module_data; // [rsp+8h] [rbp-90h]
  unsigned int v22; // [rsp+18h] [rbp-80h]
  const char *v24; // [rsp+20h] [rbp-78h] BYREF
  __int128 v25; // [rsp+28h] [rbp-70h]
  const char *v26; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v7 = a4[5];
  v28 = __readfsqword(0x28u);
  if ( v7 )
    module_data = *(_QWORD *)(v7 + 216);
  else
    module_data = get_module_data((unsigned int)dword_4EB8F8);
  if ( a5 )
  {
    sub_262B00(a2, module_data, 0, a3, byte_4131F3, a4, 0x46u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a4)(a4, a3, &unk_413200);
    if ( *(_QWORD *)(a1 + 32) )
    {
      v9 = 0;
      v22 = a3 + 8;
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 24) + 88 * v9;
        v11 = *(_QWORD *)(v10 + 72);
        if ( *(_DWORD *)(v10 + 8) )
          break;
        if ( v11 > 1 )
        {
          v24 = nullptr;
          v25 = 0;
          goto LABEL_9;
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a4)(a4, 0, &unk_413211);
        v13 = a3 + 11;
LABEL_13:
        if ( ++v9 < *(_QWORD *)(a1 + 32) )
        {
          sub_262B00(a2, module_data, v13, 0, byte_4131ED, a4, v9);
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _QWORD))*a4)(a4, v22, &unk_412793, *a4);
          if ( v9 < *(_QWORD *)(a1 + 32) )
            continue;
        }
        goto LABEL_14;
      }
      v24 = nullptr;
      v25 = 0;
      if ( v11 > 1 || (sub_32BB20(&v24, v10 + 48, 0, 64), *(_QWORD *)(v10 + 72) > 1u) )
      {
LABEL_9:
        v12 = *(const char **)(v10 + 64);
      }
      else
      {
        v12 = s1;
        if ( (_QWORD)v25 )
          v12 = v24;
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4)(a4, 0, &unk_413219, v12);
      v13 = v22 + tag_strlen(v12);
      if ( *(_DWORD *)(v10 + 8) )
      {
        v15 = a4[5];
        v26 = nullptr;
        v27 = 0;
        sub_2683A0(v10, (__int64)&v26, v15);
        v16 = 0;
        v17 = &v12[strlen(v12)];
        if ( v12 < v17 )
          v16 = (unsigned __int8)sub_32E860(v17 - 1);
        v18 = s1;
        if ( (_QWORD)v27 )
          v18 = v26;
        (*(void (__fastcall **)(_QWORD *, __int64, void *, const char *))*a4)(a4, v16, &unk_4130E0, v18);
        v19 = s1;
        if ( (_QWORD)v27 )
          v19 = v26;
        v13 += tag_strlen(v19) + 1;
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26);
        }
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      goto LABEL_13;
    }
    v13 = a3 + 11;
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a4)(a4, 0, &unk_413211);
LABEL_14:
    sub_262B00(a2, module_data, v13, 1u, byte_413198, a4, 0x48u);
  }
  return sub_269B10(a1, a2, *(_DWORD *)(module_data + 592) + a3, a4, 1);
}
