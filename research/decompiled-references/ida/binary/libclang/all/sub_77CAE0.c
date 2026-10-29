__int64 __fastcall sub_77CAE0(__int64 a1)
{
  unsigned __int8 v1; // al
  _BYTE *v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v1 == 41 )
    return 0;
  v2 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
  {
    if ( ((v2[8] + 72) & 0x7Fu) > 3 )
      goto LABEL_4;
LABEL_7:
    v4 = sub_798D40(a1);
    v5 = sub_6BB950(v4, a1);
    if ( v5 )
    {
      if ( (v5 & 4) != 0 )
      {
        v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v6 )
          return ((unsigned int)(*v6 >> 1) & 3) + 1;
      }
    }
    v1 = *(_BYTE *)(a1 + 28) & 0x7F;
    goto LABEL_4;
  }
  if ( ((*(_BYTE *)(*(_QWORD *)v2 + 8LL) + 72) & 0x7Fu) <= 3 )
    goto LABEL_7;
LABEL_4:
  if ( (unsigned int)v1 - 39 > 1 )
    return 0;
  else
    return *(_BYTE *)(a1 + 140) & 7;
}

