unsigned __int64 __fastcall sub_5DB4A0(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  int v11; // r8d
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  int v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-48h]
  __int128 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v13 = 56;
  v14 = -1;
  v15 = 0;
  v16 = -1;
  ptr = nullptr;
  v18 = 0;
  sub_5DAE70(a1, (__int64)&v13, a2, a3);
  v8 = sub_3BDD60(a1, a2);
  v9 = a3 << 16;
  if ( a3 >= (unsigned int)&stru_10000 )
    v9 = -1;
  netnode_delblob(v8, v9, 103);
  v10 = v14 != -1;
  if ( HIDWORD(v14) != -1 )
    v10 |= 2u;
  if ( v16 != -1 )
    v10 |= 4u;
  if ( (unsigned __int64)v18 > 1 )
    v10 |= 8u;
  if ( v15 )
    v10 |= 0x10u;
  v11 = v10 & ~a4;
  if ( v11 )
    sub_5DB0C0(a1, a2, a3, (__int64)&v13, v11);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v19 - __readfsqword(0x28u);
}
