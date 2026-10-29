__int64 __fastcall sub_1FCBBA0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v3 = (__int64 *)(a2 + 24);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 2) >> 4);
  v4 = a2 + 24 + 8LL * (*(_WORD *)(a2 + 2) >> 4);
  v11 = a1 + 32;
  if ( v4 != a2 + 24 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = v5;
    while ( 1 )
    {
      v8 = *v3;
      if ( !*v3 )
        goto LABEL_7;
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v8 & 4) == 0 )
      {
        if ( v9 )
        {
          v7 = *(unsigned int *)(v5 + 8);
          if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
          {
            sub_2237220(v5, v5 + 16, v7 + 1, 8);
            v7 = *(unsigned int *)(v5 + 8);
          }
          *(_QWORD *)(*(_QWORD *)v5 + 8 * v7) = 0;
          ++*(_DWORD *)(v5 + 8);
          sub_1F92A90(*(_QWORD *)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
          v5 = *(_QWORD *)(a1 + 24);
          v6 = v5;
        }
        goto LABEL_7;
      }
      if ( v9 )
      {
        ++v3;
        sub_9B9C90(v5, 1);
        sub_183F100(v11, v9);
        v5 = *(_QWORD *)(a1 + 24);
        v6 = v5;
        if ( (__int64 *)v4 == v3 )
          goto LABEL_12;
      }
      else
      {
LABEL_7:
        if ( (__int64 *)v4 == ++v3 )
          goto LABEL_12;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 24);
LABEL_12:
  sub_9B9C90(v6, (*(_DWORD *)a2 >> 19) & 1);
  result = sub_183F100(v11, *(_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 224) = 271;
  return result;
}
