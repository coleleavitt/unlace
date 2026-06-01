void __fastcall sub_3C8FE0(__int64 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  _BYTE v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+2h] [rbp-46h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v4 = (int)a3;
  v8 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_off(a4, a3) )
  {
    sub_4E2A50(a1, a2, (unsigned int)v4);
LABEL_3:
    sub_3A61A0(a1, a2, a2 + 1, 0x28u);
    return;
  }
  if ( (unsigned __int8)is_enum(a4, (unsigned int)v4) )
  {
    sub_414290(a1, a2, (unsigned int)v4);
    goto LABEL_3;
  }
  if ( (unsigned __int8)is_stroff(a4, (unsigned int)v4) )
  {
    sub_3C8EF0(a1, a2, v4);
    goto LABEL_3;
  }
  if ( (unsigned __int8)is_manual(a4, (unsigned int)v4) )
  {
    sub_599DF0(a1, a2, (unsigned int)v4, &byte_22F0C30);
  }
  else if ( (unsigned __int8)is_custfmt(a4, (unsigned int)v4) && (int)sub_3E9640(a1, v6, a2) > 0 )
  {
    if ( (unsigned int)v4 > 7 )
      v7 = -1;
    else
      *((_WORD *)&v7 + v4) = -1;
    sub_3E99E0(a1, a2, v6);
  }
}
