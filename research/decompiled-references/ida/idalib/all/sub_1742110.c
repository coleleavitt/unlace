__int64 __fastcall sub_1742110(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // r13d
  char *v5; // rbx
  char *v6; // rbp
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-119h]
  void *v9; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-F0h]
  _BYTE v11[48]; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  int v13; // [rsp+78h] [rbp-B0h]
  _DWORD v14[42]; // [rsp+80h] [rbp-A8h] BYREF

  v9 = v11;
  v10 = 0x300000000LL;
  v2 = sub_B77A30(a2);
  sub_BBDAC0(v2, (__int64)&v9);
  v3 = *(_QWORD *)(a2 + 16);
  if ( (v3 & 4) != 0 )
    v3 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    LODWORD(v3) = v3 & 0xFFFFFFF8;
  sub_1DBA4B0((unsigned int)&ptr, a1, a2, v3, 0, 1);
  v4 = v13 + v14[24];
  if ( ptr != v14 )
    free(ptr);
  v5 = (char *)v9;
  v6 = (char *)v9 + 16 * (unsigned int)v10;
  if ( v9 == v6 )
  {
    result = 0;
  }
  else
  {
    do
    {
      result = sub_1D116D0(a1, a2, v4, *(_QWORD *)v5);
      if ( (_BYTE)result )
        break;
      v5 += 16;
    }
    while ( v6 != v5 );
    v6 = (char *)v9;
  }
  if ( v6 != v11 )
  {
    v8 = result;
    free(v6);
    return v8;
  }
  return result;
}
