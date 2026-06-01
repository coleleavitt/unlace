wchar_t *__fastcall std::wstring::_M_replace_cold(
        __int64 a1,
        wchar_t *a2,
        unsigned __int64 a3,
        const wchar_t *a4,
        size_t a5,
        size_t a6)
{
  __int64 v6; // r10
  const wchar_t *v12; // rsi
  wchar_t *v13; // rdi
  unsigned __int64 v14; // r12
  const wchar_t *v16; // rsi
  size_t v17; // rdx
  wchar_t *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // [rsp-8h] [rbp-38h]

  v21 = v6;
  if ( a5 - 1 < a3 )
  {
    if ( a5 == 1 )
      *a2 = *a4;
    else
      wmemmove(a2, a4, a5);
  }
  if ( a6 && a5 != a3 )
  {
    v12 = &a2[a3];
    v13 = &a2[a5];
    if ( a6 == 1 )
      *v13 = *v12;
    else
      wmemmove(v13, v12, a6);
  }
  if ( a3 >= a5 )
    return (wchar_t *)v21;
  v14 = (unsigned __int64)&a2[a3];
  if ( v14 >= (unsigned __int64)&a4[a5] )
  {
    if ( a5 != 1 )
      return wmemmove(a2, a4, a5);
    *a2 = *a4;
    return (wchar_t *)v21;
  }
  if ( (unsigned __int64)a4 < v14 )
  {
    v19 = v14 - (_QWORD)a4;
    v20 = v19 >> 2;
    if ( v19 == 4 )
      *a2 = *a4;
    else
      wmemmove(a2, a4, v19 >> 2);
    v16 = &a2[a5];
    v18 = (wchar_t *)((char *)a2 + v19);
    v17 = a5 - v20;
    if ( a5 - v20 == 1 )
    {
      *v18 = *v16;
      return (wchar_t *)v21;
    }
    if ( !v17 )
      return (wchar_t *)v21;
    return wmemcpy(v18, v16, v17);
  }
  v16 = &a2[a5 + a4 - a2 - a3];
  if ( a5 != 1 )
  {
    v17 = a5;
    v18 = a2;
    return wmemcpy(v18, v16, v17);
  }
  *a2 = *v16;
  return (wchar_t *)v21;
}

