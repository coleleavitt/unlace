__int64 __fastcall sub_2185D80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v9; // r13
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+20h] [rbp-38h]

  v6 = a2;
  v7 = *(unsigned int *)(a3 + 4);
  LOBYTE(a4) = v7 != 4;
  if ( v7 == 4 || v7 == 9 || v7 == 1073741844 )
  {
    sub_216F820((__int64)&v13, a2 + 7, *(unsigned int *)(a3 + 44), a4, a5, a6);
    v11 = v13;
    if ( (v14 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      v13 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 8) = a2;
    }
    *(_QWORD *)a1 = v11;
    sub_216F910(&v13);
    return a1;
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*a2 + 360LL);
    if ( v8 == sub_2185480 )
    {
      sub_216E690((__int64)&v13, a2 + 7, a3, a4, a5, a6);
      if ( (v15 & 1) != 0 )
      {
        v6 = nullptr;
        v9 = 0;
      }
      else
      {
        v9 = v13 + (v14 << 6);
      }
      sub_20EAA70(&v13);
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(_QWORD *))v8)(a2);
      v6 = v12;
    }
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 16) &= ~1u;
    return a1;
  }
}
