unsigned __int64 __fastcall sub_119A0(__int64 a1, unsigned int a2, const char *a3, __int64 a4, int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (!(unsigned __int8)is_planned_proc(a4) || (get_flags_ex(a4, 4) & 0x4000) == 0)
    && !(unsigned __int8)sub_9170(*(_QWORD *)(a1 + 40), a2, &v14, a5) )
  {
    if ( !strcmp(a3, "@comp.id") )
    {
      if ( (unsigned __int8)getinf(57, "@comp.id", v9, v10, v11, v12) != 1 )
      {
        v13 = 0;
        LOBYTE(v13) = 1;
        set_compiler(&v13, 3, 0);
      }
    }
    else
    {
      set_name(a4, a3, 23552);
    }
  }
  return v15 - __readfsqword(0x28u);
}

