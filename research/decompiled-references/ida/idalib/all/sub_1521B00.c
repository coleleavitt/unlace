void __fastcall sub_1521B00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[120]; // [rsp+0h] [rbp-78h] BYREF

  v5 = *(_DWORD *)a4;
  sub_14634E0(a2, (int *)a4);
  v6 = *(_WORD *)(a4 + 16);
  if ( (unsigned __int16)(v6 - 7) <= 0xCu )
    goto LABEL_3;
  if ( v6 == 1 )
    goto LABEL_3;
  v7 = *(_QWORD *)(a4 + 8);
  if ( !v7 )
    goto LABEL_3;
  v8 = *(_QWORD *)(v7 + 16);
  if ( (unsigned int)*(_QWORD *)v8 == 5 )
  {
    if ( *(_DWORD *)(v8 + 16) != 1768383842 || *(_BYTE *)(v8 + 20) != 110 )
      goto LABEL_3;
    sub_178E290(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 664LL));
  }
  else
  {
    if ( (unsigned int)*(_QWORD *)v8 != 3 || *(_WORD *)(v8 + 16) != 28261 || *(_BYTE *)(v8 + 18) != 100 )
      goto LABEL_3;
    if ( !(unsigned __int8)sub_178E2A0(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 664LL)) )
    {
      sub_FC70B0((__int64)v9, a2[6], v5, 1852);
      sub_AEA040((__int64)v9);
    }
  }
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 2 )
  {
LABEL_3:
    sub_FC70B0((__int64)v9, a2[6], v5, 2203);
    sub_AEA040((__int64)v9);
  }
}
