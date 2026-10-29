__int64 *__fastcall sub_4D5770(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // edx

  v2 = sub_186B270(0x20u);
  v3 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v4 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)v2 = off_1C4F4C0;
  *(_QWORD *)(v2 + 16) = a2;
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  *(_DWORD *)(v2 + 24) = v5;
  *a1 = v2;
  *(_DWORD *)(v2 + 8) = 1;
  return a1;
}

