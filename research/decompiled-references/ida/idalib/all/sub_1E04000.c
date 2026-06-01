__int64 __fastcall sub_1E04000(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // ebp
  __int64 v12; // rax
  void (*v13)(); // rdx
  __int64 v14; // [rsp+0h] [rbp-C8h]
  __int64 v15; // [rsp+8h] [rbp-C0h]
  void *ptr[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-98h] BYREF

  if ( (*(_WORD *)(a3 + 30) & 0x180) != 0 && !sub_B7D580(a3, 1, a3, a4) )
  {
    return 1;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16);
    v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v8 & 4) != 0 )
      v9 = (_QWORD *)v9[1];
    sub_1DBA4B0((__int64)ptr, a1, a3, v9, 0, 1, v14, v15, 0, 0, 0, 0, 1);
    v10 = sub_1DC3F20(a1, a2, a4, (__int64)ptr, 1u, a5, a6);
    if ( !(_BYTE)v10 )
    {
      v12 = sub_15F1120(a1);
      if ( v12 )
      {
        v13 = *(void (**)())(*(_QWORD *)v12 + 120LL);
        if ( v13 != nullsub_442 )
          ((void (__fastcall *)(__int64, __int64))v13)(v12, a4);
      }
    }
    if ( ptr[0] != &v17 )
      free(ptr[0]);
  }
  return v10;
}
