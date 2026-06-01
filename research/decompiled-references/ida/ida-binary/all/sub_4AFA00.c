__int64 __fastcall sub_4AFA00(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  __int64 v13; // r11
  unsigned __int16 v14; // si
  __int64 v15; // rsi
  unsigned __int16 *v16; // r11
  __int64 v17; // rax
  unsigned __int16 v18; // dx

  result = a3 - 1;
  v9 = a3 & 1;
  v10 = (a3 - 1) / 2;
  if ( a2 >= v10 )
  {
    v12 = (unsigned __int16 *)(a1 + 2 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_12;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_12;
    result = a2;
    goto LABEL_14;
  }
  result = a2;
  do
  {
    v11 = result + 1;
    result = 2 * (result + 1);
    v12 = (unsigned __int16 *)(a1 + 4 * v11);
    v13 = result;
    v14 = *v12;
    if ( *v12 < *(v12 - 1) )
    {
      --result;
      v12 = (unsigned __int16 *)(a1 + 2 * result);
      v14 = *v12;
    }
    *(_WORD *)(a1 + v13 - 2) = v14;
  }
  while ( result < v10 );
  if ( !v9 && result == (a3 - 2) / 2 )
  {
LABEL_14:
    v17 = 2 * result + 2;
    v18 = *(_WORD *)(a1 + 2 * v17 - 2);
    result = v17 - 1;
    *v12 = v18;
    v12 = (unsigned __int16 *)(a1 + 2 * result);
  }
  v15 = (result - 1) / 2;
  if ( result > a2 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int16 *)(a1 + 2 * v15);
      v12 = (unsigned __int16 *)(a1 + 2 * result);
      if ( *v16 >= a4 )
        break;
      *v12 = *v16;
      result = v15;
      if ( a2 >= v15 )
      {
        *v16 = a4;
        return result;
      }
      v15 = (v15 - 1) / 2;
    }
  }
LABEL_12:
  *v12 = a4;
  return result;
}
