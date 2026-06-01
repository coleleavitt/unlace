void __fastcall sub_1FCBCF0(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  void *v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-20h]

  sub_1FC2690(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  v3 = *(void **)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 24);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 > 1 )
  {
    sub_2205610(&v9, v4, v5, v3);
  }
  else
  {
    v10 = v4;
    if ( (unsigned int)v4 > 0x40 )
      sub_2205470(&v9, v3, 0);
    else
      v9 = v3;
  }
  sub_1F70270(a1 + 8, (__int64)&v9);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (unsigned __int64)(v7 + 63) >> 6;
  if ( v8 > 1 )
  {
    sub_2205610(&v9, v7, v8, v6);
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v7 <= 0x40 )
      goto LABEL_9;
    sub_2205470(&v9, v6, 0);
  }
  LODWORD(v7) = v10;
  if ( v10 <= 0x40 )
  {
LABEL_9:
    if ( (_DWORD)v7 == 32 )
      *(_DWORD *)(a1 + 228) = *(_DWORD *)(*(_QWORD *)a1 + 3556LL);
    goto LABEL_11;
  }
  if ( v9 )
    operator delete[](v9);
LABEL_11:
  *(_DWORD *)(a1 + 224) = 174;
}
