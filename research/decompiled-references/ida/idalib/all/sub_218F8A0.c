__int64 __fastcall sub_218F8A0(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned int *v20; // [rsp+10h] [rbp-58h] BYREF
  char v21; // [rsp+18h] [rbp-50h]
  unsigned int *v22; // [rsp+20h] [rbp-48h] BYREF
  char v23; // [rsp+28h] [rbp-40h]

  v6 = a2 + 7;
  v7 = a3;
  v19 = HIDWORD(a3);
  sub_216F6A0((__int64)&v22, a2 + 7, a3, a4, a5, a6);
  if ( (v23 & 1) != 0 )
  {
    v10 = v22;
    v21 |= 1u;
    v22 = nullptr;
    v20 = v10;
    sub_216F7A0((__int64 *)&v22);
    if ( (v21 & 1) != 0 )
    {
LABEL_3:
      v14 = (__int64)v20;
      *(_BYTE *)(a1 + 16) |= 1u;
      v20 = nullptr;
      *(_QWORD *)a1 = v14;
      goto LABEL_4;
    }
  }
  else
  {
    sub_2175B50((__int64)&v20, v6, v22, (unsigned int)v19, v8, v9);
    sub_216F7A0((__int64 *)&v22);
    if ( (v21 & 1) != 0 )
      goto LABEL_3;
  }
  sub_216F6A0((__int64)&v22, v6, v7, v11, v12, v13);
  if ( (v23 & 1) != 0 )
  {
    v18 = v22;
    *(_BYTE *)(a1 + 16) |= 1u;
    v22 = nullptr;
    *(_QWORD *)a1 = v18;
  }
  else
  {
    sub_218AE20(a1, a2, (__int64)v20, v22, v16, v17);
  }
  sub_216F7A0((__int64 *)&v22);
LABEL_4:
  sub_218AE00((__int64 *)&v20);
  return a1;
}
