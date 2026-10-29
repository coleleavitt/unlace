__int64 __fastcall sub_1EDBEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // [rsp+8h] [rbp-30h]

  result = *(unsigned int *)(a1 + 6880);
  if ( (_DWORD)result )
  {
    v7 = 0;
    v8 = 8LL * (unsigned int)(result - 1) + 8;
    do
    {
      result = sub_1EDB980((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 6872) + v7), a3, a4, a5, a6);
      if ( result )
      {
        a3 = *(_BYTE *)(result + 28) & 0x7F;
        if ( (_BYTE)a3 == 38 )
        {
          a4 = *(unsigned int *)(a2 + 8);
          if ( a4 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v9 = result;
            sub_2237220(a2, a2 + 16, a4 + 1, 8);
            a4 = *(unsigned int *)(a2 + 8);
            result = v9;
          }
          a3 = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8 * a4) = result;
          ++*(_DWORD *)(a2 + 8);
        }
      }
      v7 += 8;
    }
    while ( v8 != v7 );
  }
  *(_DWORD *)(a1 + 6880) = 0;
  return result;
}
