void __fastcall __noreturn sub_5958B0(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  _QWORD *v7; // r15
  const char *v8; // rdi
  __int64 v9; // rax
  int *v10; // rax
  unsigned int v11; // edx
  const char *v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  const char *v19; // rsi
  __int64 v20; // rdx

  v6 = *(_QWORD *)(qword_2CCB598 + 1672);
  reset_undo();
  sub_5941D0(a1, a2, (a4 & 4) != 0);
  v7 = (_QWORD *)a1[193];
  if ( (a4 & 1) != 0 )
  {
    v8 = haystack;
    if ( a1[7] )
      v8 = (const char *)a1[6];
    v9 = fopenWB(v8);
    if ( !v9 )
    {
      v10 = __errno_location();
      qerrstr(*v10);
      sub_378D50();
    }
    qfclose(v9);
    v16 = haystack;
    if ( a1[4] )
      v16 = (const char *)a1[3];
    qunlink(v16);
    sub_592960(v7, a2, v17);
    v18 = getinf(27);
    v19 = haystack;
    v20 = v18 + getinf(29);
    if ( a1[7] )
      v19 = (const char *)a1[6];
    if ( !(unsigned __int8)sub_7B9E40(a1, v19, v20) )
      sub_387C60(1287);
    v11 = *(_DWORD *)(v6 + 208);
    if ( v11 )
    {
LABEL_15:
      v15 = v11 & 0xFFFFE000;
      *(_DWORD *)(v6 + 208) = v15;
      sub_387DF0(1322, v15, (unsigned __int16)(v11 >> 13), 0x2000);
    }
    v14 = *(_QWORD *)(qword_2CCB598 + 1672);
    v13 = 4 * a3;
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 208);
    if ( v11 )
      goto LABEL_15;
    v12 = haystack;
    if ( a1[7] )
      v12 = (const char *)a1[6];
    v13 = (unsigned __int64)qfilesize(v12) >> 1;
    v14 = *(_QWORD *)(qword_2CCB598 + 1672);
  }
  if ( v13 > 0x8000000 )
    v13 = 0x8000000;
  *(_DWORD *)(v14 + 208) = v13;
  if ( v13 < sub_7AF7C0() << 13 )
    *(_DWORD *)(v14 + 208) = (unsigned int)sub_7AF7C0() << 13;
  v11 = *(_DWORD *)(v6 + 208);
  goto LABEL_15;
}
