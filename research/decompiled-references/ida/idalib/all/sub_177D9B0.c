__int64 __fastcall sub_177D9B0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int128 v13; // [rsp+0h] [rbp-148h]
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-130h]
  __int64 v16; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v17[248]; // [rsp+50h] [rbp-F8h] BYREF

  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  sub_175DE70((unsigned __int8 *)&ptr, a1, *(_BYTE *)(a2 + 8), *(__int64 **)(a2 + 24), *(_QWORD *)(a2 + 32));
  if ( (unsigned __int8)sub_1AA8E70(
                          *(_QWORD *)(*a1 + 744),
                          *(unsigned __int8 *)(a2 + 8),
                          *(unsigned int *)(a2 + 12),
                          ptr,
                          v15) )
  {
    v4 = 1;
  }
  else
  {
    *((_QWORD *)&v13 + 1) = v15;
    *(_QWORD *)&v13 = ptr;
    sub_1AA1E60(
      (unsigned int)v17,
      *(_QWORD *)(*a1 + 744),
      *(unsigned __int8 *)(a2 + 8),
      *(_DWORD *)(a2 + 20),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)(a2 + 32),
      v13);
    v9 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 40), 0, a3, v6, v7, v8);
    v10 = sub_1AA5AA0(
            *(_QWORD *)(*a1 + 744),
            *(_DWORD *)(a2 + 12),
            *(unsigned __int8 *)(a2 + 8),
            4,
            (_DWORD)ptr,
            v15,
            v9);
    v11 = *(unsigned __int8 *)(a2 + 8);
    v4 = sub_1AA2840(
           *(_QWORD *)(*a1 + 744),
           v11,
           *(unsigned int *)(a2 + 12),
           *(unsigned int *)(a2 + 20),
           0,
           0,
           0,
           0,
           4,
           0,
           *(unsigned int *)(a2 + 16),
           ptr,
           v15,
           v10);
    sub_1AA3250(v17, v11, v12);
  }
  if ( ptr != &v16 )
    free(ptr);
  return v4;
}
