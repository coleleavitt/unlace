__int64 __fastcall sub_10AF130(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 8) = 17;
  ptr[1] = (void *)0x300000001LL;
  *(_DWORD *)(a1 + 12) = v3;
  v4 = a1 + 32;
  v5 = a1 + 16;
  *(_QWORD *)v5 = v4;
  *(_QWORD *)(v5 - 16) = &off_2B38F58;
  *(_QWORD *)(v5 + 8) = 0x300000000LL;
  v9[0] = a2;
  ptr[0] = v9;
  sub_10AF050((void **)v5, (char **)ptr);
  v6 = ptr[0];
  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  if ( v6 != v9 )
    free(v6);
  *(_QWORD *)a1 = &off_2B39248;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_QWORD *)(a1 + 96) = 0x600000000LL;
  return 0x600000000LL;
}

