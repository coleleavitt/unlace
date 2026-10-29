__int64 __fastcall sub_5649C0(__int64 a1, unsigned int a2, const void *a3, size_t a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  size_t v9; // r14
  _QWORD *v11; // rax
  __int64 *v12; // rbx
  size_t v13; // rax
  size_t v14; // rax
  _QWORD *v16; // rax
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // r12
  _QWORD *v23; // rbp
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-50h]
  _BYTE v28[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v29[0] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 24) )
    return 1;
  v5 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 96);
  v9 = a4 + 10;
  if ( v6 < v5 )
  {
    if ( !under_debugger )
      interr(1756);
    goto LABEL_39;
  }
  if ( v6 - v5 >= v9 )
  {
LABEL_4:
    v11 = *(_QWORD **)(a1 + 32);
    if ( v11 != (_QWORD *)(a1 + 8) )
    {
      v12 = v11 + 5;
      v27 = v11[6];
LABEL_6:
      v13 = pack_dd(v28, v29, a2) - (_QWORD)v28;
      if ( v13 )
        sub_564900(v12, v28, v13);
      v14 = pack_dd(v28, v29, (unsigned int)a4) - (_QWORD)v28;
      if ( v14 )
        sub_564900(v12, v28, v14);
      if ( a4 )
        sub_564900(v12, a3, a4);
      *(_QWORD *)(a1 + 104) += v12[1] - v27;
      return 1;
    }
    v26 = v11[1];
    v12 = (__int64 *)(v26 + 16);
    v27 = *(_QWORD *)(v26 + 24);
    if ( (a2 == 0) == (v27 == 0) )
      goto LABEL_6;
    if ( !under_debugger )
      interr(1746);
LABEL_39:
    BUG();
  }
  if ( !*(_BYTE *)(a1 + 121) )
  {
    *(_BYTE *)(a1 + 121) = 1;
    sub_365330();
  }
  while ( 1 )
  {
    v20 = *(_QWORD **)(a1 + 8);
    v21 = v20[3] + v20[6];
    if ( v5 < v21 )
    {
      if ( !under_debugger )
        interr(1759);
      goto LABEL_39;
    }
    *(_QWORD *)(a1 + 104) = v5 - v21;
    if ( v20 == *(_QWORD **)(a1 + 32) || *(_QWORD *)(a1 + 24) == 1 )
      break;
    v16 = (_QWORD *)*v20;
    *(_QWORD *)v20[1] = *v20;
    v16[1] = v20[1];
    v17 = (void *)v20[5];
    if ( v17 )
    {
      v20[6] = 0;
      qfree(v17);
    }
    v18 = (void *)v20[2];
    if ( v18 )
    {
      v20[3] = 0;
      qfree(v18);
    }
    qfree(v20);
    v5 = *(_QWORD *)(a1 + 104);
    v19 = *(_QWORD *)(a1 + 96);
    --*(_QWORD *)(a1 + 24);
    if ( v19 - v5 >= v9 )
      goto LABEL_4;
  }
  v22 = (_QWORD *)(a1 + 8);
  if ( v20 != (_QWORD *)(a1 + 8) )
  {
    do
    {
      v23 = v20;
      v20 = (_QWORD *)*v20;
      *(_QWORD *)v23[1] = v20;
      v20[1] = v23[1];
      v24 = (void *)v23[5];
      if ( v24 )
      {
        v23[6] = 0;
        qfree(v24);
      }
      v25 = (void *)v23[2];
      if ( v25 )
      {
        v23[3] = 0;
        qfree(v25);
      }
      qfree(v23);
      --*(_QWORD *)(a1 + 24);
    }
    while ( v22 != v20 );
    v22 = *(_QWORD **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 32) = v22;
  *(_QWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  return 0;
}

