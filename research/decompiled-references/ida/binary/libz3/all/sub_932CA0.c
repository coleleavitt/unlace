__int64 __fastcall sub_932CA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = sub_186B270(0x68u);
  sub_1342CC0(v2, a1[3]);
  a1[42] = v2;
  sub_A6F1C0(a2, v2);
  result = a1[36];
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      sub_922750((__int64)a1);
      return sub_931FC0((__int64)a1);
    }
  }
  return result;
}

