/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8EB8
// Address: 0x00000000000D8EB8

//----- (00000000000D8EB8) ----------------------------------------------------
__int64 __fastcall sub_D8EB8(__int64 result, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // x8
  __int64 v10; // x23
  const char *v11; // x24
  int v12; // w8
  int v13; // w8
  int v14; // w9
  int v15; // w10
  int v16; // w8

  v5 = *(_QWORD *)(a2 + 16);
  v10 = result;
  if ( (a5 & 1) != 0 )
  {
    v11 = *(const char **)(result + 8);
    result = strcmp(v11, *(const char **)(v5 + 8));
    if ( (_DWORD)result )
    {
      result = strcmp(v11, *(const char **)(*(_QWORD *)a2 + 8LL));
      if ( (_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(v10 + 16) + 48LL))(
                 *(_QWORD *)(v10 + 16),
                 a2,
                 a3,
                 a4,
                 a5 & 1);
      goto LABEL_7;
    }
LABEL_17:
    if ( *(_QWORD *)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
      *(_DWORD *)(a2 + 52) = a4;
    return result;
  }
  if ( result == v5 )
    goto LABEL_17;
  if ( result != *(_QWORD *)a2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(v10 + 16) + 48LL))(
             *(_QWORD *)(v10 + 16),
             a2,
             a3,
             a4,
             a5 & 1);
LABEL_7:
  if ( *(_QWORD *)(a2 + 32) != a3 && *(_QWORD *)(a2 + 40) != a3 )
  {
    v12 = *(_DWORD *)(a2 + 68);
    *(_DWORD *)(a2 + 56) = a4;
    if ( v12 == 4 )
      return result;
    *(_WORD *)(a2 + 76) = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v10 + 16)
                                                                                           + 40LL))(
               *(_QWORD *)(v10 + 16),
               a2,
               a3,
               a3,
               1,
               a5 & 1);
    v13 = *(unsigned __int8 *)(a2 + 77);
    if ( *(_BYTE *)(a2 + 77) )
    {
      if ( *(_BYTE *)(a2 + 76) )
        goto LABEL_23;
      v13 = 1;
    }
    v15 = *(_DWORD *)(a2 + 60);
    v14 = *(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 40) = a3;
    *(_DWORD *)(a2 + 64) = v14 + 1;
    if ( v15 == 1 && *(_DWORD *)(a2 + 48) == 2 )
    {
      *(_BYTE *)(a2 + 78) = 1;
      if ( (v13 & 1) == 0 )
      {
LABEL_16:
        v16 = 4;
LABEL_24:
        *(_DWORD *)(a2 + 68) = v16;
        return result;
      }
    }
    else if ( !v13 )
    {
      goto LABEL_16;
    }
LABEL_23:
    v16 = 3;
    goto LABEL_24;
  }
  if ( a4 == 1 )
    *(_DWORD *)(a2 + 56) = 1;
  return result;
}
