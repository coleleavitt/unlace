unsigned __int64 __fastcall sub_3E5040(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v24; // [rsp+20h] [rbp-1D8h] BYREF
  int v25; // [rsp+28h] [rbp-1D0h]
  __int128 v26; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v27; // [rsp+40h] [rbp-1B8h]
  __int128 v28; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-198h]
  __int64 v30; // [rsp+68h] [rbp-190h]
  __int64 v31; // [rsp+70h] [rbp-188h]
  char v32; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v33; // [rsp+1B8h] [rbp-40h] BYREF

  v33 = __readfsqword(0x28u);
  if ( a3 && a2 )
  {
    v5 = (unsigned __int64 *)&v32;
    v25 = -1;
    v24 = 0;
    v29 = -1;
    v30 = 0;
    v31 = 0;
    v26 = 0;
    v28 = -1;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 5;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *(v5 - 2) = 0;
    }
    while ( &v33 != v5 );
    v27 = *a3;
    if ( (unsigned __int8)func_tail_iterator_set(&v24, a3, -1) )
    {
      do
      {
        v7 = v27;
        v8 = sub_3BE900(a1, v27, 0);
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned __int8)is_stkvar(v8, v9) )
          {
            if ( (unsigned int)decode_insn(&v28, v7, v10, v11, v12, v13, 0.0) )
            {
              v14 = sub_5B9750(a1, a3, &v28, v9);
              if ( v14 >= a4 && v14 < a5 )
                break;
            }
          }
          if ( ++v9 == 8 )
            goto LABEL_12;
        }
        v16 = ((dword_23AD9C0[v9]
              & *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 16LL * ((unsigned __int16)v30 - *(_DWORD *)(a1[2] + 104LL)) + 8)) == 0)
            + 2;
        v17 = a2[1];
        v18 = *a2;
        v19 = v17 + 1;
        if ( a2[2] < (unsigned __int64)(v17 + 1) )
        {
          v18 = qvector_reserve(a2, v18, v19, 16);
          *a2 = v18;
          v17 = a2[1];
          v19 = v17 + 1;
        }
        v20 = v18 + 16 * v17;
        a2[1] = v19;
        *(_QWORD *)v20 = v7;
        *(_BYTE *)(v20 + 8) = v9;
        *(_BYTE *)(v20 + 9) = v16;
LABEL_12:
        ;
      }
      while ( (unsigned __int8)func_item_iterator_next(&v24, sub_3E0AB0, 0, 0.0) );
    }
    if ( v24 )
      lock_func_range(v24, 0);
  }
  return v33 - __readfsqword(0x28u);
}
