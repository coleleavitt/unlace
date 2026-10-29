int *__fastcall sub_E0FC00(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  int v5; // r12d
  __int64 v6; // rbp
  int *result; // rax
  int v8; // edx
  __int64 *p_ptr; // rdx
  __int64 v10; // rcx
  __int16 v11; // si
  __int64 *v12; // r14
  unsigned int v13; // ebp
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // ecx
  int v18; // esi
  int *v19; // rdi
  int v20; // r10d
  __int16 v21; // dx
  unsigned int v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // edi
  unsigned int *v25; // r9
  bool v26; // cc
  unsigned int v27; // ebp
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  unsigned int v42; // [rsp+10h] [rbp-158h]
  unsigned int *v43; // [rsp+10h] [rbp-158h]
  unsigned int *v44; // [rsp+10h] [rbp-158h]
  __int64 *v45; // [rsp+10h] [rbp-158h]
  __int64 *v46; // [rsp+10h] [rbp-158h]
  __int64 *v47; // [rsp+18h] [rbp-150h]
  __int64 *v48; // [rsp+20h] [rbp-148h]
  __int64 v49; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v51; // [rsp+38h] [rbp-130h]

  v3 = (__int64)a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = (int *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
    }
    else
    {
      result = (int *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
      if ( (v5 & *result) != 0 )
        return result;
    }
    *result = v5 | v8;
  }
  p_ptr = &ptr;
  ptr = v3;
  LODWORD(v10) = 0;
  v48 = &ptr;
  v51 = 0;
  v49 = 0x1000000001LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_WORD *)(v3 + 4);
      v12 = &p_ptr[2 * (unsigned int)v10];
      if ( v11 == 1 )
        goto LABEL_27;
      if ( v11 != 2 )
        break;
      v22 = *(_DWORD *)(v3 + 72);
      v23 = *((_DWORD *)v12 + 2);
      v24 = v22 + *(_DWORD *)(v3 + 76) + 1;
      if ( v23 >= v24 )
      {
LABEL_26:
        LODWORD(v10) = v49 - 1;
LABEL_27:
        LODWORD(v49) = v10;
        if ( !(_DWORD)v10 )
          goto LABEL_31;
        goto LABEL_28;
      }
      if ( !v23 )
      {
        v25 = *(unsigned int **)(v3 + 24);
        goto LABEL_37;
      }
      while ( 1 )
      {
        v35 = v23 - 1;
        if ( v22 < v23 )
          v35 = (unsigned int)v35 - v22;
        v25 = *(unsigned int **)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v35 + 80);
LABEL_37:
        ++v23;
        v26 = v25[2] <= 1;
        *((_DWORD *)v12 + 2) = v23;
        if ( v26 )
          break;
        v27 = *v25;
        if ( *v25 >= *(_DWORD *)(a2 + 8) )
        {
          v43 = v25;
          sub_186B510(a2 + 8, v27 + 1, 0);
          v28 = *(_QWORD *)(a2 + 16);
          v25 = v43;
LABEL_40:
          *(_DWORD *)(v28 + 4LL * (v27 >> 5)) |= 1 << v27;
          break;
        }
        v28 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v28 + 4LL * (v27 >> 5)) & (1 << v27)) == 0 )
          goto LABEL_40;
        if ( v23 >= v24 )
          goto LABEL_26;
        v22 = *(_DWORD *)(v3 + 72);
      }
      v29 = (unsigned int)v49;
      if ( (unsigned int)v49 >= HIDWORD(v49) )
      {
        v44 = v25;
        p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v49)));
        v36 = 0;
        v25 = v44;
        v29 = (unsigned int)v49;
        if ( (_DWORD)v49 )
        {
          do
          {
            *(__m128i *)&p_ptr[v36] = _mm_loadu_si128((const __m128i *)&v48[v36]);
            v36 += 2;
          }
          while ( v36 != 2LL * (unsigned int)v49 );
        }
        if ( v48 != &ptr && v48 )
        {
          v47 = p_ptr;
          sub_186B220(v48);
          v29 = (unsigned int)v49;
          p_ptr = v47;
          v25 = v44;
        }
        v48 = p_ptr;
        HIDWORD(v49) *= 2;
      }
      else
      {
        p_ptr = v48;
      }
      v30 = &p_ptr[2 * v29];
      *((_DWORD *)v30 + 2) = 0;
      v31 = (unsigned int)v49;
      *v30 = (__int64)v25;
      v32 = v49 + 1;
LABEL_44:
      LODWORD(v49) = v32;
      LODWORD(v10) = v32 - 1;
      v3 = p_ptr[2 * v31];
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = *(_DWORD *)(v3 + 24);
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(_QWORD *)(v3 + 8 * v15 + 32);
        *((_DWORD *)v12 + 2) = v14;
        if ( *(_DWORD *)(v16 + 8) > 1u )
        {
          v17 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 < *(_DWORD *)(a2 + 8) )
          {
            v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
            v20 = *v19;
            v18 = 1 << v17;
            if ( ((1 << v17) & *v19) != 0 )
              goto LABEL_21;
          }
          else
          {
            v42 = *(_DWORD *)v16;
            sub_186B510(a2 + 8, v17 + 1, 0);
            v18 = 1 << v42;
            v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v42 >> 5));
            v20 = *v19;
          }
          *v19 = v20 | v18;
        }
        v21 = *(_WORD *)(v16 + 4);
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v33 = (unsigned int)v49;
            if ( (unsigned int)v49 >= HIDWORD(v49) )
            {
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v49)));
              v37 = 0;
              v33 = (unsigned int)v49;
              if ( (_DWORD)v49 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v37] = _mm_loadu_si128((const __m128i *)&v48[v37]);
                  v37 += 2;
                }
                while ( v37 != 2LL * (unsigned int)v49 );
              }
              if ( v48 != &ptr && v48 )
              {
                v45 = p_ptr;
                sub_186B220(v48);
                v33 = (unsigned int)v49;
                p_ptr = v45;
              }
              v48 = p_ptr;
              HIDWORD(v49) *= 2;
            }
            else
            {
              p_ptr = v48;
            }
            v34 = &p_ptr[2 * v33];
            *((_DWORD *)v34 + 2) = 0;
            v31 = (unsigned int)v49;
            *v34 = v16;
            v32 = v49 + 1;
            goto LABEL_44;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v16 + 24) )
          {
            v38 = (unsigned int)v49;
            if ( (unsigned int)v49 >= HIDWORD(v49) )
            {
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v49)));
              v40 = 0;
              v38 = (unsigned int)v49;
              if ( (_DWORD)v49 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v40] = _mm_loadu_si128((const __m128i *)&v48[v40]);
                  v40 += 2;
                }
                while ( v40 != 2LL * (unsigned int)v49 );
              }
              if ( v48 != &ptr && v48 )
              {
                v46 = p_ptr;
                sub_186B220(v48);
                v38 = (unsigned int)v49;
                p_ptr = v46;
              }
              v48 = p_ptr;
              HIDWORD(v49) *= 2;
            }
            else
            {
              p_ptr = v48;
            }
            v39 = &p_ptr[2 * v38];
            *v39 = v16;
            *((_DWORD *)v39 + 2) = 0;
            v31 = (unsigned int)v49;
            v32 = v49 + 1;
            goto LABEL_44;
          }
          sub_E0E9F0(a1, v16);
        }
        v14 = *((_DWORD *)v12 + 2);
LABEL_21:
        if ( v14 >= v13 )
        {
          LODWORD(v10) = v49 - 1;
          break;
        }
      }
    }
    LODWORD(v49) = v10;
    sub_E0E9F0(a1, v3);
    LODWORD(v10) = v49;
    p_ptr = v48;
    if ( !(_DWORD)v49 )
      break;
LABEL_28:
    v10 = (unsigned int)(v10 - 1);
    v3 = p_ptr[2 * v10];
  }
LABEL_31:
  result = (int *)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return (int *)sub_186B220(p_ptr);
  }
  return result;
}

