/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1100
// Address: 0x00000000000D1100

//----- (00000000000D1100) ----------------------------------------------------
__int64 __fastcall sub_D1100(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdi
  char *v12; // rdx
  unsigned __int64 v13; // r13
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rdx
  __int64 v18; // rcx

  v4 = a4;
  if ( a1 == *(_QWORD *)(a2 + 16) )
  {
    result = *(_QWORD *)(a2 + 32);
    if ( result )
    {
      if ( (_QWORD *)result == a3 )
      {
        if ( *(_DWORD *)(a2 + 48) == 2 )
          *(_DWORD *)(a2 + 48) = a4;
      }
      else
      {
        ++*(_DWORD *)(a2 + 60);
        *(_DWORD *)(a2 + 48) = 2;
        *(_BYTE *)(a2 + 78) = 1;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 32) = a3;
      *(_DWORD *)(a2 + 48) = a4;
      *(_DWORD *)(a2 + 60) = 1;
    }
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 20);
    v8 = *(_QWORD *)(a1 + 32);
    if ( a3 )
    {
      v9 = v8 >> 8;
      if ( (v8 & 1) != 0 )
        v9 = *(_QWORD *)(*a3 + v9);
    }
    else
    {
      v9 = 0;
    }
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (char *)a3 + v9;
    a4 = (unsigned int)a4;
    if ( (v8 & 2) == 0 )
      a4 = 2;
    result = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)v11 + 56LL))(v11, a2, v12, a4);
    if ( (unsigned int)v7 >= 2 )
    {
      v13 = a1 + 16 * v7 + 24;
      v14 = (_QWORD *)(a1 + 40);
      do
      {
        v15 = v14[1];
        if ( a3 )
        {
          v16 = v15 >> 8;
          if ( (v15 & 1) != 0 )
            v16 = *(_QWORD *)(*a3 + v16);
        }
        else
        {
          v16 = 0;
        }
        v17 = (char *)a3 + v16;
        v18 = v4;
        if ( (v15 & 2) == 0 )
          v18 = 2;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64))(*(_QWORD *)*v14 + 56LL))(
                   *v14,
                   a2,
                   v17,
                   v18);
        if ( *(_BYTE *)(a2 + 78) )
          break;
        v14 += 2;
      }
      while ( (unsigned __int64)v14 < v13 );
    }
  }
  return result;
}
