__int64 __fastcall sub_173180(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  double v4; // xmm0_8
  __int64 result; // rax

  if ( a2 )
  {
    v4 = round(*(double *)(a4 + 120));
    *a2 = 2;
    result = (unsigned int)(int)(v4 + 1.0);
    a2[1] = result;
  }
  return result;
}
