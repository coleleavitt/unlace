__int64 __fastcall sub_DE3700(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rsi

  for ( result = *(_QWORD *)(a1 + 80); result; result = *(_QWORD *)(a1 + 80) )
  {
    v2 = *(_DWORD *)(result - 4);
    if ( !v2 )
      break;
    v3 = (unsigned int)(v2 - 1);
    v4 = *(_QWORD *)(result + 8 * v3);
    *(_DWORD *)(result - 4) = v3;
    sub_DE31B0(a1, v4);
  }
  return result;
}

