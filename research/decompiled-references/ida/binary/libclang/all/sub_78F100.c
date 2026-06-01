__int64 __fastcall sub_78F100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // dl
  char v10; // cl
  char v11; // al
  bool v12; // dl
  _QWORD *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdi

  v4 = a4;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x7Fu) - 16 > 0x3E )
      goto LABEL_14;
    v6 = sub_79A2E0(a2);
LABEL_18:
    if ( v6 )
    {
LABEL_19:
      v7 = *(_BYTE *)(v6 + 28) & 0x7F;
      goto LABEL_4;
    }
LABEL_14:
    v10 = 1;
    v11 = 2;
    v12 = 0;
    return ((unsigned __int8)(32 * v12) | (unsigned __int8)(v10 | (8 * v11))) & 0x3D;
  }
  v6 = a3;
  v7 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v7 == 41 )
  {
    v14 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v14 = (_QWORD *)*v14;
    v15 = sub_79C2A0(v14, a2, a3, a4);
    if ( (*(_BYTE *)(v15 + 8) & 0x7Fu) - 16 > 0x3E )
      goto LABEL_14;
    v6 = sub_79A2E0(v15);
    if ( !v6 )
      goto LABEL_14;
    goto LABEL_19;
  }
  if ( v7 == 81 )
  {
    v16 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v16 = *(_QWORD *)v16;
    if ( (*(_BYTE *)(v16 + 8) & 0x7Fu) - 16 > 0x3E )
      goto LABEL_14;
    v6 = sub_79A2E0(v16);
    goto LABEL_18;
  }
LABEL_4:
  if ( (unsigned int)v7 - 38 <= 6 && sub_B07C80(*(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL)) )
    v8 = sub_78ED00(a1, v6, v4, 1);
  else
    v8 = sub_78C840(a1, v6, v4);
  if ( (v8 & 7u) <= 3 )
    goto LABEL_14;
  v9 = v8;
  v10 = 4;
  v11 = (v8 >> 3) & 3;
  v12 = (v9 & 0x20) != 0;
  return ((unsigned __int8)(32 * v12) | (unsigned __int8)(v10 | (8 * v11))) & 0x3D;
}

