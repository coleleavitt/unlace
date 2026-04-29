__int64 __fastcall sub_12700(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, int a6, char a7)
{
  unsigned __int64 *v9; // rax
  __int128 *v11; // rbx
  __int64 flags; // rax
  _QWORD *v13; // r8
  __int64 v14; // rax
  int v16; // [rsp+18h] [rbp-1D0h]
  _QWORD v17[2]; // [rsp+20h] [rbp-1C8h] BYREF
  char v18; // [rsp+31h] [rbp-1B7h]
  __int128 v19; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-198h]
  __int64 v21; // [rsp+58h] [rbp-190h]
  __int64 v22; // [rsp+60h] [rbp-188h]
  char v23; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int16 v24; // [rsp+6Eh] [rbp-17Ah]
  __int64 v25; // [rsp+78h] [rbp-170h]
  unsigned __int16 v26; // [rsp+96h] [rbp-152h]
  __int64 v27; // [rsp+98h] [rbp-150h]
  __int64 v28; // [rsp+A0h] [rbp-148h]
  unsigned __int64 v29; // [rsp+1A8h] [rbp-40h] BYREF

  v29 = __readfsqword(0x28u);
  if ( a6 > 19 )
    return 0;
  v9 = (unsigned __int64 *)&v23;
  v19 = -1;
  v20 = -1;
  v21 = 0;
  v22 = 0;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( &v29 != v9 );
  v11 = (__int128 *)a2;
  v16 = a6;
  while ( 1 )
  {
    flags = get_flags_ex(*((_QWORD *)v11 + 2), 4, 0.0);
    if ( ((flags & 0x1000) != 0 || (flags & 0x10000) == 0)
      && (unsigned __int8)xrefblk_t_first_to(v17, *((_QWORD *)v11 + 2), 4) )
    {
      do
      {
        if ( v17[0] < *((_QWORD *)v11 + 2) && v18 == 19 )
        {
          if ( (unsigned int)decode_insn(&v19) )
          {
            if ( (unsigned __int8)sub_12700(a1, (unsigned int)&v19, a3, a4, (_DWORD)a5, ++v16, 0) )
              return 1;
          }
        }
      }
      while ( (unsigned __int8)xrefblk_t_next_to(v17) );
    }
    if ( decode_prev_insn(&v19, *((_QWORD *)v11 + 2)) == -1 )
      return 0;
    if ( (_WORD)v21 == 664 )
    {
      if ( v24 == a3 && v25 == a4 )
      {
        v13 = a5;
        v14 = v28;
        if ( a7 )
        {
          LODWORD(v14) = get_dword(*(_QWORD *)(a2 + 96) + v28);
          v13 = a5;
          v14 = (unsigned int)v14;
        }
        *v13 = v14;
        return 1;
      }
      goto LABEL_9;
    }
    if ( (_WORD)v21 != 735 )
      break;
    if ( a3 == v24 && v25 == a4 )
    {
      *a5 = v27;
      return 1;
    }
LABEL_9:
    v11 = &v19;
    if ( (unsigned __int8)sub_12420(a1, (unsigned __int16 *)&v19, a3, a4) )
      return 0;
  }
  if ( (_WORD)v21 != 1352 )
  {
    if ( ((_WORD)v21 == 716 || (_WORD)v21 == 730) && v24 == a3 && !a4 )
      return sub_12700(a1, (unsigned int)&v19, v26, v28, (_DWORD)a5, v16 + 1, 0);
    goto LABEL_9;
  }
  if ( v26 != a3 || v28 != a4 )
    goto LABEL_9;
  return sub_12700(a1, (unsigned int)&v19, v24, 0, (_DWORD)a5, v16 + 1, 0);
}
