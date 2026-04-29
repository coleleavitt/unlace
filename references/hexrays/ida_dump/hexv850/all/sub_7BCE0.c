__int64 __fastcall sub_7BCE0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int128 v5; // rt0
  __int64 result; // rax
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = *(_QWORD *)a1 - a2[5];
  v4 = -v3;
  if ( v3 > 0 )
    v4 = v3;
  *(_QWORD *)&v5 = v3;
  *((_QWORD *)&v5 + 1) = v4;
  result = sub_7AE40(a2, v5 >> 63);
  if ( *(_QWORD *)a1 != -1 )
  {
    result = a2[1];
    v7 = *(_DWORD *)(a1 + 8);
    v8 = *a2;
    if ( a2[2] < (unsigned __int64)(result + 1) )
    {
      v9 = qvector_reserve(a2, v8, result + 1, 1);
      *a2 = v9;
      v8 = v9;
      result = a2[1];
    }
    *(_BYTE *)(v8 + result) = v7;
    ++a2[1];
  }
  return result;
}
