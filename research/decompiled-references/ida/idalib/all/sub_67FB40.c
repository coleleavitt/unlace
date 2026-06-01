__int64 __fastcall sub_67FB40(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  int v5; // eax
  void *that; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // rax
  __int64 flags; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[32]; // [rsp+20h] [rbp-1C8h] BYREF
  __int128 v14; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-198h]
  __int64 v16; // [rsp+58h] [rbp-190h]
  __int64 v17; // [rsp+60h] [rbp-188h]
  char v18; // [rsp+68h] [rbp-180h] BYREF
  _BYTE v19[40]; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v20[240]; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v21; // [rsp+1A8h] [rbp-40h] BYREF

  v21 = __readfsqword(0x28u);
  if ( a3 == 5 )
  {
    v4 = qword_2CCB598;
    v5 = *(_DWORD *)(qword_2CCB598 + 932);
    if ( v5 == 8
      || v5 == 60
      || (that = nullptr, (~((unsigned __int16)get_flags_ex(0, 4) >> 8) & 6) != 0)
      && (that = (void *)next_that(0, -1, sub_39FD10, 0), that == (void *)-1LL) )
    {
LABEL_5:
      unregister_post_event_visitor(0, a1);
      return a2;
    }
    while ( 1 )
    {
      v9 = (unsigned __int64 *)&v18;
      v15 = -1;
      v16 = 0;
      v17 = 0;
      v14 = -1;
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
      while ( &v21 != v9 );
      if ( (int)decode_insn(&v14, that, 0, 0, v7, v8, 0.0) <= 0 )
        goto LABEL_21;
      flags = get_flags_ex(that, 0);
      if ( (flags & 0xF000000) == 0 || !*(_DWORD *)(v4 + 932) && (_WORD)v16 == 42 )
        goto LABEL_21;
      v11 = sub_3792E0(0x2Fu, v20);
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_18;
      }
      else if ( v20[1] <= 1u )
      {
        goto LABEL_18;
      }
      if ( (flags & 0xF000000) != 0x5000000 || (unsigned __int8)get_refinfo(v13, that, 2) )
        flags = sub_573FA0(flags, 1u, 2u);
LABEL_18:
      v12 = sub_3792E0(0x2Fu, v19);
      if ( v12 )
      {
        if ( v12 < 0 )
LABEL_26:
          flags &= 0xFFFFFFFFF0FFFFFFLL;
      }
      else if ( v19[1] <= 1u )
      {
        goto LABEL_26;
      }
      sub_3D07C0(*(_QWORD **)(v4 + 1672), that, flags);
LABEL_21:
      that = (void *)next_that(that, -1, sub_39FD10, 0);
      if ( that == (void *)-1LL )
        goto LABEL_5;
    }
  }
  return a2;
}
