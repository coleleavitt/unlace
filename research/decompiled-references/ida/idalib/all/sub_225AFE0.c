__int64 __fastcall sub_225AFE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  const void *v11; // rsi
  void *v12; // rdi
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  const void *v17; // rsi
  void *v18; // rdi
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // r12d
  __int64 *v22; // rbx
  __int64 *i; // r13
  __int64 v24; // rdx

  v8 = 0;
  if ( a4 )
  {
    do
    {
      ++v8;
      sub_995540(a2, "  ");
    }
    while ( a4 != v8 );
  }
  v9 = sub_995540(a2, "'");
  v10 = *(_QWORD *)(a3 + 24);
  v11 = *(const void **)(a3 + 16);
  v12 = *(void **)(v9 + 32);
  v13 = v9;
  if ( v10 > *(_QWORD *)(v9 + 24) - (_QWORD)v12 )
  {
    v13 = sub_227BF10(v9, v11, *(_QWORD *)(a3 + 24));
  }
  else if ( v10 )
  {
    memcpy(v12, v11, *(_QWORD *)(a3 + 24));
    *(_QWORD *)(v13 + 32) += v10;
  }
  sub_995540(v13, "'");
  result = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)result <= 2 )
    {
      v15 = sub_995540(a2, " -> '");
      v16 = *(_QWORD *)(a3 + 56);
      v17 = *(const void **)(a3 + 48);
      v18 = *(void **)(v15 + 32);
      v19 = v15;
      if ( v16 > *(_QWORD *)(v15 + 24) - (_QWORD)v18 )
      {
        v19 = sub_227BF10(v15, v17, *(_QWORD *)(a3 + 56));
      }
      else if ( v16 )
      {
        memcpy(v18, v17, *(_QWORD *)(a3 + 56));
        *(_QWORD *)(v19 + 32) += v16;
      }
      sub_995540(v19, "'");
      v20 = *(_DWORD *)(a3 + 80);
      if ( v20 == 1 )
      {
        sub_995540(a2, " (UseExternalName: true)");
      }
      else if ( v20 == 2 )
      {
        sub_995540(a2, " (UseExternalName: false)");
      }
      return sub_995540(a2, "\n");
    }
  }
  else
  {
    v21 = a4 + 1;
    result = sub_995540(a2, "\n");
    v22 = *(__int64 **)(a3 + 56);
    for ( i = *(__int64 **)(a3 + 48); v22 != i; result = sub_225AFE0(a1, a2, v24, v21) )
      v24 = *i++;
  }
  return result;
}
