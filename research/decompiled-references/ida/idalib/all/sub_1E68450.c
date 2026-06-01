void __fastcall sub_1E68450(__int64 a1, unsigned int a2, unsigned int a3, int a4, __m128i a5, double a6)
{
  __int64 *v7; // r14
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-E0h]
  __int64 v44; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v47[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v48; // [rsp+98h] [rbp-50h]
  unsigned int v49; // [rsp+A0h] [rbp-48h]
  char v50; // [rsp+A4h] [rbp-44h]

  v7 = (__int64 *)(a1 + 8);
  v8 = a3;
  if ( a2 == 3 )
  {
    sub_168B9F0((__int64)v45, v7, a3, 0x1C05u, 0);
    sub_15F7200(v45);
  }
  else
  {
    sub_168B9F0((__int64)v45, (__int64 *)(a1 + 8), a3, 0x1C04u, 0);
    if ( v48 )
    {
      sub_AE9DF0(v47, a2, 3u);
    }
    else if ( v50 )
    {
      v9 = sub_168B9E0(v45);
      v13 = v46;
      if ( v46 )
      {
        v43 = v9;
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
        v9 = v43;
      }
      v44 = v13;
      v14 = sub_1587BC0(v9, &v44, v9, v10, v11, v12);
      sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v49 + 8), a2, 3u);
    }
    sub_15F7200(v45);
  }
  if ( a4 )
    v8 = a4;
  if ( v8 >= 0 )
  {
    sub_168B9F0((__int64)v45, v7, v8, 0x1803u, 0);
    if ( v48 )
    {
      sub_AE9DF0(v47, 1, 3u);
      if ( !v48 )
      {
LABEL_26:
        if ( v50 )
        {
          v26 = sub_168B9E0(v45);
          v27 = v46;
          if ( v46 )
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
          v44 = v27;
          v28 = sub_1587BC0(v26, &v44, v22, v23, v24, v25);
          sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v49 + 8), a2, 3u);
        }
LABEL_10:
        sub_1E64500(a1, (__int64)v45, v8, 1, a5, a6);
        sub_15F7200(v45);
        sub_168B9F0((__int64)v45, v7, v8, 0x1803u, 0);
        if ( v48 )
        {
          sub_AE9DF0(v47, 0, 3u);
          if ( !v48 )
            goto LABEL_33;
        }
        else
        {
          if ( !v50 )
          {
LABEL_12:
            sub_1E64500(a1, (__int64)v45, v8, 0, a5, a6);
            sub_15F7200(v45);
            return;
          }
          v33 = sub_168B9E0(v45);
          v34 = v46;
          if ( v46 )
            v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
          v44 = v34;
          v35 = sub_1587BC0(v33, &v44, v29, v30, v31, v32);
          sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v49 + 8), 0, 3u);
          if ( !v48 )
          {
LABEL_33:
            if ( v50 )
            {
              v40 = sub_168B9E0(v45);
              v41 = v46;
              if ( v46 )
                v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
              v44 = v41;
              v42 = sub_1587BC0(v40, &v44, v36, v37, v38, v39);
              sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v49 + 8), a2, 3u);
            }
            goto LABEL_12;
          }
        }
        sub_AE9DF0(v47, a2, 3u);
        goto LABEL_12;
      }
    }
    else
    {
      if ( !v50 )
        goto LABEL_10;
      v19 = sub_168B9E0(v45);
      v20 = v46;
      if ( v46 )
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
      v44 = v20;
      v21 = sub_1587BC0(v19, &v44, v15, v16, v17, v18);
      sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v49 + 8), 1, 3u);
      if ( !v48 )
        goto LABEL_26;
    }
    sub_AE9DF0(v47, a2, 3u);
    goto LABEL_10;
  }
}
