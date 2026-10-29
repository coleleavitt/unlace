void __fastcall sub_1FBE720(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // r12
  void *v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]
  unsigned __int8 v12; // [rsp+Ch] [rbp-2Ch]
  void *v13; // [rsp+10h] [rbp-28h] BYREF
  int v14; // [rsp+18h] [rbp-20h]

  sub_1FBC930(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 72) != 0);
  v4 = *(_QWORD *)(a2 + 72);
  if ( v4 )
    sub_183F100(a1 + 32, v4);
  v5 = *(_BYTE *)(a2 + 80);
  v6 = *(void **)(a2 + 56);
  v7 = *(unsigned int *)(a2 + 64);
  v8 = (unsigned __int64)(v7 + 63) >> 6;
  if ( v8 > 1 )
  {
    sub_2205610(&v13, v7, v8, v6);
    LODWORD(v7) = v14;
    v6 = v13;
  }
  else
  {
    v14 = *(_DWORD *)(a2 + 64);
    if ( (unsigned int)v7 > 0x40 )
    {
      sub_2205470(&v13, v6, 0);
      LODWORD(v7) = v14;
      v6 = v13;
    }
  }
  v9 = *(_QWORD *)(a1 + 24);
  v11 = v7;
  v10 = v6;
  v12 = v5;
  sub_9B9C90(v9, v5);
  sub_1F70270(a1 + 8, (__int64)&v10);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  *(_DWORD *)(a1 + 224) = 55;
}
