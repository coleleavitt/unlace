__int64 __fastcall sub_44BDA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int v6; // r14d
  _QWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v9; // [rsp+11h] [rbp-37h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = sub_5CAA10(a1);
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
    if ( v4 && v4 != sub_5CAA10(a1) )
      return v6;
    goto LABEL_6;
  }
  return 0;
}
