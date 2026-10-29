__int64 __fastcall sub_67E800(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v7; // ebx
  void **p_ptr; // r14
  __int64 v10; // rax
  char *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbp
  void *v14; // rdi
  char *v15; // rbx
  char v16; // al
  char *v17; // rdx
  __int64 v18; // r15
  __int64 i; // r12
  char *v20; // rax
  void *v21; // rdi
  void *v23; // rdi
  void *v24; // rdi
  unsigned int v25; // r15d
  unsigned int that; // eax
  unsigned int v27; // r15d
  __int64 flags; // rax
  unsigned int item_end; // r15d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  char *v34; // rax
  __int64 v35; // rax
  int v36; // r8d
  int v37; // r9d
  int v38; // edx
  unsigned int v39; // esi
  int v40; // [rsp+0h] [rbp-148h]
  void *v41; // [rsp+8h] [rbp-140h]
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  __int128 v43; // [rsp+18h] [rbp-130h]
  int v44; // [rsp+28h] [rbp-120h]
  __int64 v45; // [rsp+30h] [rbp-118h] BYREF
  __int64 v46; // [rsp+38h] [rbp-110h]
  __int64 v47; // [rsp+40h] [rbp-108h]
  char v48; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v49[8]; // [rsp+108h] [rbp-40h] BYREF

  v7 = a3;
  v49[0] = __readfsqword(0x28u);
  if ( a3 != -1 && (*(_BYTE *)(a1 + 772) & 8) != 0 )
    v7 = a3 & 0xFFFFFFFE;
  sub_67C450(a2, v7);
  if ( (a4 & 0x20) == 0 || (get_flags_ex(v7, 4) & 0x10000) == 0 )
    goto LABEL_5;
  v25 = v7 - 1;
  if ( (int)get_func_chunknum(*a2, v7 - 1) < 0 && (!a2[2] || !rangeset_t_find_range(a2 + 1, v25)) )
    sub_67C450(a2, v25);
  that = prev_that(v7, 0, sub_3B3460, 0);
  if ( that == -1 )
    goto LABEL_5;
  HIDWORD(v41) = that;
  v27 = prev_that(v7, that, sub_6782A0, 0);
  if ( v27 != -1 && v27 >= HIDWORD(v41) )
  {
    flags = get_flags_ex(v27, 4);
    if ( HIDWORD(v41) != v27 || (flags & 0x600) == 0 )
    {
      item_end = HIDWORD(v41);
      v30 = get_flags_ex(HIDWORD(v41), 4);
      do
      {
        if ( (~BYTE1(v30) & 6) != 0 )
        {
          v47 = 0;
          v45 = -1;
          v46 = 0xFFFFFFFFLL;
          v34 = &v48;
          do
          {
            *(_WORD *)v34 = 0;
            v34 += 24;
            *((_WORD *)v34 - 11) = 0;
            *((_WORD *)v34 - 10) = 0;
            *((_DWORD *)v34 - 1) = 0;
            *((_WORD *)v34 - 9) = 0;
            *((_QWORD *)v34 - 2) = 0;
            *((_DWORD *)v34 - 2) = 0;
          }
          while ( v49 != (_QWORD *)v34 );
          if ( (int)decode_insn(&v45, item_end, 0, v49, 0, v33) <= 0 )
            goto LABEL_5;
          item_end += HIWORD(v46);
        }
        else
        {
          item_end = get_item_end(item_end, 4, v31, v32);
        }
        v30 = get_flags_ex(item_end, 4);
        if ( v7 < item_end || (v30 & 0x10000) == 0 )
          goto LABEL_5;
      }
      while ( v7 != item_end );
    }
  }
  if ( a5 == 1024 || (LODWORD(p_ptr) = sub_67E800(a1, a2, HIDWORD(v41), a4, (unsigned int)(a5 + 1)), !(_BYTE)p_ptr) )
  {
LABEL_5:
    p_ptr = &ptr;
    if ( !*a2 && !a2[2] )
    {
      v35 = sub_67C990(*(_QWORD **)(a1 + 1480), v7);
      v38 = v35;
      v39 = HIDWORD(v35);
      if ( (unsigned int)v35 >= HIDWORD(v35) )
      {
        v38 = v7 - 2;
        v39 = v7 + 2;
        if ( v7 <= 1 )
          v38 = v7;
      }
      p_ptr = &ptr;
      rangeset_t_add(
        (_DWORD)a2 + 8,
        (int)&ptr,
        v38,
        SHIDWORD(v35),
        v36,
        v37,
        v40,
        v41,
        __SPAIR64__(v39, v38),
        v43,
        SDWORD2(v43),
        v44,
        v45);
    }
    ptr = nullptr;
    v43 = 0;
    sub_67DEF0(a2, (__int64 *)&ptr);
    v10 = sub_67C630(a1, (int ***)&ptr, v7, a4);
    v11 = (char *)ptr;
    LOBYTE(p_ptr) = HIDWORD(v10) > (unsigned int)v10;
    if ( ptr )
    {
      v12 = v43;
      if ( (_QWORD)v43 )
      {
        v13 = 0;
        do
        {
          v15 = &v11[96 * v13];
          v16 = v15[89];
          if ( v16 == 2 )
          {
            v17 = *((char **)v15 + 3);
            if ( v17 )
            {
              v18 = *((_QWORD *)v15 + 4);
              if ( v18 )
              {
                for ( i = 0; i != v18; ++i )
                {
                  v20 = &v17[40 * i];
                  v21 = *(void **)v20;
                  if ( *(_QWORD *)v20 )
                  {
                    *((_QWORD *)v20 + 1) = 0;
                    qfree(v21);
                    v17 = *((char **)v15 + 3);
                  }
                }
              }
              *((_QWORD *)v15 + 4) = 0;
              qfree(v17);
            }
          }
          else if ( v16 == 1 )
          {
            v23 = *((void **)v15 + 7);
            if ( v23 )
            {
              *((_QWORD *)v15 + 8) = 0;
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
          v15[89] = 0;
          if ( v14 )
          {
            *((_QWORD *)v15 + 1) = 0;
            qfree(v14);
          }
          ++v13;
          v11 = (char *)ptr;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v43 = 0;
      qfree(v11);
    }
  }
  return (unsigned int)p_ptr;
}

