__int64 __fastcall sub_441310(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v7; // edx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r12d
  int v11; // r9d
  int i; // r8d
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rax
  __int64 *v20; // rdi
  int v21; // [rsp+4h] [rbp-74h]
  __int64 v22; // [rsp+8h] [rbp-70h] BYREF
  _DWORD *v23; // [rsp+10h] [rbp-68h] BYREF
  int v24; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v25[88]; // [rsp+20h] [rbp-58h] BYREF

  v7 = 0;
  v21 = 0;
  if ( a3 == 1 )
    return v7;
  v8 = *(_QWORD *)(a4 + 8);
  if ( *(char ***)(v8 + 24) != &off_6554A0 )
  {
    v9 = sub_43FB20(a2, *(_QWORD *)(a4 + 8));
    v7 = 1;
    if ( v9 )
      return v7;
  }
  if ( a3 == 2 )
  {
    v15 = *(_QWORD *)(a4 + 8);
    goto LABEL_13;
  }
  if ( *(int *)v8 > 1 )
  {
    v8 = sub_47B2A0(v8);
    v21 = 1;
  }
  v10 = 2;
  if ( a3 <= 2 )
  {
LABEL_12:
    v15 = v8;
LABEL_13:
    sub_48AFD0(a2, v15);
    return 0;
  }
  while ( !(unsigned int)sub_440900(a2, *(_QWORD *)(a4 + 8LL * v10), (__int64)v25, &v22, &v23, &v24) )
  {
    for ( i = v24; !v24; i = v24 )
    {
      sub_440560(0, v8, v22, v23, i, v11);
      sub_440A10((__int64)v25, &v22, &v23, &v24, v13, v14);
    }
    ++v10;
    sub_4409E0((__int64)v25);
    if ( v10 >= a3 )
      goto LABEL_12;
  }
  if ( v21 )
  {
    v17 = *(_DWORD *)v8 - 1;
    v18 = *(_DWORD *)v8 == 1;
    *(_DWORD *)v8 = v17;
    if ( v17 < 0 || v18 )
    {
      v19 = *(_QWORD *)(v8 + 24);
      if ( v19 && *(_QWORD *)(v19 + 8) )
      {
        sub_47B120(v8);
      }
      else
      {
        v20 = *(__int64 **)(v8 + 8);
        if ( v20 && v20 != off_656088 )
          Tcl_Free((__int64)v20);
        *(_DWORD *)(v8 + 16) = -1;
        sub_496830(v8);
      }
    }
  }
  return 1;
}

