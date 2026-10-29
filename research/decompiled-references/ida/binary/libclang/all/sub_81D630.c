unsigned __int64 __fastcall sub_81D630(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  _BYTE *v9; // rdx

  v3 = a3;
  v5 = (_BYTE *)a1[3];
  v6 = a1[2];
  result = (__int64)&v5[-v6] >> 3;
  if ( v3 >= result )
  {
    if ( result < v3 )
    {
      result = (__int64)((a1[4] & 0xFFFFFFFFFFFFFFF8LL) - v6) >> 3;
      if ( result < v3 )
      {
        result = sub_81D560((__int64)(a1 + 2), a2, v3);
        v6 = a1[2];
        v5 = (_BYTE *)a1[3];
      }
      v8 = 8 * v3;
      v9 = (_BYTE *)(v8 + v6);
      if ( v9 != v5 )
      {
        result = (unsigned __int64)memset(v5, 0, v9 - v5);
        v5 = (_BYTE *)(v8 + a1[2]);
      }
      a1[3] = v5;
    }
  }
  else
  {
    result = v6 + 8 * v3;
    a1[3] = result;
  }
  return result;
}

