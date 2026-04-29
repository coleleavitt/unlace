__int64 __fastcall sub_228E40(__int64 a1, _QWORD *a2, int a3, signed int a4, __int64 *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v12; // eax
  unsigned int v13; // r15d
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r14d
  __int64 v25; // [rsp+18h] [rbp-70h]
  int v26; // [rsp+34h] [rbp-54h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v28[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 432) + 104LL * a3;
  v9 = *(_QWORD *)(a1 + 1496);
  v10 = *(_QWORD *)(v8 + 80);
  v29 = __readfsqword(0x28u);
  if ( !(unsigned int)lexcompare_tinfo(v10, *(_QWORD *)(v9 + 248), 0) )
    return 0;
  if ( a5 && *(_BYTE *)a5 )
  {
    v27 = 0;
    copy_tinfo_t(&v27, a5);
  }
  else
  {
    sub_1EA270(&v27, (_DWORD *)v8, *(_QWORD **)(a1 + 1504), a4, 0);
  }
  LOBYTE(v12) = sub_1EAC90(v8, *(_QWORD *)(a1 + 1504), &v27, 0);
  v13 = v12;
  if ( !(_BYTE)v12 )
    goto LABEL_8;
  if ( *(_DWORD *)v8 != 1 )
  {
    if ( ((*(_DWORD *)v8 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_8;
LABEL_34:
    if ( !under_debugger )
      sub_37E160(51032);
    BUG();
  }
  v15 = *(_QWORD *)(v8 + 8);
  v16 = *(_QWORD *)(a1 + 144);
  if ( v15 >= v16 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      v23 = sub_1BF140((_DWORD *)v8);
      if ( (int)sub_EEB80(a1) > v23 )
        goto LABEL_8;
    }
    else if ( !(unsigned __int8)sub_224070((_QWORD *)a1, v15, a4, a5) )
    {
      goto LABEL_8;
    }
    if ( ((*(_DWORD *)v8 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_8;
    if ( *(_DWORD *)v8 != 1 )
      goto LABEL_34;
    v16 = *(_QWORD *)(a1 + 144);
    v15 = *(_QWORD *)(v8 + 8);
  }
  v25 = a4 + v15;
  if ( v25 <= v16 || v16 <= v15 )
  {
    v17 = -1;
    while ( 1 )
    {
      v18 = sub_1EBD80((__int64 *)(a1 + 432), (int *)v8, a4, -1, v17 + 1);
      v26 = v18;
      v17 = v18;
      if ( v18 == -1 )
        break;
      if ( v18 != a3 )
      {
        v19 = *(_QWORD *)(a1 + 432) + 104LL * v18;
        if ( (*(_BYTE *)(v19 + 24) & 2) != 0
          || ((*(_DWORD *)v19 - 2) & 0xFFFFFFFD) == 0
          || v25 < (int)sub_1BF200((_DWORD *)v19, *(_DWORD *)(v19 + 88)) )
        {
          goto LABEL_8;
        }
        sub_BF9C0(a2, &v26, v20, v21, v22);
      }
    }
    if ( (*(_BYTE *)(v8 + 25) & 8) == 0 )
      goto LABEL_9;
    sub_327150(v28, *(_QWORD *)(a1 + 1496));
    if ( v28[0] )
    {
      clear_tinfo_t(v28);
      goto LABEL_9;
    }
    clear_tinfo_t(v28);
  }
LABEL_8:
  v13 = 0;
LABEL_9:
  clear_tinfo_t(&v27);
  return v13;
}
