__int64 __fastcall sub_129F00(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  _0[3] = __readfsqword(0x28u);
  sub_123A40((__int64)_0, a3);
  v3 = sub_127850((unsigned __int64)_0, a2, *(_DWORD *)(a1 + 4), 0);
  if ( (_BYTE)v3 )
  {
    LOBYTE(v5) = sub_1255D0((unsigned __int8 *)a1, a2, (__int64)_0, 0);
    v3 = v5;
  }
  sub_11CDA0((__int64)_0);
  return v3;
}
