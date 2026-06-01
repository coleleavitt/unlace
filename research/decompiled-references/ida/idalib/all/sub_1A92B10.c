void __fastcall sub_1A92B10(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned int *v7; // rdi
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __m128i *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r13
  __int64 v47; // rax
  _QWORD *v48; // rax
  int v49; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v50; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v51[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v53[11]; // [rsp+30h] [rbp-98h] BYREF
  char v54; // [rsp+88h] [rbp-40h]
  unsigned int v55; // [rsp+90h] [rbp-38h]
  char v56; // [rsp+94h] [rbp-34h]

  if ( !a3[3].m128i_i16[4] || (v5 = a3[5].m128i_i64[0], (v5 & 2) == 0) )
  {
    sub_168B9F0((__int64)v51, a1, a3[1].m128i_u32[2], 0xC53u, 0);
    if ( v54 )
    {
      sub_AE9DF0(v53, (__int64)a3, 0x10u);
      if ( !v54 )
        goto LABEL_19;
    }
    else
    {
      if ( !v56 )
      {
LABEL_5:
        sub_15F7200(v51);
        return;
      }
      v22 = sub_168B9E0(v51);
      v23 = v52;
      if ( v52 )
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
      v50 = v23;
      v24 = sub_1587BC0(v22, &v50, v18, v19, v20, v21);
      sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v55 + 8), (__int64)a3, 0x10u);
      if ( !v54 )
      {
LABEL_19:
        if ( !v56 )
          goto LABEL_5;
        v27 = sub_168B9E0(v51);
        v30 = v52;
        if ( v52 )
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
        v50 = v30;
        v31 = sub_1587BC0(v27, &v50, v25, v26, v28, v29);
        sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v55 + 8), 1, 2u);
        if ( !v54 )
        {
LABEL_23:
          if ( v56 )
          {
            v34 = sub_168B9E0(v51);
            v37 = v52;
            if ( v52 )
              v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
            v50 = v37;
            v38 = sub_1587BC0(v34, &v50, v32, v33, v35, v36);
            sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v55 + 8), 3, 2u);
          }
          goto LABEL_5;
        }
LABEL_15:
        sub_AE9DF0(v53, 3, 2u);
        goto LABEL_5;
      }
    }
    sub_AE9DF0(v53, 1, 2u);
    if ( !v54 )
      goto LABEL_23;
    goto LABEL_15;
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  v7 = *(unsigned int **)(*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
  if ( !(unsigned __int8)sub_B161B0((__int64)(v7 + 4), *v7, &v49) )
  {
    sub_168B9F0((__int64)v51, a1, *(_DWORD *)v6, 0x19C0u, 0);
    v39 = sub_15DD120((__int64)v51, (__int64)a3);
    v40 = *(_QWORD *)(v6 + 8);
    v41 = v39;
    if ( *(_BYTE *)(v39 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v39 + 32), *(_QWORD *)(v6 + 8), 5u);
    }
    else if ( *(_BYTE *)(v39 + 132) )
    {
      v46 = sub_168B9E0((_QWORD *)v39);
      v47 = *(_QWORD *)(v41 + 16);
      if ( v47 )
        v47 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 32LL))(*(_QWORD *)(v41 + 16));
      v50 = v47;
      v48 = sub_1587BC0(v46, &v50, v42, v43, v44, v45);
      sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * *(unsigned int *)(v41 + 128) + 8), v40, 5u);
    }
    goto LABEL_5;
  }
  if ( v49 == 3
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    sub_168B9F0((__int64)v51, a1, *(_DWORD *)(a2 + 24), 0xF97u, 0);
    v50 = *(_QWORD *)(a2 + 80);
    sub_162B6D0((__int64)v51, &v50);
    sub_15F7200(v51);
  }
  else
  {
    v8 = sub_168B6C0((__int64)a1);
    v9 = (_QWORD *)sub_168B6C0((__int64)a1);
    v12 = v9[294];
    v9[304] += 48LL;
    v13 = (__m128i *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9[295] >= (unsigned __int64)&v13[3] && v12 )
      v9[294] = v13 + 3;
    else
      v13 = (__m128i *)sub_986170((__int64)(v9 + 294), 48, 48, 3, v10, v11);
    sub_B16180(v13, v8, a3, v49);
    sub_B8CC60(a2, (__int64)v13, v14, v15, v16, v17);
  }
}
