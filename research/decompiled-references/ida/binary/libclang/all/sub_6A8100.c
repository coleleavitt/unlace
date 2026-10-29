__int64 __fastcall sub_6A8100(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // edx
  __int64 v4; // rax

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    v2 = *(unsigned __int8 *)(v1 + 16);
    if ( (unsigned int)(v2 - 34) <= 1 )
    {
      if ( (_BYTE)v2 == 35 )
        return sub_B07AF0(v1);
      goto LABEL_7;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      return 0;
    v4 = sub_B0D320(v1);
    v1 = v4;
    if ( !v4 )
      return 0;
    if ( *(_BYTE *)(v4 + 16) == 35 )
      return sub_B07AF0(v1);
LABEL_7:
    a1 = *(_QWORD *)(v1 + 24);
  }
}

