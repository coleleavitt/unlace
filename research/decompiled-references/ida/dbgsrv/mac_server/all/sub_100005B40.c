/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005B40
// Address: 0x0000000100005B40

//----- (0000000100005B40) ----------------------------------------------------
__int64 __fastcall sub_100005B40(__int64 a1, char **a2, int a3)
{
  _QWORD *v3; // r15
  _QWORD *v4; // r13
  __int64 *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // rsi
  size_t v11; // r12
  size_t v12; // r12
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  bool v15; // zf
  _QWORD v18[7]; // [rsp+20h] [rbp-90h] BYREF
  __int128 v19; // [rsp+58h] [rbp-58h]
  __int128 v20; // [rsp+68h] [rbp-48h]
  __int64 v21; // [rsp+78h] [rbp-38h]

  if ( a3 )
  {
    v3 = *(_QWORD **)(a1 + 1160);
    v4 = (_QWORD *)(a1 + 1168);
    if ( v3 != (_QWORD *)(a1 + 1168) )
    {
      v5 = (__int64 *)(a1 + 1144);
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          goto LABEL_27;
        v7 = v3[4];
        v8 = a1 + 1144;
        do
        {
          if ( *(_QWORD *)(v6 + 32) >= v7 )
            v8 = v6;
          v6 = *(_QWORD *)(v6 + 8LL * (*(_QWORD *)(v6 + 32) < v7));
        }
        while ( v6 );
        if ( (__int64 *)v8 == v5 || v7 < *(_QWORD *)(v8 + 32) )
          goto LABEL_27;
        v9 = (unsigned __int64 *)(v8 + 40);
        if ( !a2 )
          break;
        v10 = *v9;
        if ( *(_QWORD *)(a1 + 920) != *v9 )
        {
          if ( !*(_QWORD *)(a1 + 1016) || !rangeset_t_find_range(a1 + 1008, v10) )
            break;
          v10 = *v9;
        }
        v18[0] = v10;
        memset(&v18[1], 0, 24);
        v11 = *(_QWORD *)(v8 + 64);
        if ( v11 )
        {
          v18[1] = qalloc_or_throw(*(_QWORD *)(v8 + 64));
          v18[3] = v11;
          memcpy((void *)v18[1], *(const void **)(v8 + 56), v11);
          v18[2] = v11;
        }
        memset(&v18[4], 0, 24);
        v12 = *(_QWORD *)(v8 + 88);
        if ( v12 )
        {
          v18[4] = qalloc_or_throw(*(_QWORD *)(v8 + 88));
          v18[6] = v12;
          memcpy((void *)v18[4], *(const void **)(v8 + 80), v12);
          v18[5] = v12;
        }
        sub_100005EA0(a2, (char *)v18);
        if ( v18[4] )
        {
          v18[5] = 0;
          qfree((void *)v18[4]);
          v18[4] = 0;
          v18[6] = 0;
        }
        if ( v18[1] )
        {
          v18[2] = 0;
          qfree((void *)v18[1]);
        }
LABEL_27:
        v13 = (_QWORD *)v3[1];
        if ( v13 )
        {
          do
          {
            v14 = v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
        else
        {
          do
          {
            v14 = (_QWORD *)v3[2];
            v15 = *v14 == (_QWORD)v3;
            v3 = v14;
          }
          while ( !v15 );
        }
        v3 = v14;
        if ( v14 == v4 )
          goto LABEL_32;
      }
      LODWORD(v18[1]) = 4;
      memset((char *)&v18[1] + 4, 0, 24);
      v20 = 0;
      v19 = 0;
      *(_OWORD *)&v18[5] = 0;
      v18[0] = off_1000A74F0;
      v21 = a1;
      sub_100005930(a1, v18, (unsigned __int64 *)(v8 + 40));
      v18[0] = off_1000A7540;
      if ( v18[6] )
      {
        *(_QWORD *)&v19 = 0;
        qfree((void *)v18[6]);
      }
      goto LABEL_27;
    }
LABEL_32:
    sub_10000C790(a1 + 1160, *(_QWORD **)(a1 + 1168));
    *(_QWORD *)(a1 + 1160) = v4;
    *(_OWORD *)(a1 + 1168) = 0;
  }
  return __stack_chk_guard;
}
// 1000A74F0: using guessed type __int64 (__fastcall *off_1000A74F0[7])();
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
