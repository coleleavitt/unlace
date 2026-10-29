__int64 __fastcall sub_CD0F50(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned int *v5; // rdi
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]
  char v8; // [rsp+Ch] [rbp-1Ch]

  v3 = 0x800000020LL;
  if ( (*(_DWORD *)a2 & 0x8000) != 0 )
    return sub_CCC710(a1, *(_QWORD *)(a2 + v3));
  sub_BF7A50((__int64)&v6, *(_QWORD *)(a2 + 32));
  if ( v8 )
  {
    v5 = (unsigned int *)v6;
    if ( v7 <= 0x40 )
    {
      v3 = 8LL * (unsigned int)v6 + 40;
      return sub_CCC710(a1, *(_QWORD *)(a2 + v3));
    }
    goto LABEL_8;
  }
  v5 = (unsigned int *)v6;
  if ( v7 > 0x40 )
  {
LABEL_8:
    v3 = 8LL * *v5 + 40;
    operator delete[](v5);
    return sub_CCC710(a1, *(_QWORD *)(a2 + v3));
  }
  v3 = 40;
  if ( v7 )
    v3 = 8LL * (unsigned int)((__int64)((_QWORD)v6 << (64 - (unsigned __int8)v7)) >> (64 - (unsigned __int8)v7)) + 40;
  return sub_CCC710(a1, *(_QWORD *)(a2 + v3));
}
