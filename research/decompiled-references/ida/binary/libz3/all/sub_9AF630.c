__int64 __fastcall sub_9AF630(__int64 a1, char a2, __int64 a3)
{
  char v4; // al
  char v5; // r12
  int v6; // r12d
  __int64 result; // rax

  v4 = (4 * (a2 & 1)) | *(_BYTE *)(a1 + 152) & 0xFB;
  *(_BYTE *)(a1 + 152) = v4;
  if ( a2 )
  {
    sub_98B520(a1 + 16, (int *)(a1 + 88));
    v5 = *(_BYTE *)(a1 + 152) & 1;
  }
  else if ( (v4 & 3) != 0 )
  {
    v5 = 0;
    sub_98B520(a1 + 16, (int *)(a1 + 88));
    sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 16, a3, a1 + 16);
    sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 48, a3 + 32, a1 + 48);
  }
  else
  {
    sub_98B520(a1 + 16, (int *)(a1 + 88));
    v5 = 1;
    sub_89ABF0((__int64)qword_1C7F2C0, a1 + 16, a3, a1 + 16);
    sub_89ABF0((__int64)qword_1C7F2C0, a1 + 48, a3 + 32, a1 + 48);
  }
  v6 = v5 & 1;
  result = v6 | *(_BYTE *)(a1 + 80) & 0xFEu;
  *(_BYTE *)(a1 + 80) = v6 | *(_BYTE *)(a1 + 80) & 0xFE;
  return result;
}

