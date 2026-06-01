/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A80
// Address: 0x0000000000044A80

//----- (0000000000044A80) ----------------------------------------------------
__int64 __fastcall sub_44A80(__int64 a1, char **a2, int a3, unsigned __int64 a4, int a5)
{
  int v5; // ebp
  __int64 v9; // rbx
  void **v10; // rbp
  void **v11; // rbx
  bool v12; // cf
  void **v13; // rax
  char *v15; // r15
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rdi
  __int64 *v19; // rbp
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 **v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rcx
  bool v25; // zf
  __int128 v26; // [rsp+8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]
  unsigned __int64 v28; // [rsp+20h] [rbp-38h]

  v5 = a5;
  v28 = __readfsqword(0x28u);
  if ( a3 != 4 )
    return (unsigned __int8)sub_A77C0(a1, a3, a4, v5);
  if ( a2 && (int)sub_A2900((_BYTE *)a1, a2, a4, a5) < 0 )
    return 4294967294LL;
  v9 = *(_QWORD *)(a1 + 408);
  if ( v5 < 0 )
    v5 = *(_DWORD *)(a1 + 416);
  if ( v5 <= 0 || *(_QWORD *)(a1 + 416) < (unsigned __int64)v5 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30066);
LABEL_50:
    BUG();
  }
  *(_QWORD *)&v26 = a4;
  LOBYTE(v27) = v5;
  HIDWORD(v27) = 0;
  if ( (unsigned __int8)v5 >= 8u )
  {
    if ( !(_BYTE)under_debugger )
      interr(1796);
    goto LABEL_50;
  }
  if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
          a1,
          a4,
          (char *)&v26 + 8,
          v5,
          0)
    || (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         a4,
         v9,
         v5,
         0) != v5 )
  {
    return (unsigned __int8)sub_A77C0(a1, a3, a4, v5);
  }
  v10 = *(void ***)(a1 + 440);
  if ( v10 )
  {
    v11 = (void **)(a1 + 440);
    v12 = (unsigned __int64)v10[4] < a4;
    if ( (unsigned __int64)v10[4] <= a4 )
      goto LABEL_17;
    while ( 1 )
    {
      v13 = (void **)*v10;
      v11 = v10;
      if ( !*v10 )
        break;
      while ( 1 )
      {
        v10 = v13;
        v12 = (unsigned __int64)v13[4] < a4;
        if ( (unsigned __int64)v13[4] > a4 )
          break;
LABEL_17:
        if ( v12 )
        {
          v11 = v10 + 1;
          v13 = (void **)v10[1];
          if ( v13 )
            continue;
        }
        goto LABEL_24;
      }
    }
  }
  else
  {
    v10 = (void **)(a1 + 440);
  }
  v11 = v10;
LABEL_24:
  v15 = (char *)*v11;
  if ( !*v11 )
  {
    v15 = (char *)operator new(0x40u);
    *((_QWORD *)v15 + 4) = a4;
    *((_QWORD *)v15 + 5) = -1;
    v15[56] = 0;
    *((_DWORD *)v15 + 15) = 0;
    *(_OWORD *)v15 = 0;
    *((_QWORD *)v15 + 2) = v10;
    *v11 = v15;
    v16 = **(_QWORD **)(a1 + 432);
    if ( v16 )
    {
      *(_QWORD *)(a1 + 432) = v16;
      v17 = (__int64 *)*v11;
    }
    else
    {
      v17 = (__int64 *)v15;
    }
    sub_4A450(*(__int64 **)(a1 + 440), v17);
    ++*(_QWORD *)(a1 + 448);
  }
  *((_QWORD *)v15 + 7) = v27;
  *(_OWORD *)(v15 + 40) = v26;
  v18 = *(__int64 **)(a1 + 1200);
  if ( v18 )
  {
    v19 = (__int64 *)(a1 + 1200);
    v20 = *(__int64 **)(a1 + 1200);
    do
    {
      if ( v20[4] >= a4 )
        v19 = v20;
      v20 = (__int64 *)v20[v20[4] < a4];
    }
    while ( v20 );
    if ( v19 != (__int64 *)(a1 + 1200) && v19[4] <= a4 )
    {
      v21 = (__int64 *)v19[1];
      if ( v21 )
      {
        do
        {
          v22 = (__int64 **)v21;
          v21 = (__int64 *)*v21;
        }
        while ( v21 );
      }
      else
      {
        v22 = (__int64 **)v19[2];
        if ( *v22 != v19 )
        {
          v23 = v19 + 2;
          do
          {
            v24 = *v23;
            v22 = *(__int64 ***)(v24 + 16);
            v25 = *v22 == (__int64 *)v24;
            v23 = (__int64 *)(v24 + 16);
          }
          while ( !v25 );
        }
      }
      if ( *(__int64 **)(a1 + 1192) == v19 )
        *(_QWORD *)(a1 + 1192) = v22;
      --*(_QWORD *)(a1 + 1208);
      sub_4C430(v18, v19);
      operator delete(v19);
    }
  }
  return 1;
}
// 158B40: using guessed type __int64 under_debugger;
