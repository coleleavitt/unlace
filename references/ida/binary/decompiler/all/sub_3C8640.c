__int64 __fastcall sub_3C8640(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // edx

  if ( a2 < 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD *)(v2 + 64);
  if ( v3 <= a2 )
    return 0;
  if ( a2 >= (unsigned int)v3 )
    sub_3C5320(a1);
  return *(_QWORD *)(*(_QWORD *)(v2 + 528) + 8LL * a2);
}
