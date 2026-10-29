__int64 __fastcall sub_2172B80(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  char v15; // [rsp+10h] [rbp-38h]

  if ( !a4 )
  {
    v15 &= ~1u;
    v13 = 0;
    v14 = 0;
    goto LABEL_6;
  }
  sub_2172330((__int64)&v13, a2, a4, (__int64)a4, a5, a6);
  if ( (v15 & 1) == 0 )
  {
LABEL_6:
    sub_2170470(a1, a2, a3, v13, v14, a6, a7, a8, a9, a10);
    goto LABEL_4;
  }
  v11 = v13;
  *(_BYTE *)(a1 + 8) |= 1u;
  v13 = 0;
  *(_QWORD *)a1 = v11;
LABEL_4:
  sub_216F640(&v13);
  return a1;
}
