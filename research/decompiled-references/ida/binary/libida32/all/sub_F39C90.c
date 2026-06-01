__int64 __fastcall sub_F39C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  char v7; // al
  __int64 v8; // r9
  char v9; // r10
  __int64 v10; // rcx
  char v11; // r11
  unsigned __int64 v12; // rdx
  __int16 v13; // ax
  __int64 result; // rax

  v4 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = sub_F328B0(
         (2 * ((*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0)) & 0x3E
       | ((*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
       | (16 * ((*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x10) != 0)) & 0x3E
       | (32 * ((*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0)) & 0x3Eu);
  v10 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)v8 = v8;
  *(_BYTE *)(v8 + 16) = v11;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = a3;
  v12 = v10 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)a4 | (unsigned __int8)v10) & 7;
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v12 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(v8 + 8) = v12;
  *(_BYTE *)(v8 + 17) = v7 & 0x1F | *(_BYTE *)(v8 + 17) & 0xE0;
  v13 = *(_WORD *)(v8 + 17) & 0xF81F;
  *(_WORD *)(v8 + 17) = v13;
  result = (8 * (v9 & 1)) | HIBYTE(v13) & 0xF7u;
  *(_BYTE *)(v8 + 18) = result;
  if ( (result & 8) != 0 )
    *(_QWORD *)(v8 + 48) = a4;
  return result;
}

