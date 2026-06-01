__int64 __fastcall sub_7266D0(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v4; // rax

  if ( *(_WORD *)(a1 + 1632) == 0xFFFF )
  {
    sub_723D20(a2, (_WORD *)(a1 + 4244), a3);
    return a1 + 4244;
  }
  else
  {
    v3 = (unsigned __int16 *)(a1 + 4244);
    v4 = sub_721F30((unsigned __int64)a2, a1 + 4244, a3, 1);
    if ( v4 )
    {
      if ( v3 != v4 )
        sub_71D140(v3, v4);
      return a1 + 4244;
    }
    else
    {
      return 0;
    }
  }
}

