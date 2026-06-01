/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043920
// Address: 0x0000000140043920

//----- (0000000140043920) ----------------------------------------------------
_QWORD *__fastcall sub_140043920(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rbp
  int v8; // eax
  _QWORD *v9; // r11
  __int64 v10; // r10
  _QWORD *v11; // rax
  unsigned __int64 v12; // r10
  __int64 *i; // rcx
  __int64 v14; // rcx
  _QWORD *j; // rcx
  __int64 k; // rcx
  unsigned __int64 v17; // r9

  v5 = a4;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 488LL))(a1);
  v9 = (_QWORD *)a1[59];
  v10 = -v8;
  v11 = v9;
  v12 = a3 & v10;
  for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( i[4] >= v12 )
      v11 = i;
    else
      i += 2;
  }
  if ( v11 == v9 || v11[4] >= a3 + v5 )
  {
    if ( v11 == (_QWORD *)*v9 )
    {
      *a2 = v9;
      return a2;
    }
    if ( *((_BYTE *)v11 + 25) )
    {
      v11 = (_QWORD *)v11[2];
    }
    else
    {
      v14 = *v11;
      if ( *(_BYTE *)(*v11 + 25LL) )
      {
        for ( j = (_QWORD *)v11[1]; !*((_BYTE *)j + 25); j = (_QWORD *)j[1] )
        {
          if ( v11 != (_QWORD *)*j )
            break;
          v11 = j;
        }
        if ( *((_BYTE *)v11 + 25) )
          j = v11;
        v11 = j;
      }
      else
      {
        v11 = (_QWORD *)*v11;
        for ( k = *(_QWORD *)(v14 + 16); !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 16) )
          v11 = (_QWORD *)k;
      }
    }
  }
  v17 = v11[4];
  if ( !(_DWORD)v5 || !*((_DWORD *)v11 + 15) || v17 > a3 + v5 - 1 || a3 > *((int *)v11 + 15) + v17 - 1 )
    v11 = (_QWORD *)a1[59];
  *a2 = v11;
  return a2;
}
