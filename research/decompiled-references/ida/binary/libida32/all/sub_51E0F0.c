__int64 __fastcall sub_51E0F0(_QWORD *a1, __int64 *a2, _QWORD **a3)
{
  __int64 result; // rax
  char v7; // cl
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  _DWORD *v11; // rsi
  __int64 v12; // rdi
  _DWORD *v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // r15
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  _DWORD *v31; // rdx
  unsigned __int64 v32; // r13
  _DWORD *v33; // rsi
  __int64 v34; // rdi
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rbx
  _QWORD *v37; // r14
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  _DWORD *v40; // rsi
  __int64 v41; // rdi
  _DWORD *v42; // rdx
  int v43; // r13d
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  _DWORD *v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx

  result = *((unsigned __int16 *)a3 + 34);
  if ( (~(unsigned __int8)*((_WORD *)a3 + 34) & 0x70) != 0 )
  {
    v7 = *((_BYTE *)a3 + 70);
    v8 = v7 & 0xF;
    if ( (v7 & 0xFu) <= 9 || (result & 1) == 0 )
      return result;
    if ( v8 == 12 )
    {
      v37 = *a3;
      v38 = (*a3)[4];
      if ( v38 > 0xFF )
      {
        v39 = v38 >> 9;
        if ( v39 >= a1[1] )
          goto LABEL_98;
        result = 5 * v39;
        ++*(_DWORD *)(*a1 + 40 * v39 + 28);
        v40 = (_DWORD *)*a2;
        v41 = a2[1];
        v42 = &v40[v41];
        if ( v40 == v42 )
          goto LABEL_92;
        result = (__int64)v40;
        while ( (_DWORD)v39 != *(_DWORD *)result )
        {
          result += 4;
          if ( v42 == (_DWORD *)result )
            goto LABEL_92;
        }
        if ( v42 == (_DWORD *)result )
        {
LABEL_92:
          v57 = v41 + 1;
          if ( a2[2] < v57 )
          {
            result = qvector_reserve(a2, v40, v57, 4);
            v61 = a2[1];
            *a2 = result;
            v42 = (_DWORD *)(result + 4 * v61);
          }
          *v42 = v39;
          ++a2[1];
        }
      }
      if ( v37[1] )
      {
        v43 = 0;
        result = 0;
        do
        {
          v44 = *(_QWORD *)(*v37 + 80 * result + 64);
          if ( v44 > 0xFF )
          {
            v45 = v44 >> 9;
            if ( v45 >= a1[1] )
              goto LABEL_98;
            ++*(_DWORD *)(*a1 + 40 * v45 + 28);
            v46 = a2[1];
            v47 = (_DWORD *)(*a2 + 4 * v46);
            if ( (_DWORD *)*a2 == v47 )
              goto LABEL_83;
            v48 = (_DWORD *)*a2;
            while ( (_DWORD)v45 != *v48 )
            {
              if ( v47 == ++v48 )
                goto LABEL_83;
            }
            if ( v47 == v48 )
            {
LABEL_83:
              v49 = v46 + 1;
              if ( a2[2] < v49 )
              {
                v51 = qvector_reserve(a2, *a2, v49, 4);
                v52 = a2[1];
                *a2 = v51;
                v47 = (_DWORD *)(v51 + 4 * v52);
              }
              *v47 = v45;
              ++a2[1];
            }
          }
          result = ++v43;
        }
        while ( (unsigned __int64)v43 < v37[1] );
      }
    }
    else
    {
      if ( v8 <= 0xCu )
      {
        if ( v8 == 10 )
        {
          if ( (unsigned __int64)*a3 > 0xFF )
          {
            v32 = (unsigned __int64)*a3 >> 9;
            if ( v32 >= a1[1] )
              goto LABEL_98;
            result = 5 * v32;
            ++*(_DWORD *)(*a1 + 40 * v32 + 28);
            v33 = (_DWORD *)*a2;
            v34 = a2[1];
            v35 = &v33[v34];
            if ( v33 == v35 )
              goto LABEL_95;
            result = (__int64)v33;
            while ( (_DWORD)v32 != *(_DWORD *)result )
            {
              result += 4;
              if ( v35 == (_DWORD *)result )
                goto LABEL_95;
            }
            if ( v35 == (_DWORD *)result )
            {
LABEL_95:
              v58 = v34 + 1;
              if ( a2[2] < v58 )
              {
                result = qvector_reserve(a2, v33, v58, 4);
                v62 = a2[1];
                *a2 = result;
                v35 = (_DWORD *)(result + 4 * v62);
              }
              *v35 = v32;
              ++a2[1];
            }
          }
          if ( *((char *)a3 + 29) >= 0 )
            return result;
          v36 = (unsigned __int64)a3[2];
          if ( v36 <= 0xFF )
            return result;
          v10 = v36 >> 9;
          if ( v10 < a1[1] )
          {
            result = 5 * v10;
            ++*(_DWORD *)(*a1 + 40 * v10 + 28);
            v11 = (_DWORD *)*a2;
            v12 = a2[1];
            v13 = (_DWORD *)(*a2 + 4 * v12);
            if ( (_DWORD *)*a2 != v13 )
            {
              result = *a2;
              while ( (_DWORD)v10 != *(_DWORD *)result )
              {
                result += 4;
                if ( v13 == (_DWORD *)result )
                  goto LABEL_14;
              }
LABEL_13:
              if ( v13 != (_DWORD *)result )
                return result;
            }
LABEL_14:
            v14 = v12 + 1;
            if ( a2[2] < v14 )
            {
              result = qvector_reserve(a2, v11, v14, 4);
              v60 = a2[1];
              *a2 = result;
              v13 = (_DWORD *)(result + 4 * v60);
            }
            *v13 = v10;
            ++a2[1];
            return result;
          }
        }
        else
        {
          v9 = (unsigned __int64)*a3;
          if ( v9 <= 0xFF )
            return result;
          v10 = v9 >> 9;
          if ( v10 < a1[1] )
          {
            result = 5 * v10;
            ++*(_DWORD *)(*a1 + 40 * v10 + 28);
            v11 = (_DWORD *)*a2;
            v12 = a2[1];
            v13 = &v11[v12];
            if ( v11 != v13 )
            {
              result = (__int64)v11;
              while ( (_DWORD)v10 != *(_DWORD *)result )
              {
                result += 4;
                if ( v13 == (_DWORD *)result )
                  goto LABEL_14;
              }
              goto LABEL_13;
            }
            goto LABEL_14;
          }
        }
LABEL_98:
        sub_5192C0();
      }
      if ( v8 == 13 && (v7 & 0x20) == 0 )
      {
        v19 = **a3;
        for ( i = v19 + ((*a3)[1] << 7); v19 != i; v19 += 128 )
        {
          v21 = *(_QWORD *)(v19 + 64);
          if ( v21 > 0xFF )
          {
            v22 = v21 >> 9;
            if ( v22 >= a1[1] )
              goto LABEL_98;
            ++*(_DWORD *)(*a1 + 40 * v22 + 28);
            v23 = a2[1];
            v24 = (_DWORD *)(*a2 + 4 * v23);
            if ( (_DWORD *)*a2 == v24 )
              goto LABEL_86;
            v25 = (_DWORD *)*a2;
            while ( (_DWORD)v22 != *v25 )
            {
              if ( v24 == ++v25 )
                goto LABEL_86;
            }
            if ( v25 == v24 )
            {
LABEL_86:
              v50 = v23 + 1;
              if ( a2[2] < v50 )
              {
                v55 = qvector_reserve(a2, *a2, v50, 4);
                v56 = a2[1];
                *a2 = v55;
                v24 = (_DWORD *)(v55 + 4 * v56);
              }
              *v24 = v22;
              ++a2[1];
            }
          }
        }
        result = (__int64)a3[1];
        if ( result )
        {
          v26 = *(_QWORD *)result;
          v27 = *(_QWORD *)result + (*(_QWORD *)(result + 8) << 7);
          if ( v27 != *(_QWORD *)result )
          {
            do
            {
              v28 = *(_QWORD *)(v26 + 64);
              if ( v28 > 0xFF )
              {
                v29 = v28 >> 9;
                if ( v29 >= a1[1] )
                  goto LABEL_98;
                result = 5 * v29;
                ++*(_DWORD *)(*a1 + 40 * v29 + 28);
                v30 = a2[1];
                v31 = (_DWORD *)(*a2 + 4 * v30);
                if ( (_DWORD *)*a2 == v31 )
                  goto LABEL_89;
                result = *a2;
                while ( (_DWORD)v29 != *(_DWORD *)result )
                {
                  result += 4;
                  if ( v31 == (_DWORD *)result )
                    goto LABEL_89;
                }
                if ( (_DWORD *)result == v31 )
                {
LABEL_89:
                  v53 = v30 + 1;
                  if ( a2[2] < v53 )
                  {
                    result = qvector_reserve(a2, *a2, v53, 4);
                    v59 = a2[1];
                    *a2 = result;
                    v31 = (_DWORD *)(result + 4 * v59);
                  }
                  *v31 = v29;
                  ++a2[1];
                }
              }
              v26 += 128;
            }
            while ( v26 != v27 );
          }
        }
      }
    }
  }
  else
  {
    if ( (unsigned __int64)*a3 <= 0xFF )
      return result;
    v15 = (unsigned __int64)*a3 >> 9;
    if ( v15 >= a1[1] )
      goto LABEL_98;
    result = 5 * v15;
    ++*(_DWORD *)(*a1 + 40 * v15 + 28);
    v16 = a2[1];
    v17 = (_DWORD *)(*a2 + 4 * v16);
    if ( (_DWORD *)*a2 == v17 )
      goto LABEL_25;
    result = *a2;
    while ( (_DWORD)v15 != *(_DWORD *)result )
    {
      result += 4;
      if ( v17 == (_DWORD *)result )
        goto LABEL_25;
    }
    if ( v17 == (_DWORD *)result )
    {
LABEL_25:
      v18 = v16 + 1;
      if ( a2[2] < v18 )
      {
        result = qvector_reserve(a2, *a2, v18, 4);
        v54 = a2[1];
        *a2 = result;
        v17 = (_DWORD *)(result + 4 * v54);
      }
      *v17 = v15;
      ++a2[1];
    }
  }
  return result;
}

