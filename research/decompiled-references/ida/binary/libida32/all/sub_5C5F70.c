_BYTE *__fastcall sub_5C5F70(__int64 a1, _BYTE *a2, char a3)
{
  _BYTE *v3; // rbx
  _BYTE *numbered_type_name; // rax
  unsigned int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v3 = a2;
  v8 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_ordinal_name(a2, &v7) )
  {
    numbered_type_name = (_BYTE *)get_numbered_type_name(a1, v7);
    v3 = numbered_type_name;
    if ( !numbered_type_name || !*numbered_type_name )
    {
      if ( a3 )
      {
        if ( !under_debugger )
          interr(81);
        BUG();
      }
    }
  }
  return v3;
}

