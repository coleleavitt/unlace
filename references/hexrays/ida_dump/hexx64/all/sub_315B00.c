__int64 *__fastcall sub_315B00(__int64 *a1, __int64 *a2, int a3, char a4)
{
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 *result; // rax
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rbx
  unsigned __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rsi

  v6 = a1[1];
  v7 = *a1;
  if ( v6 == 1 )
  {
    v11 = *a1;
    v17 = "==%llX";
    return sub_FAAD0(a2, (__int64)v17, v11);
  }
  if ( a3 == 8 )
  {
    if ( v7 != 0x8000000000000000LL )
    {
      v11 = v6 + v7;
      v13 = -1;
      v14 = 0x7FFFFFFFFFFFFFFFLL;
      v12 = v6 + v7 - 1;
      if ( v6 + v7 )
        goto LABEL_6;
      goto LABEL_25;
    }
    if ( v6 != 0x8000000000000000LL )
    {
      v16 = -(__int64)(v6 + 0x8000000000000000LL);
      return sub_FAAD0(a2, (__int64)"<-%llX", v16);
    }
  }
  else
  {
    v9 = 1LL << (8 * (unsigned __int8)a3 - 1);
    v10 = 1LL << (8 * (unsigned __int8)a3);
    v11 = v6 + v7;
    if ( v9 != v7 )
    {
      if ( v10 != v11 )
      {
        v12 = v11 - 1;
        v13 = v10 - 1;
        v14 = v9 - 1;
LABEL_6:
        if ( v14 == v12 )
          return sub_FAAD0(a2, (__int64)">=%llX", *a1);
        if ( v7 )
        {
          if ( !a4 )
            return sub_FAAD0(a2, (__int64)"%llX..%llX", *a1, v12);
          v22 = a2[1];
          if ( v22 )
          {
            v23 = v22 + 1;
            v24 = a2[1];
            --v22;
          }
          else
          {
            v23 = 2;
            v24 = 1;
          }
          v25 = *a2;
          if ( a2[2] < v23 )
          {
            v25 = qvector_reserve(a2, v25, v23, 1);
            *a2 = v25;
          }
          a2[1] = v23;
          *(_BYTE *)(v25 + v24) = 0;
          *(_BYTE *)(*a2 + v22) = 40;
          result = sub_FAAD0(a2, (__int64)"%llX..%llX", *a1, *a1 + a1[1] - 1);
          v26 = a2[1];
          if ( v26 )
          {
            v27 = v26 + 1;
            v28 = a2[1];
            --v26;
          }
          else
          {
            v27 = 2;
            v28 = 1;
          }
          v29 = *a2;
          if ( a2[2] < v27 )
          {
            result = (__int64 *)qvector_reserve(a2, v29, v27, 1);
            v29 = (__int64)result;
            *a2 = (__int64)result;
          }
          a2[1] = v27;
          *(_BYTE *)(v29 + v28) = 0;
          *(_BYTE *)(*a2 + v26) = 41;
          return result;
        }
        v17 = "<%llXu";
        if ( v13 == v11 )
          return sub_FAAD0(a2, (__int64)"!=%llX", v13);
        return sub_FAAD0(a2, (__int64)v17, v11);
      }
LABEL_25:
      v11 = *a1;
      v17 = ">=%llXu";
      if ( v7 == 1 )
        return sub_FAAD0(a2, (__int64)"!=0");
      return sub_FAAD0(a2, (__int64)v17, v11);
    }
    if ( v10 != v11 )
    {
      v16 = v10 - v11;
      return sub_FAAD0(a2, (__int64)"<-%llX", v16);
    }
  }
  v18 = a2[1];
  if ( v18 )
  {
    v20 = v18 + 1;
    v19 = v18 + 2;
    --v18;
  }
  else
  {
    v19 = 3;
    v20 = 2;
  }
  v21 = *a2;
  if ( a2[2] < v19 )
  {
    v21 = qvector_reserve(a2, v21, v19, 1);
    *a2 = v21;
  }
  a2[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  *(_WORD *)(*a2 + v18) = 12348;
  return (_QWORD *)(&stru_3030 + 12);
}
