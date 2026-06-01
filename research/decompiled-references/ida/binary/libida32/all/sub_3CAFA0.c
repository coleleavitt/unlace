__int16 __fastcall sub_3CAFA0(__int64 *a1, unsigned int a2, __int64 a3, const __m128i *a4)
{
  int v6; // eax
  unsigned __int64 v7; // r15
  char v8; // bh
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbx

  v6 = sub_3B9AA0((__int64)a1, a2, 1);
  v7 = a1[128];
  v8 = BYTE1(v6);
  if ( (v6 & 0x600) == 0x400 )
    sub_3C4DC0(a1, a2, v6, 1);
  sub_3DD870(a1, a2);
  if ( (unsigned __int8)sub_3BF4D0((__int64)a1, a3, -1) )
  {
    sub_3A1A90(a1, a2, a2 + 1, 0x28u);
    if ( (v8 & 4) == 0 )
      goto LABEL_5;
LABEL_9:
    sub_3CA960((__int64)a1, a2, v7);
    goto LABEL_5;
  }
  if ( (v8 & 4) != 0 )
    goto LABEL_9;
LABEL_5:
  v9 = a3 & 0xFFFFFFFFF00000LL | sub_3B9AA0((__int64)a1, a2, 1) & 0xFFFFFFF;
  v10 = v9 | 0x400;
  sub_3CAE70(a1, a2, v9 | 0x400);
  v11 = (unsigned int)v9 & 0xF0000600;
  BYTE1(v11) |= 4u;
  if ( v11 == 1610613760 || (v12 = v9 & 0x70000600, BYTE1(v12) |= 4u, v12 == 1342178304) )
    LOWORD(v11) = sub_3C5000(a1, a2, 0, v10, a4, 0);
  return v11;
}

