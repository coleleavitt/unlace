__int64 __fastcall sub_209F920(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rdx
  unsigned __int8 v4; // al
  __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    if ( *(_BYTE *)a2 == 16 )
      *(_QWORD *)(a1 + 8) = a2;
    else
      *(_QWORD *)(a1 + 8) = sub_209E6C0(a2);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    v3 = *(_QWORD **)(a2 - 32);
  }
  else
  {
    v6 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    v3 = v6 - 2;
    *(_QWORD *)a1 = *v6;
    if ( *(_BYTE *)a2 == 16 )
      *(_QWORD *)(a1 + 8) = a2;
    else
      *(_QWORD *)(a1 + 8) = sub_209E6C0(a2);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 24) = v3[1];
  }
  *(_QWORD *)(a1 + 32) = v3[3];
  *(_DWORD *)(a1 + 40) = sub_206CE70(a2);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 20);
  v4 = *(_BYTE *)(a2 - 16);
  if ( (v4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 40LL);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 64LL);
    result = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 72LL);
  }
  else
  {
    v7 = 8LL * ((v4 >> 2) & 0xF);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 - v7 + 24);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 - v7 + 32);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 - v7 + 40);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 - v7 + 48);
    result = *(_QWORD *)(a2 - v7 - 16 + 72);
  }
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
