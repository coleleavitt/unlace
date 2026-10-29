void __fastcall sub_12FB6B0(__int64 a1, _QWORD *a2)
{
  void **v2; // rbp
  void **v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  void **v8; // rbx

  v2 = *(void ***)a1;
  *(_QWORD *)(a1 + 16) = 0;
  v3 = *(void ***)(a1 + 8);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)a1 = *a2;
  v4 = a2[1];
  *a2 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  v6 = a2[2];
  a2[1] = v5;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v6;
  a2[2] = v7;
  if ( v2 == v3 )
  {
LABEL_5:
    if ( !v2 )
      return;
    goto LABEL_6;
  }
  v8 = v2;
  do
  {
    while ( *v8 != v8 + 2 )
    {
      operator delete(*v8);
      v8 += 4;
      if ( v3 == v8 )
        goto LABEL_5;
    }
    v8 += 4;
  }
  while ( v3 != v8 );
  if ( v2 )
LABEL_6:
    operator delete(v2);
}
