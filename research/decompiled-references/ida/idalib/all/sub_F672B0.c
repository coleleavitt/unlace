__int64 __fastcall sub_F672B0(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rax

  while ( ((*(_QWORD *)(a1 + 16) >> 16) & 0x3F8) == 0 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v1 = *(unsigned __int8 *)(a1 + 16);
    if ( (unsigned int)(v1 - 35) <= 1 )
    {
      if ( (_BYTE)v1 == 36 )
        return 0;
    }
    else
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        return 0;
      v2 = sub_F62E70(a1);
      a1 = v2;
      if ( !v2 || *(_BYTE *)(v2 + 16) == 36 )
        return 0;
    }
  }
  return a1 + 48;
}
