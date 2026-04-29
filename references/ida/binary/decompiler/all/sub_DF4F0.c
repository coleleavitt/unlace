__int64 __fastcall sub_DF4F0(__int64 a1, _QWORD *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // rax
  int v11; // eax
  unsigned int *v12; // r12
  unsigned int *i; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v25; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v28[7]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v30[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = (__int64)a2;
  v30[3] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v8 = a2[7];
  if ( v8 )
  {
    a2 = 0;
    v9 = sub_11DF40(v8, 0);
    if ( v9 )
    {
      if ( !*(_BYTE *)(v9 + 64) )
      {
        sub_D6330((__int64)&v25, *(_QWORD *)(v6 + 480), 0x70u);
        sub_DF3B0((__int64 *)a1, (_QWORD *)v6, &v26, v29);
        a2 = (_QWORD *)v6;
        sub_DF3B0((__int64 *)a1, (_QWORD *)v6, v28, v30);
        if ( v30[0] )
        {
          v30[1] = 0;
          qfree();
        }
        if ( v29[0] )
        {
          v29[1] = 0;
          qfree();
        }
        if ( v28[0] )
        {
          v28[1] = 0;
          qfree();
        }
        v8 = v26;
        if ( v26 )
        {
          v27[0] = 0;
          qfree();
        }
      }
    }
  }
  v10 = *(int **)(v6 + 48);
  if ( !v10 || (v11 = *v10, v11 == 55) || a3 && (unsigned int)(v11 - 42) <= 0xA )
  {
    v12 = *(unsigned int **)(v6 + 368);
    for ( i = &v12[*(_QWORD *)(v6 + 376)]; i != v12; ++v12 )
    {
      v14 = *(_QWORD *)(v6 + 64);
      v15 = *v12;
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
        sub_CE6C0(v8, a2, v14, a4, a5);
      a2 = *(_QWORD **)(*(_QWORD *)(v14 + 528) + 8 * v15);
      if ( *((_DWORD *)a2 + 88) == 1 )
      {
        sub_DF4F0(&v25, a2, 0);
        sub_63980((__int64 *)a1, &v25);
        a2 = v27;
        sub_313730(a1 + 16, v27);
        if ( v27[0] )
        {
          v27[1] = 0;
          qfree();
        }
        v8 = v25;
        qfree();
      }
    }
  }
  if ( !(unsigned __int8)sub_63F80((_QWORD *)a1) || *(_QWORD *)(a1 + 24) )
  {
    sub_63D40((__int64 *)a1, (__int64 *)(v6 + 200), v16, v17, v18, v19);
    sub_314710(a1 + 16, v6 + 216);
  }
  sub_63980((__int64 *)a1, (__int64 *)(v6 + 120));
  if ( *(_DWORD *)(v6 + 76) != 1 && *(_BYTE *)(*(_QWORD *)(v6 + 480) + 148LL) )
  {
    if ( (*(_DWORD *)(v6 + 24) & 0x600) != 0x200 )
      sub_A6800(v6, 0, v20, v21, v22, v23);
    sub_313730(a1 + 16, v6 + 136);
  }
  return a1;
}
