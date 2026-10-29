__int64 __fastcall sub_441EF0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  int v4; // ebx
  unsigned int v8; // edx
  __int64 v10; // rsi
  int *v11; // rax
  __int64 v12; // r12
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rdi
  int v20; // ebp
  __int64 *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  int *v26; // [rsp+0h] [rbp-38h] BYREF

  v4 = 0;
  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "varName key ?value ...?");
    return 1;
  }
  v10 = a4[1];
  v11 = (int *)sub_4A43A0(a2, v10, 0, 0);
  v12 = (__int64)v11;
  if ( v11 )
  {
    if ( *v11 <= 1 )
      goto LABEL_7;
    v4 = 1;
    v25 = sub_47B2A0(v11);
  }
  else
  {
    v4 = 1;
    v25 = sub_4401E0(a2, v10);
  }
  v12 = v25;
LABEL_7:
  if ( (unsigned int)sub_4406D0(a2, v12, a4[2], &v26) )
  {
    if ( v4 )
    {
      v15 = *(_DWORD *)v12 - 1;
      v16 = *(_DWORD *)v12 == 1;
      *(_DWORD *)v12 = v15;
      if ( v15 < 0 || v16 )
      {
        v17 = *(_QWORD *)(v12 + 24);
        if ( v17 && *(_QWORD *)(v17 + 8) )
        {
          sub_47B120(v12);
        }
        else
        {
          v18 = *(__int64 **)(v12 + 8);
          if ( v18 && v18 != off_656088 )
            Tcl_Free((__int64)v18);
          *(_DWORD *)(v12 + 16) = -1;
          sub_496830(v12);
        }
      }
    }
    return 1;
  }
  v19 = (__int64)v26;
  if ( v26 )
  {
    if ( *v26 > 1 )
    {
      v19 = sub_47B2A0(v26);
      v26 = (int *)v19;
    }
  }
  else
  {
    v19 = sub_496740(0, v12);
    v26 = (int *)v19;
    *(_DWORD *)v19 = 0;
    v24 = off_656088;
    *(_DWORD *)(v19 + 16) = 0;
    *(_QWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 8) = v24;
  }
  v20 = 3;
  v21 = a4 + 3;
  if ( a3 > 3 )
  {
    while ( 1 )
    {
      v22 = *v21;
      ++v20;
      ++v21;
      sub_48F180(v19, v22);
      if ( v20 >= a3 )
        break;
      v19 = (__int64)v26;
    }
    v19 = (__int64)v26;
  }
  sub_440560(a2, v12, a4[2], (_DWORD *)v19, v13, v14);
  v23 = sub_4A4160(a2, a4[1], 0, v12, 512);
  v8 = 1;
  if ( v23 )
  {
    sub_48AFD0(a2, v23);
    return 0;
  }
  return v8;
}

