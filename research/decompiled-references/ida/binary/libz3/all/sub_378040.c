__int64 __fastcall sub_378040(__int64 a1, char **a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  char *v8; // rbp
  __int64 *p_ptr; // rbp
  __int64 v10; // rax
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r15
  char v17; // al
  unsigned int v18; // esi
  unsigned int v19; // ebp
  char *v20; // r10
  __int16 v21; // ax
  int *v22; // rdx
  int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // r14
  char v28; // si
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // ebx
  __int64 *v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  char *v37; // rbp
  __int64 v38; // rbx
  __int64 v39; // rax
  int *v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // rax
  char *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  char *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  char *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  char *v64; // [rsp+18h] [rbp-150h]
  __int64 *v65; // [rsp+20h] [rbp-148h]
  __int64 v66; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v68; // [rsp+38h] [rbp-130h]

  v4 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *((_DWORD *)a2 + 2);
    v7 = *((_DWORD *)a2 + 3);
    if ( v6 >= v7 )
    {
      v55 = 2 * v7;
      v56 = sub_186B270(8 * v55);
      v6 = *((_DWORD *)a2 + 2);
      v57 = *a2;
      v8 = (char *)v56;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (char *)v56 == v57 + 8 )
        {
          v62 = 0;
          do
          {
            *(_QWORD *)&v8[v62] = *(_QWORD *)&v57[v62];
            v62 += 8;
          }
          while ( v62 != 8LL * v6 );
        }
        else
        {
          v58 = 0;
          do
          {
            *(__m128i *)&v8[v58] = _mm_loadu_si128((const __m128i *)&v57[v58]);
            v58 += 16;
          }
          while ( v58 != 16LL * (v6 >> 1) );
          if ( (v6 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v6 & 0xFFFFFFFE)] = *(_QWORD *)&v57[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v57 != (char *)(a2 + 2) && v57 )
      {
        sub_186B220(v57);
        v6 = *((_DWORD *)a2 + 2);
      }
      *a2 = v8;
      *((_DWORD *)a2 + 3) = v55;
    }
    else
    {
      v8 = *a2;
    }
    *(_QWORD *)&v8[8 * v6] = v4;
    *((_DWORD *)a2 + 2) = v6 + 1;
  }
  p_ptr = &ptr;
  ptr = v4;
  v65 = &ptr;
  v68 = 0;
  v66 = 0x1000000001LL;
  LODWORD(v10) = 0;
LABEL_8:
  while ( 2 )
  {
    v11 = *(_WORD *)(v4 + 4);
    v12 = &p_ptr[2 * (unsigned int)v10];
    if ( v11 == 1 )
      goto LABEL_29;
    if ( v11 == 2 )
    {
      v24 = *(_DWORD *)(v4 + 72);
      v25 = *((_DWORD *)v12 + 2);
      v26 = v24 + *(_DWORD *)(v4 + 76) + 1;
      if ( v25 < v26 )
      {
        if ( !v25 )
        {
          v27 = *(_QWORD *)(v4 + 24);
          v25 = 1;
          *((_DWORD *)v12 + 2) = 1;
          if ( *(_DWORD *)(v27 + 8) > 1u )
            goto LABEL_34;
LABEL_40:
          v30 = (unsigned int)v66;
          v31 = HIDWORD(v66);
          if ( (unsigned int)v66 < HIDWORD(v66) )
            goto LABEL_41;
          goto LABEL_52;
        }
        while ( 1 )
        {
          v29 = v25 - 1;
          if ( v24 < v25 )
            v29 = (unsigned int)v29 - v24;
          ++v25;
          v27 = *(_QWORD *)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v29 + 80);
          *((_DWORD *)v12 + 2) = v25;
          if ( *(_DWORD *)(v27 + 8) <= 1u )
            goto LABEL_40;
LABEL_34:
          v28 = *(_BYTE *)(v27 + 6);
          if ( (v28 & 1) == 0 )
            break;
          if ( v25 >= v26 )
            goto LABEL_28;
          v24 = *(_DWORD *)(v4 + 72);
        }
        *(_BYTE *)(v27 + 6) = v28 | 1;
        v35 = *((_DWORD *)a2 + 2);
        v36 = *((_DWORD *)a2 + 3);
        if ( v35 < v36 )
        {
          v37 = *a2;
          goto LABEL_51;
        }
        v48 = 2 * v36;
        v49 = sub_186B270(8 * v48);
        v35 = *((_DWORD *)a2 + 2);
        v50 = *a2;
        v37 = (char *)v49;
        if ( v35 )
        {
          if ( v35 - 1 <= 2 || (char *)v49 == v50 + 8 )
          {
            v53 = 0;
            do
            {
              *(_QWORD *)&v37[v53] = *(_QWORD *)&v50[v53];
              v53 += 8;
            }
            while ( 8LL * v35 != v53 );
            if ( v50 != (char *)(a2 + 2) )
            {
LABEL_85:
              if ( v50 )
              {
                sub_186B220(v50);
                v35 = *((_DWORD *)a2 + 2);
              }
            }
LABEL_87:
            *a2 = v37;
            *((_DWORD *)a2 + 3) = v48;
LABEL_51:
            v31 = HIDWORD(v66);
            *(_QWORD *)&v37[8 * v35] = v27;
            *((_DWORD *)a2 + 2) = v35 + 1;
            v30 = (unsigned int)v66;
            if ( (unsigned int)v66 < HIDWORD(v66) )
            {
LABEL_41:
              p_ptr = v65;
LABEL_42:
              v32 = &p_ptr[2 * v30];
              *((_DWORD *)v32 + 2) = 0;
              v33 = (unsigned int)v66;
              *v32 = v27;
              v34 = v66 + 1;
              goto LABEL_43;
            }
LABEL_52:
            v38 = (unsigned int)(2 * v31);
            p_ptr = (__int64 *)sub_186B270(16 * v38);
            v39 = 0;
            v30 = (unsigned int)v66;
            if ( (_DWORD)v66 )
            {
              do
              {
                *(__m128i *)&p_ptr[v39] = _mm_loadu_si128((const __m128i *)&v65[v39]);
                v39 += 2;
              }
              while ( 2LL * (unsigned int)v66 != v39 );
            }
            if ( v65 && v65 != &ptr )
            {
              sub_186B220(v65);
              v30 = (unsigned int)v66;
            }
            v65 = p_ptr;
            HIDWORD(v66) = v38;
            goto LABEL_42;
          }
          v51 = 0;
          do
          {
            *(__m128i *)&v37[v51] = _mm_loadu_si128((const __m128i *)&v50[v51]);
            v51 += 16;
          }
          while ( v51 != 16LL * (v35 >> 1) );
          if ( (v35 & 1) != 0 )
            *(_QWORD *)&v37[8 * (v35 & 0xFFFFFFFE)] = *(_QWORD *)&v50[8 * (v35 & 0xFFFFFFFE)];
        }
        if ( v50 != (char *)(a2 + 2) )
          goto LABEL_85;
        goto LABEL_87;
      }
LABEL_28:
      LODWORD(v10) = v66 - 1;
LABEL_29:
      LODWORD(v66) = v10;
      if ( !(_DWORD)v10 )
        break;
      goto LABEL_30;
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = *(_DWORD *)(v4 + 24);
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(_QWORD *)(v4 + 8 * v15 + 32);
        *((_DWORD *)v12 + 2) = v14;
        if ( *(_DWORD *)(v16 + 8) > 1u )
        {
          v17 = *(_BYTE *)(v16 + 6);
          if ( (v17 & 1) != 0 )
            goto LABEL_22;
          *(_BYTE *)(v16 + 6) = v17 | 1;
          v18 = *((_DWORD *)a2 + 2);
          v19 = *((_DWORD *)a2 + 3);
          if ( v18 >= v19 )
          {
            v44 = 2 * v19;
            v45 = sub_186B270(8 * v44);
            v18 = *((_DWORD *)a2 + 2);
            v46 = *a2;
            v20 = (char *)v45;
            if ( v18 )
            {
              if ( v18 - 1 <= 2 || (char *)v45 == v46 + 8 )
              {
                v54 = 0;
                do
                {
                  *(_QWORD *)&v20[v54] = *(_QWORD *)&v46[v54];
                  v54 += 8;
                }
                while ( v54 != 8LL * v18 );
              }
              else
              {
                v47 = 0;
                do
                {
                  *(__m128i *)&v20[v47] = _mm_loadu_si128((const __m128i *)&v46[v47]);
                  v47 += 16;
                }
                while ( 16LL * (v18 >> 1) != v47 );
                if ( (v18 & 1) != 0 )
                  *(_QWORD *)&v20[8 * (v18 & 0xFFFFFFFE)] = *(_QWORD *)&v46[8 * (v18 & 0xFFFFFFFE)];
              }
            }
            if ( v46 && v46 != (char *)(a2 + 2) )
            {
              v64 = v20;
              sub_186B220(v46);
              v18 = *((_DWORD *)a2 + 2);
              v20 = v64;
            }
            *a2 = v20;
            *((_DWORD *)a2 + 3) = v44;
          }
          else
          {
            v20 = *a2;
          }
          *(_QWORD *)&v20[8 * v18] = v16;
          *((_DWORD *)a2 + 2) = v18 + 1;
        }
        v21 = *(_WORD *)(v16 + 4);
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v42 = (unsigned int)v66;
            if ( (unsigned int)v66 >= HIDWORD(v66) )
            {
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v66)));
              v52 = 0;
              v42 = (unsigned int)v66;
              if ( (_DWORD)v66 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v52] = _mm_loadu_si128((const __m128i *)&v65[v52]);
                  v52 += 2;
                }
                while ( v52 != 2LL * (unsigned int)v66 );
              }
              if ( v65 != &ptr && v65 )
              {
                sub_186B220(v65);
                v42 = (unsigned int)v66;
              }
              v65 = p_ptr;
              HIDWORD(v66) *= 2;
            }
            else
            {
              p_ptr = v65;
            }
            v43 = &p_ptr[2 * v42];
            *((_DWORD *)v43 + 2) = 0;
            v33 = (unsigned int)v66;
            *v43 = v16;
            v34 = v66 + 1;
LABEL_43:
            LODWORD(v66) = v34;
            LODWORD(v10) = v34 - 1;
            v4 = p_ptr[2 * v33];
            goto LABEL_8;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v16 + 24) )
          {
            v59 = (unsigned int)v66;
            if ( (unsigned int)v66 >= HIDWORD(v66) )
            {
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v66)));
              v61 = 0;
              v59 = (unsigned int)v66;
              if ( (_DWORD)v66 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v61] = _mm_loadu_si128((const __m128i *)&v65[v61]);
                  v61 += 2;
                }
                while ( 2LL * (unsigned int)v66 != v61 );
              }
              if ( v65 && v65 != &ptr )
              {
                sub_186B220(v65);
                v59 = (unsigned int)v66;
              }
              v65 = p_ptr;
              HIDWORD(v66) *= 2;
            }
            else
            {
              p_ptr = v65;
            }
            v60 = &p_ptr[2 * v59];
            *((_DWORD *)v60 + 2) = 0;
            v33 = (unsigned int)v66;
            *v60 = v16;
            v34 = v66 + 1;
            goto LABEL_43;
          }
          v40 = *(int **)(*(_QWORD *)(v16 + 16) + 24LL);
          if ( v40 )
            v41 = *v40;
          else
            v41 = -1;
          if ( *(_DWORD *)(a1 + 24) == v41 )
            sub_C2A48();
        }
        v14 = *((_DWORD *)v12 + 2);
LABEL_22:
        if ( v14 >= v13 )
        {
          LODWORD(v10) = v66 - 1;
          break;
        }
      }
    }
    LODWORD(v66) = v10;
    v22 = *(int **)(*(_QWORD *)(v4 + 16) + 24LL);
    if ( v22 )
      v23 = *v22;
    else
      v23 = -1;
    if ( *(_DWORD *)(a1 + 24) == v23 )
      sub_C2A48();
    p_ptr = v65;
    if ( (_DWORD)v10 )
    {
LABEL_30:
      v10 = (unsigned int)(v10 - 1);
      v4 = p_ptr[2 * v10];
      continue;
    }
    break;
  }
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

