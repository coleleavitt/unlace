unsigned __int64 __fastcall get_frame_part(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 ph; // r14
  int frame_retsize; // r12d
  int v6; // eax
  unsigned int tinfo_size; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // r12d
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a1 && a2 )
  {
    ph = get_ph(a1, (const char *)a2);
    frame_retsize = get_frame_retsize(a2);
    if ( a3 == 2 )
    {
      if ( *(char *)(ph + 9) >= 0 )
        v13 = *(_DWORD *)(a2 + 20);
      else
        v13 = *(_DWORD *)(a2 + 28) + frame_retsize;
      *a1 = v13;
      a1[1] = *(unsigned __int16 *)(a2 + 24) + v13;
    }
    else if ( a3 > 2 )
    {
      if ( a3 != 3 )
      {
        if ( !under_debugger )
          interr(903);
        BUG();
      }
      v12 = *(_DWORD *)(ph + 8) & 0x8000;
      if ( v12 )
        v12 = frame_retsize + *(_DWORD *)(a2 + 28) + *(unsigned __int16 *)(a2 + 24);
      *a1 = v12;
      a1[1] = *(_DWORD *)(a2 + 20) + v12;
    }
    else if ( a3 )
    {
      if ( *(char *)(ph + 9) >= 0 )
        v6 = *(_DWORD *)(a2 + 20) + *(unsigned __int16 *)(a2 + 24);
      else
        v6 = *(_DWORD *)(a2 + 28);
      *a1 = v6;
      a1[1] = frame_retsize + v6;
    }
    else
    {
      v14 = 0;
      tinfo_get_func_frame(&v14, a2);
      tinfo_size = get_tinfo_size(0, v14, 0);
      v9 = *(_DWORD *)(a2 + 28);
      v10 = frame_retsize + *(_DWORD *)(a2 + 20) + *(unsigned __int16 *)(a2 + 24);
      v11 = tinfo_size - v10;
      if ( v9 >= tinfo_size - v10 )
        v11 = v9;
      if ( v10 < tinfo_size )
        v9 = v11;
      if ( *(char *)(ph + 9) >= 0 )
      {
        v9 += v10;
        a3 = v10;
      }
      *a1 = a3;
      a1[1] = v9;
      clear_tinfo_t(&v14);
    }
  }
  return v15 - __readfsqword(0x28u);
}

