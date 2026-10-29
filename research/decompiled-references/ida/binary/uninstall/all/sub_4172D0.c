__int64 __fastcall sub_4172D0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r8d
  int v9; // r9d
  int v10; // ebx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rsi
  _QWORD *v16; // r10
  int v17; // r9d
  int v18; // r8d
  int v19; // r11d
  int v20; // edi
  _DWORD **v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  int v26; // r9d
  _QWORD *v27; // rax
  int v28[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "positiveCount value ?value ...?");
    return 1;
  }
  if ( (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 8), v28) == 1 )
    return 1;
  if ( v28[0] <= 0 )
  {
    sub_48B710(a2, (unsigned int)"must have a count of at least 1", 0, v28[0], v8, v9);
    return 1;
  }
  v10 = a3 - 2;
  v11 = (_QWORD *)(a4 + 16);
  if ( 536870909 / v28[0] < v10 )
  {
    v24 = sub_48F930(
            (unsigned int)"max length of a Tcl list (%d elements) exceeded",
            536870909,
            536870909 % v28[0],
            v28[0],
            v8,
            v9);
    sub_48AFD0(a2, v24);
    return 1;
  }
  v12 = sub_46EEB0((unsigned int)(v28[0] * v10), 0);
  v13 = v28[0];
  v14 = *(_QWORD *)(v12 + 32);
  v15 = v12;
  v16 = (_QWORD *)(v14 + 16);
  *(_DWORD *)(v14 + 8) = v10 * v28[0];
  if ( v10 == 1 )
  {
    v25 = (_DWORD *)*v11;
    v26 = 0;
    *(_DWORD *)*v11 += v13;
    if ( v13 > 0 )
    {
      v27 = v16;
      do
      {
        ++v26;
        *v27++ = v25;
      }
      while ( v26 < v13 );
    }
  }
  else
  {
    v17 = 0;
    v18 = 0;
    if ( v13 > 0 )
    {
      v19 = v13;
      do
      {
        v20 = 0;
        if ( v10 > 0 )
        {
          v21 = (_DWORD **)v11;
          do
          {
            v22 = *v21;
            ++v20;
            v23 = v18;
            ++v21;
            ++v18;
            ++*v22;
            v16[v23] = v22;
          }
          while ( v20 < v10 );
        }
        ++v17;
      }
      while ( v17 < v19 );
    }
  }
  sub_48AFD0(a2, v15);
  return 0;
}

