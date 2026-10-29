__int64 __fastcall sub_19DA8A0(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r9
  _QWORD *v7; // r13
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v13; // r15
  size_t v14; // rax
  __int64 v15; // r15
  size_t v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v25; // [rsp+28h] [rbp-150h]
  _DWORD v26[6]; // [rsp+30h] [rbp-148h] BYREF
  void *v27; // [rsp+48h] [rbp-130h]
  char v28; // [rsp+58h] [rbp-120h] BYREF
  __int64 v29[3]; // [rsp+70h] [rbp-108h] BYREF
  void *v30; // [rsp+88h] [rbp-F0h]
  __int64 v31; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v32[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v34; // [rsp+D0h] [rbp-A8h] BYREF
  char v35; // [rsp+128h] [rbp-50h]
  unsigned int v36; // [rsp+130h] [rbp-48h]
  char v37; // [rsp+134h] [rbp-44h]

  v6 = *(_QWORD *)(a6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6 )
  {
    v7 = (_QWORD *)v6;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = *v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 != a5 )
        {
          v11 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
            v11 = *(_QWORD *)v11;
          if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 21 > 1
            && *(_QWORD *)(v10 + 40) == *(_QWORD *)(a5 + 40)
            && !(unsigned __int8)sub_1896130(*(_QWORD *)(a1 + 736), a5, *v7 & 0xFFFFFFFFFFFFFFF8LL, 0) )
          {
            break;
          }
        }
        v7 = (_QWORD *)(v7[1] & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v7 )
          return v9;
      }
      if ( !(_BYTE)v9 )
      {
        sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), a2, 0x1BCFu, 0);
        v13 = *(_QWORD *)(a5 + 40);
        if ( v35 )
        {
          sub_AE9DF0(&v34, *(_QWORD *)(a5 + 40), 9u);
        }
        else if ( v37 )
        {
          v17 = sub_168B9E0(v32);
          v21 = v33;
          if ( v33 )
          {
            v25 = v17;
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
            v17 = v25;
          }
          v29[0] = v21;
          v22 = sub_1587BC0(v17, v29, v17, v18, v19, v20);
          sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v36 + 8), v13, 9u);
        }
        v14 = j__strlen("(");
        sub_9EC740((__int64)v26, a3, "(", v14, 0);
        v15 = sub_1589170((__int64)v32, v26);
        v16 = j__strlen(")");
        sub_9EC740((__int64)v29, a4, ")", v16, 0);
        sub_1589170(v15, v29);
        if ( v30 != &v31 )
          operator delete(v30);
        if ( v27 != &v28 )
          operator delete(v27);
        sub_15F7200(v32);
        sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), *(_DWORD *)(a5 + 24), 0x17CAu, 0);
        v29[0] = *(_QWORD *)(a5 + 40);
        sub_15894B0((__int64)v32, v29);
        sub_15F7200(v32);
      }
      v9 = 1;
      sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x17CAu, 0);
      v29[0] = *(_QWORD *)(v10 + 40);
      sub_15894B0((__int64)v32, v29);
      sub_15F7200(v32);
      v7 = (_QWORD *)(v7[1] & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( v7 );
  }
  else
  {
    return 0;
  }
  return v9;
}
