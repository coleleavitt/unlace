__int64 __fastcall sub_1ABD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 segm_name; // rax
  char *v5; // r12
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 dword; // rbp
  char v12; // al
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(20080);
    BUG();
  }
  v2 = a2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 552LL) & 3) != 2 )
  {
    v3 = getseg(a2);
    if ( v3 )
    {
      s1 = nullptr;
      v15 = 0;
      segm_name = get_segm_name(&s1, v3, 0);
      v5 = s1;
      if ( segm_name <= 0 || !(_QWORD)v15 || strcmp(s1, ".opd") || (v6 = is_loaded(v2), v5 = s1, !v6) )
      {
LABEL_16:
        if ( v5 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v5);
        }
        return v2;
      }
      v10 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v10 + 617) )
        goto LABEL_13;
      v7 = *(unsigned __int16 *)(v10 + 522);
      if ( (_WORD)v7 == 21 )
      {
        if ( *(_BYTE *)(v10 + 511) == 102 )
        {
LABEL_13:
          dword = (unsigned int)get_dword(v2, ".opd", v7, v8, v9);
LABEL_14:
          v12 = is_loaded(dword);
          v5 = s1;
          if ( v12 )
            v2 = dword;
          goto LABEL_16;
        }
      }
      else if ( (_WORD)v7 == 62 && *(_BYTE *)(v10 + 511) == 123 )
      {
        goto LABEL_13;
      }
      dword = get_qword(v2);
      goto LABEL_14;
    }
  }
  return v2;
}

