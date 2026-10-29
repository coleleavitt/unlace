__int64 __fastcall sub_2EC220(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 result; // rax
  int v5; // r8d
  int v6; // r9d
  _BYTE v7[44]; // [rsp+Ch] [rbp-2Ch] BYREF

  v3 = a3;
  result = sub_1666AE0(a1 + 168, a2, a3, v7);
  if ( !(_BYTE)result )
    return sub_1673B50((int)a1 + 184, a2, v3, (unsigned int)v7, v5, v6);
  return result;
}

