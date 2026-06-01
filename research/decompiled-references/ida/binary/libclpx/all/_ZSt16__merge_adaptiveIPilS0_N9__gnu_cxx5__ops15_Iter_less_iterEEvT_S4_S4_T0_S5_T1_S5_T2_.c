__int64 __fastcall std::__merge_adaptive<int *,long,int *,__gnu_cxx::__ops::_Iter_less_iter>(
        char *dest,
        char *src,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7)
{
  char *v7; // r13
  unsigned int *v8; // r12
  char *v9; // rbx
  unsigned int *v10; // rbp
  __int64 result; // rax
  size_t v12; // r14
  unsigned int *v13; // rdx
  int v14; // ecx
  size_t v15; // rdx
  unsigned int *v16; // rsi
  char *v17; // rdi
  size_t v19; // r14
  char *v20; // rbx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  char *v23; // r10
  __int64 v24; // rdx
  char *v25; // r11
  __int64 v26; // rax
  char *v27; // rdi
  void *v28; // rbx
  signed __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // [rsp+0h] [rbp-68h]
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  char *srca; // [rsp+20h] [rbp-48h]
  char *v38; // [rsp+28h] [rbp-40h]

  v7 = dest;
  v8 = a3;
  v9 = src;
  v10 = a6;
  result = a7;
  if ( a5 <= a7 )
    result = a5;
  if ( a4 > result )
  {
    if ( a5 <= a7 )
    {
      v19 = (char *)a3 - src;
      if ( a3 != (unsigned int *)src )
        memmove(a6, src, (char *)a3 - src);
      result = (__int64)v10 + v19;
      if ( dest == src )
      {
        if ( (unsigned int *)result == v10 )
          return result;
        v15 = v19;
        v17 = (char *)v8 - v19;
      }
      else
      {
        if ( v10 == (unsigned int *)result )
          return result;
        v20 = src - 4;
        while ( 1 )
        {
          result -= 4;
          v21 = *(_DWORD *)result;
          v22 = *(_DWORD *)v20;
          --v8;
          if ( *(_DWORD *)result < *(_DWORD *)v20 )
            break;
LABEL_26:
          *v8 = v21;
          if ( v10 == (unsigned int *)result )
            return result;
        }
        while ( 1 )
        {
          *v8 = v22;
          if ( dest == v20 )
            break;
          v20 -= 4;
          v21 = *(_DWORD *)result;
          v22 = *(_DWORD *)v20;
          --v8;
          if ( *(_DWORD *)result >= *(_DWORD *)v20 )
            goto LABEL_26;
        }
        if ( (unsigned int *)(result + 4) == v10 )
          return result;
        v15 = result + 4 - (_QWORD)v10;
        v17 = (char *)v8 - v15;
      }
      v16 = v10;
      return (__int64)memmove(v17, v16, v15);
    }
    if ( a4 <= a5 )
    {
      v25 = dest;
      v29 = (src - dest) >> 2;
      v23 = &src[4 * (a5 / 2)];
      v34 = a5 / 2;
      while ( v29 > 0 )
      {
        v30 = v29 >> 1;
        v31 = &v25[4 * (v29 >> 1)];
        if ( *(_DWORD *)v31 > *(_DWORD *)v23 )
        {
          while ( v30 )
          {
            v33 = v30 >> 1;
            v31 = &v25[4 * (v30 >> 1)];
            if ( *(_DWORD *)v31 <= *(_DWORD *)v23 )
              goto LABEL_52;
            v30 >>= 1;
          }
          break;
        }
        v33 = v29 >> 1;
        v30 = v29;
LABEL_52:
        v25 = v31 + 4;
        v29 = v30 - v33 - 1;
      }
      v35 = (v25 - v7) >> 2;
    }
    else
    {
      v23 = src;
      v24 = ((char *)a3 - src) >> 2;
      v25 = &dest[4 * (a4 / 2)];
      v35 = a4 / 2;
      while ( v24 > 0 )
      {
        v26 = v24 >> 1;
        v27 = &v23[4 * (v24 >> 1)];
        if ( *(_DWORD *)v27 >= *(_DWORD *)v25 )
        {
          while ( v26 )
          {
            v32 = v26 >> 1;
            v27 = &v23[4 * (v26 >> 1)];
            if ( *(_DWORD *)v27 < *(_DWORD *)v25 )
              goto LABEL_51;
            v26 >>= 1;
          }
          break;
        }
        v32 = v24 >> 1;
        v26 = v24;
LABEL_51:
        v23 = v27 + 4;
        v24 = v26 - v32 - 1;
      }
      v34 = (v23 - v9) >> 2;
    }
    v38 = v23;
    srca = v25;
    v36 = a4 - v35;
    v28 = (void *)std::__rotate_adaptive<int *,int *,long>(v25, v9, (__int64)v23, a4 - v35, v34, (__int64)a6, a7);
    std::__merge_adaptive<int *,long,int *,__gnu_cxx::__ops::_Iter_less_iter>(
      v7,
      srca,
      (__int64)v28,
      v35,
      v34,
      (__int64)v10,
      a7,
      0);
    return std::__merge_adaptive<int *,long,int *,__gnu_cxx::__ops::_Iter_less_iter>(
             v28,
             v38,
             (__int64)v8,
             v36,
             a5 - v34,
             (__int64)v10,
             a7,
             0);
  }
  else
  {
    v12 = src - dest;
    if ( dest != src )
      result = (__int64)memmove(a6, dest, v12);
    v13 = (unsigned int *)((char *)v10 + v12);
    if ( (unsigned int *)((char *)v10 + v12) != v10 && src != (char *)v8 )
    {
      do
      {
        v14 = *(_DWORD *)v9;
        result = *v10;
        if ( (int)result > *(_DWORD *)v9 )
        {
          v9 += 4;
          *(_DWORD *)v7 = v14;
          v7 += 4;
          if ( v8 == (unsigned int *)v9 )
            break;
        }
        else
        {
          *(_DWORD *)v7 = result;
          ++v10;
          v7 += 4;
          if ( v8 == (unsigned int *)v9 )
            break;
        }
      }
      while ( v13 != v10 );
    }
    if ( v13 != v10 )
    {
      v15 = (char *)v13 - (char *)v10;
      v16 = v10;
      v17 = v7;
      return (__int64)memmove(v17, v16, v15);
    }
  }
  return result;
}

