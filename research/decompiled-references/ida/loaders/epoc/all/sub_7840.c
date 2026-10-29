__int64 __fastcall sub_7840(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  v3 = qlsize(a2);
  v4 = a1[1];
  v5 = v3;
  if ( v4 < v3 )
  {
    v7 = *a1;
    if ( a1[2] < v3 )
    {
      v8 = qvector_reserve(a1, v7, v3, 1);
      v4 = a1[1];
      *a1 = v8;
      v7 = v8;
    }
    memset((void *)(v7 + v4), 0, v5 - v4);
    a1[1] = v5;
  }
  else if ( v3 != v4 )
  {
    a1[1] = v3;
  }
  qlseek(a2, 0, 0);
  result = qlread(a2, *a1, a1[1]);
  if ( result != a1[1] )
    sub_58B0((__int64)"read error!");
  return result;
}

