__int64 __fastcall sub_F57440(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, int a5)
{
  char v5; // al
  char v10; // si
  char v11; // si
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 result; // rax
  char v15[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = 0;
  if ( a4 )
  {
    sub_F56840(v15, (*a4 >> 14) & 0x1F);
    v5 = sub_F565F0(v15[0]);
  }
  v10 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = a5;
  *(_QWORD *)a1 = a1;
  v11 = v5 | v10 & 0x19 | 6;
  *(_QWORD *)(a1 + 24) = 0;
  v12 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v12 = a3;
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 8) = v12;
  *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0xE0 | v11 & 0x1F;
  v13 = *(unsigned __int16 *)(a1 + 16);
  LOWORD(v13) = v13 & 0x1F00;
  result = v13 | 0x15u;
  *(_WORD *)(a1 + 16) = result;
  return result;
}
