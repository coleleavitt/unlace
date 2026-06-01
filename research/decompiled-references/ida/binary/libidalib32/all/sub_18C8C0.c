__int64 __fastcall sub_18C8C0(const char *src, const __m128i *a2)
{
  __int64 result; // rax
  TGroup *v3; // rax
  TGroup *v4; // rbx
  unsigned __int16 v5; // ax
  int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // r12
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !src )
    return 0;
  if ( batch )
    return sub_18B8E0(src, a2);
  v3 = (TGroup *)sub_185690();
  v4 = v3;
  if ( !v3 )
    return 0;
  v9 = _mm_loadu_si128(a2);
  v10 = a2[1].m128i_i64[0];
  if ( !(unsigned __int8)sub_18A370(v3, src, v9.m128i_i32) )
    return 0;
  set_ida_state();
  while ( 1 )
  {
    sub_185490((__int64 *)v4, 0xFFFFFFFF);
    v5 = TGroup::execView(TProgram::deskTop, v4);
    v6 = v5;
    if ( v5 == 11 )
      break;
    if ( (*((_BYTE *)v4 + 376) & 1) != 0 || (unsigned __int8)sub_187EC0(v4) )
    {
      set_ida_state();
      v7 = *((_QWORD *)v4 + 44);
      (*(void (__fastcall **)(TGroup *))(*(_QWORD *)v4 + 16LL))(v4);
      (*(void (__fastcall **)(TGroup *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v7 )
      {
        result = 1;
        if ( v6 == 10 )
          return result;
        return (unsigned int)-(v6 != 13);
      }
      return v6 == 10;
    }
  }
  set_ida_state();
  v8 = *((_QWORD *)v4 + 44);
  (*(void (__fastcall **)(TGroup *))(*(_QWORD *)v4 + 16LL))(v4);
  (*(void (__fastcall **)(TGroup *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v8 )
    return (unsigned int)-(v6 != 13);
  return v6 == 10;
}

