__int64 __fastcall sub_3C6C0(void **a1, _QWORD *a2, __int64 a3, size_t a4, char a5)
{
  __int64 result; // rax
  bool v7; // cf
  size_t v8; // rdx
  unsigned __int64 v9; // rbp
  int v12; // r8d
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  _BYTE *v16; // rbp
  char v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  char *v20; // r14
  char *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-60h]
  int v28; // [rsp+14h] [rbp-54h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  char v30; // [rsp+27h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  result = 0;
  v7 = __CFADD__(a4, a3);
  v8 = a4 + a3;
  v9 = v7;
  if ( !v7 && a2[1] >= v8 )
  {
    a1[1] = nullptr;
    if ( a5 )
    {
      if ( (unsigned __int64)a1[2] < a4 )
      {
        *a1 = (void *)qvector_reserve(a1, *a1, a4, 1);
        goto LABEL_6;
      }
      if ( a4 )
      {
LABEL_6:
        v12 = 0;
        do
        {
          v17 = *(_BYTE *)(*a2 + v9 + a3);
          if ( !v17 )
            return 1;
          v16 = a1[1];
          if ( v16 )
          {
            v13 = (unsigned __int64)(v16 + 1);
            v14 = (__int64)a1[1];
            v15 = (__int64)*a1;
            --v16;
            if ( (unsigned __int64)a1[2] < v13 )
              goto LABEL_12;
          }
          else
          {
            v15 = (__int64)*a1;
            v14 = 1;
            v13 = 2;
            if ( (unsigned __int64)a1[2] < 2 )
            {
LABEL_12:
              v29 = v14;
              v28 = v12;
              v27 = v13;
              v18 = qvector_reserve(a1, v15, v13, 1);
              v14 = v29;
              v12 = v28;
              *a1 = (void *)v18;
              v13 = v27;
              v15 = v18;
            }
          }
          a1[1] = (void *)v13;
          ++v12;
          v16[v15] = v17;
          v9 = v12;
          *((_BYTE *)*a1 + v14) = 0;
        }
        while ( v12 < a4 );
      }
    }
    else
    {
      v30 = 0;
      v19 = (unsigned __int64)*a1;
      v20 = (char *)(a4 + 1);
      if ( a4 != -1 )
      {
        v21 = (char *)a1[2];
        if ( (unsigned __int64)&v30 < v19 || &v30 >= &v21[v19] )
        {
          if ( v21 >= v20
            || (v25 = qvector_reserve(a1, v19, v20, 1),
                v9 = (unsigned __int64)a1[1],
                *a1 = (void *)v25,
                v19 = v25,
                v9 < (unsigned __int64)v20) )
          {
            do
            {
              v22 = v9;
              *(_BYTE *)(v19 + v9++) = 0;
              v19 = (unsigned __int64)*a1;
            }
            while ( a4 != v22 );
          }
          a1[1] = v20;
        }
        else
        {
          if ( v21 >= v20
            || (v26 = qvector_reserve(a1, v19, v20, 1),
                v9 = (unsigned __int64)a1[1],
                *a1 = (void *)v26,
                v19 = v26,
                v9 < (unsigned __int64)v20) )
          {
            do
            {
              *(_BYTE *)(v19 + v9) = 0;
              v19 = (unsigned __int64)*a1;
              v23 = v9++;
              v24 = (unsigned __int64)*a1;
            }
            while ( a4 != v23 );
          }
          else
          {
            v24 = v26;
          }
          a1[1] = v20;
          v19 = v24;
        }
      }
      *(_BYTE *)(v19 + a4) = 0;
      memcpy(*a1, (const void *)(a3 + *a2), a4);
    }
    return 1;
  }
  return result;
}
