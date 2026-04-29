unsigned __int64 __fastcall sub_374690(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v4; // rax
  int v5; // r13d
  unsigned int v6; // ebp
  __int64 v7; // rax

  if ( (unsigned __int8)sub_369E20(a1, *(_DWORD *)(a1 + 72), a2) )
  {
    v2 = *(_DWORD *)(a1 + 72);
    if ( *(_BYTE *)(a1 + 320) )
    {
LABEL_3:
      if ( (unsigned int)(v2 - 208) > 0x2F || (a2 & 1) == 0 )
        return sub_36A6C0(a1);
LABEL_16:
      if ( !*(_BYTE *)(a1 + 320) && !*(_DWORD *)(a1 + 464) )
      {
        *(_DWORD *)(a1 + 72) = 32;
        return sub_36A6C0(a1);
      }
      if ( !under_debugger )
        sub_37B760(52369);
LABEL_32:
      BUG();
    }
    if ( (unsigned int)(v2 - 208) > 0x2F )
      return sub_36A6C0(a1);
  }
  v4 = *(_QWORD *)(a1 + 464);
  do
  {
    while ( 1 )
    {
      v5 = v4;
      v6 = sub_367470(a1);
      if ( (unsigned __int8)sub_374040(a1, v6) && (unsigned __int8)sub_369E20(a1, v6, a2 | 4u) )
        goto LABEL_12;
      v6 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936)) == 0
         ? 240
         : 208;
      if ( *(int *)(a1 + 68) > 0 )
      {
        v6 = 224;
        break;
      }
      if ( !(unsigned __int8)sub_36A540(a1) )
        break;
      v4 = *(_QWORD *)(a1 + 464);
    }
    if ( !(unsigned __int8)sub_374040(a1, v6) )
    {
      if ( !under_debugger )
        sub_37B760(52746);
      goto LABEL_32;
    }
LABEL_12:
    if ( (a2 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 72) = v6;
      if ( v6 != 128 )
        return sub_36A6C0(a1);
      v4 = *(_QWORD *)(a1 + 464);
      goto LABEL_22;
    }
    v4 = *(_QWORD *)(a1 + 464);
  }
  while ( v5 != (_DWORD)v4 );
  *(_DWORD *)(a1 + 72) = v6;
  if ( v6 == 128 )
  {
LABEL_22:
    if ( (int)v4 <= 0 )
      return sub_36A6C0(a1);
    v7 = sub_136BC0((_QWORD *)a1, 0);
    sub_362CE0(v7);
    v2 = *(_DWORD *)(a1 + 72);
    goto LABEL_3;
  }
  if ( v6 - 208 <= 0x2F )
    goto LABEL_16;
  return sub_36A6C0(a1);
}
