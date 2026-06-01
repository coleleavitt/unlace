__int64 __fastcall sub_1B41BB0(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, char a6)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-F0h]
  __int64 v37[2]; // [rsp+18h] [rbp-E0h] BYREF
  char *v38; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-C8h] BYREF
  char *v40; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v41; // [rsp+50h] [rbp-A8h] BYREF
  char v42; // [rsp+A8h] [rbp-50h]
  unsigned int v43; // [rsp+B0h] [rbp-48h]
  char v44; // [rsp+B4h] [rbp-44h]

  v37[0] = a5;
  if ( a2 )
  {
    v9 = a5;
    v10 = 0;
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 )
      v10 = a2;
    v36 = v10;
  }
  else
  {
    v36 = 0;
    v9 = a5;
  }
  v13 = sub_1E63CF0(*a1, a3, v9, 1, 4536);
  if ( (_BYTE)v13 )
    return 1;
  if ( a4 - 1 <= 1
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
    v13 = 1;
    sub_168B9F0((__int64)v39, a1, a3, 0x122Du, 0);
    v28 = sub_1605D30((__int64)v39, v37);
    v38 = sub_FFDD70(53, a4);
    sub_15AFC70(v28, &v38);
    sub_15F7200(v39);
    return v13;
  }
  v14 = sub_C1BEF0((__int64)v37, a3, v11, v12);
  v37[0] = v14;
  if ( !a6 )
  {
    if ( (unsigned __int8)sub_1B310E0(*a1, a2, v14, 0x35u, a3) )
      return 1;
  }
  v15 = sub_6D5440(v37);
  v16 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
  LOBYTE(v15) = v16 | v15;
  v16 &= 0xFFFFFFFFFFFFFFF8LL;
  v37[0] = v16 | v15 & 7;
  v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0
    || (v18 = *v17) == 0
    || a4 != 1
    && (*(_BYTE *)(v18 + 17) & 4) == 0
    && (v19 = sub_168B6C0((__int64)a1), !sub_F60F80(v18, v19, v20, v21, v22, v23))
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
  {
    sub_168B9F0((__int64)v39, a1, a3, 0x11B7u, 0);
    sub_1605D30((__int64)v39, v37);
    sub_15F7200(v39);
    if ( a2 )
    {
      if ( !v36 || (v24 = sub_168B6C0((__int64)a1), v25 = sub_B74100(v36, v24), v26 = 5899, !v25) )
        v26 = 6283;
      sub_168B9F0((__int64)v39, a1, *(_DWORD *)(a2 + 24), v26, 0);
      if ( v42 )
      {
        sub_AE9DF0(&v41, a2, 0xAu);
      }
      else if ( v44 )
      {
        v31 = sub_168B9E0(v39);
        v34 = v40;
        if ( v40 )
          v34 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v40 + 32LL))(v40);
        v38 = v34;
        v35 = sub_1587BC0(v31, (__int64 *)&v38, v29, v30, v32, v33);
        sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v43 + 8), a2, 0xAu);
      }
      sub_15F7200(v39);
    }
    return 1;
  }
  return v13;
}
