__int64 __fastcall sub_147F1C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int16 v19; // dx
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h]

  v10 = *(_QWORD *)(a1 + 96);
  v11 = *(unsigned __int16 *)(a1 + 32);
  v23 = *(_QWORD *)(v10 + 248) + 17464LL;
  v12 = sub_141A630(v11);
  v13 = *(_QWORD *)(a1 + 376);
  if ( v12 || (_WORD)v11 == 1 )
  {
    if ( v13 )
    {
      if ( *(_QWORD *)(a1 + 400) )
      {
        if ( *(_QWORD *)(a1 + 384) )
          return 0;
        goto LABEL_35;
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
      {
LABEL_41:
        *a6 = sub_15AE860(a2, 1, a3, a4, a5, v23);
        return 1;
      }
      if ( (_WORD)v11 == 1 || v12 )
        return 0;
      v14 = *(_QWORD *)(a1 + 24);
LABEL_5:
      if ( *(_QWORD *)(a1 + 384) != v14 )
        return 0;
LABEL_35:
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
      {
        *a6 = sub_15AEC10(a2, 1, a3, a4, a5, v23);
        return 1;
      }
      return 0;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 != v13 )
    {
      if ( v14 == *(_QWORD *)(a1 + 400) && (*(_BYTE *)(a2 + 2) & 8) != 0 )
        goto LABEL_41;
      goto LABEL_5;
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(v16 + 2944);
  if ( v17 >= *(unsigned int *)(v16 + 2912) )
    v18 = sub_14180A0(v16, 1u);
  else
    v18 = *(_QWORD *)(v16 + 2904) + 24 * v17;
  v19 = *(_WORD *)(v18 + 16);
  if ( v19 <= 0x63u )
  {
    if ( v19 >= 0x62u || v19 == 84 )
      goto LABEL_20;
    if ( v19 > 0x54u )
    {
      if ( v19 != 92 && v19 != 95 && v19 != 88 )
        return 0;
    }
    else if ( v19 == 5 )
    {
      v20 = sub_141A630(5u);
      v21 = *(_QWORD *)(a1 + 400);
      if ( v20 )
      {
        if ( !v21 || !*(_QWORD *)(a1 + 384) )
          goto LABEL_20;
        v22 = 0;
      }
      else
      {
        v22 = *(_QWORD *)(v18 + 8);
        if ( v21 == v22 || v22 == *(_QWORD *)(a1 + 384) )
          goto LABEL_20;
      }
      if ( *(_QWORD *)(a1 + 392) != v22 )
        return 0;
    }
    else if ( v19 != 79 )
    {
      return 0;
    }
LABEL_20:
    *a6 = sub_15AE130(a2, 1, a3, a4, a5, v23);
    return 1;
  }
  if ( v19 == 114 )
    goto LABEL_20;
  if ( v19 <= 0x72u )
  {
    result = 0;
    if ( (unsigned __int16)(v19 - 107) <= 1u )
      goto LABEL_20;
  }
  else
  {
    if ( v19 == 127 )
      goto LABEL_20;
    result = 0;
    if ( v19 >= 0x7Fu && (unsigned __int16)(v19 - 369) <= 1u )
      goto LABEL_20;
  }
  return result;
}
