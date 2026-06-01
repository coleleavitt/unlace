__int64 __fastcall sub_3FB8B0(_QWORD *a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int64 v4; // r13
  unsigned int v8; // r13d
  unsigned int v10; // eax
  const char *v11; // rdi
  _BYTE v12[9]; // [rsp+4h] [rbp-54h] BYREF
  char v13; // [rsp+Dh] [rbp-4Bh]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = a4 & 0x600;
  if ( v4 == 1536
    || a3 == (unsigned int)sub_39D100((__int64)a1, a3, 25)
    || v4 && !(unsigned __int8)is_problem_present(13, a3) )
  {
    return 0;
  }
  if ( (unsigned int)sub_39CC50((__int64)a1) != 200
    || (sub_4DC440(a1, a3) & 1) != 0
    || (unsigned __int8)xrefblk_t_first_to(v12, a3, 2) && v13 != 4 && v13 != 1 )
  {
    return 0;
  }
  LOBYTE(v10) = sub_3FB7E0((__int64)a1, a2, a3);
  v8 = v10;
  if ( !(_BYTE)v10 || (*(_BYTE *)(a1[2] + 11LL) & 1) == 0 && (int)is_align_insn(a3) > 0 )
    return 0;
  if ( (a4 & 0x4000) != 0 )
  {
    v15 = 0;
    ptr = nullptr;
    if ( get_ea_name(&ptr, a3, 512, 0) > 0 )
    {
      v11 = haystack;
      if ( (_QWORD)v15 )
        v11 = (const char *)ptr;
      if ( (unsigned int)get_mangled_name_type(v11) == 1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v15 = 0;
          qfree(ptr);
        }
        return 0;
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
  }
  if ( (debug & 1) != 0 )
    sub_383DA0();
  remember_problem(13, a3, 0);
  sub_3A1A90(a1, a3, a3 + 1, 0x19u);
  return v8;
}

