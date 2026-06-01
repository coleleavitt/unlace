__int64 __fastcall sub_69EF00(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rax
  _BYTE *v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  void *v14; // rdi
  char *v15; // rbx
  char v16; // al
  char *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 i; // r15
  void *v21; // rdi
  void *v23; // rdi
  void *v24; // rdi
  unsigned __int64 that; // rax
  unsigned __int64 v26; // r15
  __int64 flags; // rax
  unsigned __int64 item_end; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  char *v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int v39[2]; // [rsp+0h] [rbp-1D8h]
  void *v40; // [rsp+8h] [rbp-1D0h]
  void *ptr; // [rsp+10h] [rbp-1C8h] BYREF
  int v42[4]; // [rsp+18h] [rbp-1C0h]
  int v43; // [rsp+28h] [rbp-1B0h]
  __int64 v44[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-198h]
  __int64 v46; // [rsp+48h] [rbp-190h]
  __int64 v47; // [rsp+50h] [rbp-188h]
  char v48; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v49[8]; // [rsp+198h] [rbp-40h] BYREF

  v6 = a3;
  v49[0] = __readfsqword(0x28u);
  if ( a3 != -1 && (*(_BYTE *)(a1 + 940) & 8) != 0 )
    v6 = a3 & 0xFFFFFFFFFFFFFFFELL;
  sub_69C5B0(a2, v6);
  if ( (a4 & 0x20) == 0 || (get_flags_ex(v6, 4) & 0x10000) == 0 )
    goto LABEL_5;
  if ( (int)get_func_chunknum(*a2, v6 - 1) < 0 && (!a2[2] || !rangeset_t_find_range(a2 + 1, v6 - 1)) )
    sub_69C5B0(a2, v6 - 1);
  that = prev_that(v6, 0, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3B7CF0, nullptr);
  if ( that == -1 )
    goto LABEL_5;
  *(_QWORD *)v39 = that;
  v26 = prev_that(v6, that, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_6980C0, nullptr);
  if ( v26 != -1 && v26 >= *(_QWORD *)v39 )
  {
    flags = get_flags_ex(v26, 4);
    if ( *(_QWORD *)v39 != v26 || (flags & 0x600) == 0 )
    {
      item_end = *(_QWORD *)v39;
      v29 = get_flags_ex(*(_QWORD *)v39, 4);
      do
      {
        if ( (~BYTE1(v29) & 6) != 0 )
        {
          v33 = &v48;
          v45 = -1;
          v46 = 0;
          v47 = 0;
          *(_OWORD *)v44 = -1;
          do
          {
            *(_WORD *)v33 = 0;
            v33 += 40;
            *((_WORD *)v33 - 19) = 0;
            *((_WORD *)v33 - 18) = 0;
            *((_DWORD *)v33 - 2) = 0;
            *((_WORD *)v33 - 17) = 0;
            *((_OWORD *)v33 - 2) = 0;
            *((_QWORD *)v33 - 2) = 0;
          }
          while ( v49 != (_QWORD *)v33 );
          if ( (int)decode_insn(v44, item_end, 0, v49, 0, v32, 0.0) <= 0 )
            goto LABEL_5;
          item_end += WORD1(v46);
        }
        else
        {
          item_end = get_item_end(item_end, 4, v30, v31);
        }
        v29 = get_flags_ex(item_end, 4);
        if ( v6 < item_end || (v29 & 0x10000) == 0 )
          goto LABEL_5;
      }
      while ( v6 != item_end );
    }
  }
  if ( a5 == 1024 || (HIBYTE(v40) = sub_69EF00(a1, a2, *(_QWORD *)v39, a4, (unsigned int)(a5 + 1))) == 0 )
  {
LABEL_5:
    if ( !*a2 && !a2[2] )
    {
      v34 = sub_69CB60(*(_QWORD **)(a1 + 1672), v6);
      if ( v34 >= v35 )
      {
        v34 = v6 - 2;
        LODWORD(v35) = v6 + 2;
        if ( v6 <= 1 )
          v34 = v6;
      }
      rangeset_t_add((_DWORD)a2 + 8, (int)&ptr, v35, v36, v37, v38, v39[0], v40, v34, v35, v42[2], v43, v44[0]);
    }
    ptr = nullptr;
    *(_OWORD *)v42 = 0;
    sub_69E200(a2, (__int64 *)&ptr);
    v8 = sub_69C7B0(a1, (__int64 ***)&ptr, v6, a4);
    v9 = ptr;
    HIBYTE(v40) = v8 < v10;
    if ( ptr )
    {
      v11 = *(_QWORD *)v42;
      if ( *(_QWORD *)v42 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v15 = &v9[v12];
          v16 = v9[v12 + 97];
          if ( v16 == 2 )
          {
            v17 = *((char **)v15 + 3);
            if ( v17 )
            {
              v18 = *((_QWORD *)v15 + 4);
              if ( v18 )
              {
                v19 = 0;
                for ( i = 0; i != v18; ++i )
                {
                  v21 = *(void **)&v17[v19];
                  if ( v21 )
                  {
                    *(_QWORD *)&v17[v19 + 8] = 0;
                    qfree(v21);
                    v17 = *((char **)v15 + 3);
                  }
                  v19 += 56;
                }
              }
              *((_QWORD *)v15 + 4) = 0;
              qfree(v17);
            }
          }
          else if ( v16 == 1 )
          {
            v23 = *((void **)v15 + 8);
            if ( v23 )
            {
              *((_QWORD *)v15 + 9) = 0;
              qfree(v23);
            }
            v24 = *((void **)v15 + 3);
            if ( v24 )
            {
              *((_QWORD *)v15 + 4) = 0;
              qfree(v24);
            }
          }
          v14 = *(void **)v15;
          v15[97] = 0;
          if ( v14 )
          {
            *((_QWORD *)v15 + 1) = 0;
            qfree(v14);
          }
          ++v13;
          v9 = ptr;
          v12 += 104;
        }
        while ( v11 != v13 );
      }
      *(_QWORD *)v42 = 0;
      qfree(v9);
    }
  }
  return HIBYTE(v40);
}
