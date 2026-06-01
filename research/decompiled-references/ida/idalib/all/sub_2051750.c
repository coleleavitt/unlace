void __fastcall __noreturn sub_2051750(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rbp
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rsi
  unsigned int i; // eax
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // edx
  unsigned int j; // eax
  __int64 v16; // r12
  int v17; // eax
  int v18; // eax

  if ( *(_BYTE *)a1 )
  {
    v2 = sub_20CB0D0(a1);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_DWORD **)v2;
    v5 = *(_QWORD *)(*(_QWORD *)v2 + 1560LL);
    v6 = *(_DWORD *)(*(_QWORD *)v2 + 1576LL) - 1;
    v7 = 1;
    for ( i = v6 & (((unsigned int)*(_QWORD *)(a1 + 8) >> 9) ^ ((unsigned int)*(_QWORD *)(a1 + 8) >> 4)); ; i = v6 & v18 )
    {
      v9 = (_QWORD *)(v5 + 16LL * i);
      if ( v3 == *v9 )
        break;
      v18 = v7 + i;
      v7 = (unsigned int)(v7 + 1);
    }
    v10 = v9[1];
    if ( v10 )
    {
      sub_20CC0C0(v9[1]);
      sub_20C9BF0(v10);
    }
    *v9 = -8192;
    --v4[392];
    ++v4[393];
  }
  else
  {
    v11 = sub_20CB0D0(a1);
    v12 = *(_QWORD *)(a1 + 8);
    v4 = *(_DWORD **)v11;
    v13 = *(_QWORD *)(*(_QWORD *)v11 + 1536LL);
    v14 = *(_DWORD *)(*(_QWORD *)v11 + 1552LL) - 1;
    v7 = 1;
    for ( j = v14 & (((unsigned int)*(_QWORD *)(a1 + 8) >> 9) ^ ((unsigned int)*(_QWORD *)(a1 + 8) >> 4)); ; j = v14 & v17 )
    {
      v9 = (_QWORD *)(v13 + 16LL * j);
      if ( v12 == *v9 )
        break;
      v17 = v7 + j;
      v7 = (unsigned int)(v7 + 1);
    }
    v16 = v9[1];
    if ( v16 )
    {
      sub_20CC0C0(v9[1]);
      sub_20C9BF0(v16);
    }
  }
  *v9 = -8192;
  --v4[386];
  ++v4[387];
  *(_QWORD *)&dword_0 = v7;
  BUG();
}
