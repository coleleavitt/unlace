__int64 __fastcall sub_1264C0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  _0[3] = __readfsqword(0x28u);
  sub_120000((__int64)_0, a3);
  v3 = sub_123E10((unsigned __int64)_0, a2, *(_DWORD *)(a1 + 4), 0);
  if ( (_BYTE)v3 )
  {
    LOBYTE(v5) = sub_121B90((unsigned __int8 *)a1, a2, (__int64)_0, 0);
    v3 = v5;
  }
  sub_119360((__int64)_0);
  return v3;
}
