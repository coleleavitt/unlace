__int64 __fastcall sub_1FBE980(__int64 a1, __int64 a2)
{
  char v4; // al
  _BOOL8 v5; // rsi
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rsi
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 60) & 2) != 0);
  sub_1FBE940((__int64 *)a1, a2);
  v4 = *(_BYTE *)(a2 + 60);
  v5 = 0;
  if ( (v4 & 1) != 0 )
    v5 = (v4 & 2) == 0;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v5);
  v6 = *(_BYTE *)(a2 + 60);
  if ( (v6 & 4) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v6 & 2) != 0 )
    {
      sub_9B9C90(v7, a2 != -80);
      v7 = *(_QWORD *)(a1 + 24);
    }
    if ( a2 != -80 )
    {
      v8 = *(_QWORD *)(a2 + 88);
      sub_9B9C90(v7, v8 != 0);
      if ( v8 )
        sub_1F99B40(a1 + 8, v8);
      sub_183F100(a1 + 32, *(_QWORD *)(a2 + 80));
      sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 96));
      sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 64));
      v7 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v6 & 2) != 0 )
    {
      sub_9B9C90(v7, 0);
      v7 = *(_QWORD *)(a1 + 24);
    }
  }
  v9 = *(_QWORD *)(a2 + 72);
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((v9 >> 1) & 3) != 1 )
  {
    sub_9B9C90(v7, 1);
    if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
    {
      qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
      qword_2CCC4A8 = 0;
      qword_2CCC4B8 = 0;
      __cxa_guard_release(&byte_2CCC480);
    }
    v14 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v14 )
    {
      v16 = (*(__int64 *)(a2 + 72) >> 1) & 3;
      if ( v16 == 1 )
      {
        v17 = v14[9];
        v14 = nullptr;
        if ( !v17 )
          goto LABEL_15;
        v14 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v17 >> 1) & 3) != 2 || !v14 )
          goto LABEL_15;
      }
      else if ( v16 != 2 )
      {
        goto LABEL_15;
      }
      v14 = (__int64 *)v14[1];
    }
    else
    {
      v14 = &qword_2CCC4A0;
    }
LABEL_15:
    result = sub_1FA11E0((__int64 *)(a1 + 8), (__int64)v14, v10, v11, v12, v13);
    goto LABEL_16;
  }
  result = sub_9B9C90(v7, 0);
  if ( (*(_BYTE *)(a2 + 60) & 2) == 0 )
  {
    result = *(_QWORD *)(a2 + 16);
    if ( (result & 4) == 0 || (result &= 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(result + 8) == *(_QWORD *)result) )
    {
      if ( *(char *)(a2 + 28) >= 0 && (*(_BYTE *)(a2 + 29) & 0x13) == 0 && (*(_BYTE *)(a2 + 40) & 7) == 0 )
      {
        result = *(unsigned int *)(*(_QWORD *)a1 + 3540LL);
        *(_DWORD *)(a1 + 228) = result;
      }
    }
  }
LABEL_16:
  *(_DWORD *)(a1 + 224) = 115;
  return result;
}
