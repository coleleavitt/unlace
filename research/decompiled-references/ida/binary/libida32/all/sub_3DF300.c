unsigned __int64 __fastcall sub_3DF300(__int64 a1, __int64 *a2, unsigned int *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 *v6; // rax
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v24; // [rsp+20h] [rbp-138h] BYREF
  int v25; // [rsp+28h] [rbp-130h]
  __int64 v26; // [rsp+2Ch] [rbp-12Ch]
  unsigned int v27; // [rsp+38h] [rbp-120h]
  __int64 v28; // [rsp+40h] [rbp-118h] BYREF
  __int64 v29; // [rsp+48h] [rbp-110h]
  __int64 v30; // [rsp+50h] [rbp-108h]
  char v31; // [rsp+58h] [rbp-100h] BYREF
  unsigned __int64 v32; // [rsp+118h] [rbp-40h] BYREF

  v32 = __readfsqword(0x28u);
  if ( a3 && a2 )
  {
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v28 = -1;
    v30 = 0;
    v29 = 0xFFFFFFFFLL;
    v6 = (unsigned __int64 *)&v31;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 3;
      *((_WORD *)v6 - 11) = 0;
      *((_WORD *)v6 - 10) = 0;
      *((_DWORD *)v6 - 1) = 0;
      *((_WORD *)v6 - 9) = 0;
      *(v6 - 2) = 0;
      *((_DWORD *)v6 - 2) = 0;
    }
    while ( &v32 != v6 );
    v27 = *a3;
    if ( (unsigned __int8)func_tail_iterator_set(&v24, a3, 0xFFFFFFFFLL) )
    {
      do
      {
        v7 = v27;
        v8 = sub_3B9AA0(a1, v27, 0);
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned __int8)is_stkvar(v8, v9) )
          {
            if ( (unsigned int)decode_insn(&v28, v7, v10, v11, v12, v13) )
            {
              v14 = sub_59F380(a1, a3, &v28, v9);
              if ( v14 >= a4 && v14 < a5 )
                break;
            }
          }
          if ( ++v9 == 8 )
            goto LABEL_12;
        }
        v16 = ((dword_2389980[v9]
              & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL)
                          + 16LL * (WORD2(v29) - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 104LL))
                          + 8)) == 0)
            + 2;
        v17 = a2[1];
        v18 = *a2;
        v19 = v17 + 1;
        if ( a2[2] < (unsigned __int64)(v17 + 1) )
        {
          v18 = qvector_reserve(a2, v18, v19, 8);
          *a2 = v18;
          v17 = a2[1];
          v19 = v17 + 1;
        }
        v20 = v18 + 8 * v17;
        a2[1] = v19;
        *(_DWORD *)v20 = v7;
        *(_BYTE *)(v20 + 4) = v9;
        *(_BYTE *)(v20 + 5) = v16;
LABEL_12:
        ;
      }
      while ( (unsigned __int8)func_item_iterator_next(&v24, sub_3DABE0, 0) );
    }
    if ( v24 )
      lock_func_range(v24, 0);
  }
  return v32 - __readfsqword(0x28u);
}

