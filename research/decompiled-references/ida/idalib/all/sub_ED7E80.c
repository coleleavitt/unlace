__int64 __fastcall sub_ED7E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  while ( 1 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 16) - 2) <= 4u )
      goto LABEL_2;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      return a1;
    v5 = sub_F63050(a1, a2, a3, a4);
    if ( !v5 )
      return a1;
    a1 = v5;
LABEL_2:
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
}
