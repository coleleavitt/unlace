__int64 __fastcall sub_7B11A0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = operator new(0x70u);
  sub_79F0F0(v1, 1, -1, 0, 0);
  *(_QWORD *)(v1 + 96) = a1;
  *(_BYTE *)(v1 + 104) = 1;
  *(_DWORD *)(v1 + 108) = 6;
  *(_QWORD *)v1 = &off_2BD1D68;
  sub_79F140((_QWORD *)v1, byte_2B11E00, 0x28u);
  *(_QWORD *)v1 = &off_2BD1EF8;
  return v1;
}

