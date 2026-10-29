__int64 __fastcall sub_CAD210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int *v8; // rdi
  void *v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-20h]
  char v11; // [rsp+Ch] [rbp-1Ch]

  v6 = 0x800000020LL;
  if ( (*(_DWORD *)a2 & 0x8000) != 0 )
    return sub_CA89D0(a1, *(_QWORD *)(a2 + v6), a3, a4, a5);
  sub_BD3D10((__int64)&v9, *(_QWORD *)(a2 + 32));
  if ( v11 )
  {
    v8 = (unsigned int *)v9;
    if ( v10 <= 0x40 )
    {
      v6 = 8LL * (unsigned int)v9 + 40;
      return sub_CA89D0(a1, *(_QWORD *)(a2 + v6), a3, a4, a5);
    }
    goto LABEL_8;
  }
  v8 = (unsigned int *)v9;
  if ( v10 > 0x40 )
  {
LABEL_8:
    v6 = 8LL * *v8 + 40;
    operator delete[](v8);
    return sub_CA89D0(a1, *(_QWORD *)(a2 + v6), a3, a4, a5);
  }
  v6 = 40;
  if ( v10 )
  {
    a4 = 64 - v10;
    v6 = 8LL * (unsigned int)((__int64)((_QWORD)v9 << (64 - (unsigned __int8)v10)) >> (64 - (unsigned __int8)v10)) + 40;
  }
  return sub_CA89D0(a1, *(_QWORD *)(a2 + v6), a3, a4, a5);
}

