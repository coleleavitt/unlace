__int64 __fastcall sub_8F730(_QWORD *a1, int a2, int a3, __int64 a4, int *a5)
{
  unsigned __int64 v6; // r12
  _BYTE *v10; // rax
  _BYTE *v11; // rbx
  int *v12; // r8
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rax
  _BYTE *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdi

  v6 = a2;
  v10 = (_BYTE *)operator new[](a2);
  v11 = v10;
  v12 = a5;
  if ( !a2 )
  {
    if ( a3 <= 0 )
    {
      *a5 = 0;
      v19 = operator new[](0);
      goto LABEL_16;
    }
    goto LABEL_3;
  }
  sub_8F680(v10, a2);
  v12 = a5;
  if ( a3 > 0 )
  {
LABEL_3:
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = *(int *)(a4 + 4 * v13);
      if ( (int)v15 >= 0 && a2 > (int)v15 )
      {
        v16 = &v11[v15];
        if ( !*v16 )
        {
          ++v14;
          *v16 = 1;
        }
      }
      ++v13;
    }
    while ( a3 > (int)v13 );
    v17 = a2 - v14;
    v6 = a2 - v14;
    goto LABEL_10;
  }
  v17 = a2;
LABEL_10:
  *v12 = v17;
  if ( v6 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v18 = operator new[](8 * v6);
  v19 = v18;
  if ( a2 > 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      if ( !v11[v20] )
      {
        v22 = v21++;
        *(_QWORD *)(v18 + 8 * v22) = a1[v20];
      }
      ++v20;
    }
    while ( (unsigned int)(a2 - 1) + 1LL != v20 );
  }
LABEL_16:
  operator delete[](a1);
  operator delete[](v11);
  return v19;
}

