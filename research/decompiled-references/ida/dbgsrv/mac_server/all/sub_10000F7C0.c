/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F7C0
// Address: 0x000000010000F7C0

//----- (000000010000F7C0) ----------------------------------------------------
__int64 __fastcall sub_10000F7C0(__int64 a1, __int64 a2)
{
  bool v2; // al
  __int64 v3; // rcx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  off_t v6; // rbx
  unsigned __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  bool v10; // cf
  signed __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  _BYTE v17[4]; // [rsp+0h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-3Ch]
  unsigned int v19; // [rsp+8h] [rbp-38h]

  v2 = sub_10001B3B0((__int64)v17, a2);
  v3 = -1;
  if ( !v2 || v17[2] || v17[1] || v17[0] != 22 )
    return v3;
  v4 = v18;
  v5 = 0;
  v6 = qlseek(a2, 0, 1);
  v7 = qlsize(a2) - v6;
  if ( ((v7 | v6) & 0x8000000000000000LL) != 0LL )
    goto LABEL_8;
  if ( v7 < v4 )
  {
    v5 = (unsigned int)v7;
LABEL_8:
    v8 = sub_10001D6D0(
           1,
           (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
           "Number of ASN1 string bytes",
           v4,
           v5,
           ". Do you want to continue with the new value?");
    v4 = v5;
    if ( v8 != 1 )
      sub_10001D7A0(0);
  }
  sub_100012FB0(a1, v4);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v9 == 0;
  v11 = v9 - 1;
  if ( v10 )
    v11 = 0;
  v12 = qlread(a2, *(void **)a1, v11);
  v13 = *(_QWORD *)(a1 + 8);
  v10 = v13 == 0;
  v14 = v13 - 1;
  if ( v10 )
    v14 = 0;
  v15 = v12 == v14;
  v3 = -1;
  if ( v15 )
    return v19;
  return v3;
}
