__int64 __fastcall sub_2094840(__int64 a1, __int64 a2)
{
  int v3; // r14d
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  int v8; // ebx
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 *i; // r13
  __int64 v16; // rdi
  __int64 (*v17)(); // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 456) - 1;
  if ( v3 < 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 8LL * v3;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + v5);
        if ( !v6 )
          BUG();
        v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 - 32) + 32LL);
        if ( v7 == sub_2094590 )
          break;
        --v3;
        v5 -= 8;
        v4 |= v7(v6 - 32, a2);
        if ( v3 == -1 )
          goto LABEL_12;
      }
      v8 = *(_DWORD *)(v6 + 24) - 1;
      if ( v8 >= 0 )
      {
        v9 = 0;
        v10 = 8LL * v8;
        do
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + v10);
            v12 = *(__int64 (**)())(*(_QWORD *)v11 + 32LL);
            if ( v12 != sub_200E140 )
              break;
            --v8;
            v10 -= 8;
            if ( v8 == -1 )
              goto LABEL_10;
          }
          v20 = v10;
          --v8;
          v19 = v6;
          v13 = ((__int64 (__fastcall *)(__int64, __int64))v12)(v11, a2);
          v6 = v19;
          v9 |= v13;
          v10 = v20 - 8;
        }
        while ( v8 != -1 );
LABEL_10:
        v4 |= v9;
      }
      --v3;
      v5 -= 8;
    }
    while ( v3 != -1 );
  }
LABEL_12:
  v14 = *(__int64 **)(a1 + 656);
  for ( i = &v14[*(unsigned int *)(a1 + 664)]; i != v14; v4 |= ((__int64 (__fastcall *)(__int64, __int64))v17)(v16, a2) )
  {
    while ( 1 )
    {
      v16 = *v14;
      v17 = *(__int64 (**)())(*(_QWORD *)*v14 + 32LL);
      if ( v17 != sub_200E140 )
        break;
      if ( i == ++v14 )
        return v4;
    }
    ++v14;
  }
  return v4;
}
