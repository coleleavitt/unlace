_QWORD *__fastcall sub_BDF810(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *result; // rax
  unsigned int v5; // ecx
  int *v6; // rdi
  int v7; // esi
  __int64 v8; // r9
  int v9; // r8d
  int v10; // esi
  int v11; // r8d
  int v12; // esi
  int *v13; // rdi
  int v14; // esi
  __int64 v15; // r9
  int v16; // r8d
  int v17; // esi
  int v18; // r8d
  int v19; // esi
  __int64 v20; // r11
  __int64 v21; // rsi
  unsigned int *v22; // rdi
  unsigned int *v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int *v27; // rdx
  __int64 v28; // rdx

  result = *(_QWORD **)(a1 + 200);
  v5 = a2;
  v6 = (int *)result + a2;
  v7 = *v6;
  if ( *v6 >= 0 )
  {
    v8 = v7;
    v5 = *v6;
    v9 = *((_DWORD *)result + v7);
    if ( v9 >= -1 )
    {
      if ( v9 != -1 )
      {
        do
        {
          v10 = v9;
          v11 = *((_DWORD *)result + v9);
          v5 = v10;
          if ( v11 < 0 )
            break;
          v12 = v11;
          v9 = *((_DWORD *)result + v11);
          v5 = v12;
        }
        while ( v9 >= 0 );
      }
      while ( 1 )
      {
        *v6 = v5;
        v6 = (int *)result + v8;
        if ( *v6 < 0 )
          break;
        v8 = *v6;
      }
    }
  }
  v13 = (int *)result + a3;
  v14 = *v13;
  if ( *v13 >= 0 )
  {
    v15 = v14;
    a3 = *v13;
    v16 = *((_DWORD *)result + v14);
    if ( v16 >= -1 )
    {
      if ( v16 != -1 )
      {
        do
        {
          v17 = v16;
          v18 = *((_DWORD *)result + v16);
          a3 = v17;
          if ( v18 < 0 )
            break;
          v19 = v18;
          v16 = *((_DWORD *)result + v18);
          a3 = v19;
        }
        while ( v16 >= 0 );
      }
      while ( 1 )
      {
        *v13 = a3;
        v13 = (int *)result + v15;
        if ( *v13 < 0 )
          break;
        v15 = *v13;
      }
    }
  }
  if ( a3 != v5 )
  {
    v20 = v5;
    v21 = a3;
    v22 = (unsigned int *)result + v5;
    v23 = (unsigned int *)result + a3;
    v24 = *v22;
    v25 = *v23;
    if ( (int)*v22 <= (int)*v23 )
    {
      v25 = *v22;
      v24 = *v23;
      v27 = v23;
      v23 = v22;
      v22 = v27;
      v28 = v21;
      v21 = v5;
      v20 = v28;
      a3 = v5;
    }
    *v23 = v24 + v25;
    *v22 = a3;
    v26 = *(_QWORD *)(a1 + 184);
    result = (_QWORD *)(v26 + 8 * v21);
    if ( !*result )
      *result = *(_QWORD *)(v26 + 8 * v20);
  }
  return result;
}

