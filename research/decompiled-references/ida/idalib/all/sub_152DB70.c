void __fastcall sub_152DB70(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // rdi
  __int64 v7; // r13
  unsigned __int16 v8; // r12
  __int64 (*v9)(void); // rax
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  char v15; // al
  unsigned __int8 *v16[15]; // [rsp+0h] [rbp-78h] BYREF

  v6 = (_BYTE *)a2[8];
  v7 = *(_QWORD *)(a4 + 8);
  v8 = *(_WORD *)(a4 + 16);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v6 + 152LL);
  if ( (char *)v9 == (char *)sub_102B840 )
    v10 = v6[285];
  else
    v10 = v9();
  if ( v10 || (*(_BYTE *)(a2[7] + 106) & 0x40) != 0 )
  {
    if ( !(unsigned __int8)sub_14520F0((__int64)a2, v16) )
    {
      v13 = a2[16];
      a2[26] += 24;
      v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2[17] >= v14 + 24 && v13 )
        a2[16] = v14 + 24;
      else
        v14 = sub_986170((__int64)(a2 + 16), 24, 24, 3, v11, v12);
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 16) = 438;
      *(_DWORD *)v14 = *(_DWORD *)a4;
      *(_DWORD *)(v14 + 4) = *(_DWORD *)a4;
      *(_QWORD *)(v14 + 8) = LODWORD(v16[0]);
      sub_14368B0((__int64)a2, (char *)v14, 1, 1u, 0, 0);
    }
  }
  else
  {
    sub_FC70B0((__int64)v16, a2[6], *(_DWORD *)a4, 2204);
    v15 = sub_141A630(v8);
    if ( v8 == 1 || v15 )
      BUG();
    sub_AEC220(v16, (_BYTE *)(*(_QWORD *)(v7 + 16) + 16LL), **(unsigned int **)(v7 + 16));
    sub_AEA040((__int64)v16);
  }
}
