__int64 __fastcall sub_1CF0C0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  char v9; // al
  unsigned __int64 v10; // rdx
  char *v11; // rax
  int v12; // r15d
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdi
  char v21; // [rsp+Fh] [rbp-1B9h]
  char v22; // [rsp+1Fh] [rbp-1A9h] BYREF
  __int128 v23; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-198h]
  __int64 v25; // [rsp+38h] [rbp-190h]
  __int64 v26; // [rsp+40h] [rbp-188h]
  char v27; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v28[8]; // [rsp+188h] [rbp-40h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 26);
  v28[0] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = a3 - v7;
  if ( (get_flags_ex(v7 + v6, 4) & 0x600) != 0x400 )
  {
    v9 = netnode_charval(*(_QWORD *)(a1 + 104), v7, 256);
    v10 = *(unsigned __int16 *)(a2 + 26);
    v21 = v9;
    if ( v10 < v8 )
      v10 = v8;
    del_items(v7, 36, v10, 0);
    v24 = -1;
    v11 = &v27;
    v23 = -1;
    v25 = 0;
    v26 = 0;
    do
    {
      *(_WORD *)v11 = 0;
      v11 += 40;
      *((_WORD *)v11 - 19) = 0;
      *((_WORD *)v11 - 18) = 0;
      *((_DWORD *)v11 - 2) = 0;
      *((_WORD *)v11 - 17) = 0;
      *((_OWORD *)v11 - 2) = 0;
      *((_QWORD *)v11 - 2) = 0;
    }
    while ( v28 != (_QWORD *)v11 );
    v12 = *(unsigned __int16 *)(a2 + 26);
    if ( v12 == (unsigned int)create_insn(v7, &v23, v28, 0.0) )
    {
      v13 = *(unsigned __int16 *)(a2 + 26);
      if ( v13 == get_item_end(v7) - v7 )
      {
        if ( v21 )
        {
          v19 = *(_QWORD *)(a1 + 104);
          v22 = v21;
          netnode_supset(v19, v7, &v22, 1, 256);
        }
        v7 += *(unsigned __int16 *)(a2 + 26);
        if ( v7 < a3 )
        {
          while ( (unsigned int)create_insn(v7, &v23, v14, 0.0) )
          {
            v7 += WORD1(v25);
            if ( v7 >= a3 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          if ( (unsigned int)decode_insn(&v23, v7, v14, v15, v16, v17, 0.0) )
            return v7;
        }
      }
    }
  }
  *a4 = v7;
  return -1;
}
