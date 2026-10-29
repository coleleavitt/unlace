__int64 __fastcall sub_20A0450(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  _QWORD *v4; // rcx

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)a1 = **(_QWORD **)(a2 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 40LL);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
    *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 20);
    *(_BYTE *)(a1 + 49) = *(_BYTE *)(a2 + 21);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 4);
    result = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 64LL);
  }
  else
  {
    v4 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    *(_QWORD *)a1 = *(v4 - 2);
    *(_QWORD *)(a1 + 8) = *(v4 - 1);
    *(_QWORD *)(a1 + 16) = v4[3];
    *(_QWORD *)(a1 + 24) = *v4;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 40) = v4[1];
    *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 20);
    *(_BYTE *)(a1 + 49) = *(_BYTE *)(a2 + 21);
    *(_QWORD *)(a1 + 56) = v4[4];
    *(_QWORD *)(a1 + 64) = v4[5];
    result = v4[6];
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 4);
  }
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
