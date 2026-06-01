/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B2820
// Address: 0x000B2820

//----- (000B2820) --------------------------------------------------------
int __fastcall sub_B2820(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // edx
  __int64 *v4; // edi
  int v5; // esi
  int result; // eax
  __int64 *v7; // ecx
  __int64 *v8; // esi
  unsigned int v9; // ebx
  _DWORD *v10; // edx
  __int64 *v11; // edi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int *v15; // edi
  bool v16; // zf
  int *v17; // edx
  int v18; // eax
  __int64 v19; // xmm0_8
  __int64 *v20; // edi
  __int64 v21; // xmm0_8
  int v22; // edx
  bool v23; // cc
  bool v24; // cc
  __int64 v25; // xmm0_8
  int v26; // ecx
  bool v27; // cc
  bool v28; // cc
  __int64 v29; // xmm0_8
  __int64 v30; // xmm0_8
  int v31; // eax
  bool v32; // cc
  int v33; // ecx
  __int64 *v34; // eax
  int *v35; // esi
  int *v36; // edx
  int *v37; // ecx
  bool v38; // cc
  int v39; // edx
  int *v40; // edi
  int v41; // ecx
  bool v42; // cc
  int v43; // ebx
  __int64 *v44; // edi
  __int64 v45; // xmm0_8
  __int64 v46; // xmm0_8
  bool v47; // cc
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  int v50; // ecx
  bool v51; // cc
  int v52; // edx
  int v53; // esi
  int *v54; // [esp+Ch] [ebp-30h]
  __int64 *v56; // [esp+10h] [ebp-2Ch]
  int v57; // [esp+18h] [ebp-24h]
  bool v58; // [esp+18h] [ebp-24h]
  __int64 *v59; // [esp+1Ch] [ebp-20h]
  int v60; // [esp+1Ch] [ebp-20h]
  int *v61; // [esp+1Ch] [ebp-20h]
  int v62; // [esp+20h] [ebp-1Ch]
  int v63; // [esp+24h] [ebp-18h]

LABEL_1:
  v3 = a2;
  v59 = a2 - 1;
LABEL_3:
  v4 = a1;
  v5 = (char *)v3 - (char *)a1;
  result = v5 >> 3;
  v54 = (int *)v4;
  switch ( result )
  {
    case 0:
    case 1:
      return result;
    case 2:
      result = *(_DWORD *)v4;
      if ( *((_DWORD *)a2 - 2) == *(_DWORD *)v4 )
      {
        result = *((_DWORD *)a2 - 1);
        if ( result >= *((_DWORD *)v4 + 1) )
          return result;
      }
      else if ( *((_DWORD *)a2 - 2) >= *(_DWORD *)v4 )
      {
        return result;
      }
      v45 = *v4;
      *v4 = *(a2 - 1);
      *(a2 - 1) = v45;
      return (int)a2;
    case 3:
      return sub_B2E00(v4, (_DWORD *)v4 + 2, (_DWORD *)a2 - 2);
    case 4:
      v44 = v4 + 2;
      v61 = v54 + 2;
      sub_B2E00(v54, v54 + 2, v54 + 4);
      result = v54[4];
      if ( *((_DWORD *)a2 - 2) == result )
      {
        result = *((_DWORD *)a2 - 1);
        if ( result >= v54[5] )
          return result;
      }
      else if ( *((_DWORD *)a2 - 2) >= result )
      {
        return result;
      }
      v46 = *v44;
      *v44 = *(a2 - 1);
      *(a2 - 1) = v46;
      result = *v61;
      v47 = *(_DWORD *)v44 < *v61;
      if ( *(_DWORD *)v44 == *v61 )
      {
        result = v54[5];
        v47 = result < v54[3];
      }
      if ( v47 )
      {
        v48 = _mm_loadu_si128((const __m128i *)(v54 + 2));
        v49 = _mm_shuffle_epi32(v48, 78);
        *(__m128i *)(v54 + 2) = v49;
        v50 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v48, 231));
        result = _mm_cvtsi128_si32(v49);
        v51 = *v54 <= result;
        if ( *v54 == result )
          v51 = v54[1] <= v50;
        if ( !v51 )
        {
          v52 = *v54;
          v53 = v54[1];
          v54[1] = v50;
          *v54 = result;
          v54[3] = v53;
          v54[2] = v52;
        }
      }
      return result;
    case 5:
      return sub_B2EE0(v4, (_DWORD *)v4 + 2, (_DWORD *)v4 + 4, (_DWORD *)v4 + 6, (_DWORD *)a2 - 2);
    default:
      if ( v5 <= 247 )
      {
        v35 = (int *)(v4 + 2);
        v56 = v3;
        result = sub_B2E00(v4, (_DWORD *)v4 + 2, (_DWORD *)v4 + 4);
        v36 = (int *)(v4 + 3);
        if ( v4 + 3 == v56 )
          return result;
        result = 16;
        while ( 1 )
        {
          v37 = v35;
          v35 = v36;
          v38 = *v36 < *v37;
          if ( *v36 == *v37 )
            v38 = v36[1] < v37[1];
          if ( v38 )
          {
            v39 = *v36;
            v60 = v35[1];
            *(_QWORD *)v35 = *(_QWORD *)v37;
            v40 = v54;
            if ( v37 == v54 )
              goto LABEL_91;
            v41 = result;
            while ( 1 )
            {
              v42 = *(int *)((char *)v40 + v41 - 8) <= v39;
              if ( *(int *)((char *)v40 + v41 - 8) == v39 )
                v42 = *(int *)((char *)v40 + v41 - 4) <= v60;
              if ( v42 )
                break;
              v43 = *(int *)((char *)v40 + v41 - 8);
              *(int *)((char *)v54 + v41 + 4) = *(int *)((char *)v54 + v41 - 4);
              v40 = v54;
              *(int *)((char *)v54 + v41) = v43;
              v41 -= 8;
              if ( !v41 )
              {
                v37 = v54;
                goto LABEL_91;
              }
            }
            v37 = (int *)((char *)v40 + v41);
LABEL_91:
            *v37 = v39;
            v37[1] = v60;
          }
          v36 = v35 + 2;
          result += 8;
          if ( v35 + 2 == (int *)v56 )
            return result;
        }
      }
      v7 = v4;
      v23 = v5 < 7993;
      v57 = result / 2;
      v8 = &v4[result / 2];
      if ( v23 )
      {
        v11 = a2 - 1;
        v12 = sub_B2E00(v7, v8, v59);
      }
      else
      {
        v9 = (2 * (result + ((unsigned int)(result >> 31) >> 30))) & 0xFFFFFFF8;
        v10 = (_DWORD *)((char *)v4 + v9);
        v11 = a2 - 1;
        v12 = sub_B2EE0(v7, v10, v8, (__int64 *)((char *)v8 + v9), v59);
      }
      v62 = v12;
      v13 = *(_DWORD *)v8;
      v63 = *v54;
      if ( *v54 == *(_DWORD *)v8 )
      {
        if ( v54[1] >= v54[2 * v57 + 1] )
          goto LABEL_10;
LABEL_18:
        v14 = (unsigned int)v11;
        v17 = v54;
        v18 = v62;
        goto LABEL_20;
      }
      if ( *v54 < v13 )
        goto LABEL_18;
LABEL_10:
      v14 = (unsigned int)(a2 - 2);
      if ( v54 != (int *)(a2 - 2) )
      {
        do
        {
          if ( *(_DWORD *)v14 == v13 )
          {
            v15 = v54;
            if ( *(_DWORD *)(v14 + 4) < v54[2 * v57 + 1] )
              goto LABEL_19;
          }
          else
          {
            v15 = v54;
            if ( *(_DWORD *)v14 < v13 )
            {
LABEL_19:
              v19 = *(_QWORD *)v15;
              *(_QWORD *)v15 = *(_QWORD *)v14;
              *(_QWORD *)v14 = v19;
              v18 = v62 + 1;
              v17 = v15;
LABEL_20:
              v20 = (__int64 *)(v17 + 2);
              if ( (unsigned int)(v17 + 2) < v14 )
              {
                while ( 1 )
                {
                  v22 = *(_DWORD *)v8;
                  v23 = *(_DWORD *)v20 < *(_DWORD *)v8;
                  if ( *(_DWORD *)v20 == *(_DWORD *)v8 )
                  {
LABEL_26:
                    if ( *((_DWORD *)v20 + 1) >= *((_DWORD *)v8 + 1) )
                      goto LABEL_29;
                    goto LABEL_27;
                  }
                  while ( v23 )
                  {
LABEL_27:
                    v23 = *(_DWORD *)++v20 < v22;
                    if ( *(_DWORD *)v20 == v22 )
                      goto LABEL_26;
                  }
                  do
                  {
LABEL_29:
                    while ( 1 )
                    {
                      v14 -= 8;
                      if ( *(_DWORD *)v14 != v22 )
                        break;
                      if ( *(_DWORD *)(v14 + 4) < *((_DWORD *)v8 + 1) )
                        goto LABEL_33;
                    }
                  }
                  while ( *(_DWORD *)v14 >= v22 );
LABEL_33:
                  if ( (unsigned int)v20 > v14 )
                    break;
                  v21 = *v20;
                  *v20 = *(_QWORD *)v14;
                  *(_QWORD *)v14 = v21;
                  ++v18;
                  if ( v8 == v20 )
                    v8 = (__int64 *)v14;
                  ++v20;
                }
              }
              v3 = a2;
              if ( v20 != v8 )
              {
                v24 = *(_DWORD *)v8 < *(_DWORD *)v20;
                if ( *(_DWORD *)v8 == *(_DWORD *)v20 )
                  v24 = *((_DWORD *)v8 + 1) < *((_DWORD *)v20 + 1);
                if ( v24 )
                {
                  v25 = *v20;
                  *v20 = *v8;
                  *v8 = v25;
                  ++v18;
                }
              }
              if ( v18 )
              {
LABEL_42:
                a1 = (__int64 *)v54;
                if ( (char *)v20 - (char *)v54 < (char *)v3 - (char *)v20 )
                {
                  sub_B2820(v54, v20);
                  v3 = a2;
                  a1 = v20 + 1;
                  goto LABEL_3;
                }
                sub_B2820(v20 + 1, v3);
                a2 = v20;
                goto LABEL_1;
              }
              v58 = sub_B3040((__int64 *)v54, v20);
              a1 = v20 + 1;
              if ( !sub_B3040(v20 + 1, a2) )
              {
                v3 = a2;
                if ( v58 )
                  goto LABEL_3;
                goto LABEL_42;
              }
              v34 = a2;
              if ( !v58 )
                v34 = v20;
              a2 = v34;
              result = 2 - v58;
              a1 = (__int64 *)v54;
              if ( (unsigned __int8)result > 4u )
                return result;
LABEL_68:
              result = (unsigned __int8)result;
              v33 = 21;
              if ( _bittest(&v33, (unsigned __int8)result) )
                goto LABEL_1;
              return result;
            }
          }
          v14 -= 8;
          v16 = v15 == (int *)v14;
          v11 = a2 - 1;
        }
        while ( !v16 );
      }
      result = (int)v54;
      a1 = (__int64 *)(v54 + 2);
      v26 = *v54;
      v27 = v63 < *(_DWORD *)v11;
      if ( v63 == *(_DWORD *)v11 )
      {
        result = v54[1];
        v27 = result < *((_DWORD *)a2 - 1);
        v26 = *v54;
      }
      if ( !v27 )
      {
        if ( a1 == v11 )
          return result;
        a1 = (__int64 *)(v54 + 4);
        while ( 1 )
        {
          v28 = v26 < *((_DWORD *)a1 - 2);
          if ( v26 == *((_DWORD *)a1 - 2) )
            v28 = v54[1] < *((_DWORD *)a1 - 1);
          result = (int)a2;
          if ( v28 )
            break;
          if ( a2 == ++a1 )
            return result;
        }
        v29 = *(a1 - 1);
        *(a1 - 1) = *v11;
        *v11 = v29;
      }
      if ( a1 != v11 )
      {
        while ( 1 )
        {
          v31 = *v54;
          v32 = *v54 < *(_DWORD *)a1;
          if ( *v54 == *(_DWORD *)a1 )
          {
LABEL_59:
            if ( v54[1] < *((_DWORD *)a1 + 1) )
              goto LABEL_62;
            goto LABEL_60;
          }
          while ( !v32 )
          {
LABEL_60:
            v32 = v31 < *(_DWORD *)++a1;
            if ( v31 == *(_DWORD *)a1 )
              goto LABEL_59;
          }
          do
          {
LABEL_62:
            while ( v31 == *(_DWORD *)--v11 )
            {
              if ( v54[1] >= *((_DWORD *)v11 + 1) )
                goto LABEL_66;
            }
          }
          while ( v31 < *(_DWORD *)v11 );
LABEL_66:
          if ( a1 >= v11 )
            break;
          v30 = *a1;
          *a1 = *v11;
          *v11 = v30;
          ++a1;
        }
        LOBYTE(result) = 4;
        goto LABEL_68;
      }
      return result;
  }
}
