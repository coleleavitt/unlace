__int64 __fastcall sub_42AB70(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r15

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  v5 = sub_505D70(a1 + 203, v4);
  if ( !v5 )
  {
    v12 = sub_3C76B0((__int64)a1, v4);
    v10 = v12;
    if ( !v12 || *(_BYTE *)(v12 + 40) )
      return 0;
    goto LABEL_12;
  }
  v6 = v5;
  v7 = -1;
  if ( (getinf(45) & 0x80u) == 0LL )
  {
    v8 = *(_WORD *)(v6 + 44);
    if ( (v8 & 4) != 0 )
    {
      *(_WORD *)(v6 + 44) = v8 & 0xFFFB;
      update_segm(v6);
      *a3 |= 1u;
      v7 = *(_QWORD *)v6;
    }
  }
  if ( (sub_631AD0(*a1, 45) & 0x40) == 0 )
  {
    v13 = sub_505D70(a1 + 213, v4);
    v14 = (__int64 *)v13;
    if ( v13 )
    {
      if ( (*(_BYTE *)(v13 + 16) & 0x40) != 0 )
      {
        sub_5CB660(a1, v13, 1);
        *a3 |= 2u;
        v7 = *v14;
      }
    }
  }
  v9 = sub_3C76B0((__int64)a1, v4);
  v10 = v9;
  if ( v9 && !*(_BYTE *)(v9 + 40) )
  {
LABEL_12:
    *(_BYTE *)(v10 + 40) = 1;
    sub_3C7860((__int64)a1, v10);
    *a3 |= 4u;
    v7 = *(_QWORD *)v10;
  }
  if ( v7 != -1 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    *(_QWORD *)(result + 16) = v7;
    *(_DWORD *)(result + 8) = -1;
    return result;
  }
  return 0;
}
