/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B820
// Address: 0x000000000004B820

//----- (000000000004B820) ----------------------------------------------------
__int64 __fastcall sub_4B820(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  _BYTE *v7; // rsi
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  const void *v12; // rdx

  v5 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, __int64, _QWORD))a1 + 3))(a2, a3, *((_QWORD *)a1 + 4));
    LOBYTE(v3) = 1;
  }
  else
  {
    v7 = (_BYTE *)(*((_QWORD *)a1 + 2) + a2);
    LOBYTE(v3) = 1;
    if ( (unsigned int)(v5 - 1) >= 2 )
    {
      if ( !v5 )
      {
        v10 = *(_QWORD *)(a3 + 8);
        v11 = *((_QWORD *)a1 + 4);
        switch ( v11 )
        {
          case 4LL:
            v10 = (unsigned int)v10;
            break;
          case 2LL:
            v10 = (unsigned __int16)v10;
            break;
          case 1LL:
            v10 = (unsigned __int8)v10;
            break;
        }
        switch ( *((_QWORD *)a1 + 3) )
        {
          case 1LL:
            *v7 = v10;
            break;
          case 2LL:
            *(_WORD *)v7 = v10;
            break;
          case 4LL:
            *(_DWORD *)v7 = v10;
            break;
          case 8LL:
            *(_QWORD *)v7 = v10;
            break;
          default:
            return v3;
        }
      }
    }
    else
    {
      v8 = *(_DWORD *)a3;
      if ( *(int *)a3 < -1 )
        LODWORD(v9) = 8 * (v8 == -2);
      else
        v9 = *(_QWORD *)(a3 + 16);
      if ( (int)v9 == *((_QWORD *)a1 + 3) )
      {
        if ( v8 < -1 )
          v12 = (const void *)(a3 + 8);
        else
          v12 = *(const void **)(a3 + 8);
        memcpy(v7, v12, (int)v9);
      }
      else
      {
        return 0;
      }
    }
  }
  return v3;
}
// 4B83D: variable 'v3' is possibly undefined
