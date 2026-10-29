void __fastcall sub_1B51460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v6; // eax
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v8[72]; // [rsp+10h] [rbp-48h] BYREF

  ptr[1] = (void *)0x600000000LL;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  ptr[0] = v8;
  if ( (unsigned int)(v6 - 40) <= 6 )
  {
    sub_1B50E20((__int64)ptr, a2, a3, a4, a5, a6);
    if ( ptr[0] != v8 )
      free(ptr[0]);
  }
}
