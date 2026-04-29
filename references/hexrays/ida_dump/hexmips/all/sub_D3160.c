__int64 __fastcall sub_D3160(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 64);
  result = sub_1CB7F0(v2, *(_QWORD *)(a2 + 24));
  v4 = *(_DWORD *)(a2 + 4);
  if ( (v4 & 0x20) != 0 )
    result += *(int *)(*(_QWORD *)(v2 + 1504) + 80LL);
  if ( (v4 & 0x40) != 0 )
    result += *(int *)(*(_QWORD *)(a1 + 64) + 116LL);
  return result;
}
