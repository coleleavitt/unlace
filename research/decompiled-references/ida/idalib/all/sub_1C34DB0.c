char __fastcall sub_1C34DB0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  __int16 v6; // dx

  while ( 1 )
  {
    v4 = sub_BFBAE0(a2);
    v5 = (_QWORD *)v4;
    v6 = *(_WORD *)v4 & 0x1FF;
    if ( v6 == 71 )
      break;
    if ( v6 == 128 )
    {
      sub_1C33A70(a1, *(_QWORD *)(v4 + 24));
      sub_1C34DB0(a1, v5[4]);
      a2 = v5[5];
    }
    else
    {
      if ( v6 != 129 )
      {
        LOBYTE(v4) = sub_1C33A70(a1, v4);
        return v4;
      }
      sub_1C34DB0(a1, *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL));
      a2 = v5[6];
    }
  }
  return v4;
}
