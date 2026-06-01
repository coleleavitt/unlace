__int64 __fastcall sub_4073A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v8; // r12d
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+28h] [rbp-40h]

  v5 = 0;
  v8 = a5;
  v9 = *(_DWORD *)(a2 + 80);
  v25 = 0;
  if ( (v9 & 2) == 0 )
    goto LABEL_5;
  v10 = a5;
  if ( (v9 & 0x2000) != 0 )
  {
    BYTE1(v10) = BYTE1(a5) & 0xDF;
    v8 = v10;
  }
  if ( v8 )
  {
LABEL_5:
    v11 = *(_QWORD *)(a1 + 696);
    ++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 80) = v9 | 2;
    v30 = 0;
    v27 = a2;
    v28 = v11;
    *(_QWORD *)(a1 + 696) = &v27;
    v12 = v8;
    if ( (v8 & 0x4000) != 0 )
    {
      LOBYTE(v12) = v8 | 0x80;
      v8 = v12;
    }
    sub_487510();
    v13 = *(_QWORD *)(a2 + 96);
    if ( !v13 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 16);
        v15 = *(_QWORD *)(v13 + 24);
        v29 = v15;
        if ( (v14 & v8) != 0 )
          break;
        v13 = v15;
        if ( !v15 )
          goto LABEL_17;
      }
      *(_DWORD *)(a2 + 80) |= v14;
      if ( !a3 )
      {
        v5 = sub_496740();
        v21 = off_656088;
        *(_DWORD *)(v5 + 16) = 0;
        *(_QWORD *)(v5 + 24) = 0;
        *(_DWORD *)v5 = 1;
        *(_QWORD *)(v5 + 8) = v21;
        sub_4072E0(a1, (__int64 *)a2, v5);
        a3 = *(_QWORD *)(v5 + 8);
        if ( !a3 )
          a3 = sub_47B3B0(v5);
      }
      ++*(_DWORD *)(v13 + 32);
      if ( !v25 )
        v25 = sub_48B7B0(a1, 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))v13)(*(_QWORD *)(v13 + 8), a1, a3, a4, v8);
      *(_DWORD *)(a2 + 80) &= ~*(_DWORD *)(v13 + 16);
      v16 = *(_DWORD *)(v13 + 32) - 1;
      v17 = *(_DWORD *)(v13 + 32) == 1;
      *(_DWORD *)(v13 + 32) = v16;
      if ( v16 < 0 || v17 )
        Tcl_Free(v13);
      v13 = v29;
    }
    while ( v29 );
LABEL_17:
    if ( v25 )
      sub_48B090(a1, v25);
    if ( !v5 )
      goto LABEL_21;
    v18 = *(_DWORD *)v5 - 1;
    v17 = *(_DWORD *)v5 == 1;
    *(_DWORD *)v5 = v18;
    if ( v18 >= 0 && !v17 )
      goto LABEL_21;
    v22 = *(_QWORD *)(v5 + 24);
    if ( v22 && *(_QWORD *)(v22 + 8) )
    {
      sub_47B120(v5);
LABEL_21:
      v19 = v28;
      *(_DWORD *)(a2 + 80) &= ~2u;
      --*(_DWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 696) = v19;
      sub_4875D0(a1);
      return 0;
    }
    v23 = *(__int64 **)(v5 + 8);
    if ( v23 && v23 != off_656088 )
      Tcl_Free(v23);
    *(_DWORD *)(v5 + 16) = -1;
    sub_496830(v5);
    v24 = v28;
    *(_DWORD *)(a2 + 80) &= ~2u;
    --*(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 696) = v24;
    sub_4875D0(a1);
  }
  return 0;
}

