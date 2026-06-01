void __fastcall sub_149F7A0(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+Ch] [rbp-1Ch]

  v4 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v4 - 406) <= 8u )
    goto LABEL_4;
  if ( v4 != 20 )
  {
    if ( v4 != 158 )
      return;
    goto LABEL_4;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 2944);
  if ( v6 >= *(unsigned int *)(v5 + 2912) )
  {
    v8 = a3;
    v7 = sub_14180A0(v5, 1u);
    a3 = v8;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 2904) + 24 * v6;
  }
  if ( *(_WORD *)(v7 + 16) == 20 || *(_WORD *)(a1 + 32) == 158 )
LABEL_4:
    sub_1481A00(a1, a2, a3);
}
