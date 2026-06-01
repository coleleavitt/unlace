__int64 __fastcall sub_6CB690(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v7; // rax

  v3 = 1;
  do
  {
    do
    {
      v4 = *(_QWORD **)(a2 + 40);
      if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v4 + 2) <= 0x40u )
          v4 = (_QWORD *)*v4;
        else
          v4 = *(_QWORD **)*v4;
      }
      v3 *= (_QWORD)v4;
      a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v5 = *(unsigned __int8 *)(a2 + 16);
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 16) - 4) <= 2u || v5 == 2 )
        goto LABEL_7;
    }
    while ( v5 == 3 );
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v7 = sub_B0D320(a2);
    a2 = v7;
    if ( !v7 )
      break;
    v5 = *(unsigned __int8 *)(v7 + 16);
LABEL_7:
    ;
  }
  while ( (unsigned int)(v5 - 2) <= 1 );
  return v3;
}

