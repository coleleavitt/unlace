__int64 __fastcall sub_FF30(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  int _32bit; // eax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v2 + 464))(a1, v7);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return 0;
  else
    *a2 = _32bit;
  return v4;
}
