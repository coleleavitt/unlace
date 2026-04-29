__int64 __fastcall sub_4133F0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, char a6)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v8 = *(_QWORD *)(a3 + 72);
  v9 = *(_QWORD *)(v8 + 32);
  if ( a5 >= v9 )
    return (unsigned int)-1;
  v10 = *(_QWORD *)(v8 + 24);
  v12 = a5 + 1;
  v13 = v10 + 80LL * a5;
  v14 = *(unsigned int *)(v13 + 4);
  if ( (int)v14 < a4 )
  {
    if ( (_DWORD)v14 == a4 / 2 )
    {
      v15 = (int)v12;
      if ( (int)v12 < v9 )
      {
        v12 = a5 + 2;
        v16 = v10 + 80 * v15;
        if ( (_DWORD)v14 == *(_DWORD *)(v16 + 4) )
        {
          if ( a6 )
          {
            v13 = v10 + 80 * v15;
            v16 = v10 + 80LL * a5;
          }
          sub_11CDA0(a2);
          *(_DWORD *)(a2 + 4) = a4;
          v19 = (_QWORD *)j__qalloc_or_throw(32, v14, v17, v18);
          *v19 = 0xFFFFFFFF00000000LL;
          v19[1] = 0;
          v19[2] = 0xFFFFFFFF00000000LL;
          v19[3] = 0;
          *(_QWORD *)(a2 + 8) = v19;
          *(_BYTE *)a2 = 14;
          sub_125180((__int64)v19, (unsigned __int8 *)v13);
          sub_125180(*(_QWORD *)(a2 + 8) + 16LL, (unsigned __int8 *)v16);
          return v12;
        }
      }
    }
    return (unsigned int)-1;
  }
  sub_125180(a2, (unsigned __int8 *)(v10 + 80LL * a5));
  if ( a4 < *(_DWORD *)(v13 + 4) )
    sub_1273B0(a2, a1, *(_QWORD *)(a3 + 24), a4);
  return v12;
}
