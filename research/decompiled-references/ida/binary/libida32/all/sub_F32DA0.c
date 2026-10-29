bool __fastcall sub_F32DA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  while ( 1 )
  {
    if ( (a1 & 1) != 0 )
      return 1;
    if ( (byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      return 1;
    v3 = sub_A4E300(a2, a1);
    if ( !v3 )
      break;
    a1 = *(_QWORD *)(v3 + 32);
  }
  v4 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v5) = 0;
  if ( (v4 & 8) != 0 )
    v5 = *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
  return (unsigned int)v5 >> 9 == 3;
}

