__int64 __fastcall sub_3B7F40(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-50h]

  v7 = pack_dd(a4, a5, *(unsigned int *)(a2 + 8));
  v8 = *(_QWORD **)a2;
  v9 = v7;
  if ( 16LL * *(_QWORD *)(a2 + 8) )
  {
    v10 = 0;
    do
    {
      v11 = pack_dq(v9, a5, *v8 - v10);
      v12 = pack_dq(v11, a5, v8[1] - *v8);
      v10 = v8[1];
      v9 = v12;
      if ( (unsigned __int64)(v12 - a3) > 0xFFF )
      {
        v14 = v12 - a3;
        if ( qfwrite(a1, (void *)a3) != 4096 )
          return 0;
        v9 -= 4096;
        memmove((void *)a3, (const void *)(a3 + 4096), v14 - 4096);
      }
      v8 += 2;
    }
    while ( v8 != (_QWORD *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
  }
  return v9;
}
