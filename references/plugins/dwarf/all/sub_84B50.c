__int64 __fastcall sub_84B50(__int64 *a1, _WORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( (*((_BYTE *)a1 + 213) & 2) == 0 )
  {
    v2 = *a1;
    v4[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, _QWORD *))(a1[32] + 176))(
           *(_QWORD *)(v2 + 24),
           a1 + 26,
           a1 + 25,
           v4) )
    {
      a1[25] = 0;
      *((_WORD *)a1 + 104) = 0;
    }
    *((_DWORD *)a1 + 53) |= 0x200u;
  }
  if ( a2 )
    *a2 = *((_WORD *)a1 + 104);
  return a1[25];
}
