__int64 __fastcall sub_139390(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rax
  unsigned int *v6; // r13
  __int64 v7; // rax
  _QWORD *v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r14
  char v28; // r13
  char v29; // dl
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // r12
  __int64 v33; // rsi
  char v34; // dl
  unsigned __int64 v35; // [rsp+8h] [rbp-F8h]
  unsigned __int64 v36; // [rsp+10h] [rbp-F0h]
  __int64 v38[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int128 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-48h]
  char v49; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 64);
  v50 = __readfsqword(0x28u);
  v38[0] = 0;
  v38[1] = 0;
  v39 = 0;
  v40 = 0;
  sub_103D60(a3, v3, (__int64)v38);
  v5 = (unsigned int *)sub_129150(a1, v38, *(_QWORD *)(a1 + 56), 0, 0, 0, 0x101u);
  v6 = v5;
  if ( !v5 )
  {
    if ( !under_debugger )
      sub_383060(50975);
LABEL_45:
    BUG();
  }
  if ( !sub_A3AF0(a1, v5, v38, 2) )
  {
LABEL_19:
    LODWORD(v6) = 0;
    goto LABEL_4;
  }
  v7 = sub_A9D90(a1, v38, *(_QWORD *)(a1 + 48), 0, 0x801u);
  LOBYTE(v6) = v7 == (_QWORD)v6;
  if ( v7 )
    goto LABEL_4;
  if ( (unsigned __int8)sub_64880(v38) && !(_QWORD)v40 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    sub_103D60(a3, v13, (__int64)&v41);
    v18 = *(_QWORD *)(a1 + 64);
    v45 = 0;
    v46 = 0u;
    v47 = 0;
    v19 = *(_QWORD *)(v18 + 632);
    v20 = *(_QWORD *)(v18 + 640);
    if ( v19 + v20 - 1 >= v19 )
    {
      *((_QWORD *)&v46 + 1) = qvector_reserve((__int64)&v46 + 8, 0, 1, 16);
      v14 = 16 * v47;
      *(__m128i *)(*((_QWORD *)&v46 + 1) + 16 * v47) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v20);
      *(_QWORD *)&v47 = v47 + 1;
    }
    sub_64640(&v41, &v45, v14, v15, v16, v17);
    sub_317C60(&v43, (char *)&v46 + 8);
    sub_93B40(&v45);
    v23 = *(_QWORD *)(a1 + 64);
    v45 = 0;
    v46 = 0u;
    v47 = 0;
    v24 = *(_QWORD *)(v23 + 664);
    v25 = *(_QWORD *)(v23 + 672);
    if ( v24 + v25 - 1 >= v24 )
    {
      v35 = *(_QWORD *)(v23 + 672);
      v36 = *(_QWORD *)(v23 + 664);
      v26 = qvector_reserve((__int64)&v46 + 8, 0, 1, 16);
      v24 = v36;
      LODWORD(v25) = v35;
      *((_QWORD *)&v46 + 1) = v26;
      v21 = 16 * v47;
      *(__m128i *)(v26 + 16 * v47) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v35);
      *(_QWORD *)&v47 = v47 + 1;
    }
    sub_64640(&v41, &v45, v21, v22, v24, v25);
    sub_317C60(&v43, (char *)&v46 + 8);
    sub_93B40(&v45);
    if ( (unsigned __int8)sub_64880(&v41) && !(_QWORD)v44 )
      goto LABEL_26;
    sub_93B40(&v41);
  }
  v9 = *(_QWORD **)(a1 + 64);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  sub_122B20(&v41, *(_QWORD *)(*(_QWORD *)(v9[187] + 24LL) + 16LL) & (v9[17] + v9[180] - 1LL), 2u);
  v12 = *(_QWORD *)(a1 + 48);
  if ( v12 )
  {
    while ( 1 )
    {
      sub_127A20((__int64)&v45, a1, v12, 0, v10, v11);
      if ( (unsigned __int8)sub_64820(&v41, &v45) )
      {
        if ( (unsigned __int8)sub_317F40((char *)&v46 + 8, &v43) )
          break;
      }
      if ( *((_QWORD *)&v46 + 1) )
      {
        *(_QWORD *)&v47 = 0;
        qfree(*((__int64 *)&v46 + 1));
      }
      qfree(v45);
      v12 = *(_QWORD *)(v12 + 8);
      if ( !v12 )
        goto LABEL_27;
    }
    sub_93B40(&v45);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    qfree(v41);
    goto LABEL_19;
  }
LABEL_27:
  if ( (unsigned __int8)sub_64880(v38) && !(_QWORD)v40 || (*(_BYTE *)(a3 + 48) & 4) == 0 )
    goto LABEL_29;
  v27 = *(_QWORD *)(a3 + 24);
  v28 = *(_BYTE *)(a3 + 32);
  v29 = sub_32F7B0(a3 + 24, *(_QWORD *)(a1 + 64), v38, 1);
  v30 = *(int *)(a3 + 40);
  if ( v29 )
  {
    v31 = v27 + v30;
  }
  else
  {
    v33 = *(_QWORD *)(a1 + 64);
    v34 = *(_BYTE *)(a3 + 32);
    v45 = *(_QWORD *)(a3 + 24) + (int)v30 - 1;
    LOBYTE(v46) = v34;
    v31 = v27 - (unsigned __int8)sub_32F7B0(&v45, v33, v38, 1);
  }
  *(_QWORD *)&v47 = v31;
  v45 = 0;
  BYTE8(v47) = v28;
  v48 = 0xFFFFFFFF00000001LL;
  v49 = 1;
  v46 = 0;
  v32 = sub_104DF0(a2, (__int64)&v45);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  if ( !v32 || v32[1] != 1 || *(_DWORD *)*v32 != *(_DWORD *)(a1 + 72) )
  {
LABEL_29:
    if ( !under_debugger )
      sub_383060(50976);
    goto LABEL_45;
  }
LABEL_26:
  LODWORD(v6) = 1;
  sub_93B40(&v41);
LABEL_4:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  qfree(v38[0]);
  return (unsigned int)v6;
}
