_QWORD *__fastcall sub_1178A10(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  __int64 v8; // rdx
  void **v9; // rbx
  void **v10; // r15
  char *v11; // r14
  void **v12; // rbp
  void **v13; // rbp
  void **v14; // rbx
  __m128i *v15; // r14
  int v16; // eax
  __int8 *v17; // [rsp+28h] [rbp-460h]
  int v18; // [rsp+28h] [rbp-460h]
  __int64 v19; // [rsp+38h] [rbp-450h] BYREF
  void *v20; // [rsp+40h] [rbp-448h] BYREF
  __int64 v21; // [rsp+48h] [rbp-440h]
  _BYTE v22[16]; // [rsp+50h] [rbp-438h] BYREF
  char v23; // [rsp+60h] [rbp-428h]
  void *ptr; // [rsp+70h] [rbp-418h] BYREF
  __int64 v25; // [rsp+78h] [rbp-410h]
  _BYTE v26[480]; // [rsp+80h] [rbp-408h] BYREF
  void **v27; // [rsp+260h] [rbp-228h] BYREF
  unsigned int v28; // [rsp+268h] [rbp-220h]
  __int64 v29; // [rsp+270h] [rbp-218h] BYREF

  if ( (unsigned __int8)sub_21B7850(a3, 3091, 3018, 1) )
  {
    v5 = sub_21B7BC0(a3, 2260, &byte_22F0C30, 0);
    v7 = (_BYTE *)sub_1029840(a2 + 16, v5, v6);
    ptr = v26;
    v25 = 0xC00000000LL;
    if ( v7 )
    {
      v20 = v22;
      sub_1177EC0(&v20, v7, (__int64)&v7[v8]);
    }
    else
    {
      v22[0] = 0;
      v20 = v22;
      v21 = 0;
    }
    sub_11767F0(&v27, a2, a3, (__int64)&v20, 1);
    if ( v20 != v22 )
      operator delete(v20);
    v9 = &v27[5 * v28];
    if ( v27 != v9 )
    {
      v10 = v27;
      do
      {
        while ( 1 )
        {
          v20 = v22;
          sub_1177F80(&v20, *v10, (__int64)v10[1] + (_QWORD)*v10);
          v23 = *((_BYTE *)v10 + 32);
          if ( HIDWORD(v25) <= (unsigned int)v25 )
          {
            v15 = (__m128i *)sub_2237400(&ptr, v26, 0, 40, &v19);
            v17 = &v15->m128i_i8[40 * (unsigned int)v25];
            *(_QWORD *)v17 = v17 + 16;
            sub_1177F80(v17, v20, (__int64)v20 + v21);
            v17[32] = v23;
            sub_1171470((__int64)&ptr, v15);
            v16 = v19;
            if ( ptr != v26 )
            {
              v18 = v19;
              free(ptr);
              v16 = v18;
            }
            ptr = v15;
            HIDWORD(v25) = v16;
            LODWORD(v25) = v25 + 1;
          }
          else
          {
            v11 = (char *)ptr + 40 * (unsigned int)v25;
            *(_QWORD *)v11 = v11 + 16;
            sub_1177F80(v11, v20, (__int64)v20 + v21);
            LODWORD(v25) = v25 + 1;
            v11[32] = v23;
          }
          if ( v20 == v22 )
            break;
          operator delete(v20);
          v10 += 5;
          if ( v9 == v10 )
            goto LABEL_14;
        }
        v10 += 5;
      }
      while ( v9 != v10 );
LABEL_14:
      v12 = v27;
      v9 = &v27[5 * v28];
      if ( v27 != v9 )
      {
        do
        {
          while ( 1 )
          {
            v9 -= 5;
            if ( *v9 == v9 + 2 )
              break;
            operator delete(*v9);
            if ( v12 == v9 )
              goto LABEL_17;
          }
        }
        while ( v12 != v9 );
LABEL_17:
        v9 = v27;
      }
    }
    if ( v9 != (void **)&v29 )
      free(v9);
    *a1 = a1 + 2;
    a1[1] = 0xC00000000LL;
    if ( (_DWORD)v25 )
    {
      sub_1178510((__int64)a1, (__int64)&ptr);
      v13 = (void **)ptr;
      v14 = (void **)((char *)ptr + 40 * (unsigned int)v25);
      while ( v13 != v14 )
      {
        while ( 1 )
        {
          v14 -= 5;
          if ( *v14 == v14 + 2 )
            break;
          operator delete(*v14);
          if ( v13 == v14 )
            goto LABEL_21;
        }
      }
    }
LABEL_21:
    if ( ptr != v26 )
      free(ptr);
  }
  else
  {
    *a1 = a1 + 2;
    a1[1] = 0xC00000000LL;
  }
  return a1;
}
