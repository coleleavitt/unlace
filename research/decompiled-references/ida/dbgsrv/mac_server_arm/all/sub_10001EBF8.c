/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001EBF8
// Address: 0x000000010001EBF8

//----- (000000010001EBF8) ----------------------------------------------------
__int64 __fastcall sub_10001EBF8(int *a1, __int64 a2, _DWORD *a3)
{
  int v3; // w8
  __int64 result; // x0
  __int64 v5; // x10
  size_t v6; // x8
  const void *v7; // x9
  __int64 v8; // x8
  __int64 v9; // x11
  __int64 v10; // x9
  __int64 v11; // x14

  v3 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, _DWORD *, _QWORD))a1 + 3))(a2, a3, *((_QWORD *)a1 + 4));
    return 1;
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( (unsigned int)(v3 - 1) < 2 )
  {
    if ( (int)*a3 < -1 )
    {
      v6 = 8LL * (*a3 == -2);
      if ( v6 == *((_QWORD *)a1 + 3) )
      {
        v7 = a3 + 2;
        goto LABEL_22;
      }
    }
    else
    {
      v6 = (int)a3[4];
      if ( v6 == *((_QWORD *)a1 + 3) )
      {
        v7 = *((const void **)a3 + 1);
LABEL_22:
        memcpy((void *)(a2 + v5), v7, v6);
        return 1;
      }
    }
    return 0;
  }
  if ( v3 )
    return 1;
  v8 = *((_QWORD *)a3 + 1);
  v9 = (unsigned int)v8;
  v10 = *((_QWORD *)a1 + 3);
  v11 = *((_QWORD *)a1 + 4);
  if ( v11 == 1 )
    v8 = (unsigned __int8)*((_QWORD *)a3 + 1);
  if ( v11 == 2 )
    v8 = (unsigned __int16)*((_QWORD *)a3 + 1);
  if ( v11 == 4 )
    v8 = v9;
  result = 1;
  if ( v10 > 3 )
  {
    if ( v10 == 4 )
    {
      *(_DWORD *)(a2 + v5) = v8;
    }
    else if ( v10 == 8 )
    {
      *(_QWORD *)(a2 + v5) = v8;
    }
  }
  else if ( v10 == 1 )
  {
    *(_BYTE *)(a2 + v5) = v8;
  }
  else if ( v10 == 2 )
  {
    *(_WORD *)(a2 + v5) = v8;
  }
  return result;
}
