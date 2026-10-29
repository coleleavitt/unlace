__int64 __fastcall sub_40EA30(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  __int64 v4; // r13
  unsigned int v8; // r13d
  unsigned int v10; // eax
  const char *v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  char v13; // [rsp+11h] [rbp-57h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = a4 & 0x600;
  if ( v4 == 1536 || a3 == sub_3A1F40((__int64)a1, a3, 25) || v4 && !(unsigned __int8)is_problem_present(13, a3) )
    return 0;
  if ( (unsigned int)sub_3A1820((__int64)a1) != 200
    || (sub_4F37A0(a1, a3) & 1) != 0
    || (unsigned __int8)xrefblk_t_first_to(&v12, a3, 2) && v13 != 4 && v13 != 1 )
  {
    return 0;
  }
  LOBYTE(v10) = sub_40E950(a1, a2, a3);
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
    sub_3879F0();
  remember_problem(13, a3, 0);
  sub_3A61A0(a1, a3, a3 + 1, 0x19u);
  return v8;
}
