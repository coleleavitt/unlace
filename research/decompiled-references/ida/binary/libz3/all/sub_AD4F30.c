__int64 **__fastcall sub_AD4F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 **result; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 **v20; // rbp
  __int64 *v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  _DWORD *v24; // rax
  __int64 v25; // r15
  _DWORD *v26; // rax
  __int64 *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rax
  char v30; // al
  int v31; // r8d
  int v32; // r9d
  __m128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r13
  __int64 v37; // rdi
  int v38; // [rsp+0h] [rbp-1C8h]
  _QWORD *v39; // [rsp+8h] [rbp-1C0h]
  int v40[2]; // [rsp+10h] [rbp-1B8h]
  int v41[2]; // [rsp+20h] [rbp-1A8h]
  int v42[2]; // [rsp+38h] [rbp-190h]
  __int64 v43; // [rsp+40h] [rbp-188h] BYREF
  __int64 v44; // [rsp+48h] [rbp-180h]
  int v45[4]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v46[2]; // [rsp+60h] [rbp-168h] BYREF
  _BYTE v47[32]; // [rsp+70h] [rbp-158h] BYREF
  int v48[2]; // [rsp+90h] [rbp-138h] BYREF
  char v49[16]; // [rsp+98h] [rbp-130h] BYREF
  void *v50; // [rsp+A8h] [rbp-120h]
  __int16 v51; // [rsp+B0h] [rbp-118h]
  char v52; // [rsp+B2h] [rbp-116h]
  __int64 v53; // [rsp+B8h] [rbp-110h]
  void *v54; // [rsp+C0h] [rbp-108h]
  __int64 v55; // [rsp+C8h] [rbp-100h]
  int v56; // [rsp+D0h] [rbp-F8h]
  char v57; // [rsp+E0h] [rbp-E8h]
  int v58[2]; // [rsp+F0h] [rbp-D8h] BYREF
  int v59[6]; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+110h] [rbp-B8h]
  __int64 v61; // [rsp+118h] [rbp-B0h]
  __int64 v62; // [rsp+120h] [rbp-A8h]
  void *ptr; // [rsp+128h] [rbp-A0h]
  __int64 v64; // [rsp+130h] [rbp-98h]
  int v65; // [rsp+138h] [rbp-90h]
  char v66; // [rsp+148h] [rbp-80h]
  int v67[8]; // [rsp+150h] [rbp-78h] BYREF
  _BYTE v68[88]; // [rsp+170h] [rbp-58h] BYREF

  v7 = sub_ACDB80(
         a3,
         a3 + 120,
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 24),
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24) + 48));
  do
  {
    v8 = v7;
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
  v9 = sub_ACDB80(
         a3,
         a3 + 88,
         a2,
         *(_DWORD *)(a1 + 28),
         *(_QWORD *)(a2 + 80 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 28))));
  do
  {
    v10 = (_QWORD *)v9;
    v9 = *(_QWORD *)(v9 + 8);
  }
  while ( v9 );
  if ( v10 == (_QWORD *)v8 )
  {
    v17 = sub_ACDB80(
            a3,
            a3 + 88,
            a2,
            *(_DWORD *)(a1 + 28),
            *(_QWORD *)(a2 + 80 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 28))));
    v18 = *(_QWORD *)(a4 + 8696);
    v42[0] = v17;
    v19 = **(_DWORD **)(a1 + 16) + 0x80000000;
    if ( v18 && (unsigned int)v19 < *(_DWORD *)(v18 - 4) )
      result = (__int64 **)(v18 + 8 * v19);
    else
      result = (__int64 **)(a4 + 8704);
    v20 = (__int64 **)*result;
    if ( *result )
    {
      result = &v20[*((unsigned int *)v20 - 1)];
      *(_QWORD *)v40 = result;
      if ( result != v20 )
      {
        do
        {
          v21 = *v20;
          v22 = **v20;
          if ( !(unsigned int)sub_8E7030(a4)
            || (result = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a4 + 7488) + 56LL))(
                                       *(_QWORD *)(a4 + 7488),
                                       v22),
                (_BYTE)result) )
          {
            v23 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)v58 = 0;
            *(_QWORD *)v48 = v23;
            sub_16669D0(v49, v23);
            v50 = nullptr;
            v51 = 0;
            v52 = 0;
            v53 = 0;
            v24 = (_DWORD *)sub_186B270(0x80u);
            *(_QWORD *)v24 = 0;
            v24[2] = 0;
            *((_QWORD *)v24 + 2) = 0;
            v24[6] = 0;
            *((_QWORD *)v24 + 4) = 0;
            v24[10] = 0;
            *((_QWORD *)v24 + 6) = 0;
            v24[14] = 0;
            *((_QWORD *)v24 + 8) = 0;
            v24[18] = 0;
            *((_QWORD *)v24 + 10) = 0;
            v24[22] = 0;
            *((_QWORD *)v24 + 12) = 0;
            v24[26] = 0;
            *((_QWORD *)v24 + 14) = 0;
            v24[30] = 0;
            v54 = v24;
            v56 = 0;
            v55 = 8;
            v57 = 0;
            sub_15079C0(v48, v58);
            sub_14ECFD0(v48, v58);
            sub_18572D0(v58);
            sub_16744A0(v47, *(_QWORD *)(a1 + 8));
            v25 = *(_QWORD *)(a1 + 8);
            v46[0] = 0;
            *(_QWORD *)v58 = v25;
            sub_16744A0(v59, v25);
            v60 = 0;
            v61 = v25;
            v62 = 0;
            v26 = (_DWORD *)sub_186B270(0x80u);
            *(_QWORD *)v26 = 0;
            v26[2] = 0;
            *((_QWORD *)v26 + 2) = 0;
            v26[6] = 0;
            *((_QWORD *)v26 + 4) = 0;
            v26[10] = 0;
            *((_QWORD *)v26 + 6) = 0;
            v26[14] = 0;
            *((_QWORD *)v26 + 8) = 0;
            v26[18] = 0;
            *((_QWORD *)v26 + 10) = 0;
            v26[22] = 0;
            *((_QWORD *)v26 + 12) = 0;
            v26[26] = 0;
            *((_QWORD *)v26 + 14) = 0;
            v26[30] = 0;
            ptr = v26;
            v65 = 0;
            v64 = 8;
            v66 = 0;
            sub_1427860(v58, v46);
            sub_157EB00(v67, v59);
            sub_16669D0(v68, v25);
            v68[28] = 0;
            sub_1409FB0(v58, v46);
            sub_18572D0(v46);
            v27 = (__int64 *)v21[*(unsigned int *)(a1 + 24) + 14];
            v28 = *v27;
            v44 = *(_QWORD *)(a1 + 8);
            v43 = 0;
            v29 = sub_15D1F10(v28);
            v30 = sub_1673B10(v47, v29);
            v33 = _mm_loadh_ps((const double *)(a1 + 32));
            if ( v30 )
            {
              *(__m128 *)v45 = v33;
              sub_1429740(
                (int)v58,
                2,
                (int)v45,
                (int)&v43,
                v31,
                v32,
                v38,
                (__int64)v46,
                v40[0],
                (int)v48,
                (int)v67,
                (int)v59,
                v47,
                v42[0],
                v43);
            }
            else
            {
              *(__m128 *)v46 = v33;
              sub_150B360((int)v48, v38, (int)v46, v40[0], (int)v48, (int)v67, (int)v59, v47, v42[0], v43);
            }
            v34 = *(_QWORD *)v42;
            do
            {
              v35 = v34;
              v34 = *(_QWORD *)(v34 + 8);
            }
            while ( v34 );
            sub_AD0E00(*(_QWORD *)(v35 + 56), (__m128i *)v43, *((_DWORD *)v27 + 9));
            sub_AC6F60(v43, v44);
            sub_157EB20(*(_QWORD *)v41);
            if ( ptr )
              sub_186B220(ptr);
            result = (__int64 **)sub_AC6F60(v60, v61);
            if ( v54 )
              result = (__int64 **)sub_186B220(v54);
            v36 = v50;
            if ( v50 )
            {
              sub_2334C0((__int64 *)v50 + 11);
              v37 = v36[10];
              if ( v37 )
                sub_186B220((void *)(v37 - 8));
              result = (__int64 **)sub_186B220(v36);
            }
          }
          ++v20;
        }
        while ( *(__int64 ***)v40 != v20 );
      }
    }
  }
  else
  {
    v39 = v10;
    sub_AD4CE0(a1, a2, a3, a4);
    v11 = (__int64)v39;
    v12 = v8;
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 8);
    }
    while ( v12 );
    if ( *(_BYTE *)(v13 + 32) )
    {
      v14 = v39;
      do
      {
        v15 = v14;
        v14 = (_QWORD *)v14[1];
      }
      while ( v14 );
      *((_BYTE *)v15 + 32) = 1;
    }
    do
    {
      result = (__int64 **)v11;
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
    if ( *((_BYTE *)result + 32) )
    {
      do
      {
        result = (__int64 **)v8;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v8 );
      *((_BYTE *)result + 32) = 1;
    }
  }
  return result;
}

