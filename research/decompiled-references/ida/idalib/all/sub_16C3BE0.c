void __fastcall sub_16C3BE0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  unsigned __int64 *v4; // rcx
  unsigned __int64 *v5; // rsi
  __int64 v6; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v8[14]; // [rsp+18h] [rbp-70h] BYREF

  v6 = a1;
  v7[0] = v8;
  v7[1] = 0x400000000LL;
  v8[12] = *(_QWORD *)(a1 + 1104);
  *(_QWORD *)(a1 + 1104) = v7;
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
    v2 = *(_WORD *)a2;
    v3 = *(unsigned int *)(a2 + 32);
    v4 = (unsigned __int64 *)(a2 + 48);
    v5 = (unsigned __int64 *)(a2 + 40);
    if ( (v2 & 0x1FF) == 0x72 )
      v5 = v4;
    sub_16C3A60(a1, v5, v3);
    sub_16BB4C0(&v6);
  }
  else
  {
    sub_16C38D0(a1, a2);
    sub_16BB4C0(&v6);
  }
}
