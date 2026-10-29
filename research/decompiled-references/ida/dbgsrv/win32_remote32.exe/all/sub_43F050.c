/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F050
// Address: 0x0043F050

//----- (0043F050) --------------------------------------------------------
int __thiscall sub_43F050(int *this, unsigned int a2, unsigned int a3)
{
  _DWORD *v4; // edx
  unsigned int v5; // ecx
  unsigned int *v6; // esi
  unsigned int v7; // ebx
  int result; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  _DWORD *v11; // ecx
  unsigned int *i; // esi
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  double v15; // [esp+8h] [ebp-10h]

  v4 = (_DWORD *)*(this + 2);
  v5 = v4[47];
  v6 = (unsigned int *)(v5 + 40 * (v4[48] - 1));
  if ( (unsigned int)v6 >= v5 )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 < a3 )
        break;
      v6 -= 10;
      if ( (unsigned int)v6 < v5 )
        return -1;
    }
    v9 = v6[1];
    v10 = v9;
    if ( a3 < v9 )
      v10 = a3;
    if ( v10 != -1 )
    {
      if ( v7 <= a2 && v9 > a2 )
        v7 = a2;
      if ( (*(int (__stdcall **)(_DWORD *, unsigned int, unsigned int *, int, _DWORD))(*v4 + 140))(v4, v7, &a3, 1, 0) == 1 )
      {
        result = (*(int (__thiscall **)(int *, unsigned int, unsigned int))(*this + 8))(this, v7, v10);
        if ( result != -1 )
          return result;
      }
      else
      {
        sub_43C900(
          *(this + 2),
          (int)"dbg_bin_search memory range %a..%a is unreadable, skip it\n",
          COERCE_DOUBLE(__PAIR64__(v10, v7)),
          v15);
      }
      v11 = (_DWORD *)*(this + 2);
      for ( i = v6 - 10; (unsigned int)i >= v11[47]; i -= 10 )
      {
        v13 = i[1];
        if ( a2 >= v13 )
          break;
        v14 = *i;
        if ( *i <= a2 )
          v14 = a2;
        if ( (*(int (__stdcall **)(_DWORD *, unsigned int, unsigned int *, int, _DWORD))(*v11 + 140))(
               v11,
               v14,
               &a3,
               1,
               0) == 1 )
        {
          result = (*(int (__thiscall **)(int *, unsigned int, unsigned int))(*this + 8))(this, v14, v13);
          if ( result != -1 )
            return result;
        }
        else
        {
          sub_43C900(
            *(this + 2),
            (int)"dbg_bin_search memory range %a..%a is unreadable, skip it\n",
            COERCE_DOUBLE(__PAIR64__(v13, v14)),
            v15);
        }
        v11 = (_DWORD *)*(this + 2);
      }
    }
  }
  return -1;
}
// 43F0D2: variable 'v15' is possibly undefined
