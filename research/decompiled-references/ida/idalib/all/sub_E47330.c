__int64 __fastcall sub_E47330(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rsi
  _BYTE *v7; // rax
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
  {
    v3 = sub_227BA10(*(_QWORD *)(a1 + 8), 65);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 65;
  }
  v5 = *(_BYTE *)(a2 + 19);
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 2) != 0 )
  {
    v10 = *(_DWORD *)(v6 + 8);
    if ( (unsigned int)v10 > 0x40 )
      sub_2205510(&v9);
    else
      v9 = *(void **)v6;
  }
  else
  {
    v10 = 8 * ((v5 >> 2) & 0x1F);
    if ( v10 > 64 )
      sub_2205470(&v9, v6, 0);
    else
      v9 = (void *)v6;
  }
  sub_220C370(&v9, v3, 1);
  v7 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v3 + 24) )
  {
    sub_227BA10(v3, 95);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v7 + 1;
    *v7 = 95;
  }
  if ( (unsigned int)v10 > 0x40 && v9 )
    operator delete[](v9);
  return sub_E3FB80(a1, *(_QWORD *)(a2 + 32));
}
