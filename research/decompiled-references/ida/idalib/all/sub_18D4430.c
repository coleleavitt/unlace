__int64 __fastcall sub_18D4430(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v11[184]; // [rsp+10h] [rbp-B8h] BYREF

  v7 = *a1;
  v10 = a2;
  v8 = sub_1E63CF0(v7, a3, a2, 1, 3968);
  if ( (_BYTE)v8 )
  {
    sub_168B9F0((__int64)v11, (__int64 *)(*a1 + 8), a3, 0x18BAu, 0);
    sub_15F7200(v11);
    sub_168B9F0((__int64)v11, (__int64 *)(*a1 + 8), a4, 0x18B9u, 0);
    sub_1605D30((__int64)v11, &v10);
    sub_15F7200(v11);
  }
  return v8;
}
