unsigned __int16 *__fastcall sub_19E10C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9,
        unsigned __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rcx
  int v25; // edi
  unsigned int v26; // eax
  __int64 *v27; // rsi
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  char *v31; // r9
  char *v32; // rax
  int v33; // eax
  unsigned int v34; // eax
  __int64 *v35; // rdx
  __int64 v36; // rcx
  char *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rsi
  __int64 v42; // rcx
  char v43; // r8
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  __m128 v46; // kr00_16
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  int v52; // esi
  int v53; // edx
  int v54; // edi
  __int64 v55; // r8
  int v56; // r9d
  __int64 v57; // r10
  __int64 v58; // [rsp+0h] [rbp-68h]
  __int64 v59; // [rsp+0h] [rbp-68h]
  __int64 v60; // [rsp+8h] [rbp-60h]
  unsigned __int64 v61; // [rsp+8h] [rbp-60h]
  int v62; // [rsp+8h] [rbp-60h]
  unsigned __int64 v63; // [rsp+8h] [rbp-60h]
  int v64; // [rsp+10h] [rbp-58h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  __int64 v66; // [rsp+18h] [rbp-50h]
  char *v67; // [rsp+18h] [rbp-50h]
  __m128 v68[4]; // [rsp+20h] [rbp-48h] BYREF

  v17 = sub_168B6C0(a1);
  if ( a3 )
  {
    v18 = v17;
    if ( (*(_WORD *)a3 & 0x1FF) != 0x13 )
      goto LABEL_3;
    v59 = v17;
    v51 = sub_192A5C0(*(_QWORD *)a1, a2, a3, a7, a8);
    if ( v51 != 1 )
    {
      v18 = v59;
      a3 = v51 & 0xFFFFFFFFFFFFFFFELL;
LABEL_3:
      v19 = *(_QWORD **)(a1 + 320);
      if ( v19 )
      {
        if ( a4 != v19 )
          return sub_19DEE70((__int64 *)a1, a3, *(_QWORD *)(a3 + 8), 0, a4, 0, a7, a8, a5, a9, a10, a6, a11, a12, 0);
      }
      else
      {
        v21 = sub_6F3470(*(_QWORD *)(v18 + 17504), "respondsToSelector", 0x12u) & 0xFFFFFFFFFFFFFFF8LL | 2;
        *(_QWORD *)(a1 + 320) = v21;
        if ( a4 != (_QWORD *)v21 )
          return sub_19DEE70((__int64 *)a1, a3, *(_QWORD *)(a3 + 8), 0, a4, 0, a7, a8, a5, a9, a10, a6, a11, a12, 0);
      }
      v22 = sub_BFD550(*a11);
      if ( (*(_WORD *)v22 & 0x1FF) != 0x1E )
        return sub_19DEE70((__int64 *)a1, a3, *(_QWORD *)(a3 + 8), 0, a4, 0, a7, a8, a5, a9, a10, a6, a11, a12, 0);
      v23 = *(unsigned int *)(a1 + 40);
      v24 = *(_QWORD *)(a1 + 24);
      v64 = *(_DWORD *)(v22 + 24);
      v58 = a1 + 24;
      if ( (_DWORD)v23 )
      {
        v66 = *(_QWORD *)(a1 + 24);
        v60 = *(_QWORD *)(v22 + 16);
        v25 = v23 - 1;
        v26 = (v23 - 1) & sub_FDE780(v60);
        v27 = (__int64 *)(v66 + 16LL * v26);
        v28 = *v27;
        if ( v60 == *v27 )
        {
LABEL_10:
          sub_1898540(v68, v27, (_QWORD *)(16LL * *(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 24)), v58, 1);
          v29 = v68[0].m128_u64[0];
LABEL_11:
          v61 = v29;
          sub_1898540(
            v68,
            (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 40)),
            (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 40)),
            v58,
            1);
          if ( v68[0].m128_u64[0] == v61 )
            return sub_19DEE70((__int64 *)a1, a3, *(_QWORD *)(a3 + 8), 0, a4, 0, a7, a8, a5, a9, a10, a6, a11, a12, 0);
          v30 = *(_QWORD *)(a1 + 48);
          v31 = (char *)(v30 + 16LL * *(unsigned int *)(v61 + 8));
          v32 = (char *)(v30 + 16LL * *(unsigned int *)(a1 + 56));
          if ( v32 == v31 || v64 != *((_DWORD *)v31 + 2) )
            return sub_19DEE70((__int64 *)a1, a3, *(_QWORD *)(a3 + 8), 0, a4, 0, a7, a8, a5, a9, a10, a6, a11, a12, 0);
          v62 = *(_DWORD *)(a1 + 40);
          if ( !v62 )
          {
LABEL_18:
            v36 = v32 - (v31 + 16);
            v37 = v31;
            v38 = v36 >> 4;
            if ( v36 > 0 )
            {
              do
              {
                v39 = *((_QWORD *)v37 + 2);
                v37 += 16;
                *((_QWORD *)v37 - 2) = v39;
                *((_DWORD *)v37 - 2) = *((_DWORD *)v37 + 2);
                --v38;
              }
              while ( v38 );
              v30 = *(_QWORD *)(a1 + 48);
            }
            v40 = (unsigned int)(*(_DWORD *)(a1 + 56) - 1);
            *(_DWORD *)(a1 + 56) = v40;
            if ( v31 != (char *)(v30 + 16 * v40) )
            {
              v41 = *(_QWORD **)(a1 + 24);
              v63 = (__int64)&v31[-v30] >> 4;
              if ( *(_DWORD *)(a1 + 32) )
              {
                v43 = 0;
                v42 = v58;
                v44 = &v41[2 * *(unsigned int *)(a1 + 40)];
              }
              else
              {
                v42 = v58;
                v43 = 1;
                v44 = &v41[2 * *(unsigned int *)(a1 + 40)];
                v41 = v44;
              }
              sub_1898540(v68, v41, v44, v42, v43);
              v45 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 40));
              v46 = v68[0];
              sub_1898540(v68, v45, v45, v58, 1);
              v47 = v68[0].m128_u64[0];
              v48 = v46.m128_u64[0];
              while ( v47 != v48 )
              {
                v49 = *(unsigned int *)(v48 + 8);
                if ( v63 < v49 )
                  *(_DWORD *)(v48 + 8) = v49 - 1;
                if ( v46.m128_u64[1] == v48 + 16 )
                {
                  v48 = v46.m128_u64[1];
                }
                else if ( *(_QWORD *)(v48 + 16) < 0xFFFFFFFFFFFFFFFELL )
                {
                  v48 += 16LL;
                }
                else
                {
                  v50 = v48 + 32;
                  do
                  {
                    v48 = v50;
                    if ( v46.m128_u64[1] == v50 )
                      break;
                    v50 += 16LL;
                  }
                  while ( *(_QWORD *)v48 >= 0xFFFFFFFFFFFFFFFELL );
                }
              }
            }
            return sub_19DEE70((__int64 *)a1, a3, *(_QWORD *)(a3 + 8), 0, a4, 0, a7, a8, a5, a9, a10, a6, a11, a12, 0);
          }
          v67 = v31;
          v65 = *(_QWORD *)(a1 + 24);
          v33 = sub_FDE780(*(_QWORD *)v31);
          v31 = v67;
          v34 = (v62 - 1) & v33;
          v35 = (__int64 *)(v65 + 16LL * v34);
          if ( *(_QWORD *)v67 != *v35 )
          {
            if ( *v35 == -1 )
              goto LABEL_17;
            v53 = 1;
            while ( 1 )
            {
              v54 = v53 + 1;
              v34 = (v62 - 1) & (v34 + v53);
              v35 = (__int64 *)(v65 + 16LL * v34);
              v55 = *v35;
              if ( *(_QWORD *)v67 == *v35 )
                break;
              v53 = v54;
              if ( v55 == -1 )
                goto LABEL_17;
            }
          }
          *v35 = -2;
          --*(_DWORD *)(a1 + 32);
          ++*(_DWORD *)(a1 + 36);
LABEL_17:
          v30 = *(_QWORD *)(a1 + 48);
          v32 = (char *)(v30 + 16LL * *(unsigned int *)(a1 + 56));
          goto LABEL_18;
        }
        v23 = *(unsigned int *)(a1 + 40);
        v52 = 1;
        if ( v28 != -1 )
        {
          do
          {
            v56 = v52 + 1;
            v26 = v25 & (v52 + v26);
            v27 = (__int64 *)(v66 + 16LL * v26);
            v57 = *v27;
            if ( v60 == *v27 )
              goto LABEL_10;
            v52 = v56;
          }
          while ( v57 != -1 );
        }
        v24 = *(_QWORD *)(a1 + 24);
      }
      sub_1898540(v68, (_QWORD *)(v24 + 16 * v23), (_QWORD *)(v24 + 16 * v23), v58, 1);
      v29 = v68[0].m128_u64[0];
      goto LABEL_11;
    }
  }
  return (_WORD *)(&dword_0 + 1);
}
