__int64 __fastcall sub_22C02E0(_QWORD *a1)
{
  char v1; // r15
  size_t v2; // rax
  __int64 *v3; // rax
  size_t v4; // rax
  __int64 *v5; // rax
  char v6; // bp
  size_t v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rbp
  int v13; // r13d
  __int64 i; // r14
  char *v15; // rbx
  char *v16; // r14
  _QWORD *v17; // rbp
  size_t v18; // r13
  const void *v19; // rax
  size_t v20; // rdx
  _QWORD *v21; // r15
  unsigned __int8 v22; // al
  unsigned __int8 v24; // [rsp+7h] [rbp-71h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v26; // [rsp+18h] [rbp-60h]
  _BYTE v27[88]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  v2 = j__strlen("llvm.debugify");
  v3 = (__int64 *)sub_20BE520((__int64)a1, (__int64)"llvm.debugify", v2);
  if ( v3 )
  {
    v1 = 1;
    sub_20BE910((__int64)a1, v3);
  }
  v4 = j__strlen("llvm.mir.debugify");
  v5 = (__int64 *)sub_20BE520((__int64)a1, (__int64)"llvm.mir.debugify", v4);
  if ( v5 )
  {
    v1 = 1;
    sub_20BE910((__int64)a1, v5);
  }
  v6 = sub_206C570(a1);
  v7 = j__strlen("llvm.dbg.value");
  v8 = sub_20BE3F0((__int64)a1, (__int64)"llvm.dbg.value", v7);
  if ( v8 )
  {
    sub_208DD30(v8);
    v24 = 1;
  }
  else
  {
    v24 = v6 | v1;
  }
  v9 = a1[107];
  if ( v9 )
  {
    v10 = v27;
    v11 = sub_20A0E10(a1[107]);
    ptr = v27;
    v26 = 0x400000000LL;
    if ( v11 )
    {
      v12 = (unsigned int)(v11 - 1);
      v13 = v11;
      if ( v12 + 1 > 4 )
      {
        sub_2237220((__int64)&ptr, v27, v12 + 1, 8);
        v10 = (char *)ptr + 8 * (unsigned int)v26;
      }
      for ( i = 0; ; ++i )
      {
        *(_QWORD *)&v10[8 * i] = sub_20A0E20(v9, i);
        if ( v12 == i )
          break;
      }
      v11 = v13 + v26;
    }
    LODWORD(v26) = v11;
    sub_20A0E40(v9);
    v15 = (char *)ptr;
    v16 = (char *)ptr + 8 * (unsigned int)v26;
    if ( ptr != v16 )
    {
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD **)v15;
          v22 = *(_BYTE *)(*(_QWORD *)v15 - 16LL);
          v17 = (v22 & 2) != 0 ? (_QWORD *)*(v21 - 4) : (_QWORD *)((char *)v21 - 16 - 8LL * ((v22 >> 2) & 0xF));
          v18 = j__strlen("Debug Info Version");
          v19 = (const void *)sub_20A0B40(v17[1]);
          if ( v20 == v18 && (!v20 || !memcmp(v19, "Debug Info Version", v20)) )
            break;
          v15 += 8;
          sub_20B3610(v9, v21);
          if ( v16 == v15 )
            goto LABEL_25;
        }
        v15 += 8;
        v24 = 1;
      }
      while ( v16 != v15 );
    }
LABEL_25:
    if ( !(unsigned int)sub_20A0E10(v9) )
      sub_20A0E30(v9);
    if ( ptr != v27 )
      free(ptr);
  }
  return v24;
}
