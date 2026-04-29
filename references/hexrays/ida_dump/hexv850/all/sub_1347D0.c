__int64 __fastcall sub_1347D0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rax
  unsigned int *v6; // r13
  __int64 v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r14
  char v26; // r13
  char v27; // dl
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // r12
  __int64 v31; // rsi
  char v32; // dl
  unsigned __int64 v33; // [rsp+8h] [rbp-F8h]
  unsigned __int64 v34; // [rsp+10h] [rbp-F0h]
  __int64 v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h]
  __int128 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  __int128 v44; // [rsp+98h] [rbp-68h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46; // [rsp+B8h] [rbp-48h]
  char v47; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 64);
  v48 = __readfsqword(0x28u);
  v36[0] = 0;
  v36[1] = 0;
  v37 = 0;
  v38 = 0;
  sub_FF1A0(a3, v3, (__int64)v36);
  v5 = (unsigned int *)sub_124590(a1, v36, *(_QWORD *)(a1 + 56), 0, nullptr, 0, 0x101u);
  v6 = v5;
  if ( !v5 )
  {
    if ( !under_debugger )
      sub_37CFE0(50975);
LABEL_45:
    BUG();
  }
  if ( !sub_9EF30(a1, v5, v36, 2) )
  {
LABEL_19:
    LODWORD(v6) = 0;
    goto LABEL_4;
  }
  v7 = sub_A51D0(a1, v36, *(_QWORD *)(a1 + 48), 0, 0x801u);
  LOBYTE(v6) = v7 == (_QWORD)v6;
  if ( v7 )
    goto LABEL_4;
  if ( (unsigned __int8)sub_5FE00(v36) && !(_QWORD)v38 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    sub_FF1A0(a3, v11, (__int64)&v39);
    v16 = *(_QWORD *)(a1 + 64);
    v43 = 0;
    v44 = 0u;
    v45 = 0;
    v17 = *(_QWORD *)(v16 + 632);
    v18 = *(_QWORD *)(v16 + 640);
    if ( v17 + v18 - 1 >= v17 )
    {
      *((_QWORD *)&v44 + 1) = qvector_reserve((char *)&v44 + 8, 0, 1, 16);
      v12 = 16 * v45;
      *(__m128i *)(*((_QWORD *)&v44 + 1) + 16 * v45) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v18);
      *(_QWORD *)&v45 = v45 + 1;
    }
    sub_5FBC0(&v39, &v43, v12, v13, v14, v15);
    sub_3123A0(&v41, (char *)&v44 + 8);
    sub_8EF80(&v43);
    v21 = *(_QWORD *)(a1 + 64);
    v43 = 0;
    v44 = 0u;
    v45 = 0;
    v22 = *(_QWORD *)(v21 + 664);
    v23 = *(_QWORD *)(v21 + 672);
    if ( v22 + v23 - 1 >= v22 )
    {
      v33 = *(_QWORD *)(v21 + 672);
      v34 = *(_QWORD *)(v21 + 664);
      v24 = qvector_reserve((char *)&v44 + 8, 0, 1, 16);
      v22 = v34;
      LODWORD(v23) = v33;
      *((_QWORD *)&v44 + 1) = v24;
      v19 = 16 * v45;
      *(__m128i *)(v24 + 16 * v45) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v33);
      *(_QWORD *)&v45 = v45 + 1;
    }
    sub_5FBC0(&v39, &v43, v19, v20, v22, v23);
    sub_3123A0(&v41, (char *)&v44 + 8);
    sub_8EF80(&v43);
    if ( (unsigned __int8)sub_5FE00(&v39) && !(_QWORD)v42 )
      goto LABEL_26;
    sub_8EF80(&v39);
  }
  v9 = *(_QWORD **)(a1 + 64);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  sub_11DF60(&v39, *(_QWORD *)(*(_QWORD *)(v9[187] + 24LL) + 16LL) & (v9[17] + v9[180] - 1LL), 2u);
  v10 = *(_QWORD *)(a1 + 48);
  if ( v10 )
  {
    while ( 1 )
    {
      sub_122E60((__int64)&v43, a1, v10, 0);
      if ( (unsigned __int8)sub_5FDA0(&v39, &v43) )
      {
        if ( (unsigned __int8)sub_312680((char *)&v44 + 8, &v41) )
          break;
      }
      if ( *((_QWORD *)&v44 + 1) )
      {
        *(_QWORD *)&v45 = 0;
        qfree(*((_QWORD *)&v44 + 1));
      }
      qfree(v43);
      v10 = *(_QWORD *)(v10 + 8);
      if ( !v10 )
        goto LABEL_27;
    }
    sub_8EF80(&v43);
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    qfree(v39);
    goto LABEL_19;
  }
LABEL_27:
  if ( (unsigned __int8)sub_5FE00(v36) && !(_QWORD)v38 || (*(_BYTE *)(a3 + 48) & 4) == 0 )
    goto LABEL_29;
  v25 = *(_QWORD *)(a3 + 24);
  v26 = *(_BYTE *)(a3 + 32);
  v27 = sub_329C20(a3 + 24, *(_QWORD *)(a1 + 64), v36, 1);
  v28 = *(int *)(a3 + 40);
  if ( v27 )
  {
    v29 = v25 + v28;
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 64);
    v32 = *(_BYTE *)(a3 + 32);
    v43 = *(_QWORD *)(a3 + 24) + (int)v28 - 1;
    LOBYTE(v44) = v32;
    v29 = v25 - (unsigned __int8)sub_329C20(&v43, v31, v36, 1);
  }
  *(_QWORD *)&v45 = v29;
  v43 = 0;
  BYTE8(v45) = v26;
  v46 = 0xFFFFFFFF00000001LL;
  v47 = 1;
  v44 = 0;
  v30 = sub_100230(a2, (__int64)&v43);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( !v30 || v30[1] != 1 || *(_DWORD *)*v30 != *(_DWORD *)(a1 + 72) )
  {
LABEL_29:
    if ( !under_debugger )
      sub_37CFE0(50976);
    goto LABEL_45;
  }
LABEL_26:
  LODWORD(v6) = 1;
  sub_8EF80(&v39);
LABEL_4:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  qfree(v36[0]);
  return (unsigned int)v6;
}
