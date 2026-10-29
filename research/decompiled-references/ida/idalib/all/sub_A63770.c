__int64 __fastcall sub_A63770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax

  v5 = 1;
  do
  {
    v6 = *(_QWORD **)(a2 + 40);
    if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v6 + 2) <= 0x40u )
        v6 = (_QWORD *)*v6;
      else
        v6 = *(_QWORD **)*v6;
    }
    v5 *= (_QWORD)v6;
    a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(unsigned __int8 *)(a2 + 16);
    if ( (unsigned __int8)(v7 - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v9 = sub_F63050(a2, a2, v7, a4, a5);
    a2 = v9;
    if ( !v9 )
      break;
    LODWORD(v7) = *(unsigned __int8 *)(v9 + 16);
  }
  while ( (unsigned int)(v7 - 2) <= 1 );
  return v5;
}
