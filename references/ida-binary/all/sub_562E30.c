__int64 __fastcall sub_562E30(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  _WORD *v10; // rax
  __int64 v11; // rsi

  v4 = 0;
  if ( *(_DWORD *)a1 <= 0xEu )
    return v4;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 136) + 6LL * a2 + 4);
  if ( !(_WORD)v5 )
    return v4;
  v6 = *(unsigned __int16 *)(a1 + 248);
  v7 = v6 * v5;
  if ( v7 >= (unsigned int)(v6 + v7) )
    return v4;
  v8 = *(_QWORD *)(a1 + 240);
  v9 = v7;
  v10 = (_WORD *)(v8 + 2LL * v7);
  v11 = v8 + 2 * ((unsigned int)(v6 - 1) + v9) + 2;
  do
  {
    if ( *v10 == a3 )
      return 1;
    if ( !*v10 )
      break;
    ++v10;
  }
  while ( v10 != (_WORD *)v11 );
  return 0;
}
