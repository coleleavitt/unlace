__int64 __fastcall sub_13FA600(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  int v7; // r13d
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 i; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v15; // rdx
  void **v16; // rbp
  void **v17; // rbp
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // rsi
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v7 = *(_DWORD *)(a2 + 8);
    if ( v3 <= v4 )
    {
      v15 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a2 + 8) )
      {
        v18 = *(_QWORD *)a2;
        v19 = v6 + 40 * v3;
        do
        {
          v20 = v18;
          v21 = v6;
          v6 += 40;
          v18 += 40;
          sub_9EE8A0(v21, v20);
          *(_DWORD *)(v6 - 8) = *(_DWORD *)(v18 - 8);
        }
        while ( v6 != v19 );
        v15 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
      }
      v16 = (void **)(v15 + 40 * v4);
      while ( (void **)v6 != v16 )
      {
        while ( 1 )
        {
          v16 -= 5;
          if ( *v16 == v16 + 2 )
            break;
          operator delete(*v16);
          if ( (void **)v6 == v16 )
          {
            *(_DWORD *)(a1 + 8) = v3;
            return a1;
          }
        }
      }
    }
    else
    {
      if ( v3 > *(unsigned int *)(a1 + 12) )
      {
        v17 = (void **)(v6 + 40 * v4);
        while ( v17 != (void **)v6 )
        {
          while ( 1 )
          {
            v17 -= 5;
            if ( *v17 == v17 + 2 )
              break;
            operator delete(*v17);
            if ( v17 == (void **)v6 )
              goto LABEL_19;
          }
        }
LABEL_19:
        *(_DWORD *)(a1 + 8) = 0;
        sub_13FA4A0(a1, v3);
        v3 = *(unsigned int *)(a2 + 8);
        v6 = *(_QWORD *)a1;
        v4 = 0;
        v8 = *(_QWORD *)a2;
      }
      else
      {
        v8 = *(_QWORD *)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 *= 40LL;
          v22 = v8 + v4;
          do
          {
            v23 = v8;
            v24 = v4;
            v8 += 40;
            sub_9EE8A0(v6, v23);
            v6 += 40;
            v4 = v24;
            *(_DWORD *)(v6 - 8) = *(_DWORD *)(v8 - 8);
          }
          while ( v22 != v8 );
          v3 = *(unsigned int *)(a2 + 8);
          v6 = *(_QWORD *)a1;
          v8 = *(_QWORD *)a2;
        }
      }
      v9 = (_QWORD *)(v4 + v6);
      v10 = v8 + 40 * v3;
      for ( i = v4 + v8; v10 != i; *((_DWORD *)v9 - 2) = *(_DWORD *)(i - 8) )
      {
        v12 = v9 + 2;
        v13 = v9;
        i += 40LL;
        v9 += 5;
        *(v9 - 5) = v12;
        sub_13F27F0(v13, *(_BYTE **)(i - 40), *(_QWORD *)(i - 40) + *(_QWORD *)(i - 32));
      }
    }
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
