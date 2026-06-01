void __fastcall sub_17230E0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __m128i a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 *v21; // r12
  __int64 v22; // r14
  int v23; // r13d
  __int64 v24; // r15
  __m128i v25; // xmm1
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int *v35; // r15
  __int64 v36; // r14
  __int64 v37; // rdi
  _QWORD *v38; // r15
  _QWORD *v39; // r14
  _QWORD *v40; // rdi
  _QWORD *v41; // r15
  _QWORD *v42; // r14
  _QWORD *v43; // rdi
  __int64 *v44; // rbp
  _BYTE **v45; // r13
  const __m128i *v46; // rdx
  char **v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  char *v52; // rax
  unsigned __int64 v55; // [rsp+18h] [rbp-170h] BYREF
  __int64 v56; // [rsp+20h] [rbp-168h]
  __int64 v57; // [rsp+28h] [rbp-160h]
  int v58; // [rsp+34h] [rbp-154h]
  unsigned int *v59; // [rsp+38h] [rbp-150h]
  unsigned __int64 v60; // [rsp+48h] [rbp-140h] BYREF
  void *v61[2]; // [rsp+50h] [rbp-138h] BYREF
  int v62; // [rsp+60h] [rbp-128h] BYREF
  __int64 v63; // [rsp+64h] [rbp-124h]
  int v64; // [rsp+6Ch] [rbp-11Ch]
  int v65; // [rsp+70h] [rbp-118h]
  void *v66[2]; // [rsp+78h] [rbp-110h]
  __int64 v67; // [rsp+88h] [rbp-100h]
  char v68; // [rsp+90h] [rbp-F8h]
  __int64 v69; // [rsp+98h] [rbp-F0h]
  __int64 v70; // [rsp+A0h] [rbp-E8h]
  __int64 v71; // [rsp+A8h] [rbp-E0h]
  __m128i v72; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-C8h]
  __int64 v74; // [rsp+C8h] [rbp-C0h]
  __int64 v75; // [rsp+D0h] [rbp-B8h]
  void *v76; // [rsp+D8h] [rbp-B0h]
  void *v77; // [rsp+E0h] [rbp-A8h]
  __int64 v78; // [rsp+E8h] [rbp-A0h]
  _BYTE v79[64]; // [rsp+F0h] [rbp-98h] BYREF
  void *ptr; // [rsp+130h] [rbp-58h]
  __int64 v81; // [rsp+138h] [rbp-50h]
  _BYTE v82[72]; // [rsp+140h] [rbp-48h] BYREF

  v58 = a3;
  v56 = a2;
  v57 = a4;
  if ( a2 )
  {
    v8 = sub_168B6C0(*(_QWORD *)(a1 + 24));
    v11 = *(_QWORD *)(v56 + 48);
    if ( v11 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
      v13 = v12;
    }
    else
    {
      v12 = sub_A7AA70(v8, v56, v6, v7, v9, v10);
      v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v14 = sub_B87BD0(
            v8 + 17536,
            *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)(v13 + 8) | (unsigned __int8)v12) & 7);
    v18 = sub_B94670(v56 + 64, v14, v15, v56, v16, v17);
    if ( v18 )
    {
      v19 = v18;
      v59 = (unsigned int *)v61;
      do
      {
        v20 = v19;
        v21 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        v22 = (__int64)v21;
        v23 = (v20 >> 2) & 1;
        if ( v23 )
        {
          v22 = 0;
          if ( v21 )
            v22 = *v21;
        }
        v24 = *(_QWORD *)(a1 + 32);
        v25 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)v24 + 184LL));
        v73 = 0;
        v74 = 0;
        v77 = v79;
        v78 = 0x400000000LL;
        v72 = v25;
        ptr = v82;
        v81 = 0x200000000LL;
        v75 = 0;
        v76 = nullptr;
        sub_15A2F70((__int64)&v72, v57);
        sub_15A3210((__int64)&v72, 7, (char *)&byte_22F0C30);
        v26 = *(_BYTE *)(v22 + 28) & 0x7F;
        if ( (unsigned int)v26 - 34 > 5 )
        {
          if ( v26 == 71 )
            sub_1722CF0(
              *(_QWORD *)(**(_QWORD **)(v24 + 8) + 240LL),
              *(_QWORD *)(v24 + 16),
              *(_QWORD *)(v22 + 48),
              &v72,
              0,
              0,
              a6,
              *(double *)v25.m128i_i64);
        }
        else
        {
          sub_1722CF0(
            *(_QWORD *)(**(_QWORD **)(v24 + 8) + 240LL),
            *(_QWORD *)(v24 + 16),
            v22,
            &v72,
            0,
            0,
            a6,
            *(double *)v25.m128i_i64);
        }
        sub_15A3210((__int64)&v72, 8, (char *)&byte_22F0C30);
        v55 = sub_15A5CA0((__int64)&v72, 8, v27, v28, v29, v30);
        if ( ptr != v82 )
          free(ptr);
        if ( v77 != v79 )
          free(v77);
        v35 = v59;
        v65 = 0;
        v67 = 0;
        v62 = v58;
        v63 = 0x300000000LL;
        *(__m128 *)v61 = _mm_loadh_ps((const double *)&v55);
        a6 = 0;
        *(_OWORD *)v66 = 0;
        v69 = 0;
        v68 = v68 & 0x80 | 0x40;
        v70 = 0;
        v71 = 0;
        sub_15A3440(v59, 1, v31, v32, v33, v34);
        v64 = sub_1704F30(v22);
        v36 = *(_QWORD *)(a1 + 8);
        sub_17048E0((__int64)&v72, (__int64)v35);
        v37 = *(_QWORD *)(v36 + 8);
        if ( v37 == *(_QWORD *)(v36 + 16) )
        {
          sub_1706840(v36, *(char **)(v36 + 8), (__int64)&v72);
        }
        else
        {
          sub_17048E0(v37, (__int64)&v72);
          *(_QWORD *)(v36 + 8) += 96LL;
        }
        v38 = v77;
        v39 = v76;
        if ( v77 != v76 )
        {
          do
          {
            while ( 1 )
            {
              v40 = (_QWORD *)v39[3];
              if ( v40 == v39 + 5 )
                break;
              operator delete(v40);
              v39 += 8;
              if ( v38 == v39 )
                goto LABEL_20;
            }
            v39 += 8;
          }
          while ( v38 != v39 );
LABEL_20:
          v39 = v76;
        }
        if ( v39 )
          operator delete(v39);
        v41 = v66[1];
        v42 = v66[0];
        if ( v66[1] != v66[0] )
        {
          do
          {
            while ( 1 )
            {
              v43 = (_QWORD *)v42[3];
              if ( v43 == v42 + 5 )
                break;
              operator delete(v43);
              v42 += 8;
              if ( v41 == v42 )
                goto LABEL_26;
            }
            v42 += 8;
          }
          while ( v41 != v42 );
LABEL_26:
          v42 = v66[0];
        }
        if ( v42 )
          operator delete(v42);
        if ( !v23 )
          break;
        if ( !v21 )
          break;
        v19 = v21[1];
      }
      while ( v19 );
    }
    else
    {
      sub_170C830(*(__int64 **)a1, (_BYTE **)(*(_QWORD *)a1 + 8LL), v57, v57, v56);
    }
  }
  else
  {
    v44 = *(__int64 **)a1;
    v45 = (_BYTE **)(*(_QWORD *)a1 + 8LL);
    if ( a5 )
    {
      v46 = *(const __m128i **)(a1 + 16);
      v47 = *(char ***)(*(_QWORD *)(a1 + 8) + 184LL);
      v60 = *(_QWORD *)(a5 + 48);
      sub_F785A0((__int64)v61, &v60, v46);
      v72.m128i_i64[0] = (__int64)v61;
      LOWORD(v75) = 260;
      v52 = sub_15A4EB0(v47, (const void ***)&v72, v48, v49, v50, v51);
      sub_170C830(v44, v45, v57, (__int64)v52, a5);
      if ( v61[0] != &v62 )
        operator delete(v61[0]);
    }
    else
    {
      sub_170C830(*(__int64 **)a1, (_BYTE **)(*(_QWORD *)a1 + 8LL), a4, a4, 0);
    }
  }
}
