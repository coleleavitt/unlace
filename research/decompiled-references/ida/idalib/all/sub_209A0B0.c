__int64 __fastcall sub_209A0B0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // r12d
  __int64 *v5; // rbx
  __int64 *i; // rbp
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  unsigned int v9; // esi
  unsigned int j; // r14d
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  unsigned int v13; // edx
  int v14; // r13d
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 (*v17)(); // rax
  int v19; // eax
  int v20; // eax

  if ( dword_2CFD4D8 > 0 )
    sub_2099FA0(a1 + 416, a3);
  v4 = 0;
  sub_2095740(a1 + 416);
  v5 = *(__int64 **)(a1 + 656);
  for ( i = &v5[*(unsigned int *)(a1 + 664)]; i != v5; v4 |= ((__int64 (__fastcall *)(__int64, __int64))v8)(v7, a2) )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *(__int64 (**)())(*(_QWORD *)*v5 + 24LL);
      if ( v8 != sub_200E130 )
        break;
      if ( i == ++v5 )
        goto LABEL_8;
    }
    ++v5;
  }
LABEL_8:
  v9 = *(_DWORD *)(a1 + 456);
  for ( j = 0; j < v9; ++j )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * j);
    if ( !v11 )
      BUG();
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 - 32) + 24LL);
    if ( v12 == sub_2094510 )
    {
      v13 = *(_DWORD *)(v11 + 24);
      if ( v13 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * v15);
            v17 = *(__int64 (**)())(*(_QWORD *)v16 + 24LL);
            if ( v17 != sub_200E130 )
              break;
            if ( ++v15 >= v13 )
              goto LABEL_15;
          }
          ++v15;
          v19 = ((__int64 (__fastcall *)(__int64, __int64))v17)(v16, a2);
          v13 = *(_DWORD *)(v11 + 24);
          v14 |= v19;
        }
        while ( v15 < v13 );
LABEL_15:
        v9 = *(_DWORD *)(a1 + 456);
        v4 |= v14;
      }
    }
    else
    {
      v20 = v12(v11 - 32, a2);
      v9 = *(_DWORD *)(a1 + 456);
      v4 |= v20;
    }
  }
  return v4;
}
