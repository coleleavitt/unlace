__int64 __fastcall sub_16EC5F0(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  unsigned int v8; // edx
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned __int8 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v52; // [rsp+10h] [rbp-C8h] BYREF
  char v53; // [rsp+18h] [rbp-C0h]
  _QWORD v54[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v56[11]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int8 v57; // [rsp+98h] [rbp-40h]
  unsigned int v58; // [rsp+A0h] [rbp-38h]
  unsigned __int8 v59; // [rsp+A4h] [rbp-34h]

  v4 = 0;
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 < a3 )
  {
    v8 = *(_DWORD *)(a2 + 20);
    v9 = a2;
    v10 = a1 + 8;
    sub_168B9F0((__int64)v54, (__int64 *)(a1 + 8), v8, 0x1468u, 0);
    if ( v57 )
    {
      v10 = 0;
      sub_16B71B0(v56, 0);
      if ( !v57 )
        goto LABEL_20;
    }
    else
    {
      if ( !v59 )
      {
LABEL_5:
        v11 = sub_EEC8C0(v9, v10, a4);
        v12 = v11;
        v9 = HIDWORD(v11);
        goto LABEL_6;
      }
      v27 = sub_168B9E0(v54);
      v28 = v55;
      if ( v55 )
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
      v52 = v28;
      v29 = sub_1587BC0(v27, (__int64 *)&v52, v23, v24, v25, v26);
      v10 = 0;
      sub_16B71B0((unsigned __int8 **)(*v29 + 32LL * v58 + 8), 0);
      if ( !v57 )
      {
LABEL_20:
        if ( !v59 )
          goto LABEL_5;
        v34 = sub_168B9E0(v54);
        v35 = v55;
        if ( v55 )
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
        v52 = v35;
        v36 = sub_1587BC0(v34, (__int64 *)&v52, v30, v31, v32, v33);
        v10 = a3;
        sub_16B6F70((unsigned __int8 **)(*v36 + 32LL * v58 + 8), a3);
        if ( !v57 )
        {
LABEL_24:
          if ( !v59 )
            goto LABEL_5;
          v39 = sub_168B9E0(v54);
          v42 = v55;
          if ( v55 )
            v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
          v52 = v42;
          v43 = sub_1587BC0(v39, (__int64 *)&v52, v37, v38, v40, v41);
          v10 = v5;
          sub_16B6F70((unsigned __int8 **)(*v43 + 32LL * v58 + 8), v5);
          if ( !v57 )
            goto LABEL_28;
          goto LABEL_11;
        }
LABEL_10:
        v10 = v5;
        sub_16B6F70(v56, v5);
        if ( !v57 )
        {
LABEL_28:
          if ( !v59 )
            goto LABEL_5;
          v46 = sub_168B9E0(v54);
          v49 = v55;
          if ( v55 )
            v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
          v52 = v49;
          v50 = sub_1587BC0(v46, (__int64 *)&v52, v44, v45, v47, v48);
          sub_16B71B0((unsigned __int8 **)(*v50 + 32LL * v58 + 8), 0);
          v13 = v57;
LABEL_12:
          v14 = sub_EEC8C0(v9, 0, a4);
          v12 = v14;
          LODWORD(v9) = HIDWORD(v14);
          if ( v13 )
          {
            v52 = v14;
            v53 = 1;
            sub_AEC610((__int64 *)v56, (__int64 *)&v52);
            v4 = v57;
LABEL_7:
            sub_15F7200(v54);
            return v4;
          }
LABEL_6:
          v4 = v59;
          if ( v59 )
          {
            v19 = sub_168B9E0(v54);
            v20 = v55;
            if ( v55 )
              v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
            v51 = v20;
            v21 = sub_1587BC0(v19, &v51, v15, v16, v17, v18);
            v22 = *v21 + 32LL * v58;
            v52 = __PAIR64__(v9, v12);
            v53 = 1;
            sub_AEC610((__int64 *)(v22 + 8), (__int64 *)&v52);
            v4 = v57;
          }
          goto LABEL_7;
        }
LABEL_11:
        sub_16B71B0(v56, 0);
        v13 = v57;
        goto LABEL_12;
      }
    }
    v10 = a3;
    sub_16B6F70(v56, a3);
    if ( !v57 )
      goto LABEL_24;
    goto LABEL_10;
  }
  return v4;
}
