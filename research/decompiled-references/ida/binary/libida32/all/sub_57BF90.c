void __fastcall __noreturn sub_57BF90(_QWORD *a1, __int64 a2, __int64 a3, char a4)
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
  int v17; // r12d
  const char *v18; // rsi
  __int64 v19; // rdx

  v6 = *(_QWORD *)(qword_2CA1698 + 1480);
  reset_undo();
  sub_57A8B0(a1, a2, (a4 & 4) != 0);
  v7 = (_QWORD *)a1[169];
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
      sub_375400();
    }
    qfclose(v9);
    v16 = haystack;
    if ( a1[4] )
      v16 = (const char *)a1[3];
    qunlink(v16);
    sub_5790F0(v7);
    v17 = getinf(27);
    v18 = haystack;
    v19 = (unsigned int)getinf(29) + v17;
    if ( a1[7] )
      v18 = (const char *)a1[6];
    if ( !(unsigned __int8)sub_796DF0(a1, v18, v19) )
      sub_383F40(1287);
    v11 = *(_DWORD *)(v6 + 200);
    if ( v11 )
    {
LABEL_15:
      v15 = v11 & 0xFFFFE000;
      *(_DWORD *)(v6 + 200) = v15;
      sub_3840D0(1322, v15, (unsigned __int16)(v11 >> 13), 0x2000);
    }
    v13 = 4 * a3;
    v14 = *(_QWORD *)(qword_2CA1698 + 1480);
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 200);
    if ( v11 )
      goto LABEL_15;
    v12 = haystack;
    if ( a1[7] )
      v12 = (const char *)a1[6];
    v13 = (unsigned __int64)qfilesize(v12) >> 1;
    v14 = *(_QWORD *)(qword_2CA1698 + 1480);
  }
  if ( v13 > 0x8000000 )
    v13 = 0x8000000;
  *(_DWORD *)(v14 + 200) = v13;
  if ( v13 < sub_78EEB0() << 13 )
    *(_DWORD *)(v14 + 200) = (unsigned int)sub_78EEB0() << 13;
  v11 = *(_DWORD *)(v6 + 200);
  goto LABEL_15;
}

