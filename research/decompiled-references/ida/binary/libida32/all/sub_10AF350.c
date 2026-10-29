__int64 (__fastcall **__fastcall sub_10AF350(__int64 a1, __int64 a2, int a3))()
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 12) = a3;
  v4 = a1 + 32;
  v5 = a1 + 16;
  ptr[1] = (void *)0x300000001LL;
  v9[0] = a2;
  *(_QWORD *)(v5 + 8) = 0x300000000LL;
  *(_QWORD *)(v5 - 16) = &off_2B38F58;
  *(_DWORD *)(v5 - 8) = 15;
  *(_QWORD *)v5 = v4;
  ptr[0] = v9;
  sub_10AF050((void **)v5, (char **)ptr);
  v6 = ptr[0];
  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  if ( v6 != v9 )
    free(v6);
  *(_QWORD *)a1 = &off_2B391F8;
  return &off_2B391F8;
}

