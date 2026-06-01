__int64 __fastcall sub_421C80(__int64 a1, _DWORD *a2)
{
  void *v2; // rax
  void *exception; // rax
  _DWORD *v4; // r15
  int v6; // r12d
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // edx
  _QWORD *v10; // rdx
  __int16 v11; // cx
  _QWORD *v12; // r13
  unsigned int v13; // ebp
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int *v16; // r14
  unsigned int v17; // ecx
  int v18; // eax
  int *v19; // rsi
  int v20; // edi
  __int16 v21; // ax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  bool v25; // cc
  unsigned int v26; // ebp
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned int **v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rbp
  _QWORD *v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r10
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rcx
  unsigned int **v40; // rax
  __int64 v41; // rbp
  char *v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  unsigned int v45; // [rsp+0h] [rbp-168h]
  _QWORD *v46; // [rsp+0h] [rbp-168h]
  _QWORD *v47; // [rsp+0h] [rbp-168h]
  _BYTE v48[4]; // [rsp+1Ch] [rbp-14Ch] BYREF
  void *v49; // [rsp+20h] [rbp-148h]
  __int64 v50; // [rsp+28h] [rbp-140h]
  _DWORD *v51; // [rsp+30h] [rbp-138h] BYREF
  int v52; // [rsp+38h] [rbp-130h]

  v4 = a2;
  if ( a2[2] > 1u )
  {
    v6 = 1 << *a2;
    v7 = 4LL * (*a2 >> 5);
    if ( *a2 >= *(_DWORD *)(a1 + 8) )
    {
      sub_186B510(a1 + 8, (unsigned int)(*a2 + 1), 0);
      result = v7 + *(_QWORD *)(a1 + 16);
      v9 = *(_DWORD *)result;
    }
    else
    {
      result = v7 + *(_QWORD *)(a1 + 16);
      v9 = *(_DWORD *)result;
      if ( (v6 & *(_DWORD *)result) != 0 )
        return result;
    }
    *(_DWORD *)result = v6 | v9;
  }
  v10 = &v51;
  v51 = a2;
  v49 = &v51;
  v52 = 0;
  v50 = 0x1000000001LL;
  for ( result = 0; ; v4 = (_DWORD *)v10[2 * result] )
  {
    while ( 1 )
    {
      v11 = *((_WORD *)v4 + 2);
      v12 = &v10[2 * (unsigned int)result];
      if ( v11 == 1 )
        goto LABEL_28;
      if ( v11 != 2 )
        break;
      v22 = v4[18];
      v23 = *((_DWORD *)v12 + 2);
      v24 = v22 + v4[19] + 1;
      if ( v23 >= v24 )
      {
LABEL_27:
        result = (unsigned int)(v50 - 1);
LABEL_28:
        LODWORD(v50) = result;
        if ( !(_DWORD)result )
          goto LABEL_32;
        goto LABEL_29;
      }
      if ( !v23 )
      {
        v16 = *((unsigned int **)v4 + 3);
        goto LABEL_38;
      }
      while ( 1 )
      {
        v36 = v23 - 1;
        if ( v22 < v23 )
          v36 = (unsigned int)v36 - v22;
        v16 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v36];
LABEL_38:
        ++v23;
        v25 = v16[2] <= 1;
        *((_DWORD *)v12 + 2) = v23;
        if ( v25 )
          break;
        v26 = *v16;
        if ( *v16 >= *(_DWORD *)(a1 + 8) )
        {
          sub_186B510(a1 + 8, v26 + 1, 0);
          v27 = *(_QWORD *)(a1 + 16);
LABEL_41:
          *(_DWORD *)(v27 + 4LL * (v26 >> 5)) |= 1 << v26;
          break;
        }
        v27 = *(_QWORD *)(a1 + 16);
        if ( (*(_DWORD *)(v27 + 4LL * (v26 >> 5)) & (1 << v26)) == 0 )
          goto LABEL_41;
        if ( v23 >= v24 )
          goto LABEL_27;
        v22 = v4[18];
      }
      v28 = (unsigned int)v50;
      if ( (unsigned int)v50 >= HIDWORD(v50) )
      {
        v32 = (unsigned int)(2 * HIDWORD(v50));
        v10 = (_QWORD *)sub_186B270(16 * v32);
        v33 = v49;
        v37 = 0;
        v28 = (unsigned int)v50;
        v38 = 16LL * (unsigned int)v50;
        if ( (_DWORD)v50 )
        {
          do
          {
            *(__m128i *)&v10[v37 / 8] = _mm_loadu_si128((const __m128i *)&v33[v37 / 8]);
            v37 += 16LL;
          }
          while ( v37 != v38 );
        }
        if ( v33 && v33 != &v51 )
          goto LABEL_54;
        goto LABEL_55;
      }
LABEL_43:
      v10 = v49;
LABEL_44:
      v29 = (unsigned int **)&v10[2 * v28];
      *v29 = v16;
      *((_DWORD *)v29 + 2) = 0;
      v30 = (unsigned int)v50;
      v31 = v50 + 1;
LABEL_45:
      LODWORD(v50) = v31;
      result = (unsigned int)(v31 - 1);
      v4 = (_DWORD *)v10[2 * v30];
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = v4[6];
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(unsigned int **)&v4[2 * v15 + 8];
        *((_DWORD *)v12 + 2) = v14;
        if ( v16[2] > 1 )
        {
          v17 = *v16;
          if ( *v16 < *(_DWORD *)(a1 + 8) )
          {
            v19 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v17 >> 5));
            v20 = *v19;
            v18 = 1 << v17;
            if ( ((1 << v17) & *v19) != 0 )
              goto LABEL_21;
          }
          else
          {
            v45 = *v16;
            sub_186B510(a1 + 8, v17 + 1, 0);
            v18 = 1 << v45;
            v19 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * (v45 >> 5));
            v20 = *v19;
          }
          *v19 = v20 | v18;
        }
        v21 = *((_WORD *)v16 + 2);
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v28 = (unsigned int)v50;
            if ( (unsigned int)v50 < HIDWORD(v50) )
              goto LABEL_43;
            v32 = (unsigned int)(2 * HIDWORD(v50));
            v10 = (_QWORD *)sub_186B270(16 * v32);
            v33 = v49;
            v34 = 0;
            v28 = (unsigned int)v50;
            v35 = 16LL * (unsigned int)v50;
            if ( (_DWORD)v50 )
            {
              do
              {
                *(__m128i *)&v10[v34 / 8] = _mm_loadu_si128((const __m128i *)&v33[v34 / 8]);
                v34 += 16LL;
              }
              while ( v34 != v35 );
            }
            if ( v33 != &v51 && v33 )
            {
LABEL_54:
              v46 = v10;
              sub_186B220(v33);
              v28 = (unsigned int)v50;
              v10 = v46;
            }
LABEL_55:
            v49 = v10;
            HIDWORD(v50) = v32;
            goto LABEL_44;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v16[6] )
          {
            v39 = (unsigned int)v50;
            if ( (unsigned int)v50 >= HIDWORD(v50) )
            {
              v41 = (unsigned int)(2 * HIDWORD(v50));
              v10 = (_QWORD *)sub_186B270(16 * v41);
              v42 = (char *)v49;
              v43 = 0;
              v39 = (unsigned int)v50;
              v44 = 16LL * (unsigned int)v50;
              if ( (_DWORD)v50 )
              {
                do
                {
                  *(__m128i *)&v10[v43 / 8] = _mm_loadu_si128((const __m128i *)&v42[v43]);
                  v43 += 16LL;
                }
                while ( v43 != v44 );
              }
              if ( v42 != (char *)&v51 && v42 )
              {
                v47 = v10;
                sub_186B220(v42);
                v39 = (unsigned int)v50;
                v10 = v47;
              }
              v49 = v10;
              HIDWORD(v50) = v41;
            }
            else
            {
              v10 = v49;
            }
            v40 = (unsigned int **)&v10[2 * v39];
            *((_DWORD *)v40 + 2) = 0;
            v30 = (unsigned int)v50;
            *v40 = v16;
            v31 = v30 + 1;
            goto LABEL_45;
          }
          if ( (unsigned __int8)sub_421A10(v16, v48) )
          {
            exception = __cxa_allocate_exception(1u);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::has_zk_const_ns::found, nullptr);
          }
        }
        v14 = *((_DWORD *)v12 + 2);
LABEL_21:
        if ( v14 >= v13 )
        {
          LODWORD(result) = v50 - 1;
          break;
        }
      }
    }
    LODWORD(v50) = result;
    if ( (unsigned __int8)sub_421A10(v4, v48) )
    {
      v2 = __cxa_allocate_exception(1u);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'spacer::has_zk_const_ns::found, nullptr);
    }
    result = (unsigned int)v50;
    v10 = v49;
    if ( !(_DWORD)v50 )
      break;
LABEL_29:
    result = (unsigned int)(result - 1);
  }
LABEL_32:
  if ( v10 )
  {
    result = (__int64)&v51;
    if ( v10 != &v51 )
      return sub_186B220(v10);
  }
  return result;
}

