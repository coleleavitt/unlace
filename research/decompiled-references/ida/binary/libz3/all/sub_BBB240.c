__int64 __fastcall sub_BBB240(__int64 a1, unsigned int *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // r10d
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned int *v19; // r15
  __int64 v22; // rax

  v3 = sub_966570(a1, a2);
  v4 = 0;
  v5 = v3;
  v6 = v3;
  do
  {
    v7 = *v6;
    v8 = *(unsigned int *)(a1 + 1104);
    v9 = *(__int64 **)(a1 + 1096);
    v10 = *(_DWORD *)(*v6 + 12LL);
    v11 = v8 - 1;
    v8 *= 8;
    v12 = (__int64 *)((char *)v9 + v8);
    v13 = 8LL * (v10 & v11);
    v14 = &v9[(unsigned __int64)v13 / 8];
    if ( v13 != v8 )
    {
      for ( i = &v9[(unsigned __int64)v13 / 8]; v12 != i; ++i )
      {
        v16 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v16 + 12) == v10 && v7 == v16 )
            goto LABEL_13;
        }
        else if ( !v16 )
        {
          goto LABEL_9;
        }
      }
    }
    for ( ; v14 != v9; ++v9 )
    {
      v22 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v10 && v7 == v22 )
          goto LABEL_13;
      }
      else if ( !v22 )
      {
        break;
      }
    }
LABEL_9:
    v17 = *(_QWORD *)(a1 + 24);
    v18 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
    v19 = (unsigned int *)v18;
    if ( v18 )
    {
      ++*(_DWORD *)(v18 + 8);
      sub_BBB090(a1, v18);
      sub_966570(a1, v19);
      if ( v19[2]-- == 1 )
        sub_15D7BC0(v17, v19);
    }
    else
    {
      sub_BBB090(a1, 0);
      sub_966570(a1, nullptr);
    }
    v4 = 1;
LABEL_13:
    v6 = (_QWORD *)v6[2];
  }
  while ( v5 != v6 );
  return v4;
}

