/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F160
// Address: 0x0043F160

//----- (0043F160) --------------------------------------------------------
int __thiscall sub_43F160(int *this, unsigned int a2, unsigned int a3)
{
  int v4; // eax
  unsigned int *v5; // esi
  unsigned int *v6; // ecx
  bool v7; // zf
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int result; // eax
  _DWORD *v11; // edx
  unsigned int *i; // esi
  unsigned int v13; // edi
  unsigned int v14; // ebp
  double v15; // [esp+8h] [ebp-10h]

  v4 = *(this + 2);
  v5 = *(unsigned int **)(v4 + 188);
  v6 = &v5[10 * *(_DWORD *)(v4 + 192)];
  v7 = v5 == v6;
  if ( v5 < v6 )
  {
    v8 = a2;
    while ( *v5 <= a2 )
    {
      if ( v5[1] > a2 )
      {
        if ( a2 != -1 )
          goto LABEL_12;
        break;
      }
      if ( *v5 <= a2 )
      {
        v5 += 10;
        if ( v5 < v6 )
          continue;
      }
      break;
    }
    v7 = v5 == v6;
  }
  if ( !v7 )
  {
    v8 = *v5;
    if ( *v5 < a3 )
    {
LABEL_12:
      v9 = v5[1];
      if ( a3 < v9 )
        v9 = a3;
      if ( (*(int (__stdcall **)(_DWORD, unsigned int, unsigned int *, int, _DWORD))(*(_DWORD *)*(this + 2) + 140))(
             *(this + 2),
             v8,
             &a2,
             1,
             0) == 1 )
      {
        result = (*(int (__thiscall **)(int *, unsigned int, unsigned int))(*this + 8))(this, v8, v9);
        if ( result != -1 )
          return result;
      }
      else
      {
        sub_43C900(
          *(this + 2),
          (int)"dbg_bin_search memory range %a..%a is unreadable, skip it\n",
          COERCE_DOUBLE(__PAIR64__(v9, v8)),
          v15);
      }
      v11 = (_DWORD *)*(this + 2);
      for ( i = v5 + 10; (unsigned int)i < v11[47] + 40 * v11[48]; i += 10 )
      {
        v13 = i[1];
        if ( a3 < v13 )
          break;
        v14 = *i;
        if ( (*(int (__stdcall **)(_DWORD *, unsigned int, unsigned int *, int, _DWORD))(*v11 + 140))(
               v11,
               *i,
               &a2,
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
// 43F1E3: variable 'v15' is possibly undefined
