__int64 __fastcall sub_1AEB8B0(__int64 a1, unsigned int a2, _WORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  int v5; // ebp
  unsigned __int64 v6; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  _BYTE v10[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = 0;
  if ( (*a3 & 0x1FF) == 0xFA )
    v3 = (__int64)a3;
  v4 = sub_EEE250(v3);
  sub_B7A190(v4, 1u);
  v9 = 0x400000000LL;
  ptr = v10;
  sub_FFF220((__int64)&ptr, a2);
  v5 = v9;
  if ( ptr != v10 )
    free(ptr);
  if ( v5 > 1 )
  {
    do
    {
      --v5;
      v3 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8) + 32);
      v6 = sub_EEE250(v3);
      sub_B7A190(v6, 1u);
    }
    while ( v5 != 1 );
  }
  sub_15F2480(a1);
  return v3;
}
