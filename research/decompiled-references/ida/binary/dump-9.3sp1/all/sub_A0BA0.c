__int64 __fastcall sub_A0BA0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD _0[6]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_123A40(_0);
  v4 = sub_126F10(_0, a1, _0[1]);
  if ( (_BYTE)v4 )
    v4 = sub_1255D0(_0, a1, a3, 1);
  sub_11CDA0(_0);
  return v4;
}
