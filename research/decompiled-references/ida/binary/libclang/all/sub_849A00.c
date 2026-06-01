__int64 __fastcall sub_849A00(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // r14
  unsigned __int8 v4; // al
  void *v5; // rcx
  unsigned __int8 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  void *v10; // rax
  void *v11; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-50h]
  void *v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD *)(*a1 + 24LL);
  v2 = **(_QWORD **)(*a1 + 40LL);
  v3 = 4LL * *(unsigned int *)(v2 + 4);
  v4 = sub_B100B0(*(_QWORD *)(*(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v5 = *(void **)(v1 + 16);
  v6 = v4;
  v7 = *(char *)(a1[1] + v3 + v2 + 20);
  v8 = *(unsigned int *)(v1 + 24);
  if ( (unsigned __int64)(v8 + 63) > 0x7F )
  {
    sub_2585D40(&v11, v8, (unsigned __int64)(v8 + 63) >> 6, v5);
    LODWORD(v8) = v12;
    v14 = v12;
    if ( v12 > 0x40 )
    {
      sub_2585A50(&v13, v7, v6);
      goto LABEL_5;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v1 + 24);
    v11 = v5;
    v14 = v8;
  }
  if ( v6 )
  {
    v10 = (void *)(v7 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v8));
    if ( !(_DWORD)v8 )
      v10 = nullptr;
    v13 = v10;
  }
  else
  {
    v13 = (void *)v7;
  }
LABEL_5:
  sub_808730(v1 + 16, *(_QWORD **)(*a1 + 32LL), (__int64)&v13);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return *a1 + 24LL;
}

