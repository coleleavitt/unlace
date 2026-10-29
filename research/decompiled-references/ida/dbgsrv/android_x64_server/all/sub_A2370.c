/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2370
// Address: 0x00000000000A2370

//----- (00000000000A2370) ----------------------------------------------------
_QWORD *__fastcall sub_A2370(_QWORD *a1, unsigned __int64 a2, int a3)
{
  int v5; // eax
  _QWORD *v6; // rdx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rsi
  _QWORD *result; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // esi

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
  v6 = (_QWORD *)a1[64];
  v7 = a1 + 64;
  if ( !v6 )
    goto LABEL_11;
  v8 = a2 & -v5;
  result = a1 + 64;
  do
  {
    if ( v6[4] >= v8 )
      result = v6;
    v6 = (_QWORD *)v6[v6[4] < v8];
  }
  while ( v6 );
  v7 = a1 + 64;
  if ( result == a1 + 64 )
  {
LABEL_11:
    if ( v7 == (_QWORD *)a1[63] )
      return a1 + 64;
    v12 = (_QWORD *)*v7;
    if ( *v7 )
    {
      do
      {
        result = v12;
        v12 = (_QWORD *)v12[1];
      }
      while ( v12 );
    }
    else
    {
      do
      {
        v13 = v7;
        v7 = (_QWORD *)v7[2];
      }
      while ( (_QWORD *)*v7 == v13 );
      result = v7;
    }
    v10 = result[4];
    v11 = result + 4;
    if ( !a3 )
      return a1 + 64;
    goto LABEL_18;
  }
  v10 = result[4];
  if ( v10 >= a2 + a3 )
  {
    v7 = result;
    goto LABEL_11;
  }
  v11 = result + 4;
  if ( !a3 )
    return a1 + 64;
LABEL_18:
  v14 = *((_DWORD *)v11 + 7);
  if ( !v14 || a2 + a3 - 1 < v10 || v14 + v10 - 1 < a2 )
    return a1 + 64;
  return result;
}
