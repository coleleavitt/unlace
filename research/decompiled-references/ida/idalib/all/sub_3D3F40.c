void __fastcall sub_3D3F40(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        void (__fastcall *a5)(__int64 *, unsigned __int64, __int64, __int64))
{
  __int64 v9; // rax
  int v10; // r15d
  char v11; // dl
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // r13d
  __int64 i; // rdx
  __int64 j; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int8 *v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int8 *v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v33[1] = __readfsqword(0x28u);
  while ( 1 )
  {
    v9 = a1[2];
    v10 = *(_DWORD *)(v9 + 20);
    if ( *(_DWORD *)(v9 + 16) != v10 )
    {
      v11 = sub_510230(a1, a2);
      v12 = a1[2];
      if ( v11 == 2 )
        v10 = *(_DWORD *)(v12 + 16);
      else
        v10 = *(_DWORD *)(v12 + 20);
    }
    v13 = v10 + 14;
    if ( v10 + 7 >= 0 )
      v13 = v10 + 7;
    v14 = v13 >> 3;
    v15 = v14;
    if ( v14 > a4 )
      break;
    a4 -= v14;
    if ( (unsigned __int8)sub_631C90(*a1, 3, 64) )
    {
      j = (unsigned int)(8 * v15 - 8);
      for ( i = 0; (int)j >= 0; j = (unsigned int)(j - 8) )
      {
        v21 = *a3++;
        i |= v21 << j;
      }
    }
    else
    {
      i = 0;
      for ( j = 0; (int)j < v10; i |= v19 )
      {
        v18 = *a3++;
        v19 = v18 << j;
        j = (unsigned int)(j + 8);
      }
    }
    v20 = a2++;
    a5(a1, v20, i, j);
  }
  if ( a4 )
  {
    sub_3BEFF0(a1, v33, a2);
    v22 = sub_631C90(*a1, 3, 64);
    v23 = v33[0];
    v24 = a4 - 1;
    if ( v22 )
    {
      v25 = (unsigned int)(8 * v15 - 8);
      if ( v24 < 0 )
      {
LABEL_25:
        a5(a1, a2, v23, v25);
        goto LABEL_17;
      }
      v26 = &a3[a4];
      do
      {
        ++a3;
        v27 = v23 & ~(255LL << v25);
        v28 = (unsigned __int64)*(a3 - 1) << v25;
        v25 = (unsigned int)(v25 - 8);
        v23 = v27 | v28;
      }
      while ( a3 != v26 );
    }
    else
    {
      v29 = &a3[a4];
      v25 = 0;
      if ( v24 < 0 )
        goto LABEL_25;
      do
      {
        ++a3;
        v30 = v23 & ~(255LL << v25);
        v31 = (unsigned __int64)*(a3 - 1) << v25;
        v25 = (unsigned int)(v25 + 8);
        v23 = v30 | v31;
      }
      while ( a3 != v29 );
    }
    v33[0] = v23;
    goto LABEL_25;
  }
LABEL_17:
  if ( a1[96] )
    sub_3D3DF0(a1);
}
