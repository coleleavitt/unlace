__int64 __fastcall sub_20A0610(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)a1 = **(_QWORD **)(a2 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    v3 = *(_QWORD *)(a2 - 32);
  }
  else
  {
    v5 = a2 - 8LL * ((v2 >> 2) & 0xF);
    v3 = v5 - 16;
    *(_QWORD *)a1 = *(_QWORD *)(v5 - 16);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v5 - 8);
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 28);
  result = *(_QWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 36) = result;
  return result;
}
