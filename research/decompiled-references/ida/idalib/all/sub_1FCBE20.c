void __fastcall sub_1FCBE20(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  void *v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]

  sub_1FC2690(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 32));
  v2 = *(void **)(a2 + 16);
  v3 = *(unsigned int *)(a2 + 24);
  v4 = (unsigned __int64)(v3 + 63) >> 6;
  if ( v4 > 1 )
  {
    sub_2205610(&v5, v3, v4, v2);
  }
  else
  {
    v6 = v3;
    if ( (unsigned int)v3 > 0x40 )
      sub_2205470(&v5, v2, 0);
    else
      v5 = v2;
  }
  sub_1F70270(a1 + 8, (__int64)&v5);
  if ( v6 > 0x40 && v5 )
    operator delete[](v5);
  *(_DWORD *)(a1 + 224) = 391;
}
