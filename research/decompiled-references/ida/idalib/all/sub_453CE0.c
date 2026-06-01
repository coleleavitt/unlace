__int64 __fastcall sub_453CE0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[3] = __readfsqword(0x28u);
  v4 = a2 + a4;
  if ( a2 >= a2 + a4 || a3 >= a3 + a4 )
    return 0;
  v6 = a1 + 315;
  while ( 1 )
  {
    v8 = (__int64 *)sub_505D70(v6, v4);
    if ( !v8 )
      break;
    v7 = *v8;
    if ( v7 == v4 )
      break;
    v4 = v7;
  }
  v13[0] = a2;
  v13[1] = v4;
  v13[2] = a3;
  v9 = sub_505940(v6, v13);
  if ( (_BYTE)v9 )
  {
    v10 = sub_631AD0(*a1, 20);
    v11 = sub_631AD0(*a1, 19);
    auto_mark_range(v11, v10, 40);
  }
  else
  {
    return 0;
  }
  return v9;
}
