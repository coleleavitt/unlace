volatile signed __int32 **__fastcall sub_57C6F0(__int64 a1)
{
  volatile signed __int32 *v1; // r14
  unsigned int v2; // ebp
  const void *v3; // r12
  __int64 v4; // r13
  volatile signed __int32 **v5; // rax
  volatile signed __int32 **v6; // rbx
  volatile signed __int32 *v7; // rax

  sub_56C560(*(volatile signed __int32 **)a1);
  v1 = *(volatile signed __int32 **)a1;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(const void **)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (volatile signed __int32 **)off_8C52B8(0x20u);
  *v5 = v1;
  v6 = v5;
  v5[1] = (volatile signed __int32 *)sub_57C660(v4);
  v7 = (volatile signed __int32 *)off_8C52B0(v2, 0x18u);
  v6[2] = v7;
  memcpy((void *)v7, v3, 24LL * v2);
  *((_DWORD *)v6 + 6) = v2;
  return v6;
}
