unsigned __int64 __fastcall sub_D780(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  const char *v7; // rcx
  char *v8; // r14
  __int64 v9; // rdx
  char v10; // al
  char *v11; // r14
  char *v12; // rcx
  __int64 v13; // rdx
  char *s1; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-F0h]
  char *v16; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+28h] [rbp-D0h]
  _BYTE v18[136]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+C8h] [rbp-30h]

  v4 = *(unsigned __int8 *)(a3 + 184);
  v19 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm(v4) )
  {
    s1 = nullptr;
    v15 = 0;
    get_segm_name(&s1, a3, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    {
      if ( (_QWORD)v15 && ((v8 = s1, !strcmp(s1, ".text")) || !strcmp(v8, ".data") || !strcmp(v8, ".bss")) )
      {
        v7 = (const char *)&unk_118EB;
      }
      else
      {
        validate_name(&s1, 6, 1);
        if ( (_QWORD)v15 )
        {
          v8 = s1;
          v7 = ".section ";
        }
        else
        {
          v7 = ".section ";
          v8 = (char *)&unk_11E50;
        }
      }
      sub_CE00(a2, 0xFFFF, (__int64)&unk_1191F, v7, v8);
    }
    else
    {
      v16 = nullptr;
      v17 = 0;
      get_segm_class(&v16, a3);
      if ( !(_QWORD)v17
        || (v11 = v16, strcmp(v16, "CODE")) && strcmp(v11, "DATA") && strcmp(v11, "BSS") && strcmp(v11, "DUMMY") )
      {
        v10 = *(_BYTE *)(a3 + 184);
        v11 = "DATA";
        if ( v10 != 3 )
        {
          v11 = "BSS";
          if ( v10 != 9 )
          {
            v11 = "CODE";
            if ( v10 != 2 )
              v11 = "UNK";
          }
        }
      }
      validate_name(&s1, 6, 1);
      v12 = (char *)&unk_11E50;
      if ( (_QWORD)v15 )
        v12 = s1;
      sub_CE00(a2, 0xFFFF, (__int64)&unk_1192E, v12, v11);
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16, 0xFFFF, v13, 0.0);
      }
    }
    v9 = *(_QWORD *)(a3 + 32);
    if ( v9 )
    {
      btoa64(v18, 136, v9, 0);
      sub_CE00(a2, 0xFFFF, (__int64)&unk_11946, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v18);
    }
    if ( s1 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(s1, 0xFFFF, v9, 0.0);
    }
  }
  return v19 - __readfsqword(0x28u);
}
