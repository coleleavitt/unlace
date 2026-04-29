unsigned __int64 __fastcall sub_29680(__int64 a1, __int64 *a2, char a3)
{
  __int64 flags; // rax
  char *v6; // rdx
  __int64 not_tail; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int128 v13; // [rsp+0h] [rbp-188h] BYREF
  __int64 v14; // [rsp+10h] [rbp-178h]
  __int64 v15; // [rsp+18h] [rbp-170h]
  __int64 v16; // [rsp+20h] [rbp-168h]
  char v17; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v18[4]; // [rsp+168h] [rbp-20h] BYREF

  v18[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 888) + 260LL) != 2 )
  {
    flags = get_flags_ex(*a2, 4);
    if ( (~(_WORD)flags & 0x600) == 0 )
    {
      v14 = -1;
      v6 = &v17;
      v15 = 0;
      v16 = 0;
      v13 = -1;
      do
      {
        *(_WORD *)v6 = 0;
        v6 += 40;
        *((_WORD *)v6 - 19) = 0;
        *((_WORD *)v6 - 18) = 0;
        *((_DWORD *)v6 - 2) = 0;
        *((_WORD *)v6 - 17) = 0;
        *((_OWORD *)v6 - 2) = 0;
        *((_QWORD *)v6 - 2) = 0;
      }
      while ( v6 != (char *)v18 );
      if ( a3 )
      {
        if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, char *, _QWORD *, double))decode_insn)(
                             &v13,
                             *a2,
                             v6,
                             v18,
                             0.0)
          && (unsigned __int8)sub_1E660(*(_QWORD *)(a1 + 888), v15, (v16 & 0x400) != 0) )
        {
          *a2 += WORD1(v15);
        }
      }
      else if ( (flags & 0x10000) != 0 )
      {
        not_tail = prev_not_tail(*a2);
        v12 = not_tail;
        if ( not_tail != -1
          && (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, double))decode_insn)(
                             &v13,
                             not_tail,
                             v8,
                             v9,
                             v10,
                             v11,
                             0.0)
          && sub_1E730(*(_QWORD *)(a1 + 888), (unsigned __int16)v15, (v16 & 0x400) != 0) )
        {
          *a2 = v12;
        }
      }
    }
  }
  return v18[0] - __readfsqword(0x28u);
}
