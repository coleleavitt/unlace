void __fastcall sub_11098B0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 *v8; // r14
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-40h]

  v4 = 2 * a4;
  v5 = &a3[v4];
  if ( a3 != &a3[v4] )
  {
    v6 = *((unsigned int *)a2 + 2);
    v8 = a3;
    v9 = a2 + 2;
    do
    {
      if ( v6 + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
      {
        sub_22134E0(a2, v9, v6 + 1, 8);
        v6 = *((unsigned int *)a2 + 2);
      }
      *(_QWORD *)(*a2 + 8 * v6) = "-internal-iframework";
      v10 = *a1;
      v11 = v8[1];
      v12 = *v8;
      ++*((_DWORD *)a2 + 2);
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v10 + 16))(a1, v12, v11);
      v14 = *((unsigned int *)a2 + 2);
      if ( v14 + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
      {
        v16 = v13;
        sub_22134E0(a2, v9, v14 + 1, 8);
        v14 = *((unsigned int *)a2 + 2);
        v15 = *a2;
        v13 = v16;
      }
      else
      {
        v15 = *a2;
      }
      *(_QWORD *)(v15 + 8 * v14) = v13;
      v8 += 2;
      v6 = (unsigned int)(*((_DWORD *)a2 + 2) + 1);
      *((_DWORD *)a2 + 2) = v6;
    }
    while ( v5 != v8 );
  }
}

