__int64 __fastcall sub_E47360(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, char a6, _QWORD *a7)
{
  __int64 v10; // rbx

  v10 = sub_186B270(0xE8u);
  sub_E1F060((_QWORD *)v10, a1);
  *(_QWORD *)(v10 + 120) = a1;
  *(_QWORD *)v10 = &off_1C767A0;
  *(_QWORD *)(v10 + 72) = off_1C769B0;
  *(_QWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 136) = a1;
  *(_QWORD *)(v10 + 144) = 0;
  *(_DWORD *)(v10 + 152) = 0;
  *(_QWORD *)(v10 + 184) = 0;
  *(_BYTE *)(v10 + 224) = 0;
  *(_OWORD *)(v10 + 160) = 0;
  *(_OWORD *)(v10 + 208) = 0;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *(_QWORD *)(v10 + 176) = a2;
  *(_QWORD *)(v10 + 192) = *a7;
  sub_E5E9C0(v10, a3);
  *(_BYTE *)(v10 + 200) = a5;
  *(_BYTE *)(v10 + 201) = a4;
  *(_BYTE *)(v10 + 202) = a6;
  return v10;
}

