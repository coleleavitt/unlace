__int64 __fastcall sub_F65900(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  int v6; // edx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  char v11; // r9
  char v12; // r9
  unsigned __int64 v13; // rax
  char v14; // al
  char v15; // r9
  char v16; // cl
  int v17; // eax
  __int64 result; // rax
  unsigned __int64 v19; // rax
  char v20; // [rsp+Fh] [rbp-39h]
  __int64 v21[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *a3 >> 14;
  v7 = sub_F565F0(
         (unsigned __int8)(2 * ((v6 & 2) != 0))
       | (unsigned __int8)((4 * ((v6 & 4) != 0)) | (8 * ((v6 & 8) != 0)) | v6 & 1 | (16 * ((v6 & 0x10) != 0))));
  v12 = v7 | v11;
  v13 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  if ( a4 == 1 )
  {
    if ( !v13 )
      goto LABEL_5;
    v20 = v12;
    v21[0] = 0;
    v21[0] = sub_A725A0(a2, v10, v21, v8, v9);
    v19 = sub_F64D20(v21);
    v12 = v20;
    v10 = v19;
    v13 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( !v13 )
LABEL_5:
    v10 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = v12;
  v15 = *(_BYTE *)(a1 + 17);
  v16 = *(_BYTE *)(a1 + 18);
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 17) = v14 & 0x1F | v15 & 0xE0;
  v17 = *(unsigned __int16 *)(a1 + 16);
  *(_BYTE *)(a1 + 18) = v16 & 0xF0 | (8 * (a4 & 1));
  LOWORD(v17) = v17 & 0x1F00;
  *(_QWORD *)(a1 + 8) = v10;
  result = v17 | 0x33u;
  *(_WORD *)(a1 + 16) = result;
  return result;
}
