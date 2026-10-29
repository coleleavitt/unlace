__int64 __fastcall sub_F41090(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char v6; // r13
  char v7; // al
  __int16 v8; // ax
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  if ( (_BYTE)a5 == 1 )
  {
    v11[0] = 0;
    v11[0] = sub_A4E860(a2, a4, v11, a4, a5);
    v10 = sub_F40FE0(v11);
    LOBYTE(a5) = 1;
    a4 = v10;
  }
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a2;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a4 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_BYTE *)(a1 + 17);
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 16) = 52;
  *(_QWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 17) = v6 | v7 & 0xE0;
  v8 = *(_WORD *)(a1 + 17) & 0xF81F;
  *(_WORD *)(a1 + 17) = v8;
  result = (8 * (a5 & 1)) | HIBYTE(v8) & 0xF7;
  *(_BYTE *)(a1 + 18) = result;
  return result;
}

