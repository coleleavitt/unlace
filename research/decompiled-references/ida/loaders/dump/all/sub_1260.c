__int64 __fastcall sub_1260(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  const char *v4; // r12
  char v5; // al

  if ( qword_5110 == -1 )
  {
    if ( (word_5102 & 1) != 0 )
    {
      v4 = "DATA";
      if ( byte_5120 )
        v4 = "CODE";
      qword_5118 = setup_selector(0);
      v5 = add_segm(qword_5118, a1, a2, v4, v4, 0);
      if ( a2 == -1 && v5 )
        set_segm_end(a1, -1, 0);
    }
    qword_5110 = a1;
    qword_5108 = a2;
  }
  else
  {
    v2 = qword_5108;
    if ( qword_5108 < a2 )
    {
      qword_5108 = a2;
      set_segm_end(qword_5110, a2, (unsigned __int8)(a2 - v2 > 0x40000) << 6);
    }
  }
  return mem2base(&unk_5140, a1, a2, -1);
}

