__int64 __fastcall sub_EB5C50(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // r10d
  __int64 v7; // r12
  const void *v8; // rax
  size_t v9; // rdx
  void *v10; // rdi
  size_t v11; // r13

  sub_995540(*(_QWORD *)a1, "if(");
  v3 = *(unsigned int *)(a2 + 44);
  if ( (_DWORD)v3 != 103 )
  {
    v7 = *(_QWORD *)a1;
    v8 = (const void *)sub_20EAB70(v3, *(unsigned int *)(a1 + 16));
    v10 = *(void **)(v7 + 32);
    v11 = v9;
    if ( *(_QWORD *)(v7 + 24) - (_QWORD)v10 < v9 )
    {
      v7 = sub_227BF10(v7, v8, v9);
    }
    else if ( v9 )
    {
      memcpy(v10, v8, v9);
      *(_QWORD *)(v7 + 32) += v11;
    }
    sub_995540(v7, ": ");
  }
  v4 = sub_EB4C50();
  sub_F07C00(v5, *(_QWORD *)a1, 0, *(_QWORD *)(a1 + 8), 0, 0, (__int64)"\n", v4);
  return sub_995540(*(_QWORD *)a1, ")");
}
