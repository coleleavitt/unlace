__int64 __fastcall sub_1D374C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 i; // rbx
  __int64 v4; // rax
  __int64 v6; // rax

  v1 = 0;
  v2 = sub_F6A860(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  for ( i = v2; v2; i = v2 )
  {
    if ( (*(_BYTE *)(v2 + 17) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 29 )
    {
      v4 = *(_QWORD *)(i + 16);
    }
    else
    {
      v4 = *(_QWORD *)(i + 16);
      if ( (v4 & 0x80000) == 0 )
        return i;
    }
    if ( (v4 & 0x80000) != 0 )
      v6 = sub_F5E8A0(i);
    else
      v6 = *(_QWORD *)(i + 8);
    v1 = i;
    v2 = sub_F6A860(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
  }
  return v1;
}
