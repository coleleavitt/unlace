__int64 __fastcall sub_BD5D00(__int64 a1, unsigned int a2, char a3, int a4, char a5)
{
  int v7; // eax
  __int64 result; // rax
  char v9; // [rsp+Ch] [rbp-1Ch]

  *(_WORD *)a1 = a2 & 0x1FF | *(_WORD *)a1 & 0xFE00;
  if ( unk_2CAD564 )
  {
    v9 = a5;
    sub_EC5E10(a2);
    a5 = v9;
  }
  v7 = *(unsigned __int8 *)(a1 + 2);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  result = (32 * (a5 & 1)) | (8 * (a3 & 1)) | v7 & 0xFFFFFFD7;
  *(_BYTE *)(a1 + 2) = result;
  *(_WORD *)(a1 + 2) &= 0xFE3Fu;
  return result;
}

