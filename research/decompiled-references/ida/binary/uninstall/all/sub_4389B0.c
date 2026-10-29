__int64 __fastcall sub_4389B0(__int64 **a1)
{
  int v2; // r12d
  int v3; // r14d
  __int64 v4; // r15
  int v5; // ebp
  int **v6; // rbx
  int *v7; // rsi
  int v8; // eax
  bool v9; // zf
  int v10; // ebp
  __int64 *v11; // rbx
  void (__fastcall *v12)(__int64); // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rsi
  __int64 *v17; // rbx
  int i; // ebp
  __int64 v19; // rdi

  v2 = *((_DWORD *)a1 + 19);
  v3 = *((_DWORD *)a1 + 21);
  v4 = **a1;
  if ( (_BYTE)a1[4] & 1 | (v4 == 0) )
  {
    v5 = 0;
    v6 = (int **)a1[14];
    while ( v5 < v2 )
    {
      v7 = *v6;
      if ( *v6 && (v8 = *v7 - 1, v9 = *v7 == 1, *v7 = v8, v8 < 0 || v9) )
      {
        ++v6;
        ++v5;
        sub_47B120(v7);
      }
      else
      {
        ++v6;
        ++v5;
      }
    }
    *((_DWORD *)a1 + 19) = 0;
  }
  else
  {
    v17 = a1[14];
    for ( i = 0; i < v2; ++i )
    {
      if ( *v17 )
        sub_470960(v4);
      ++v17;
    }
  }
  v10 = 0;
  v11 = a1[16];
  while ( v10 < v3 )
  {
    v12 = *(void (__fastcall **)(__int64))(*v11 + 16);
    if ( v12 )
    {
      v19 = v11[1];
      ++v10;
      v11 += 2;
      v12(v19);
    }
    else
    {
      v11 += 2;
      ++v10;
    }
  }
  if ( v4 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(*(_QWORD *)(v4 + 984) + 64LL))(*(_QWORD *)(v4 + 984), a1);
    v14 = v13;
    if ( v13 )
    {
      sub_438920(*(_QWORD *)(v13 + 24));
      sub_457BC0(v14);
    }
  }
  v15 = a1[21];
  if ( v15 && (v9 = *(_DWORD *)v15 == 1, --*(_DWORD *)v15, v9) )
  {
    sub_488A70(v4);
    sub_487850(*a1);
    return Tcl_Free((__int64)a1);
  }
  else
  {
    sub_487850(*a1);
    return Tcl_Free((__int64)a1);
  }
}

