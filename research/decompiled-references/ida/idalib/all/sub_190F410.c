__int64 __fastcall sub_190F410(__int64 a1, int a2, __int64 a3, int a4, int a5, __m128 a6)
{
  char v9; // r13
  _QWORD *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int8 v14; // al
  char v15; // cl
  _WORD *v17; // rdi
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax

  if ( sub_15F2430(a1) )
    sub_18C3E40(a1);
  v9 = 0;
  sub_190D5E0(a1, a6);
  v10 = *(_QWORD **)(a1 + 248);
  v11 = *(_DWORD *)(a3 + 4);
  v12 = v10[2329];
  if ( v11 )
  {
    if ( a3 + 8LL * v11 + 16 != a3 + 16 )
    {
      v17 = *(_WORD **)(a3 + 8LL * v11 + 8);
      v18 = *v17 & 0x1FF;
      if ( v18 != 238 )
        goto LABEL_15;
      v19 = a3 + 8LL * v11 + 8;
      while ( v19 != a3 + 16 )
      {
        v17 = *(_WORD **)(v19 - 8);
        v19 -= 8;
        v18 = *v17 & 0x1FF;
        if ( v18 != 238 )
          goto LABEL_15;
      }
    }
    v17 = *(_WORD **)(a3 + 8LL * (v11 - 1) + 16);
    v18 = *v17 & 0x1FF;
LABEL_15:
    v9 = 0;
    if ( ((v18 + 510) & 0x1FFu) <= 0x80 )
    {
      v20 = sub_EEDD30((__int64)v17);
      if ( v20 )
      {
        v12 = *(_QWORD *)(v20 + 8);
        v10 = *(_QWORD **)(a1 + 248);
        v9 = 1;
      }
      else
      {
        v10 = *(_QWORD **)(a1 + 248);
      }
    }
  }
  v13 = sub_EEE9A0(32, v10, 8u);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0xA;
  if ( unk_2CD7484 )
    sub_EE9B50(10);
  *(_QWORD *)(v13 + 8) = v12;
  *(_WORD *)(v13 + 1) &= 0xF801u;
  *(_DWORD *)(v13 + 24) = a2;
  *(_QWORD *)(v13 + 16) = a3;
  *(_DWORD *)(v13 + 28) = a4;
  v14 = sub_B62D20(v13, a5);
  v15 = *(_BYTE *)(v13 + 1);
  *(_DWORD *)(v13 + 4) = a5;
  *(_BYTE *)(v13 + 1) = (v14 << 6) | v15 & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v14 >> 2) & 7;
  if ( v9 )
    return sub_19A3E40(a1, v13);
  else
    return v13;
}
