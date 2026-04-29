__int64 __fastcall sub_3C14D0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4, char a5)
{
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  _QWORD v13[10]; // [rsp+18h] [rbp-50h] BYREF

  v13[2] = __readfsqword(0x28u);
  v11 = 0;
  v13[0] = 0;
  v12 = 0;
  v7 = sub_3C0A80(&v11, a4, a5);
  if ( (_BYTE)v7 && ((unsigned __int64)v12 <= 1 || (unsigned __int8)sub_3C0900(a1, (__int64)&v11, a3, a5, v8, v9)) )
    sub_3C10A0(a1, a2, a3, (__int64)&v11);
  else
    v7 = 0;
  clear_tinfo_t(v13);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v7;
}
