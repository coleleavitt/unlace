_QWORD *__fastcall sub_9BBBE0(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  _QWORD *result; // rax

  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v7 = *(_QWORD *)(a2 + 24);
  else
    v7 = *(_QWORD *)(a2 + 32);
  v9 = sub_9BB7E0((__int64)a1, v7, a3, a4);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v10 = *(_QWORD *)(a2 + 32);
  else
    v10 = *(_QWORD *)(a2 + 40);
  v12 = sub_9BB7E0((__int64)a1, v10, a3, v8);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v13 = *(_QWORD *)(a2 + 40);
  else
    v13 = *(_QWORD *)(a2 + 48);
  v14 = sub_9BB7E0((__int64)a1, v13, a3, v11);
  v17 = *a1;
  v18 = v14;
  v19 = **a1;
  v17[10] += 40;
  result = (_QWORD *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v17[1] >= (unsigned __int64)(result + 5) && v19 )
    *v17 = (__int64)(result + 5);
  else
    result = (_QWORD *)sub_962430((__int64)v17, 40, 40, 4, v15, v16);
  *result = 29;
  result[1] = 0;
  result[2] = v9;
  result[3] = v12;
  result[4] = v18;
  return result;
}

