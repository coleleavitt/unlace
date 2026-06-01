__int64 __fastcall sub_441C40(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r15d
  unsigned int v8; // edx
  __int64 v10; // rsi
  int *v11; // rax
  __int64 v12; // r14
  int v13; // r8d
  int v14; // r9d
  int *v15; // rsi
  int v16; // ebx
  int *v17; // rsi
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  __int64 *v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rdi
  int v28; // [rsp+Ch] [rbp-3Ch]
  int *v29; // [rsp+10h] [rbp-38h] BYREF

  v5 = 0;
  v28 = 0;
  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "varName key ?value ...?");
    return 1;
  }
  v10 = *(_QWORD *)(a4 + 8);
  v11 = (int *)sub_4A43A0(a2, v10, 0, 0);
  v12 = (__int64)v11;
  if ( v11 )
  {
    if ( *v11 <= 1 )
      goto LABEL_7;
    v28 = 1;
    v26 = sub_47B2A0(v11);
  }
  else
  {
    v28 = 1;
    v26 = sub_4401E0(a2, v10);
  }
  v12 = v26;
LABEL_7:
  if ( (unsigned int)sub_4406D0(a2, v12, *(_QWORD *)(a4 + 16), &v29) )
  {
LABEL_24:
    if ( v28 )
    {
      v22 = *(_DWORD *)v12 - 1;
      v19 = *(_DWORD *)v12 == 1;
      *(_DWORD *)v12 = v22;
      if ( v22 < 0 || v19 )
      {
        v23 = *(_QWORD *)(v12 + 24);
        if ( v23 && *(_QWORD *)(v23 + 8) )
        {
          sub_47B120(v12);
        }
        else
        {
          v24 = *(__int64 **)(v12 + 8);
          if ( v24 && v24 != off_656088 )
            Tcl_Free((__int64)v24);
          *(_DWORD *)(v12 + 16) = -1;
          sub_496830(v12);
        }
      }
    }
    return 1;
  }
  v15 = v29;
  if ( !v29 )
  {
    v29 = (int *)sub_46EEB0((unsigned int)(a3 - 3), a4 + 24);
    goto LABEL_33;
  }
  if ( *v29 > 1 )
  {
    v5 = 1;
    v15 = (int *)sub_47B2A0(v29);
    v29 = v15;
  }
  v16 = 3;
  if ( a3 > 3 )
  {
    while ( !(unsigned int)sub_46FBF0(a2, v15, *(_QWORD *)(a4 + 8LL * v16)) )
    {
      if ( ++v16 >= a3 )
        goto LABEL_38;
      v15 = v29;
    }
    if ( v5 )
    {
      v17 = v29;
      v18 = *v29 - 1;
      v19 = *v29 == 1;
      *v29 = v18;
      if ( v18 < 0 || v19 )
      {
        v20 = *((_QWORD *)v17 + 3);
        if ( v20 && *(_QWORD *)(v20 + 8) )
        {
          sub_47B120(v17);
        }
        else
        {
          v21 = *((__int64 **)v17 + 1);
          if ( v21 && v21 != off_656088 )
          {
            Tcl_Free((__int64)v21);
            v17 = v29;
          }
          v17[4] = -1;
          sub_496830(v17);
        }
      }
    }
    goto LABEL_24;
  }
LABEL_38:
  if ( !v5 )
  {
    v27 = *(__int64 **)(v12 + 8);
    if ( v27 )
    {
      if ( v27 != off_656088 )
        Tcl_Free((__int64)v27);
      *(_QWORD *)(v12 + 8) = 0;
    }
    goto LABEL_34;
  }
LABEL_33:
  sub_440560(a2, v12, *(_QWORD *)(a4 + 16), v29, v13, v14);
LABEL_34:
  v25 = sub_4A4160(a2, *(_QWORD *)(a4 + 8), 0, v12, 512);
  v8 = 1;
  if ( v25 )
  {
    sub_48AFD0(a2, v25);
    return 0;
  }
  return v8;
}

