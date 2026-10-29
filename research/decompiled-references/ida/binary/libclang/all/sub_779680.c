unsigned __int64 __fastcall sub_779680(__int64 a1)
{
  char v2; // al
  char v3; // cl
  unsigned __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  char v8; // al
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v2 = *(_BYTE *)(a1 + 68);
  v3 = v2 & 1;
  if ( (~v2 & 0xC) == 0 )
  {
    if ( !v3 )
      return sub_779400(a1);
    goto LABEL_13;
  }
  if ( (v2 & 0xC) == 0 )
  {
    if ( !v3 )
      return sub_779400(a1);
    goto LABEL_13;
  }
  v4 = *(unsigned __int64 **)(a1 + 72);
  if ( v3 )
  {
    v9 = *v4;
    if ( (*v4 & 1) != 0 )
      goto LABEL_5;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 72);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_5:
      v5 = sub_798D40(a1);
      v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v5 + 18200) + 40LL))(
             *(_QWORD *)(v5 + 18200),
             v9 >> 1);
      goto LABEL_6;
    }
  }
  v6 = v9;
LABEL_6:
  if ( v6 )
    return *(unsigned int *)(a1 + 64) | (unsigned __int64)(sub_AC7460(v6) << 32);
  v8 = *(_BYTE *)(a1 + 68);
  if ( (v8 & 1) != 0 )
  {
    if ( (~v8 & 0xC) != 0 && (v8 & 0xC) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
LABEL_14:
      if ( v6 )
        return *(unsigned int *)(a1 + 64) | (unsigned __int64)(sub_AC7460(v6) << 32);
      return sub_779400(a1);
    }
LABEL_13:
    v6 = *(_QWORD *)(a1 + 72);
    goto LABEL_14;
  }
  return sub_779400(a1);
}

