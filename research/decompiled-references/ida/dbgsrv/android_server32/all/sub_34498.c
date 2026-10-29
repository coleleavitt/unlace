/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34498
// Address: 0x00034498

//----- (00034498) --------------------------------------------------------
int __fastcall sub_34498(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r5
  unsigned int v4; // r6
  char *v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r0
  int v10; // r1
  char *v11; // r2
  char v13[4]; // [sp+8h] [bp-8h] BYREF
  int v14; // [sp+Ch] [bp-4h]

  v3 = HIDWORD(a3);
  v4 = a3;
  v7 = (char *)sub_34730(a2, a3);
  sub_1B09C(a1, v7);
  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 > 1 )
  {
    v9 = v8 - 1;
    if ( v9 <= 0xB )
    {
      v13[0] = 32;
      *(_BYTE *)(*(_DWORD *)a1 + v9) = 32;
      sub_37884((void **)a1, 0xDu, v13);
      *(_BYTE *)(*(_DWORD *)a1 + 12) = 0;
    }
    v10 = *(unsigned __int16 *)(a2 + 406);
    if ( __PAIR64__(v3, v4) <= 0x1D )
      __asm { MOV             PC, R3 }
    if ( v4 ^ 0x70000000 | v3 )
    {
      if ( v10 == 183 || v10 == 40 )
        goto LABEL_15;
    }
    else
    {
      if ( v10 == 20 )
      {
        v11 = "addr of _GLOBAL_OFFSET_TABLE_";
LABEL_18:
        sub_28C34(a1, v11);
        return _stack_chk_guard - v14;
      }
      if ( v10 == 40 || v10 == 183 )
      {
LABEL_15:
        v11 = nullptr;
        if ( __PAIR64__(v3, v4) - 1610612751 < 4 )
          v11 = *(&off_D95F4[v4] - 1610612751);
        goto LABEL_18;
      }
    }
    v11 = nullptr;
    goto LABEL_18;
  }
  sub_1DA58(a1, "DT_????     Unknown (%08llX)", __PAIR64__(v3, v4));
  return _stack_chk_guard - v14;
}
// D95F4: using guessed type char *off_D95F4[4];
