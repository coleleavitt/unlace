_DWORD *__fastcall sub_189A000(
        __int64 a1,
        double a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  _DWORD *result; // rax
  __int64 *v12; // r12
  char v13; // dl
  __int64 v14; // rdx
  _DWORD *v15; // [rsp+8h] [rbp-30h]

  *(_DWORD *)(*(_QWORD *)a1 + 8LL) = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( (_DWORD)v8 )
  {
    v9 = 0;
    v10 = 4LL * (unsigned int)(v8 - 1) + 4;
    while ( 1 )
    {
      result = (_DWORD *)sub_1898DD0(
                           *(_QWORD *)(a1 + 16),
                           *(_QWORD *)(**(_QWORD **)(a1 + 24) + 2 * v9),
                           *(_DWORD *)(**(_QWORD **)(a1 + 32) + v9),
                           a2,
                           a3,
                           a6,
                           a7,
                           a8);
      v12 = *(__int64 **)(a1 + 40);
      if ( v13 || !result )
        break;
      a6 = *((unsigned int *)v12 + 2);
      if ( a6 + 1 > (unsigned __int64)*((unsigned int *)v12 + 3) )
      {
        v15 = result;
        sub_2237220(*(_QWORD *)(a1 + 40), v12 + 2, a6 + 1, 8);
        a6 = *((unsigned int *)v12 + 2);
        v14 = *v12;
        result = v15;
      }
      else
      {
        v14 = *v12;
      }
      v9 += 4;
      *(_QWORD *)(v14 + 8 * a6) = result;
      ++*((_DWORD *)v12 + 2);
      if ( v10 == v9 )
        goto LABEL_8;
    }
    *((_DWORD *)v12 + 2) = 0;
  }
  else
  {
LABEL_8:
    **(_DWORD **)(a1 + 48) = **(_DWORD **)(a1 + 56);
    result = *(_DWORD **)(a1 + 64);
    *result = **(_DWORD **)(a1 + 72);
  }
  return result;
}
