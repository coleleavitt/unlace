__int64 __fastcall sub_3DEAA0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r12
  unsigned int v5; // ecx
  __int64 *p_ptr; // rsi
  unsigned int **v7; // rdx
  __int16 v8; // cx
  __int64 *v9; // r13
  unsigned int v10; // ebp
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r15
  __int16 v14; // cx
  __int64 result; // rax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // edi
  unsigned int *v19; // r15
  __int64 v20; // r10
  __int64 v21; // rdx
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 *v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rbp
  __int64 *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rdx
  __m128i v37; // [rsp+20h] [rbp-158h] BYREF
  void *v38; // [rsp+30h] [rbp-148h] BYREF
  __int64 v39; // [rsp+38h] [rbp-140h]
  __int64 ptr; // [rsp+40h] [rbp-138h] BYREF
  int v41; // [rsp+48h] [rbp-130h]

  v3 = (__int64)a3;
  if ( a3[2] > 1 )
  {
    v5 = *a3;
    if ( *a3 < *(_DWORD *)(a2 + 8) )
    {
      v34 = *(_QWORD *)(a2 + 16);
      v35 = v5 >> 5;
      result = *(_DWORD *)(v34 + 4 * v35) & (unsigned int)(1 << v5);
      if ( (*(_DWORD *)(v34 + 4 * v35) & (1 << v5)) != 0 )
        return result;
    }
    sub_3D2BC0(a2, (unsigned int *)v3);
  }
  p_ptr = &ptr;
  ptr = v3;
  LODWORD(v7) = 0;
  v38 = &ptr;
  v41 = 0;
  v39 = 0x1000000001LL;
LABEL_5:
  while ( 2 )
  {
    v8 = *(_WORD *)(v3 + 4);
    v9 = &p_ptr[2 * (unsigned int)v7];
    if ( v8 == 1 )
      goto LABEL_22;
    if ( v8 == 2 )
    {
      v16 = *(_DWORD *)(v3 + 72);
      v17 = *((_DWORD *)v9 + 2);
      v18 = v16 + *(_DWORD *)(v3 + 76) + 1;
      if ( v17 < v18 )
      {
        if ( v17 )
        {
          while ( 1 )
          {
            v20 = v17 - 1;
            if ( v16 < v17 )
              v20 = (unsigned int)v20 - v16;
            ++v17;
            v19 = *(unsigned int **)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v20 + 80);
            *((_DWORD *)v9 + 2) = v17;
            if ( v19[2] <= 1 )
              goto LABEL_40;
LABEL_33:
            if ( *v19 >= *(_DWORD *)(a2 + 8)
              || (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*v19 >> 5)) & (1 << *v19)) == 0 )
            {
              break;
            }
            if ( v17 >= v18 )
              goto LABEL_21;
            v16 = *(_DWORD *)(v3 + 72);
          }
          sub_3D2BC0(a2, v19);
          v21 = (unsigned int)v39;
          v22 = HIDWORD(v39);
          if ( (unsigned int)v39 < HIDWORD(v39) )
            goto LABEL_41;
        }
        else
        {
          v19 = *(unsigned int **)(v3 + 24);
          v17 = 1;
          *((_DWORD *)v9 + 2) = 1;
          if ( v19[2] > 1 )
            goto LABEL_33;
LABEL_40:
          v21 = (unsigned int)v39;
          v22 = HIDWORD(v39);
          if ( (unsigned int)v39 < HIDWORD(v39) )
          {
LABEL_41:
            p_ptr = (__int64 *)v38;
LABEL_42:
            v7 = (unsigned int **)&p_ptr[2 * v21];
            *((_DWORD *)v7 + 2) = 0;
            v23 = (unsigned int)v39;
            *v7 = v19;
            LODWORD(v39) = v23 + 1;
            LODWORD(v7) = v23;
            goto LABEL_43;
          }
        }
        v24 = (unsigned int)(2 * v22);
        p_ptr = (__int64 *)sub_186B270(16 * v24);
        v25 = (__int64 *)v38;
        v26 = 0;
        v21 = (unsigned int)v39;
        v27 = 16LL * (unsigned int)v39;
        if ( (_DWORD)v39 )
        {
          do
          {
            *(__m128i *)&p_ptr[v26 / 8] = _mm_loadu_si128((const __m128i *)&v25[v26 / 8]);
            v26 += 16LL;
          }
          while ( v26 != v27 );
        }
        if ( v25 != &ptr && v25 )
        {
          sub_186B220(v25);
          v21 = (unsigned int)v39;
        }
        v38 = p_ptr;
        HIDWORD(v39) = v24;
        goto LABEL_42;
      }
LABEL_21:
      LODWORD(v7) = v39 - 1;
LABEL_22:
      LODWORD(v39) = (_DWORD)v7;
      if ( !(_DWORD)v7 )
        break;
      goto LABEL_23;
    }
    if ( v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v10 = *(_DWORD *)(v3 + 24);
    v11 = *((_DWORD *)v9 + 2);
    if ( v11 < v10 )
    {
      while ( 1 )
      {
        v12 = v11++;
        v13 = *(_QWORD *)(v3 + 8 * v12 + 32);
        *((_DWORD *)v9 + 2) = v11;
        if ( *(_DWORD *)(v13 + 8) > 1u )
        {
          if ( *(_DWORD *)v13 < *(_DWORD *)(a2 + 8)
            && (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*(_DWORD *)v13 >> 5)) & (1 << *(_DWORD *)v13)) != 0 )
          {
            goto LABEL_18;
          }
          sub_3D2BC0(a2, (unsigned int *)v13);
        }
        v14 = *(_WORD *)(v13 + 4);
        if ( v14 != 1 )
        {
          if ( v14 == 2 )
          {
            v28 = (unsigned int)v39;
            if ( (unsigned int)v39 >= HIDWORD(v39) )
            {
              v30 = (unsigned int)(2 * HIDWORD(v39));
              p_ptr = (__int64 *)sub_186B270(16 * v30);
              v31 = (__int64 *)v38;
              v32 = 0;
              v28 = (unsigned int)v39;
              v33 = 16LL * (unsigned int)v39;
              if ( (_DWORD)v39 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v32 / 8] = _mm_loadu_si128((const __m128i *)&v31[v32 / 8]);
                  v32 += 16LL;
                }
                while ( v33 != v32 );
              }
              if ( v31 != &ptr && v31 )
              {
                sub_186B220(v31);
                v28 = (unsigned int)v39;
              }
              v38 = p_ptr;
              HIDWORD(v39) = v30;
            }
            else
            {
              p_ptr = (__int64 *)v38;
            }
            v29 = &p_ptr[2 * v28];
            *((_DWORD *)v29 + 2) = 0;
            v23 = (unsigned int)v39;
            *v29 = v13;
            LODWORD(v39) = v23 + 1;
            LODWORD(v7) = v23;
LABEL_43:
            v3 = p_ptr[2 * v23];
            goto LABEL_5;
          }
          if ( v14 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v13 + 24) )
          {
            v37.m128i_i64[0] = v13;
            v37.m128i_i32[2] = 0;
            sub_3DCD80((char **)&v38, &v37);
            p_ptr = (__int64 *)v38;
            LODWORD(v7) = v39 - 1;
            v23 = (unsigned int)(v39 - 1);
            goto LABEL_43;
          }
        }
        v11 = *((_DWORD *)v9 + 2);
LABEL_18:
        if ( v11 >= v10 )
        {
          LODWORD(v7) = v39 - 1;
          break;
        }
      }
    }
    LODWORD(v39) = (_DWORD)v7;
    sub_3DB580(a1, v3);
    LODWORD(v7) = v39;
    p_ptr = (__int64 *)v38;
    if ( (_DWORD)v39 )
    {
LABEL_23:
      v7 = (unsigned int **)(unsigned int)((_DWORD)v7 - 1);
      v3 = p_ptr[2 * (_QWORD)v7];
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

