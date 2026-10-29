__int64 __fastcall sub_2640(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v7; // rax

  v4 = getseg(a3);
  if ( v4 )
  {
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v4 + 48);
    v5 = a3 - get_segm_base(v4);
  }
  else
  {
    v7 = a3;
    v5 = a3 & 0xF;
    *(_QWORD *)(a2 + 16) = v7 >> 4;
  }
  *(_QWORD *)(a2 + 24) = v5;
  *(_QWORD *)(a2 + 32) = 0;
  set_fixup(a1, a2);
  if ( *(_WORD *)a2 == 3 )
  {
    put_word(a1, *(_QWORD *)(a2 + 24));
    return put_word(a1 + 2, *(_QWORD *)(a2 + 16));
  }
  else if ( *(_WORD *)a2 == 1 )
  {
    return put_word(a1, *(_QWORD *)(a2 + 24));
  }
  else
  {
    return put_word(a1, *(_QWORD *)(a2 + 16));
  }
}

