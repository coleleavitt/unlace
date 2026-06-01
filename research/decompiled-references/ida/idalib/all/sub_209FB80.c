__int64 __fastcall sub_209FB80(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  _QWORD *v4; // rdx
  unsigned __int8 v5; // al
  _QWORD *v6; // rax
  __int64 result; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi

  *(_DWORD *)a1 = (unsigned __int16)sub_206CE80(a2);
  v3 = *(_BYTE *)(a2 - 16);
  if ( (v3 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    if ( *(_BYTE *)a2 == 16 )
      *(_QWORD *)(a1 + 16) = a2;
    else
      *(_QWORD *)(a1 + 16) = sub_209E6C0(a2);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 40LL);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
    v4 = *(_QWORD **)(a2 - 32);
  }
  else
  {
    v8 = (_QWORD *)(a2 - 8LL * ((v3 >> 2) & 0xF));
    v4 = v8 - 2;
    *(_QWORD *)(a1 + 8) = *v8;
    if ( *(_BYTE *)a2 == 16 )
      *(_QWORD *)(a1 + 16) = a2;
    else
      *(_QWORD *)(a1 + 16) = sub_209E6C0(a2);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = v4[1];
    *(_QWORD *)(a1 + 40) = v4[5];
    *(_QWORD *)(a1 + 48) = v4[3];
  }
  *(_QWORD *)(a1 + 56) = v4[4];
  *(_DWORD *)(a1 + 64) = sub_206CE70(a2);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 20);
  v5 = *(_BYTE *)(a2 - 16);
  if ( (v5 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 28);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 64LL);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 72LL);
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 80LL);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 88LL);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 96LL);
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 104LL);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 112LL);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 120LL);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 128LL);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 24);
    v6 = *(_QWORD **)(a2 - 32);
  }
  else
  {
    v9 = (_QWORD *)(a2 - 8LL * ((v5 >> 2) & 0xF));
    v6 = v9 - 2;
    *(_QWORD *)(a1 + 72) = v9[4];
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 28);
    *(_QWORD *)(a1 + 88) = v9[5];
    *(_QWORD *)(a1 + 96) = v9[6];
    *(_QWORD *)(a1 + 104) = v9[7];
    *(_QWORD *)(a1 + 112) = v9[8];
    *(_QWORD *)(a1 + 120) = v9[9];
    *(_QWORD *)(a1 + 128) = v9[10];
    *(_QWORD *)(a1 + 136) = v9[11];
    *(_QWORD *)(a1 + 144) = v9[12];
    *(_QWORD *)(a1 + 152) = v9[13];
    *(_QWORD *)(a1 + 160) = v9[14];
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 24);
  }
  result = v6[17];
  *(_QWORD *)(a1 + 176) = result;
  return result;
}
