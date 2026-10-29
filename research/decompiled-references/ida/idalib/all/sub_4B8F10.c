__int64 __fastcall sub_4B8F10(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5, int a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rsi
  unsigned int v10; // ebp
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v8 = *a4;
  v12[1] = __readfsqword(0x28u);
  if ( v8 == -1 )
  {
    *a4 = 0;
    callui(187, (int)a4, a2, a1[2], (int)&callui, a6);
  }
  v9 = *a1;
  v12[0] = a1[3];
  if ( v8 < (unsigned int)sub_7BE710(v12, v9, 1, 65) && (v10 = sub_4B8DE0(*a1, a2, a1[3], v8), (_BYTE)v10) )
  {
    if ( a3 )
      netnode_qsupstr(a1[3], a3, v8, 82);
  }
  else
  {
    return 0;
  }
  return v10;
}
