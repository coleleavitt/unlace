void __fastcall sub_1A91020(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __m128i *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int32 v46; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v47; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v48[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v50[11]; // [rsp+30h] [rbp-98h] BYREF
  char v51; // [rsp+88h] [rbp-40h]
  unsigned int v52; // [rsp+90h] [rbp-38h]
  char v53; // [rsp+94h] [rbp-34h]

  if ( !a3[3].m128i_i16[4] || (v4 = a3[5].m128i_i64[0], (v4 & 2) == 0) )
  {
    sub_168B9F0((__int64)v48, a1, a3[1].m128i_u32[2], 0xC53u, 0);
    if ( v51 )
    {
      sub_AE9DF0(v50, (__int64)a3, 0x10u);
      if ( !v51 )
        goto LABEL_17;
    }
    else
    {
      if ( !v53 )
      {
LABEL_5:
        sub_15F7200(v48);
        return;
      }
      v20 = sub_168B9E0(v48);
      v21 = v49;
      if ( v49 )
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
      v47 = v21;
      v22 = sub_1587BC0(v20, &v47, v16, v17, v18, v19);
      sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v52 + 8), (__int64)a3, 0x10u);
      if ( !v51 )
      {
LABEL_17:
        if ( !v53 )
          goto LABEL_5;
        v25 = sub_168B9E0(v48);
        v28 = v49;
        if ( v49 )
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
        v47 = v28;
        v29 = sub_1587BC0(v25, &v47, v23, v24, v26, v27);
        sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v52 + 8), 1, 2u);
        if ( !v51 )
        {
LABEL_21:
          if ( v53 )
          {
            v32 = sub_168B9E0(v48);
            v35 = v49;
            if ( v49 )
              v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
            v47 = v35;
            v36 = sub_1587BC0(v32, &v47, v30, v31, v33, v34);
            sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v52 + 8), 3, 2u);
          }
          goto LABEL_5;
        }
LABEL_13:
        sub_AE9DF0(v50, 3, 2u);
        goto LABEL_5;
      }
    }
    sub_AE9DF0(v50, 1, 2u);
    if ( !v51 )
      goto LABEL_21;
    goto LABEL_13;
  }
  v5 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
  if ( !(unsigned __int8)sub_B0CED0(*(_QWORD *)(v5 + 16) + 16LL, **(unsigned int **)(v5 + 16), &v46) )
  {
    sub_168B9F0((__int64)v48, a1, a3[1].m128i_u32[2], 0x19C0u, 0);
    v37 = sub_15DD120((__int64)v48, (__int64)a3);
    v38 = v37;
    if ( *(_BYTE *)(v37 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v37 + 32), v5, 5u);
    }
    else if ( *(_BYTE *)(v37 + 132) )
    {
      v43 = sub_168B9E0((_QWORD *)v37);
      v44 = *(_QWORD *)(v38 + 16);
      if ( v44 )
        v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 32LL))(*(_QWORD *)(v38 + 16));
      v47 = v44;
      v45 = sub_1587BC0(v43, &v47, v39, v40, v41, v42);
      sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * *(unsigned int *)(v38 + 128) + 8), v5, 5u);
    }
    goto LABEL_5;
  }
  v6 = sub_168B6C0((__int64)a1);
  v7 = (_QWORD *)sub_168B6C0((__int64)a1);
  v10 = v7[294];
  v7[304] += 48LL;
  v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v7[295] >= (unsigned __int64)&v11[3] && v10 )
    v7[294] = v11 + 3;
  else
    v11 = (__m128i *)sub_986170((__int64)(v7 + 294), 48, 48, 3, v8, v9);
  sub_B0CEA0(v11, v6, a3, v46);
  sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
}
