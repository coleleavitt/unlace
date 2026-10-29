__int64 __fastcall sub_724ED0(unsigned int *a1, _DWORD **a2, int a3, _DWORD *a4)
{
  _DWORD *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rdx
  _WORD *v9; // rax
  __int64 v10; // r14
  int v11; // r15d
  unsigned int v12; // eax
  __int64 result; // rax
  int v14; // eax

  v6 = *a2;
  v7 = (__int64)*a2 + 6 * a3 + 6;
  v8 = *((unsigned __int16 *)*a2 + 3 * a3 + 5);
  if ( (unsigned int)v8 >= *(*a2 - 2) )
  {
    if ( a4 )
      *a4 |= 0x400000u;
    return 0;
  }
  v9 = (_WORD *)((char *)v6 + v8);
  if ( *((_WORD *)a1 + 816) == 0xFFFF )
  {
    v10 = *(unsigned __int16 *)((char *)v9 + 1);
    v9 = (_WORD *)((char *)v9 + 1);
    if ( !(_DWORD)v10 )
      goto LABEL_9;
  }
  else
  {
    v10 = (unsigned __int16)*v9;
    if ( !*v9 )
      goto LABEL_9;
  }
  if ( (char *)v6 + *a1 < (char *)v9 + v10 + 4 )
    goto LABEL_15;
  v11 = *(unsigned __int16 *)((char *)v9 + v10 + 2);
  v12 = v10;
  if ( !*v6 )
  {
    v14 = sub_721D90((__int64)v6, a3);
    if ( !a3 && v14 )
    {
      if ( a4 )
        *a4 |= 0x800000u;
      return 0;
    }
    v12 = v10 + v14;
  }
  if ( (unsigned __int16)v11 > 0x404u || v12 > 0x204 )
  {
LABEL_15:
    if ( a4 )
      *a4 |= 0x4000u;
    return 0;
  }
  result = 1;
  if ( (_DWORD)v10 + v11 + 4 + (unsigned int)*(unsigned __int16 *)(v7 + 4) - 1 < *(v6 - 2) )
    return result;
LABEL_9:
  if ( a4 )
    *a4 |= 0x40u;
  return 0;
}

