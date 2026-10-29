__int64 __fastcall sub_40B100(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int *v6; // rbp
  unsigned int *v7; // r13
  unsigned int *v8; // rbx
  unsigned int v9; // r14d
  _DWORD *v10; // r12
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned int *v15; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(unsigned int **)(a2 + 192);
  v14 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v7 = &v6[2 * *(v6 - 1)];
    if ( v6 == v7 )
    {
      v6 = nullptr;
    }
    else
    {
      v8 = v6;
      v9 = a3;
      v6 = nullptr;
      do
      {
        while ( 1 )
        {
          v10 = *(_DWORD **)v8;
          if ( *(_DWORD *)(*(_QWORD *)v8 + 96LL) >= v9 )
            break;
          v8 += 2;
          if ( v7 == v8 )
            goto LABEL_11;
        }
        sub_407990(*(_QWORD **)v8, a2, a3, a4, a5, a6);
        v11 = *((_QWORD *)v10 + 2);
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        if ( !v6 || (v12 = *(v6 - 1), v12 == *(v6 - 2)) )
        {
          v15 = v6;
          sub_23A6F0(&v15);
          v6 = v15;
          v12 = *(v15 - 1);
        }
        a2 = v12;
        v8 += 2;
        *(_QWORD *)&v6[2 * v12] = v11;
        *(v6 - 1) = v12 + 1;
      }
      while ( v7 != v8 );
    }
  }
LABEL_11:
  v15 = v6;
  sub_41C800(a1, &v14);
  sub_2334C0(&v14);
  return a1;
}

