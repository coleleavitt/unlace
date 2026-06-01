void __fastcall sub_1FD1B40(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  int v14; // ebx
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 88, v15);
  v5 = (_QWORD *)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v5 )
  {
    v6 = *(_QWORD *)a1 + 24LL;
    v7 = v4;
    while ( 1 )
    {
      *(_QWORD *)v7 = *(_QWORD *)(v6 - 24);
      *(_QWORD *)(v7 + 8) = v7 + 24;
      v8 = *(_QWORD *)(v6 - 16);
      if ( v8 == v6 )
      {
        *(__m128i *)(v7 + 24) = _mm_loadu_si128((const __m128i *)v6);
      }
      else
      {
        *(_QWORD *)(v7 + 8) = v8;
        *(_QWORD *)(v7 + 24) = *(_QWORD *)v6;
      }
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v6 - 8);
      v9 = *(_QWORD *)(v6 + 16);
      *(_QWORD *)(v6 - 16) = v6;
      *(_QWORD *)(v6 - 8) = 0;
      *(_BYTE *)v6 = 0;
      *(_QWORD *)(v7 + 40) = v9;
      v10 = *(_QWORD *)(v6 + 24);
      *(_DWORD *)(v7 + 64) = 0;
      *(_QWORD *)(v7 + 48) = v10;
      *(_QWORD *)(v7 + 56) = v7 + 72;
      *(_DWORD *)(v7 + 68) = 4;
      if ( *(_DWORD *)(v6 + 40) )
        sub_1744C20((char ***)(v7 + 56), (char ***)(v6 + 32));
      v7 += 88;
      if ( v5 == (_QWORD *)(v6 + 64) )
        break;
      v6 += 88;
    }
    v11 = *(_QWORD **)a1;
    v5 = (_QWORD *)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 11;
          v12 = (_QWORD *)v5[7];
          if ( v12 != v5 + 9 )
            free(v12);
          v13 = (_QWORD *)v5[1];
          if ( v13 == v5 + 3 )
            break;
          operator delete(v13);
          if ( v11 == v5 )
          {
            v5 = *(_QWORD **)a1;
            goto LABEL_16;
          }
        }
      }
      while ( v11 != v5 );
      v5 = *(_QWORD **)a1;
    }
  }
LABEL_16:
  v14 = v15[0];
  if ( v3 != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v14;
}
