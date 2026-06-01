__int64 __fastcall sub_218C2F0(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  unsigned __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v18; // [rsp+10h] [rbp-58h] BYREF
  char v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 *v20; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+28h] [rbp-40h]

  v6 = a2 + 7;
  v7 = a3;
  v17 = HIDWORD(a3);
  sub_216F990((__int64)&v20, a2 + 7, a3, a4, a5, a6);
  if ( (v21 & 1) != 0 )
  {
    v8 = v20;
    v19 |= 1u;
    v20 = nullptr;
    v18 = v8;
    sub_216FA80((__int64 *)&v20);
    if ( (v19 & 1) != 0 )
    {
LABEL_3:
      v12 = (__int64)v18;
      *(_BYTE *)(a1 + 16) |= 1u;
      v18 = nullptr;
      *(_QWORD *)a1 = v12;
      goto LABEL_4;
    }
  }
  else
  {
    sub_217BF40((__int64)&v18, v6, v20, v17);
    sub_216FA80((__int64 *)&v20);
    if ( (v19 & 1) != 0 )
      goto LABEL_3;
  }
  sub_216F990((__int64)&v20, v6, v7, v9, v10, v11);
  if ( (v21 & 1) != 0 )
  {
    v16 = v20;
    *(_BYTE *)(a1 + 16) |= 1u;
    v20 = nullptr;
    *(_QWORD *)a1 = v16;
  }
  else
  {
    sub_218A830(a1, a2, (__int64)v18, v20, v14, v15);
  }
  sub_216FA80((__int64 *)&v20);
LABEL_4:
  sub_218A810((__int64 *)&v18);
  return a1;
}
