unsigned __int64 __fastcall get_frame_part(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 ph; // r13
  int frame_retsize; // eax
  int v8; // r14d
  unsigned __int64 v9; // rdx
  unsigned __int64 tinfo_size; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a1 && a2 )
  {
    ph = get_ph(a1, (const char *)a2);
    frame_retsize = get_frame_retsize(a2);
    v8 = frame_retsize;
    if ( a3 == 2 )
    {
      if ( *(char *)(ph + 9) >= 0 )
        v16 = *(_QWORD *)(a2 + 32);
      else
        v16 = *(_QWORD *)(a2 + 48) + frame_retsize;
      *a1 = v16;
      a1[1] = *(unsigned __int16 *)(a2 + 40) + v16;
    }
    else if ( a3 > 2 )
    {
      if ( a3 != 3 )
      {
        if ( !under_debugger )
          interr(903);
        BUG();
      }
      v15 = 0;
      if ( *(char *)(ph + 9) < 0 )
        v15 = *(_QWORD *)(a2 + 48) + *(unsigned __int16 *)(a2 + 40) + v8;
      *a1 = v15;
      a1[1] = *(_QWORD *)(a2 + 32) + v15;
    }
    else if ( a3 )
    {
      if ( *(char *)(ph + 9) >= 0 )
        v9 = *(_QWORD *)(a2 + 32) + *(unsigned __int16 *)(a2 + 40);
      else
        v9 = *(_QWORD *)(a2 + 48);
      *a1 = v9;
      a1[1] = v9 + frame_retsize;
    }
    else
    {
      v17 = 0;
      tinfo_get_func_frame(&v17, a2);
      tinfo_size = get_tinfo_size(0, v17, 0);
      v12 = *(_QWORD *)(a2 + 48);
      v13 = v8 + *(_QWORD *)(a2 + 32) + *(unsigned __int16 *)(a2 + 40);
      v14 = tinfo_size - v13;
      if ( v12 >= tinfo_size - v13 )
        v14 = *(_QWORD *)(a2 + 48);
      if ( v13 < tinfo_size )
        v12 = v14;
      if ( *(char *)(ph + 9) < 0 )
        v13 = 0;
      else
        v12 += v13;
      *a1 = v13;
      a1[1] = v12;
      clear_tinfo_t(&v17);
    }
  }
  return v18 - __readfsqword(0x28u);
}
