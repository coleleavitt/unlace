__int64 __fastcall sub_210BC0(_DWORD *a1, _BYTE *a2, bool *a3, __int64 a4)
{
  char *v5; // rax
  int v6; // edx
  __int64 result; // rax
  char v8; // al
  __int64 v9; // rdi
  bool v10; // r12
  __int64 flags; // rax
  __int128 v12; // [rsp+0h] [rbp-198h] BYREF
  __int64 v13; // [rsp+10h] [rbp-188h]
  __int64 v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  char v16; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v17[6]; // [rsp+168h] [rbp-30h] BYREF

  v17[0] = __readfsqword(0x28u);
  v5 = &v16;
  v12 = -1;
  v13 = -1;
  v14 = 0;
  v15 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v17 != (_QWORD *)v5 );
  v6 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, _QWORD, _QWORD, _QWORD, double))decode_insn)(
         &v12,
         a4,
         v17,
         0,
         0,
         0,
         0.0);
  result = 0;
  if ( v6 > 0 )
  {
    *a1 = WORD1(v14);
    v8 = is_call_insn(&v12);
    v9 = v13 + WORD1(v14);
    *a2 = v8;
    v10 = v8;
    flags = get_flags_ex(v9, 4);
    if ( (flags & 0x10000) == 0 || (~(_WORD)flags & 0x600) != 0 )
    {
      v10 = 1;
    }
    else if ( !v10 || (flags & 0x1000) == 0 )
    {
      v10 = sub_1E73C0(0x25u, &v12, 0) == 1;
    }
    *a3 = v10;
    return 1;
  }
  return result;
}
