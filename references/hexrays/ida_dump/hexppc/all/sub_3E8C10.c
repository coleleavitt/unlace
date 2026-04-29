__int64 __fastcall sub_3E8C10(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, _BYTE *a6)
{
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  char v13; // r13
  char v14; // r14
  unsigned int v15; // r15d
  __int64 v17; // rdi
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  int v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // [rsp+1Ch] [rbp-DCh]
  __int64 v35; // [rsp+20h] [rbp-D8h] BYREF
  int *v36; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v37[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-98h] BYREF
  __int64 v41; // [rsp+68h] [rbp-90h]
  __int64 v42; // [rsp+70h] [rbp-88h] BYREF
  __m128i v43; // [rsp+78h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-68h] BYREF
  __int64 v45; // [rsp+98h] [rbp-60h]
  __int64 *v46; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a3 || (v15 = sub_3352F0((unsigned __int64)&v35, &v36, a2), !(_BYTE)v15) )
  {
LABEL_2:
    v8 = a1[105];
    v44 = 0;
    v45 = 0;
    sub_60440(&v44, v8, 8);
    v46 = nullptr;
    v47 = 0;
    v13 = sub_60C00(a5, &v44, v9, v10, v11, v12);
    v14 = sub_313AE0(a5 + 2, (__int64)&v46);
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
    qfree(v44);
    *a6 |= v14 | v13;
    if ( !sub_60EF0(a5, a1[91]) )
    {
      if ( !(unsigned __int8)sub_60E40(a5) || a5[3] )
        *a6 = 1;
      v17 = a5[2];
      a5[1] = 0;
      if ( v17 )
      {
        a5[3] = 0;
        qfree(v17);
        a5[2] = 0;
        a5[4] = 0;
      }
    }
    return 0;
  }
  sub_3350C0((__int64)v37, a2, v35, (__int64)v36);
  v19 = a1[104];
  v44 = 0;
  v45 = 0;
  sub_60440(&v44, v19, 8);
  v46 = nullptr;
  v47 = 0;
  sub_60C00(v37, &v44, v20, v21, v22, v23);
  sub_313AE0(&v38, (__int64)&v46);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  qfree(v44);
  if ( !sub_60EF0(v37, a1[105]) && !sub_60EF0(v37, a1[106]) )
  {
    if ( v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    qfree(v37[0]);
    goto LABEL_2;
  }
  if ( sub_60EF0(v37, a1[106]) )
  {
    v25 = 8;
    goto LABEL_26;
  }
  v24 = *v36;
  if ( *v36 != 4 )
  {
    if ( v24 == 67 )
    {
      v25 = v36[17];
      if ( v36[9] == v25 )
        goto LABEL_26;
    }
    else if ( (unsigned int)(v24 - 8) <= 1 )
    {
      goto LABEL_25;
    }
    v25 = sub_61160(v37, a1[105]);
    goto LABEL_26;
  }
LABEL_25:
  v25 = v36[9];
LABEL_26:
  v34 = v25;
  sub_36F410(a2);
  v26 = a1[105];
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v44 = 0;
  v45 = 0;
  v43 = 0;
  sub_60440(&v44, v26, v34);
  v46 = nullptr;
  v47 = 0;
  sub_60840(&v40, &v44);
  sub_312B30(&v42, &v46);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  qfree(v44);
  v27 = sub_11F1F0((__int64)&v40, (__int64)a5);
  v28 = v42;
  if ( v27 )
  {
    v29 = *a5;
    v30 = _mm_loadu_si128(&v43);
    *a5 = v40;
    v40 = v29;
    v31 = a5[1];
    a5[1] = v41;
    v32 = a5[4];
    v41 = v31;
    v33 = a5[2];
    *(__m128i *)(a5 + 3) = v30;
    a5[2] = v28;
    v28 = v33;
    v42 = v33;
    v43.m128i_i64[1] = v32;
    *a6 = 1;
  }
  if ( v28 )
  {
    v43.m128i_i64[0] = 0;
    qfree(v28);
  }
  qfree(v40);
  if ( v38 )
  {
    v39 = 0;
    qfree(v38);
  }
  qfree(v37[0]);
  return v15;
}
