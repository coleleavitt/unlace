__int64 __fastcall sub_1EDBBF0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(a1 + 5696);
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 16 * ((unsigned int)(result - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v10 = v8 + *(_QWORD *)(a1 + 5688);
        result = sub_1EDB980((_QWORD *)a1, *(_QWORD *)v10, (__int64)a3, (__int64)a4, a5, a6);
        v11 = *(unsigned int *)(a2 + 8);
        v6 = *(unsigned int *)(v10 + 8) | v6 & 0xFFFFFFFF00000000LL;
        a3 = (__int64 *)(v11 + 1);
        if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          break;
        v8 += 16;
        a4 = (__int64 *)(*(_QWORD *)a2 + 16 * v11);
        *a4 = result;
        a4[1] = v6;
        ++*(_DWORD *)(a2 + 8);
        if ( v9 == v8 )
          goto LABEL_6;
      }
      v8 += 16;
      v12 = result;
      sub_2237220(a2, a2 + 16, a3, 16);
      result = v12;
      a3 = (__int64 *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
      *a3 = v12;
      a3[1] = v6;
      ++*(_DWORD *)(a2 + 8);
    }
    while ( v9 != v8 );
  }
LABEL_6:
  *(_DWORD *)(a1 + 5696) = 0;
  return result;
}
