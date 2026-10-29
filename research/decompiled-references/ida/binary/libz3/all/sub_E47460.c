__int64 __fastcall sub_E47460(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, char a6, _QWORD *a7)
{
  __int64 v10; // r15
  __int64 v11; // rbx

  v10 = *(_QWORD *)(a1 + 8);
  v11 = sub_186B270(0xE8u);
  sub_E1F060((_QWORD *)v11, a2);
  *(_QWORD *)(v11 + 120) = a2;
  *(_QWORD *)v11 = &off_1C767A0;
  *(_QWORD *)(v11 + 72) = off_1C769B0;
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 136) = a2;
  *(_QWORD *)(v11 + 144) = 0;
  *(_DWORD *)(v11 + 152) = 0;
  *(_QWORD *)(v11 + 184) = 0;
  *(_BYTE *)(v11 + 224) = 0;
  *(_OWORD *)(v11 + 160) = 0;
  *(_OWORD *)(v11 + 208) = 0;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  *(_QWORD *)(v11 + 176) = v10;
  *(_QWORD *)(v11 + 192) = *a7;
  sub_E5E9C0(v11, a3);
  *(_BYTE *)(v11 + 200) = a5;
  *(_BYTE *)(v11 + 201) = a4;
  *(_BYTE *)(v11 + 202) = a6;
  return v11;
}

