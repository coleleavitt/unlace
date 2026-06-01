void __fastcall sub_E28F80(__int64 a1, __int64 a2, const void *a3, size_t a4, unsigned __int64 a5)
{
  __int64 v6; // rbp
  void *v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // [rsp+8h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(void **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v7 < a4 )
  {
    sub_22581D0(v6, a3, a4);
  }
  else if ( a4 )
  {
    v10 = a4;
    memcpy(v7, a3, a4);
    a4 = v10;
    *(_QWORD *)(v6 + 32) += v10;
  }
  sub_E1BE40(a1, *(_QWORD *)(a2 + 8), (__int64)a3, a4, a5);
  sub_E24970(a1, *(unsigned __int16 **)(a2 + 16), (unsigned __int16 *)0xFFFFFFFFLL, 0, v8, v9);
}

