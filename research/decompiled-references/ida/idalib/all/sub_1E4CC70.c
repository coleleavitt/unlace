__int64 __fastcall sub_1E4CC70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+8h] [rbp-60h]
  void **p_ptr; // [rsp+10h] [rbp-58h]
  char v15; // [rsp+18h] [rbp-50h]
  int v16; // [rsp+1Ch] [rbp-4Ch]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  _BYTE v19[56]; // [rsp+30h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = 0x200000000LL;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (__int64 *)v19;
  v12 = off_2C6ECE0;
  ptr = v19;
  p_ptr = &ptr;
  v15 = 0;
  v16 = -1;
  v13 = 16842752;
  v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v9 = *v8;
    LODWORD(v8) = 0;
    if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
    {
      sub_BC7D30((__int64)&v12, v6);
      v7 = (__int64 *)ptr;
      LODWORD(v8) = v18;
    }
  }
  v10 = sub_1E4CAF0(a1, v7, (unsigned int)v8, a3);
  if ( ptr != v19 )
    free(ptr);
  return v10;
}
