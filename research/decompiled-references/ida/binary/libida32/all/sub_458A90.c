__int64 __fastcall sub_458A90(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rax

  if ( a3 && (sub_3B9AA0((__int64)a1, a2, 4) & 0x400) == 0 )
  {
    v3 = sub_4586A0(a1, a2, 1u, -1);
    if ( v3 == -1 )
      LODWORD(v3) = sub_3B8820((__int64)a1, 0xFFFFFFFF) + 1;
  }
  else
  {
    LODWORD(v3) = sub_3BCF60((__int64)a1, a2);
  }
  return (unsigned int)v3 - a2;
}

