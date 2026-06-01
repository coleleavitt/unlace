__int64 __fastcall sub_9348C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = sub_186B270(0x68u);
  sub_1342CC0(v2, a1[3]);
  a1[48] = v2;
  sub_A6F1C0(a2, v2);
  result = a1[42];
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      sub_923810((__int64)a1);
      return sub_933A80((__int64)a1);
    }
  }
  return result;
}

