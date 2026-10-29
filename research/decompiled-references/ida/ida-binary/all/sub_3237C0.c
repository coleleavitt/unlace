__int64 __fastcall sub_3237C0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 v4; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 *next_seg; // rax
  unsigned __int64 v7; // rbx
  __int128 v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  getinf_buf(26, &v9, 16);
  v2 = v9 - a2;
  v3 = *((_QWORD *)&v9 + 1) - a2;
  v4 = *a1;
  v5 = (unsigned __int64 *)getseg(*a1);
  if ( v5 && v2 < v5[1] && *v5 < v3 )
    return 1;
  next_seg = (unsigned __int64 *)get_next_seg(v4);
  if ( next_seg )
  {
    while ( *next_seg < a1[1] )
    {
      v7 = next_seg[1];
      if ( v2 < v7 && *next_seg < v3 )
        return 1;
      next_seg = (unsigned __int64 *)get_next_seg(v7 - 1);
      if ( !next_seg )
        return 0;
    }
  }
  return 0;
}
