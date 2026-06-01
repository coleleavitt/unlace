__int64 __fastcall sub_13D1460(int a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  int v7[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v7[0] = 0;
  result = sub_10205F0(a2, a1, v7);
  if ( (_BYTE)result )
  {
    if ( v7[0] < 0 )
    {
      return sub_13D1460((unsigned int)v7[0], a2, a3, a4);
    }
    else if ( a4 )
    {
      *a4 = v7[0];
    }
  }
  return result;
}
