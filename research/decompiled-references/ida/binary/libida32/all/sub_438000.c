__int64 __fastcall sub_438000(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int v6; // r14d
  _DWORD v8[2]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int8 v9; // [rsp+15h] [rbp-33h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = sub_5AFCE0(a1);
  v5 = xrefblk_t_first_to(v8, a2, 4);
  if ( (_BYTE)v5 )
  {
    v6 = v5;
    while ( v9 <= 0x13u )
    {
      if ( v9 > 0x11u )
        goto LABEL_9;
      if ( (unsigned __int8)(v9 - 16) <= 1u && v8[0] != a3 )
        return v6;
LABEL_6:
      if ( !(unsigned __int8)xrefblk_t_next_to(v8) )
        return 0;
    }
    if ( v9 != 21 )
      goto LABEL_6;
LABEL_9:
    if ( v4 && v4 != sub_5AFCE0(a1) )
      return v6;
    goto LABEL_6;
  }
  return 0;
}

