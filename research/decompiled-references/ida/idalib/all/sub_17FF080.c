__int64 __fastcall sub_17FF080(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        _BYTE *a6,
        double a7,
        double a8,
        unsigned int a9)
{
  void *v9; // r11
  unsigned __int64 v10; // r10
  __int64 v14; // r15
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r12
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-60h]
  _BYTE v24[88]; // [rsp+20h] [rbp-58h] BYREF

  v9 = a4;
  v10 = a5;
  v14 = *a2;
  ptr = v24;
  v23 = 0x400000000LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) )
  {
    v15 = *(_QWORD *)(a1 + 760);
    if ( *(_DWORD *)(v15 + 264) )
    {
      sub_1AFDF10(v15, v14, a3, a4, a5, &ptr);
      v9 = a4;
      v10 = a5;
    }
  }
  *(_BYTE *)(a3 + 720) = *(_BYTE *)(a3 + 720) & 0xF3 | 4;
  v16 = (_BYTE *)sub_17FE280(a1, v14, a3, v9, v10, (__int64)a6, a7, a8);
  v18 = sub_17DE740(a1, (__int64)a2, v16, a6, a9, v17);
  if ( (_DWORD)v23 )
    sub_1AF4110(*(_QWORD *)(a1 + 760), v18, &ptr);
  if ( ptr != v24 )
    free(ptr);
  return v18;
}
