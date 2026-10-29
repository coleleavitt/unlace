unsigned __int64 __fastcall sub_69A540(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 *v6; // r13
  __int64 v7; // rdi
  __int16 flags; // ax
  char *v9; // rdx
  __int64 v10; // r14
  __int64 v12; // r13
  __int128 v13; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-198h]
  __int64 v15; // [rsp+28h] [rbp-190h]
  __int64 v16; // [rsp+30h] [rbp-188h]
  char v17; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v18[8]; // [rsp+178h] [rbp-40h] BYREF

  v18[0] = __readfsqword(0x28u);
  v2 = a1[1];
  if ( (int)v2 > 0 )
  {
    v4 = 0;
    v5 = 16 * ((unsigned int)(v2 - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v6 = (__int64 *)(v4 + *a1);
        v7 = *v6;
        if ( *v6 != -1 && v7 != v6[1] )
        {
          flags = get_flags_ex(v7, 4);
          v9 = &v17;
          v14 = -1;
          v15 = 0;
          v16 = 0;
          v13 = -1;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 40;
            *((_WORD *)v9 - 19) = 0;
            *((_WORD *)v9 - 18) = 0;
            *((_DWORD *)v9 - 2) = 0;
            *((_WORD *)v9 - 17) = 0;
            *((_OWORD *)v9 - 2) = 0;
            *((_QWORD *)v9 - 2) = 0;
          }
          while ( v18 != (_QWORD *)v9 );
          v10 = flags & 0x600;
          if ( v10 != 1536 && (int)decode_insn(&v13, *v6, v9, v18, 0, 0, 0.0) > 0 )
            break;
        }
LABEL_11:
        v4 += 16;
        if ( v4 == v5 )
          return v18[0] - __readfsqword(0x28u);
      }
      if ( a2 )
      {
        if ( sub_3792E0(0x20u, &v13, 1) >= 0 && !(unsigned int)is_align_insn(*v6) )
        {
          if ( sub_3792E0(0x24u, &v13, 0) == 100 )
          {
            v12 = *v6;
            auto_mark_range(v12, v12 + 1, 20);
            auto_mark_range(v12, v12 + 1, 30);
          }
          else if ( !v10 )
          {
            auto_mark_range(*v6, *v6 + 1, 25);
          }
        }
        goto LABEL_11;
      }
      v4 += 16;
      auto_mark_range(*v6, *v6 + 1, 20);
    }
    while ( v4 != v5 );
  }
  return v18[0] - __readfsqword(0x28u);
}
