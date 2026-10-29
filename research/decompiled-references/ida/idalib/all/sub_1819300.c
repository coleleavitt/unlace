__int64 __fastcall sub_1819300(__int64 a1, _BYTE *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // edx
  unsigned __int8 v6; // al
  char v7; // al
  unsigned int v8; // ebp
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  bool v36; // [rsp+17h] [rbp-C1h] BYREF
  __int64 v37; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v40[11]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int8 v41; // [rsp+98h] [rbp-40h]
  unsigned int v42; // [rsp+A0h] [rbp-38h]
  unsigned __int8 v43; // [rsp+A4h] [rbp-34h]

  v5 = a4;
  v6 = a2[28] & 0x7F;
  if ( v6 == 43 )
  {
    v10 = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 - 40 <= 6 )
  {
    v7 = a2[97] & 2;
    if ( (a2[96] & 7) == 5 )
    {
      v10 = (v7 != 0) + 1LL;
    }
    else
    {
      if ( !v7 )
        return 0;
      v10 = 2;
    }
LABEL_8:
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), v5, 0xB9Du, 0);
    if ( v41 )
    {
      sub_AE9DF0(v40, a3, 0xEu);
      if ( !v41 )
        goto LABEL_21;
    }
    else
    {
      v8 = v43;
      if ( !v43 )
      {
LABEL_10:
        sub_15F7200(v38);
        return v8;
      }
      v13 = sub_168B9E0(v38);
      v16 = v39;
      if ( v39 )
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
      v37 = v16;
      v17 = sub_1587BC0(v13, &v37, v11, v12, v14, v15);
      sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * v42 + 8), a3, 0xEu);
      if ( !v41 )
      {
LABEL_21:
        v8 = v43;
        if ( v43 )
        {
          v20 = sub_168B9E0(v38);
          v23 = v39;
          if ( v39 )
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
          v37 = v23;
          v24 = sub_1587BC0(v20, &v37, v18, v19, v21, v22);
          sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v42 + 8), v10, 2u);
          v8 = v41;
        }
        goto LABEL_10;
      }
    }
    sub_AE9DF0(v40, v10, 2u);
    v8 = v41;
    goto LABEL_10;
  }
  if ( (unsigned int)v6 - 49 <= 2 )
  {
    if ( (a2[68] & 1) == 0 )
      return 0;
    v10 = 3;
    goto LABEL_8;
  }
  if ( v6 == 62 )
  {
    v25 = sub_B8C5D0((__int64)a2);
    v5 = a4;
    if ( (*(_BYTE *)(v25 + 1) & 8) == 0 )
      return 0;
    v10 = 4;
    goto LABEL_8;
  }
  v8 = 0;
  if ( (unsigned int)v6 - 58 > 4 )
  {
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a4, 0xCA8u, 0);
    if ( v41 )
    {
      sub_AE9DF0(v40, a3, 0xEu);
    }
    else if ( v43 )
    {
      v30 = sub_168B9E0(v38);
      v33 = v39;
      if ( v39 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
      v37 = v33;
      v34 = sub_1587BC0(v30, &v37, v28, v29, v31, v32);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v42 + 8), a3, 0xEu);
    }
    v36 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v26 = sub_1588420((__int64)v38, (unsigned __int8 *)&v36);
    if ( (*(_BYTE *)(a3 + 34) & 0xF0) == 0xF0 )
      v27 = sub_FA77D0(a3);
    else
      v27 = *(_BYTE *)(a3 + 34) >> 4;
    LODWORD(v37) = (v27 != 5) + 7;
    v8 = *(unsigned __int8 *)(sub_180E4C0(v26, (int *)&v37) + 120);
    sub_15F7200(v38);
  }
  return v8;
}
