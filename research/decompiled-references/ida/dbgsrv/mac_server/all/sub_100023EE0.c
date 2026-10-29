/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023EE0
// Address: 0x0000000100023EE0

//----- (0000000100023EE0) ----------------------------------------------------
__int64 __fastcall sub_100023EE0(int *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  _BYTE *v6; // rsi
  size_t v7; // rax
  const void *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v4 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, _DWORD *, _QWORD))a1 + 3))(a2, a3, *((_QWORD *)a1 + 4));
    LOBYTE(v3) = 1;
    return v3;
  }
  v6 = (_BYTE *)(*((_QWORD *)a1 + 2) + a2);
  LOBYTE(v3) = 1;
  if ( (unsigned int)(v4 - 1) < 2 )
  {
    if ( (int)*a3 < -1 )
    {
      v7 = 8 * (unsigned int)(*a3 == -2);
      if ( v7 == *((_QWORD *)a1 + 3) )
      {
        v8 = a3 + 2;
        goto LABEL_15;
      }
    }
    else
    {
      v7 = (int)a3[4];
      if ( v7 == *((_QWORD *)a1 + 3) )
      {
        v8 = *((const void **)a3 + 1);
LABEL_15:
        memcpy(v6, v8, v7);
        return v3;
      }
    }
    return 0;
  }
  if ( !v4 )
  {
    v9 = *((_QWORD *)a3 + 1);
    v10 = *((_QWORD *)a1 + 4);
    switch ( v10 )
    {
      case 4LL:
        v9 = (unsigned int)v9;
        break;
      case 2LL:
        v9 = (unsigned __int16)v9;
        break;
      case 1LL:
        v9 = (unsigned __int8)v9;
        break;
    }
    switch ( *((_QWORD *)a1 + 3) )
    {
      case 1LL:
        *v6 = v9;
        break;
      case 2LL:
        *(_WORD *)v6 = v9;
        break;
      case 4LL:
        *(_DWORD *)v6 = v9;
        break;
      case 8LL:
        *(_QWORD *)v6 = v9;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
// 100023F02: variable 'v3' is possibly undefined
