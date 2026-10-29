__int64 __fastcall sub_1FB7130(__int64 a1, __int64 a2, char a3)
{
  char *v3; // rbx
  char *v4; // r12
  __int64 v5; // rsi
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v8; // [rsp+10h] [rbp-48h]
  void *ptr; // [rsp+18h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[48]; // [rsp+28h] [rbp-30h] BYREF

  v7[0] = 0;
  v7[1] = 0;
  v8 = 0;
  ptr = v11;
  v10 = 0;
  sub_1FB6D40(a1, a2, a3, (__int64)v7);
  v3 = (char *)ptr;
  v4 = (char *)ptr + 16 * (unsigned int)v10;
  if ( v4 != ptr )
  {
    do
    {
      v5 = *((_QWORD *)v3 + 1);
      v3 += 16;
      sub_1F92A90(*(_QWORD *)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
    }
    while ( v3 != v4 );
    v3 = (char *)ptr;
  }
  if ( v3 != v11 )
    free(v3);
  return operator delete(v7[0], 16LL * v8, 8);
}
