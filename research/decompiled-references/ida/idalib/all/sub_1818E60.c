__int64 __fastcall sub_1818E60(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 *v11; // r12
  bool v12; // zf
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v32[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v34; // [rsp+30h] [rbp-88h] BYREF
  char v35; // [rsp+88h] [rbp-30h]
  unsigned int v36; // [rsp+90h] [rbp-28h]
  char v37; // [rsp+94h] [rbp-24h]

  v5 = sub_B987D0(a2, (__int64)a2) & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)v5;
  v11 = (__int64 *)v5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 43 <= 1 )
    goto LABEL_31;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    goto LABEL_8;
  v10 = sub_F63050(v10, a2, v6, v7);
  if ( v10 )
  {
LABEL_31:
    while ( 1 )
    {
      v12 = (*(_BYTE *)(v10 + 18) & 0x10) == 0;
      v10 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v12 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43 > 1 )
        v10 = sub_F63050(v10, a2, v6, v7);
    }
  }
  else
  {
    v10 = *v11;
  }
LABEL_8:
  v13 = sub_F63270(v10, (__int64)a2, v6, v7, v8, v9);
  v18 = (__int64)v13;
  if ( !v13 )
    return 1;
  if ( (*((_BYTE *)v13 + 29) & 1) != 0 )
  {
    v20 = sub_B8C3D0((__int64)v13, (__int64)a2, v14, v15, v16, v17);
    v21 = *v20;
    v22 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( *v20 >= v22 )
    {
      if ( v21 == v22 )
        goto LABEL_10;
      while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 184 )
      {
        v22 += 8LL;
        if ( v21 == v22 )
          goto LABEL_10;
      }
    }
    else
    {
      v23 = *v20;
      while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 184 )
      {
        v23 += 8LL;
        if ( v22 == v23 )
          goto LABEL_10;
      }
      if ( v22 == v23 )
        goto LABEL_10;
    }
    return 1;
  }
LABEL_10:
  sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x198Au, 0);
  if ( v35 )
  {
    sub_AE9DF0(&v34, v18, 0xAu);
  }
  else if ( v37 )
  {
    v26 = sub_168B9E0(v32);
    v29 = v33;
    if ( v33 )
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
    v31 = v29;
    v30 = sub_1587BC0(v26, &v31, v24, v25, v27, v28);
    sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v36 + 8), v18, 0xAu);
  }
  sub_15F7200(v32);
  return 0;
}
