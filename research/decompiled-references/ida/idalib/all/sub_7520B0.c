__int64 __fastcall sub_7520B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = a1 + 212;
  *(_DWORD *)(a1 + 5940) = 0;
  *(_QWORD *)(a1 + 2920) = &off_2B38840;
  *(_QWORD *)(a1 + 2944) = &off_2B38820;
  *(_QWORD *)(a1 + 2904) = a1 + 212;
  *(_QWORD *)(a1 + 2928) = a1 + 2504;
  *(_QWORD *)(a1 + 2952) = a1 + 2748;
  *(_WORD *)(a1 + 5936) = 0;
  *(_QWORD *)(a1 + 2968) = &unk_2B38800;
  do
  {
    v1 += 4;
    *(_WORD *)(v1 - 4) = 0;
  }
  while ( v1 != a1 + 1356 );
  v2 = a1 + 2504;
  do
  {
    v2 += 4;
    *(_WORD *)(v2 - 4) = 0;
  }
  while ( v2 != a1 + 2624 );
  v3 = a1 + 2748;
  do
  {
    v3 += 4;
    *(_WORD *)(v3 - 4) = 0;
  }
  while ( v3 != a1 + 2824 );
  *(_QWORD *)(a1 + 5920) = 0;
  *(_WORD *)(a1 + 1236) = 1;
  *(_QWORD *)(a1 + 5912) = 0;
  *(_DWORD *)(a1 + 5928) = 0;
  *(_DWORD *)(a1 + 5900) = 0;
  return 1;
}
