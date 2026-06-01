__int64 __fastcall sub_F33530(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, int a5, char a6)
{
  char v6; // al
  char v12; // r9
  char v13; // si
  unsigned __int64 v14; // rdx
  char v15; // si
  char v16; // al
  int v17; // eax
  __int64 result; // rax
  char v19[57]; // [rsp+Fh] [rbp-39h] BYREF

  v6 = 0;
  if ( a4 )
  {
    sub_F32B00(v19, (*a4 >> 14) & 0x1F);
    v6 = sub_F328B0(v19[0]);
  }
  v12 = *(_BYTE *)(a1 + 18);
  v13 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)(a1 + 32) = a2;
  v14 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 48) = a5;
  *(_QWORD *)a1 = a1;
  v15 = v6 | v13 & 0x19 | 6;
  v16 = *(_BYTE *)(a1 + 17);
  *(_QWORD *)(a1 + 24) = 0;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v14 = a3;
  *(_QWORD *)(a1 + 8) = v14;
  *(_BYTE *)(a1 + 17) = v16 & 0xE0 | v15 & 0x1F;
  v17 = *(unsigned __int16 *)(a1 + 16);
  *(_BYTE *)(a1 + 18) = (8 * (a6 & 0xF)) | v12 & 0x80;
  LOWORD(v17) = v17 & 0x1F00;
  result = v17 | 0x17u;
  *(_WORD *)(a1 + 16) = result;
  return result;
}

