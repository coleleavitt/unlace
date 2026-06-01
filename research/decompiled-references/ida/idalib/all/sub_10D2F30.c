__int64 (__fastcall **__fastcall sub_10D2F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  int v5; // edi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 8) = 1;
  v13[0] = a2;
  ptr[1] = (void *)0x300000001LL;
  *(_QWORD *)a1 = &off_2B62EF8;
  *(_DWORD *)(a1 + 12) = v5;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x300000000LL;
  ptr[0] = v13;
  sub_10D2D90((void **)(a1 + 16), (char **)ptr);
  v6 = ptr[0];
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 72) = 0;
  v7 = a3;
  v8 = a4;
  *(_QWORD *)(a1 + 60) = 0;
  if ( v6 != v13 )
  {
    free(v6);
    v7 = a3;
    v8 = a4;
  }
  *(_QWORD *)(a1 + 88) = v7;
  *(_QWORD *)(a1 + 96) = v8;
  *(_QWORD *)a1 = &off_2B62F40;
  return &off_2B62F40;
}
