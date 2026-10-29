/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA5C8
// Address: 0x00000000000EA5C8

//----- (00000000000EA5C8) ----------------------------------------------------
__int64 __fastcall sub_EA5C8(__int64 result, char **a2)
{
  __int64 v2; // x24
  __int64 v3; // x19
  __int64 v5; // x22
  char v6; // w23
  __int64 v7; // x26
  unsigned __int64 v8; // x9
  char *v9; // x0
  __int64 v10; // x8
  char *v11; // x0
  unsigned __int64 v12; // x9
  size_t v13; // x1
  _BYTE *v14; // x21

  if ( *(_QWORD *)(result + 24) )
  {
    v2 = (__int64)a2[1];
    v3 = result;
    v5 = 0;
    v6 = 1;
    do
    {
      v7 = v2;
      if ( (v6 & 1) == 0 )
      {
        v8 = (unsigned __int64)a2[2];
        if ( v2 + 2 >= v8 )
        {
          v11 = *a2;
          v12 = 2 * v8;
          if ( v12 >= v2 + 2 )
            v13 = v12;
          else
            v13 = v2 + 2;
          a2[2] = (char *)v13;
          v9 = (char *)realloc(v11, v13);
          v10 = (__int64)a2[1];
          *a2 = v9;
        }
        else
        {
          v9 = *a2;
          v10 = v2;
        }
        *(_WORD *)&v9[v10] = 8236;
        v7 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v7;
      }
      v14 = *(_BYTE **)(*(_QWORD *)(v3 + 16) + 8 * v5);
      result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v14 + 24LL))(v14, a2);
      if ( v14[9] != 1 )
        result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v14 + 32LL))(v14, a2);
      if ( (char *)v7 == a2[1] )
      {
        a2[1] = (char *)v2;
      }
      else
      {
        v6 = 0;
        v2 = (__int64)a2[1];
      }
      ++v5;
    }
    while ( v5 != *(_QWORD *)(v3 + 24) );
  }
  return result;
}
