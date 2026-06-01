__int64 __fastcall sub_9C7D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v7; // rax

  while ( 1 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(unsigned __int8 *)(a1 + 16);
    if ( (unsigned int)(v5 - 35) > 1 )
      break;
LABEL_2:
    if ( (_BYTE)v5 == 36 )
      return sub_F62610(a1, a2, v5, a4, a5);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1 )
  {
    v7 = sub_F63050(a1, a2, v5, a4, a5);
    a1 = v7;
    if ( v7 )
    {
      v5 = *(unsigned __int8 *)(v7 + 16);
      goto LABEL_2;
    }
  }
  return 0;
}
