__int64 __fastcall sub_78B720(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
    return 1;
  v1 = sub_78B3D0(a1);
  if ( v1 )
  {
    v2 = sub_7868A0(v1);
    if ( v2 )
    {
LABEL_4:
      v3 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v3 + 16LL) == 47 )
      {
        v4 = sub_B14A40(*v3);
        if ( (unsigned __int8)sub_78B720(v4) )
          return 1;
      }
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 8);
        v2 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v5 <= 7 )
          break;
        if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_4;
      }
    }
  }
  return 0;
}

