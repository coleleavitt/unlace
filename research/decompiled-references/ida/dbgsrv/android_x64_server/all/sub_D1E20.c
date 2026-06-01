/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1E20
// Address: 0x00000000000D1E20

//----- (00000000000D1E20) ----------------------------------------------------
char __fastcall sub_D1E20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v9; // rax
  const char *v10; // rbx
  int v11; // ecx
  __int64 v13; // [rsp-8h] [rbp-38h]

  v13 = v5;
  v9 = *(_QWORD *)(a2 + 16);
  if ( a5 )
  {
    v10 = *(const char **)(a1 + 8);
    LODWORD(v9) = strcmp(v10, *(const char **)(v9 + 8));
    if ( (_DWORD)v9 )
    {
      LODWORD(v9) = strcmp(v10, *(const char **)(*(_QWORD *)a2 + 8LL));
      if ( (_DWORD)v9 )
      {
LABEL_4:
        LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(
                       *(_QWORD *)(a1 + 16),
                       a2,
                       a3,
                       a4,
                       a5);
        return v9;
      }
      goto LABEL_7;
    }
LABEL_13:
    if ( *(_QWORD *)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
      *(_DWORD *)(a2 + 52) = a4;
    return v9;
  }
  if ( a1 == v9 )
    goto LABEL_13;
  if ( a1 != *(_QWORD *)a2 )
    goto LABEL_4;
LABEL_7:
  if ( *(_QWORD *)(a2 + 32) != a3 && *(_QWORD *)(a2 + 40) != a3 )
  {
    *(_DWORD *)(a2 + 56) = a4;
    if ( *(_DWORD *)(a2 + 68) == 4 )
      return v9;
    *(_WORD *)(a2 + 76) = 0;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
                   *(_QWORD *)(a1 + 16),
                   a2,
                   a3,
                   a3,
                   1,
                   a5,
                   v13);
    if ( *(_BYTE *)(a2 + 77) )
    {
      if ( *(_BYTE *)(a2 + 76) )
      {
LABEL_23:
        v11 = 3;
LABEL_24:
        *(_DWORD *)(a2 + 68) = v11;
        return v9;
      }
      LOBYTE(v9) = 1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
    *(_QWORD *)(a2 + 40) = a3;
    ++*(_DWORD *)(a2 + 64);
    if ( *(_DWORD *)(a2 + 60) == 1 && *(_DWORD *)(a2 + 48) == 2 )
      *(_BYTE *)(a2 + 78) = 1;
    v11 = 4;
    if ( !(_BYTE)v9 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( a4 == 1 )
    *(_DWORD *)(a2 + 56) = 1;
  return v9;
}
// D1E2A: variable 'v5' is possibly undefined
