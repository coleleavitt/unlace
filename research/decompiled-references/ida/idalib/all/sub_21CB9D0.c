__int64 __fastcall sub_21CB9D0(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rax
  __int64 v5; // rax
  __int64 v7[2]; // [rsp+0h] [rbp-68h] BYREF
  char v8; // [rsp+10h] [rbp-58h]
  void *v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF

  sub_2253560(v9, a2);
  if ( sub_9B4AA0((__int64)v9, "-") )
    sub_225D6F0((unsigned int)v7, a3, a2, -1, 1, 0, 1);
  else
    sub_2230860(v7);
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
  if ( (v8 & 1) != 0 && LODWORD(v7[0]) )
  {
    sub_2220500(v9, LODWORD(v7[0]), v7[1]);
    v4 = v9[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v4;
  }
  else
  {
    v5 = v7[0];
    *(_BYTE *)(a1 + 8) &= ~1u;
    v7[0] = 0;
    *(_QWORD *)a1 = v5;
  }
  sub_FC2AF0(v7);
  return a1;
}
