__int64 __fastcall sub_192880(__int64 a1)
{
  __int64 result; // rax
  char *v2; // rax
  char *v3; // rdx
  __int128 v4; // [rsp+0h] [rbp-178h] BYREF
  __int64 v5; // [rsp+10h] [rbp-168h]
  __int64 v6; // [rsp+18h] [rbp-160h]
  __int64 v7; // [rsp+20h] [rbp-158h]
  char v8; // [rsp+28h] [rbp-150h] BYREF
  char v9; // [rsp+29h] [rbp-14Fh] BYREF
  _QWORD v10[2]; // [rsp+168h] [rbp-10h] BYREF

  v10[0] = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex(a1, 4) >> 8) & 6) != 0 )
    return 0;
  v5 = -1;
  v2 = &v8;
  v6 = 0;
  v7 = 0;
  v4 = -1;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v10 != (_QWORD *)v2 );
  if ( (int)((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, double))decode_insn)(&v4, a1, v10, 0.0) <= 0 )
    return 0;
  v3 = &v9;
  result = 0;
  while ( *v3 == 1 )
  {
    result = (unsigned int)(result + 1);
    v3 += 40;
    if ( (_DWORD)result == 8 )
      return 0;
  }
  return result;
}
