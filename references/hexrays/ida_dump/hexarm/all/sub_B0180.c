__int64 __fastcall sub_B0180(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v5 = sub_11C320(a4, v9, 14);
  if ( !v5 )
    return 0;
  v6 = sub_11C2E0(v5, a1);
  if ( !v6 )
    return 0;
  v7 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(unsigned int *)(v6 + 4), 0);
  if ( (v7 & (v7 - 1)) != 0 )
    return 0;
  *a2 = log2ceil();
  if ( *(_BYTE *)v9[0] != 4 )
    return 0;
  *a3 = *(_QWORD *)(v9[0] + 8LL);
  return 1;
}
