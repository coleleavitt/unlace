__int64 __fastcall sub_533CA0(__int64 a1, void *a2)
{
  void **v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbp
  void *v8; // rdi

  while ( *(_QWORD *)(a1 + 8) )
  {
    a2 = **(void ***)a1;
    sub_533840(a1, a2);
  }
  v3 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3, (const char *)a2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  while ( v4 )
  {
    v5 = (_QWORD *)v4;
    sub_530770(*(_QWORD **)(v4 + 24), (const char *)a2);
    v6 = *(_QWORD *)(v4 + 32);
    v4 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v5[5] = 0;
      qfree(v6, (const char *)a2);
    }
    a2 = dword_40;
    operator delete(v5, 0x40u);
  }
  v7 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 32;
  *(_QWORD *)(a1 + 64) = 0;
  while ( v7 )
  {
    sub_5302E0(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x30u);
  }
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 80;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  return a1 + 80;
}
