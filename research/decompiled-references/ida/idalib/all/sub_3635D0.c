__int64 __fastcall sub_3635D0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rax
  unsigned __int64 *v7; // r8
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 *v11; // r8
  unsigned __int64 *v12; // rax
  unsigned __int64 v14; // r15
  char v15; // al

  v4 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v4 + 96);
  v7 = *(unsigned __int64 **)(v6 + 384);
  v8 = &v7[2 * *(_QWORD *)(v6 + 392)];
  if ( v7 != v8 )
  {
    do
    {
      if ( a3 >= *v7 && a3 < v7[1] )
      {
        if ( v7 )
        {
          v9 = v7[1];
          if ( a4 <= v9 )
            v9 = a4;
          sub_363300((_QWORD *)a1, a2, a3, v9, (__int64)v7);
          a3 = v9;
        }
        goto LABEL_8;
      }
      v7 += 2;
    }
    while ( v8 != v7 );
    if ( a4 - a3 <= 7 )
      goto LABEL_9;
LABEL_18:
    *(_DWORD *)(a1 + 144) &= ~0x200000u;
    *(_QWORD *)(a1 + 704) = -1;
    v14 = (a3 >> 3) + a2;
    sub_382A40(a1, v14, 0);
    v15 = sub_364730(a1, v14, 2, 0, 0);
    a3 = a4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
      return 1;
    goto LABEL_9;
  }
LABEL_8:
  if ( a4 - a3 > 7 )
    goto LABEL_18;
LABEL_9:
  if ( a3 < a4 )
  {
    v10 = *(_QWORD *)(v4 + 96);
    v11 = *(unsigned __int64 **)(v10 + 384);
    v12 = &v11[2 * *(_QWORD *)(v10 + 392)];
    if ( v11 == v12 )
      goto LABEL_21;
    while ( a3 < *v11 || a3 >= v11[1] )
    {
      v11 += 2;
      if ( v12 == v11 )
        goto LABEL_21;
    }
    if ( !v11 )
    {
LABEL_21:
      if ( !under_debugger )
        interr(3024);
      BUG();
    }
    sub_363300((_QWORD *)a1, a2, a3, a4, (__int64)v11);
  }
  return 1;
}
