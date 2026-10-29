__int64 __fastcall sub_516F40(__int64 *a1, unsigned int *a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // rax
  const char *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  void *v14; // r13
  int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v19; // [rsp-8h] [rbp-A8h]
  void *v21; // [rsp+8h] [rbp-98h] BYREF
  int v22[4]; // [rsp+10h] [rbp-90h]
  int v23; // [rsp+20h] [rbp-80h]
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __int128 v25; // [rsp+30h] [rbp-70h]
  int v26; // [rsp+40h] [rbp-60h]
  void *v27[11]; // [rsp+48h] [rbp-58h] BYREF

  v6 = *a2;
  v27[3] = (void *)__readfsqword(0x28u);
  v7 = *a1;
  *(_OWORD *)v22 = 0;
  v21 = nullptr;
  v8 = *(_QWORD **)(**(_QWORD **)(v7 + 1680) + 1616LL);
  v9 = *(_QWORD **)(*v8 + 1480LL);
  if ( (unsigned __int8)sub_6994A0(v9, &v21, v6) )
  {
    if ( !*(_QWORD *)v22 )
    {
LABEL_17:
      sub_82BC50(
        "cannot find struct name (id=0x%a)\n",
        v19,
        a4,
        (int)v21,
        v22[0],
        v22[2],
        v23,
        (int)ptr,
        v25,
        SDWORD2(v25),
        v26,
        (__int64)v27[0]);
      v17 = 0;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)v22 - 1LL;
  }
  else
  {
    LODWORD(v27[0]) = sub_3B90A0(v9, v6);
    v10 = sub_79BD30(v27, *v8, &v21);
  }
  if ( v10 <= 0 )
    goto LABEL_17;
  sub_69C0D0(&v21, a4);
  v11 = haystack;
  if ( *(_QWORD *)v22 )
    v11 = (const char *)v21;
  v12 = *a1;
  ptr = nullptr;
  v13 = *(_QWORD *)(v12 + 1480);
  v25 = 0;
  if ( (unsigned __int8)sub_6994A0(v13, &ptr, a3) )
  {
    sub_698E00(v27, v11);
    v14 = v27[0];
    v11 = haystack;
    if ( v27[1] )
      v11 = (const char *)v27[0];
  }
  else
  {
    v14 = nullptr;
  }
  v15 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a3);
  v16 = *a1;
  LODWORD(v27[0]) = v15;
  v17 = sub_79BD70(v27, v16, v11, 0);
  if ( v14 )
    qfree(v14);
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
LABEL_14:
  if ( v21 )
  {
    *(_QWORD *)v22 = 0;
    qfree(v21);
  }
  return v17;
}

