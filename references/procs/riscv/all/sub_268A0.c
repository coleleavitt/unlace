__int64 __fastcall sub_268A0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // [rsp+8h] [rbp-10h]
  __int64 *v9; // [rsp+8h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  if ( *(_WORD *)(a2 + 46) != 3 )
    return 0;
  v4 = *(_WORD *)(a2 + 24);
  if ( v4 == 122 )
  {
    if ( *(_QWORD *)(a1 + 496) )
    {
      v6 = *(_QWORD *)(a2 + 88);
      goto LABEL_18;
    }
  }
  else if ( v4 > 0x7Au )
  {
    if ( v4 == 162 )
    {
      if ( *(_QWORD *)(a1 + 496) )
      {
        v6 = *(_QWORD *)(a2 + 96);
        goto LABEL_18;
      }
    }
    else if ( v4 == 539 )
    {
      v9 = a3;
      v7 = sub_1FA90(a1, *(_QWORD *)(a2 + 16));
      if ( v7 != -1 )
      {
        a3 = v9;
        v6 = *(_QWORD *)(a2 + 88) + v7;
        goto LABEL_18;
      }
    }
  }
  else if ( v4 <= 2u )
  {
    if ( v4 && *(_QWORD *)(a1 + 496) )
    {
      if ( v4 == 1 )
        v6 = (int)((unsigned int)*(_QWORD *)(a2 + 88) << 12);
      else
        v6 = *(_QWORD *)(a2 + 16) + (int)(*(_DWORD *)(a2 + 88) << 12);
      goto LABEL_18;
    }
  }
  else if ( v4 == 19 && *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 3 )
  {
    v8 = a3;
    v5 = sub_1FA90(a1, *(_QWORD *)(a2 + 16));
    if ( v5 != -1 )
    {
      a3 = v8;
      v6 = *(_QWORD *)(a2 + 128) + v5;
LABEL_18:
      *a3 = v6;
      *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v6;
      return 1;
    }
  }
  return 0;
}
