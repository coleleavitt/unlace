__int64 __fastcall sub_C82560(__int64 a1, char **a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ebp
  char *v7; // r12
  __int64 *p_ptr; // r12
  __int16 v9; // dx
  __int64 *v10; // r14
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r15
  char v15; // al
  unsigned int v16; // edx
  unsigned int v17; // r12d
  char *v18; // r9
  __int16 v19; // ax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edi
  char v23; // dl
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // ebp
  __int64 *v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // ebp
  char *v32; // r12
  __int64 v33; // rbp
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  char *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  char *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rax
  char *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char *v56; // [rsp+18h] [rbp-150h]
  __int64 *v57; // [rsp+20h] [rbp-148h]
  __int64 v58; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v60; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v5 = *((_DWORD *)a2 + 2);
    v6 = *((_DWORD *)a2 + 3);
    if ( v5 >= v6 )
    {
      v47 = 2 * v6;
      v48 = sub_186B270(8 * v47);
      v5 = *((_DWORD *)a2 + 2);
      v49 = *a2;
      v7 = (char *)v48;
      if ( v5 )
      {
        if ( v5 - 1 <= 2 || (char *)v48 == v49 + 8 )
        {
          v54 = 0;
          do
          {
            *(_QWORD *)&v7[v54] = *(_QWORD *)&v49[v54];
            v54 += 8;
          }
          while ( v54 != 8LL * v5 );
        }
        else
        {
          v50 = 0;
          do
          {
            *(__m128i *)&v7[v50] = _mm_loadu_si128((const __m128i *)&v49[v50]);
            v50 += 16;
          }
          while ( v50 != 16LL * (v5 >> 1) );
          if ( (v5 & 1) != 0 )
            *(_QWORD *)&v7[8 * (v5 & 0xFFFFFFFE)] = *(_QWORD *)&v49[8 * (v5 & 0xFFFFFFFE)];
        }
      }
      if ( v49 != (char *)(a2 + 2) && v49 )
      {
        sub_186B220(v49);
        v5 = *((_DWORD *)a2 + 2);
      }
      *a2 = v7;
      *((_DWORD *)a2 + 3) = v47;
    }
    else
    {
      v7 = *a2;
    }
    *(_QWORD *)&v7[8 * v5] = v3;
    *((_DWORD *)a2 + 2) = v5 + 1;
  }
  p_ptr = &ptr;
  ptr = v3;
  v57 = &ptr;
  v60 = 0;
  v58 = 0x1000000001LL;
  result = 0;
LABEL_8:
  while ( 2 )
  {
    v9 = *(_WORD *)(v3 + 4);
    v10 = &p_ptr[2 * (unsigned int)result];
    if ( v9 == 1 )
      goto LABEL_26;
    if ( v9 == 2 )
    {
      v20 = *(_DWORD *)(v3 + 72);
      v21 = *((_DWORD *)v10 + 2);
      v22 = v20 + *(_DWORD *)(v3 + 76) + 1;
      if ( v21 < v22 )
      {
        if ( !v21 )
        {
          v14 = *(_QWORD *)(v3 + 24);
          v21 = 1;
          *((_DWORD *)v10 + 2) = 1;
          if ( *(_DWORD *)(v14 + 8) > 1u )
            goto LABEL_31;
LABEL_37:
          v25 = (unsigned int)v58;
          v26 = HIDWORD(v58);
          if ( (unsigned int)v58 < HIDWORD(v58) )
          {
LABEL_38:
            p_ptr = v57;
            goto LABEL_39;
          }
LABEL_49:
          v33 = (unsigned int)(2 * v26);
          p_ptr = (__int64 *)sub_186B270(16 * v33);
          v34 = v57;
          v35 = 0;
          v25 = (unsigned int)v58;
          if ( (_DWORD)v58 )
          {
            do
            {
              *(__m128i *)&p_ptr[v35] = _mm_loadu_si128((const __m128i *)&v57[v35]);
              v35 += 2;
            }
            while ( 2LL * (unsigned int)v58 != v35 );
          }
          goto LABEL_51;
        }
        while ( 1 )
        {
          v24 = v21 - 1;
          if ( v20 < v21 )
            v24 = (unsigned int)v24 - v20;
          ++v21;
          v14 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v24 + 80);
          *((_DWORD *)v10 + 2) = v21;
          if ( *(_DWORD *)(v14 + 8) <= 1u )
            goto LABEL_37;
LABEL_31:
          v23 = *(_BYTE *)(v14 + 6);
          if ( (v23 & 1) == 0 )
            break;
          if ( v21 >= v22 )
            goto LABEL_25;
          v20 = *(_DWORD *)(v3 + 72);
        }
        *(_BYTE *)(v14 + 6) = v23 | 1;
        v30 = *((_DWORD *)a2 + 2);
        v31 = *((_DWORD *)a2 + 3);
        if ( v30 < v31 )
        {
          v32 = *a2;
          goto LABEL_48;
        }
        v41 = 2 * v31;
        v42 = sub_186B270(8 * v41);
        v30 = *((_DWORD *)a2 + 2);
        v43 = *a2;
        v32 = (char *)v42;
        if ( v30 )
        {
          if ( v30 - 1 <= 2 || (char *)v42 == v43 + 8 )
          {
            v45 = 0;
            do
            {
              *(_QWORD *)&v32[v45] = *(_QWORD *)&v43[v45];
              v45 += 8;
            }
            while ( 8LL * v30 != v45 );
            if ( v43 != (char *)(a2 + 2) )
            {
LABEL_80:
              if ( v43 )
              {
                sub_186B220(v43);
                v30 = *((_DWORD *)a2 + 2);
              }
            }
LABEL_82:
            *a2 = v32;
            *((_DWORD *)a2 + 3) = v41;
LABEL_48:
            v26 = HIDWORD(v58);
            *(_QWORD *)&v32[8 * v30] = v14;
            *((_DWORD *)a2 + 2) = v30 + 1;
            v25 = (unsigned int)v58;
            if ( (unsigned int)v58 < HIDWORD(v58) )
              goto LABEL_38;
            goto LABEL_49;
          }
          v44 = 0;
          do
          {
            *(__m128i *)&v32[v44] = _mm_loadu_si128((const __m128i *)&v43[v44]);
            v44 += 16;
          }
          while ( v44 != 16LL * (v30 >> 1) );
          if ( (v30 & 1) != 0 )
            *(_QWORD *)&v32[8 * (v30 & 0xFFFFFFFE)] = *(_QWORD *)&v43[8 * (v30 & 0xFFFFFFFE)];
        }
        if ( v43 != (char *)(a2 + 2) )
          goto LABEL_80;
        goto LABEL_82;
      }
LABEL_25:
      result = (unsigned int)(v58 - 1);
LABEL_26:
      LODWORD(v58) = result;
      if ( !(_DWORD)result )
        break;
      goto LABEL_27;
    }
    if ( v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v11 = *(_DWORD *)(v3 + 24);
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 < v11 )
    {
      while ( 1 )
      {
        v13 = v12++;
        v14 = *(_QWORD *)(v3 + 8 * v13 + 32);
        *((_DWORD *)v10 + 2) = v12;
        if ( *(_DWORD *)(v14 + 8) > 1u )
        {
          v15 = *(_BYTE *)(v14 + 6);
          if ( (v15 & 1) != 0 )
            goto LABEL_22;
          *(_BYTE *)(v14 + 6) = v15 | 1;
          v16 = *((_DWORD *)a2 + 2);
          v17 = *((_DWORD *)a2 + 3);
          if ( v16 >= v17 )
          {
            v37 = 2 * v17;
            v38 = sub_186B270(8 * v37);
            v16 = *((_DWORD *)a2 + 2);
            v39 = *a2;
            v18 = (char *)v38;
            if ( v16 )
            {
              if ( v16 - 1 <= 2 || (char *)v38 == v39 + 8 )
              {
                v46 = 0;
                do
                {
                  *(_QWORD *)&v18[v46] = *(_QWORD *)&v39[v46];
                  v46 += 8;
                }
                while ( v46 != 8LL * v16 );
              }
              else
              {
                v40 = 0;
                do
                {
                  *(__m128i *)&v18[v40] = _mm_loadu_si128((const __m128i *)&v39[v40]);
                  v40 += 16;
                }
                while ( 16LL * (v16 >> 1) != v40 );
                if ( (v16 & 1) != 0 )
                  *(_QWORD *)&v18[8 * (v16 & 0xFFFFFFFE)] = *(_QWORD *)&v39[8 * (v16 & 0xFFFFFFFE)];
              }
            }
            if ( v39 != (char *)(a2 + 2) && v39 )
            {
              v56 = v18;
              sub_186B220(v39);
              v16 = *((_DWORD *)a2 + 2);
              v18 = v56;
            }
            *a2 = v18;
            *((_DWORD *)a2 + 3) = v37;
          }
          else
          {
            v18 = *a2;
          }
          *(_QWORD *)&v18[8 * v16] = v14;
          *((_DWORD *)a2 + 2) = v16 + 1;
        }
        v19 = *(_WORD *)(v14 + 4);
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            v25 = (unsigned int)v58;
            if ( (unsigned int)v58 < HIDWORD(v58) )
              goto LABEL_38;
            v33 = (unsigned int)(2 * HIDWORD(v58));
            p_ptr = (__int64 *)sub_186B270(16 * v33);
            v34 = v57;
            v36 = 0;
            v25 = (unsigned int)v58;
            if ( (_DWORD)v58 )
            {
              do
              {
                *(__m128i *)&p_ptr[v36] = _mm_loadu_si128((const __m128i *)&v57[v36]);
                v36 += 2;
              }
              while ( v36 != 2LL * (unsigned int)v58 );
            }
LABEL_51:
            if ( v34 != &ptr && v34 )
            {
              sub_186B220(v34);
              v25 = (unsigned int)v58;
            }
            v57 = p_ptr;
            HIDWORD(v58) = v33;
LABEL_39:
            v27 = &p_ptr[2 * v25];
            *v27 = v14;
            *((_DWORD *)v27 + 2) = 0;
            v28 = (unsigned int)v58;
            v29 = v58 + 1;
LABEL_40:
            LODWORD(v58) = v29;
            result = (unsigned int)(v29 - 1);
            v3 = p_ptr[2 * v28];
            goto LABEL_8;
          }
          if ( v19 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v14 + 24) )
          {
            v51 = (unsigned int)v58;
            if ( (unsigned int)v58 >= HIDWORD(v58) )
            {
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v58)));
              v53 = 0;
              v51 = (unsigned int)v58;
              if ( (_DWORD)v58 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v53] = _mm_loadu_si128((const __m128i *)&v57[v53]);
                  v53 += 2;
                }
                while ( 2LL * (unsigned int)v58 != v53 );
              }
              if ( v57 && v57 != &ptr )
              {
                sub_186B220(v57);
                v51 = (unsigned int)v58;
              }
              v57 = p_ptr;
              HIDWORD(v58) *= 2;
            }
            else
            {
              p_ptr = v57;
            }
            v52 = &p_ptr[2 * v51];
            *((_DWORD *)v52 + 2) = 0;
            v28 = (unsigned int)v58;
            *v52 = v14;
            v29 = v58 + 1;
            goto LABEL_40;
          }
          sub_C82170(a1, v14);
        }
        v12 = *((_DWORD *)v10 + 2);
LABEL_22:
        if ( v12 >= v11 )
        {
          LODWORD(result) = v58 - 1;
          break;
        }
      }
    }
    LODWORD(v58) = result;
    sub_C82170(a1, v3);
    result = (unsigned int)v58;
    p_ptr = v57;
    if ( (_DWORD)v58 )
    {
LABEL_27:
      result = (unsigned int)(result - 1);
      v3 = p_ptr[2 * result];
      continue;
    }
    break;
  }
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

