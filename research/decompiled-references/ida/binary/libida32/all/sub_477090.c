unsigned __int64 __fastcall sub_477090(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r11
  _DWORD *v9; // rdi
  unsigned int *v10; // r14
  _DWORD *v11; // rbx
  _DWORD *v12; // r11
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v5 = *(int *)(a1 + 8);
  v19 = __readfsqword(0x28u);
  switch_dbctx(v5);
  if ( (unsigned __int8)sub_471630((unsigned __int64 *)a1, a3) )
  {
    v7 = *(_QWORD **)(a1 + 40);
    v8 = *(_QWORD *)(a1 + 56);
    v18[1] = 0;
    v9 = *(_DWORD **)(a1 + 48);
    v10 = (unsigned int *)(*v7 + 8 * a3);
    v18[0] = *v10;
    v11 = sub_46CDC0(v9, (__int64)&v9[16 * v8], v18);
    if ( v12 != v11 )
    {
      do
      {
        if ( *v11 >= v10[1] )
          break;
        v16 = a2[1];
        v17 = *a2;
        if ( a2[2] < (unsigned __int64)(v16 + 1) )
        {
          v14 = qvector_reserve(a2, v17, v16 + 1, 24);
          v16 = a2[1];
          *a2 = v14;
          v17 = v14;
        }
        v15 = v17 + 24 * v16;
        *(_QWORD *)v15 = 0;
        *(_OWORD *)(v15 + 8) = 0;
        ++a2[1];
        v11 += 16;
        sub_3573A0((char **)v15);
      }
      while ( v11 != (_DWORD *)(*(_QWORD *)(a1 + 48) + (*(_QWORD *)(a1 + 56) << 6)) );
    }
  }
  return v19 - __readfsqword(0x28u);
}

