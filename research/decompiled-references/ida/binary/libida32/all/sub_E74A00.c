__int64 __fastcall sub_E74A00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 *v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-30h]

  result = sub_B6AC30(a2 + 64);
  if ( result )
  {
    v6 = result;
    do
    {
      result = sub_E80DD0(v6, a3);
      if ( (_BYTE)result )
      {
        result = sub_E74940(v6);
        v7 = *(unsigned int *)(a1 + 8);
        v8 = *(unsigned int *)(a1 + 12);
        if ( v7 >= v8 )
        {
          result = v3 & 0xFFFFFFFF00000000LL | (unsigned int)result;
          v3 = result;
          if ( v8 < v7 + 1 )
          {
            v11 = result;
            sub_22134E0(a1, a1 + 16, v7 + 1, 16);
            v7 = *(unsigned int *)(a1 + 8);
            result = v11;
          }
          v10 = (unsigned __int64 *)(*(_QWORD *)a1 + 16 * v7);
          *v10 = v6;
          v10[1] = result;
          ++*(_DWORD *)(a1 + 8);
        }
        else
        {
          v9 = *(_QWORD *)a1 + 16 * v7;
          *(_QWORD *)v9 = v6;
          *(_DWORD *)(v9 + 8) = result;
          ++*(_DWORD *)(a1 + 8);
        }
      }
      v6 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v6 );
  }
  return result;
}

