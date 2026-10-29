__int64 __fastcall sub_1EDBCD0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(a1 + 5632);
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 16 * ((unsigned int)(result - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v10 = v8 + *(_QWORD *)(a1 + 5624);
        result = sub_1EDB980((_QWORD *)a1, *(_QWORD *)v10, (__int64)a3, (__int64)a4, a5, a6);
        if ( result && (*(_BYTE *)(result + 28) & 0x7Fu) - 59 >= 3 )
          result = 0;
        v11 = *(unsigned int *)(a2 + 8);
        v6 = ((unsigned __int64)*(unsigned __int8 *)(v10 + 12) << 32)
           | *(unsigned int *)(v10 + 8)
           | v6 & 0xFFFFFF0000000000LL;
        a3 = (__int64 *)(v11 + 1);
        if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          break;
        v8 += 16;
        a4 = (__int64 *)(*(_QWORD *)a2 + 16 * v11);
        *a4 = result;
        a4[1] = v6;
        ++*(_DWORD *)(a2 + 8);
        if ( v9 == v8 )
          goto LABEL_9;
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
LABEL_9:
  *(_DWORD *)(a1 + 5632) = 0;
  return result;
}
