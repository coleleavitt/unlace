unsigned __int64 __fastcall sub_67A600(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int *v6; // r14
  __int64 v7; // rdi
  __int16 flags; // ax
  char *v9; // rdx
  __int64 v10; // r15
  unsigned int v12; // r14d
  _QWORD v13[3]; // [rsp+10h] [rbp-118h] BYREF
  char v14; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v15[8]; // [rsp+E8h] [rbp-40h] BYREF

  v15[0] = __readfsqword(0x28u);
  v2 = a1[1];
  if ( (int)v2 > 0 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v2 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v6 = (unsigned int *)(v4 + *a1);
        v7 = *v6;
        if ( (_DWORD)v7 != -1 && (_DWORD)v7 != v6[1] )
        {
          flags = get_flags_ex(v7, 4);
          v13[0] = -1;
          v9 = &v14;
          v13[1] = 0xFFFFFFFFLL;
          v13[2] = 0;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 24;
            *((_WORD *)v9 - 11) = 0;
            *((_WORD *)v9 - 10) = 0;
            *((_DWORD *)v9 - 1) = 0;
            *((_WORD *)v9 - 9) = 0;
            *((_QWORD *)v9 - 2) = 0;
            *((_DWORD *)v9 - 2) = 0;
          }
          while ( v15 != (_QWORD *)v9 );
          v10 = flags & 0x600;
          if ( v10 != 1536 && (int)decode_insn(v13, *v6, v9, v15, 0, 0) > 0 )
            break;
        }
LABEL_11:
        v4 += 8;
        if ( v4 == v5 )
          return v15[0] - __readfsqword(0x28u);
      }
      if ( a2 )
      {
        if ( sub_375980(0x20u, v13, 1) >= 0 && !(unsigned int)is_align_insn(*v6) )
        {
          if ( sub_375980(0x24u, v13, 0) == 100 )
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
      v4 += 8;
      auto_mark_range(*v6, *v6 + 1, 20);
    }
    while ( v4 != v5 );
  }
  return v15[0] - __readfsqword(0x28u);
}

