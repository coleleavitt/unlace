__int64 __fastcall sub_DE80(__int64 a1, _QWORD *a2, unsigned __int8 *a3, __int64 a4, _BYTE *a5, char a6)
{
  unsigned __int64 flags; // rbx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // al
  unsigned int dword; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rax
  __int64 name_base_ea; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 v26; // al
  unsigned __int8 default_reftype; // al
  __int64 v28; // [rsp+8h] [rbp-190h]
  unsigned __int64 v29; // [rsp+10h] [rbp-188h]
  unsigned int v30; // [rsp+10h] [rbp-188h]
  unsigned int v31; // [rsp+10h] [rbp-188h]
  __int64 v32; // [rsp+10h] [rbp-188h]
  __int64 v33; // [rsp+18h] [rbp-180h]
  char v34[8]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v35; // [rsp+28h] [rbp-170h]
  _BYTE v36[280]; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v37; // [rsp+158h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  flags = get_flags_ex(a4, 0);
  v11 = get_flags_ex(a2[2], 0);
  result = 0;
  if ( (flags & 0x600) == 0x400 )
  {
    v13 = (unsigned int)flags & 0xF0000000;
    if ( v13 == 0x20000000 )
    {
      if ( a3[5] != 2 )
        return result;
    }
    else if ( v13 == 0x10000000 )
    {
      if ( a3[5] != 1 )
        return result;
    }
    else if ( (flags & 0xF0000000) != 0 )
    {
      if ( v13 == 0x80000000LL )
      {
        if ( a3[5] != 3 )
          return result;
      }
      else if ( v13 != 2415919104LL || a3[5] != 4 )
      {
        return result;
      }
    }
    else if ( a3[5] )
    {
      return result;
    }
    if ( a6 || (v29 = v11, (unsigned __int8)is_defarg(flags, 0)) && (v16 = is_defarg(v29, *a3), v11 = v29, v16) )
    {
      v14 = v11 >> 4;
      if ( !*a3 )
        LODWORD(v14) = v11;
      v15 = v14 & 0xF00000;
      if ( (flags & 0xF00000) != v15 )
      {
        flags = v15 | flags & 0xFFFFFFFFFF0FFFFFLL;
        get_opinfo(v36, a2[2]);
        set_opinfo(a4, 0, flags, v36, 0);
        set_op_type(a4, flags, 0);
        auto_mark_range(a2[2], a2[2] + 1LL, 40);
        auto_mark_range(a4, a4 + 1, 40);
      }
    }
    if ( a3[5] == 2
      && (!(unsigned __int8)is_defarg(flags, 0)
       || (unsigned __int8)is_off(flags, 0)
       && (unsigned __int8)get_refinfo(v34, a4, 0)
       && (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (16LL * *a2)) == v35) )
    {
      dword = get_dword(a4);
      if ( dword != -1 )
      {
        v18 = 16LL * *a2 + dword;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v18 != v19 )
        {
          v20 = v18 & v19;
          v21 = v18 == -1;
          v22 = -1;
          if ( !v21 )
            v22 = v20;
          v19 = v22;
        }
        if ( (unsigned int)get_auto_state() == 40 && sub_DD40(a1, (__int64)a2, v19) )
        {
          if ( !(unsigned __int8)is_defarg(flags, 0) )
          {
            v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (16LL * *a2);
            default_reftype = get_default_reftype(a4);
            op_offset(a4, 0, default_reftype, -1, v32, 0);
          }
          v30 = *a3;
          v25 = get_flags_ex(a2[2], 0);
          if ( !(unsigned __int8)is_defarg(v25, v30) )
          {
            v31 = *a3;
            v28 = a2[2];
            v33 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (16LL * *a2);
            v26 = get_default_reftype(v28);
            op_offset(v28, v31, v26, -1, v33, 0);
          }
        }
        if ( (unsigned __int8)is_off(flags, 0) )
        {
          name_base_ea = get_name_base_ea(a4, v19);
          v24 = 65;
          if ( name_base_ea == v19 )
            v24 = 1;
          add_dref(a2[2], name_base_ea, v24);
        }
      }
    }
    if ( a5 )
    {
      switch ( a3[5] )
      {
        case 0u:
          *a5 = get_byte(a4);
          break;
        case 1u:
          *(_WORD *)a5 = get_word(a4);
          break;
        case 2u:
          *(_DWORD *)a5 = get_dword(a4);
          break;
        case 3u:
          *(_DWORD *)a5 = 0;
          get_bytes(a5, 4, a4, 0, 0);
          break;
        case 4u:
          *(_QWORD *)a5 = 0;
          get_bytes(a5, 8, a4, 0, 0);
          break;
        default:
          return 1;
      }
    }
    return 1;
  }
  return result;
}
