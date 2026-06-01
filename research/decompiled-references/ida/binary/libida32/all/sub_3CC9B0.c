__int64 __fastcall sub_3CC9B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // r12
  char v5; // dl
  unsigned __int64 v6; // rax

  v3 = a3;
  sub_396090(0x10u, a2, a3, 0);
  v4 = sub_3B9AA0((__int64)a1, a2, 0);
  v5 = is_bnot((unsigned int)a2, v4, v3);
  v6 = v4 & 0x600;
  if ( v5 )
  {
    if ( v6 != 1536 )
      goto LABEL_28;
    if ( (v3 & 0xF) != 0 )
    {
      if ( (v3 & 0xF) == 0xF )
        clr_abits((unsigned int)a2, 256);
      clr_abits((unsigned int)a2, 512);
    }
    else
    {
      clr_abits((unsigned int)a2, 256);
    }
    if ( sub_3C0BD0((unsigned int)a2, v3 - 1) )
    {
LABEL_28:
      if ( (unsigned __int8)sub_3CA660(a1, a2, (__int64)&stru_40000) )
      {
LABEL_4:
        if ( qword_2CA1648 )
          qword_2CA1648((unsigned int)a2, 1);
      }
    }
  }
  else
  {
    if ( v6 == 1536 )
    {
      if ( (v3 & 0xF) != 0 )
      {
        if ( (v3 & 0xF) == 0xF )
          set_abits((unsigned int)a2, 256);
        set_abits((unsigned int)a2, 512);
      }
      else
      {
        set_abits((unsigned int)a2, 256);
      }
    }
    if ( (v4 & 0x40000) == 0 && (unsigned __int8)sub_3CA430(a1, a2, (__int64)&stru_40000) )
      goto LABEL_4;
  }
  if ( (unsigned __int8)is_enum(v4, v3) || (unsigned __int8)is_stroff(v4, v3) )
    sub_3A1A90(a1, a2, a2 + 1, 0x28u);
  sub_396090(0x11u, (unsigned int)a2, v3);
  return 1;
}

