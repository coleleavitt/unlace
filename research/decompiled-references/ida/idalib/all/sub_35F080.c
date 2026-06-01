unsigned __int64 __fastcall sub_35F080(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  const char *v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax

  v7 = haystack;
  if ( a1[4] )
    v7 = (const char *)a1[3];
  result = tag_strlen(v7);
  if ( a2 < result )
  {
    if ( a4 )
    {
      v9 = tag_strlen(a4) + result;
      if ( v9 < (unsigned __int16)getinf(42) )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a4, 0);
    }
    else if ( result < (unsigned __int16)getinf(42) )
    {
      v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v11 != sub_35CB90 )
        return v11(a1, 32);
      v12 = a1[4];
      if ( v12 )
      {
        v14 = v12 + 1;
        v13 = a1[4];
        --v12;
      }
      else
      {
        v13 = 1;
        v14 = 2;
      }
      v15 = a1[3];
      if ( a1[5] < v14 )
      {
        v16 = qvector_reserve(a1 + 3, v15, v14, 1);
        a1[3] = v16;
        v15 = v16;
      }
      a1[4] = v14;
      *(_BYTE *)(v15 + v12) = 32;
      result = a1[3];
      *(_BYTE *)(result + v13) = 0;
      return result;
    }
    v10 = *a1;
    a1[89] = a3;
    (*(void (__fastcall **)(_QWORD *, __int64))(v10 + 32))(a1, 92);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 48LL))(a1, a1 + 3, a2);
  }
  if ( a4 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a4, 0);
  return result;
}
