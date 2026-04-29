void __fastcall sub_14F350(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  v3 = *(_QWORD **)(a1 + 96);
  v4 = (_QWORD *)v3[131];
  v5 = v3[132];
  v6 = &v4[v5];
  if ( v4 == v6 )
    goto LABEL_6;
  v7 = (_QWORD *)v3[131];
  while ( a2 != *v7 )
  {
    if ( v6 == ++v7 )
      goto LABEL_6;
  }
  if ( v6 == v7 )
  {
LABEL_6:
    if ( v3[133] < (unsigned __int64)(v5 + 1) )
    {
      v8 = qvector_reserve();
      v9 = v3[132];
      v3[131] = v8;
      v6 = (_QWORD *)(v8 + 8 * v9);
    }
    *v6 = a2;
    ++v3[132];
  }
}
