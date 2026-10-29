__int64 __fastcall sub_201860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_BYTE *)(a1 + 80) == 0;
  v7 = *(_QWORD *)(a1 + 32);
  v11[3] = __readfsqword(0x28u);
  if ( v6 )
  {
    sub_124680((__int64)v10, *(_QWORD *)(a1 + 16), v7, 0);
  }
  else
  {
    if ( *(char *)(v7 + 4) < 0 )
      return 0;
    sub_127A20((__int64)v10, *(_QWORD *)(a1 + 16), v7, 257, a5, a6);
  }
  v8 = 1;
  if ( !(unsigned __int8)sub_64780((_QWORD *)(a1 + 40), v10) )
    v8 = (unsigned __int8)sub_318470(a1 + 56, v11);
  if ( v11[0] )
  {
    v11[1] = 0;
    qfree(v11[0]);
  }
  qfree(v10[0]);
  return v8;
}
