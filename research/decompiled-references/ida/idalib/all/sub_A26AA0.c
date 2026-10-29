__int64 __fastcall sub_A26AA0(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // r15
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // r13d
  unsigned int v9; // ecx
  int v10; // edx
  unsigned __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-50h]
  int v16; // [rsp+10h] [rbp-48h]
  unsigned int v17; // [rsp+14h] [rbp-44h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v4 = *a3;
  v18 = *((unsigned int *)a3 + 2);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  sub_A1FEC0(a1, a2, *(_DWORD *)(a1 + 56));
  result = *(unsigned int *)(v6 + 8);
  v16 = result;
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v12 = v9 + 1;
        v13 = *(_QWORD *)v6 + 16LL * v9;
        if ( (*(_BYTE *)(v13 + 8) & 1) == 0 )
          break;
        ++v8;
LABEL_9:
        v9 = v12;
        if ( v16 == (_DWORD)v12 )
          return result;
      }
      v10 = (*(_BYTE *)(v13 + 8) >> 1) & 7;
      if ( v10 == 3 )
      {
        v17 = v9;
        v15 = *(_QWORD *)v6 + 16 * v12;
        result = sub_A202E0(a1, v5 - v8);
        LODWORD(v12) = v17 + 2;
        if ( v5 != v8 )
        {
          do
          {
            v14 = v8++;
            result = sub_A26320(a1, v15, *(_QWORD *)(v4 + 8 * v14));
          }
          while ( v5 != v8 );
          v8 = v5;
        }
      }
      else
      {
        v11 = (unsigned __int64 *)(v4 + 8LL * v8);
        if ( v10 != 5 )
        {
          ++v8;
          result = sub_A26320(a1, v13, *v11);
          goto LABEL_9;
        }
        result = sub_A263B0(a1, (const __m128i *)(v4 + 8LL * v8), v18 - v8, 1);
      }
      v9 = v12;
    }
    while ( v16 != (_DWORD)v12 );
  }
  return result;
}
