__int64 __fastcall sub_765AF0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 296) = v1 - 1;
  sub_7659C0(a1, 172, v2);
  return 0;
}

