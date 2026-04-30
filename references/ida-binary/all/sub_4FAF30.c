__int64 __fastcall sub_4FAF30(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  size_t v8; // rax
  const char *v9; // rbp
  size_t v10; // rdx
  double v11; // xmm0_8
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( a3 != 69 && a3 != 116 )
  {
    v5 = sub_508440((unsigned int)a3);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a2, a4);
    return 0;
  }
  v7 = *(_QWORD *)(a4 + 8);
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = *(const char **)a4;
    v10 = v8 >> 63;
  }
  else
  {
    LOBYTE(v10) = 0;
    v8 = 0;
    v9 = &s1;
  }
  if ( !v9 || (_BYTE)v10 )
  {
    v8 = 0;
    if ( v9 )
      v8 = strlen(v9);
  }
  v11 = QT::QString::fromUtf8(ptr, v8, v9);
  sub_50FBD0(a2, ptr, 0, v11);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return 1;
}
