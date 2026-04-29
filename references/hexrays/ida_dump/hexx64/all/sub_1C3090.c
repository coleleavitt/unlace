__int64 __fastcall sub_1C3090(_DWORD *a1, __int64 a2, int a3)
{
  int v4; // edx
  _DWORD *v5; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi

  v4 = *a1;
  v5 = a1;
  if ( (unsigned int)(*a1 - 3) <= 1 )
    return 0;
  while ( v4 == 2 )
  {
    v7 = *((_QWORD **)v5 + 1);
    v5 = (_DWORD *)*v7;
    v8 = *v7 + 24LL * v7[1];
    if ( v8 == *v7 )
      break;
    while ( 1 )
    {
      v9 = *((unsigned __int16 *)v5 + 8);
      if ( *((_WORD *)v5 + 9) )
      {
        if ( a3 >= v9 && *((unsigned __int16 *)v5 + 9) + v9 - 1 >= a3 )
          break;
      }
      v5 += 6;
      if ( v5 == (_DWORD *)v8 )
        return *(unsigned __int8 *)(a2 + 145);
    }
    v4 = *v5;
    a3 -= v9;
    if ( (unsigned int)(*v5 - 3) <= 1 )
      return 0;
  }
  return *(unsigned __int8 *)(a2 + 145);
}
