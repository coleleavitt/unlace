__int64 __fastcall sub_CF8C30(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v7; // r12
  void *v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-70h]
  int v10; // [rsp+10h] [rbp-68h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  sub_CE7240((__int64)&v8, *(_QWORD *)(a1 + 176));
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( (unsigned __int8)sub_DA4BF0(a1, a2, v4, 2) && (unsigned __int8)sub_DA5070(a1, a2, v4, 2) )
  {
    sub_DFF4E0(v11, *(_QWORD *)(v4 + 32), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
    v5 = sub_DA8220(a1, a2, v11);
    if ( (_BYTE)v5 )
    {
      sub_E00FC0(v11);
      v7 = sub_CEB480((__int64)v11);
      sub_BFCC40(v7, (__int64 *)&v8);
      *(_DWORD *)(v7 + 16) = v10;
    }
    sub_DFF560(v11);
  }
  else
  {
    v5 = 0;
  }
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return v5;
}

