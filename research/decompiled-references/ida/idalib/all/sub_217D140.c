__int64 __fastcall sub_217D140(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        void (__fastcall *a4)(__int64 *, __int64, __m128i *),
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13[2]; // [rsp+10h] [rbp-78h] BYREF
  char v14; // [rsp+20h] [rbp-68h]
  __int64 v15[2]; // [rsp+30h] [rbp-58h] BYREF
  char v16; // [rsp+40h] [rbp-48h]

  sub_216EAB0((__int64)v13, a2, (__int64)a3, (__int64)a4, a5, a6);
  if ( (v14 & 1) != 0 )
  {
    v9 = v13[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v13[0] = 0;
    *(_QWORD *)a1 = v9;
  }
  else
  {
    sub_217AC70((__int64)v15, a2, v13[0], v13[1], a4, a5);
    if ( (v16 & 1) != 0 )
    {
      v12 = v15[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      v15[0] = 0;
      *(_QWORD *)a1 = v12;
    }
    else
    {
      sub_217CF80(a1, a2, a3, v15[0], v15[1], v11);
    }
    sub_111DFC0(v15);
  }
  sub_216F970(v13);
  return a1;
}
