unsigned __int64 __fastcall sub_48BA40(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 *v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // r11
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v5 = *(int *)(a1 + 8);
  v18 = __readfsqword(0x28u);
  switch_dbctx(v5);
  if ( (unsigned __int8)sub_485E30((unsigned __int64 *)a1, a3) )
  {
    v7 = *(_QWORD **)(a1 + 40);
    v8 = *(_QWORD **)(a1 + 48);
    v17[1] = 0;
    v9 = (unsigned __int64 *)(*v7 + 16 * a3);
    v17[0] = *v9;
    v10 = sub_4813C0(v8, (__int64)&v8[10 * *(_QWORD *)(a1 + 56)], v17);
    if ( v11 != v10 )
    {
      do
      {
        if ( *v10 >= v9[1] )
          break;
        v15 = a2[1];
        v16 = *a2;
        if ( a2[2] < (unsigned __int64)(v15 + 1) )
        {
          v13 = qvector_reserve(a2, v16, v15 + 1, 24);
          v15 = a2[1];
          *a2 = v13;
          v16 = v13;
        }
        v14 = v16 + 24 * v15;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
        ++a2[1];
        v10 += 10;
        sub_35A790((char **)v14);
      }
      while ( v10 != (_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL * *(_QWORD *)(a1 + 56)) );
    }
  }
  return v18 - __readfsqword(0x28u);
}
