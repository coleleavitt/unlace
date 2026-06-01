__int64 __fastcall sub_785FC0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *(_QWORD *)(a1 + 304);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 304) = v1 - 1;
  sub_785E90(a1, 172, v2);
  return 0;
}
