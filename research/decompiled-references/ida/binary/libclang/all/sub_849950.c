__int64 __fastcall sub_849950(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int16 v6; // r10
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+1h] [rbp-69h]
  void *ptr[2]; // [rsp+2h] [rbp-68h] BYREF
  int v10; // [rsp+12h] [rbp-58h]
  char v11; // [rsp+16h] [rbp-54h]
  char v12; // [rsp+1Ah] [rbp-50h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 13 || (v6 = *(_WORD *)(v5 + 18), result = 1, ((v6 >> 3) & 0x1FF) != 0x1B2) )
  {
    ptr[1] = byte_8;
    ptr[0] = &v12;
    v10 = 0;
    v11 = 1;
    result = sub_849100(0, a1, a2, a3, a4, a5, 0, (__int64)ptr);
    if ( !v11 )
    {
      v8 = result;
      free(ptr[0]);
      return v8;
    }
  }
  return result;
}

