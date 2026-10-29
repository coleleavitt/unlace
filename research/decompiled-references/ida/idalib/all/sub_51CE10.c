__int64 __fastcall sub_51CE10(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  unsigned int v3; // ebp
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  int sreg_ranges_qty; // eax
  __int64 v8; // r14
  char *i; // rbp
  unsigned __int64 *v10; // r15
  unsigned __int64 *v11; // rax
  __int64 v13; // rax
  int v14; // ebp
  size_t v15; // rax
  size_t v16; // r14
  int v17; // [rsp+8h] [rbp-70h]
  void *v18; // [rsp+8h] [rbp-70h]
  size_t v19; // [rsp+8h] [rbp-70h]
  unsigned __int64 src; // [rsp+10h] [rbp-68h]
  void *srca; // [rsp+10h] [rbp-68h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 1768) + 16LL);
  v22 = *(_QWORD *)(a1 + 1768);
  v2 = *(_QWORD *)(v1 + 1768);
  v3 = *(_DWORD *)(v1 + 996);
  if ( (signed int)v3 <= *(_DWORD *)(v1 + 1000) )
  {
    while ( *(_BYTE *)(v2 + 152) )
    {
      v4 = (int)(v3 - *(_DWORD *)(*(_QWORD *)(v2 + 8) + 68LL));
      if ( v4 >= *(_QWORD *)(v2 + 40) )
      {
        if ( !under_debugger )
          interr(1335);
        goto LABEL_27;
      }
      v5 = v4 << 6;
      *(_DWORD *)(*(_QWORD *)(v2 + 32) + v5 + 56) = v3;
      v6 = (_QWORD *)(*(_QWORD *)(v2 + 32) + v5);
      sreg_ranges_qty = get_sreg_ranges_qty(v3);
      if ( sreg_ranges_qty > 0 )
      {
        v8 = 0;
        v17 = v3;
        src = (unsigned int)(sreg_ranges_qty - 1);
        for ( i = nullptr; ; ++i )
        {
          v10 = nullptr;
          if ( (unsigned __int64)i < v6[1] )
            v10 = (unsigned __int64 *)(v8 + *v6);
          v11 = sub_505D70(*(_QWORD *)(v1 + 1672) + 1624LL, *v10);
          if ( !v11 || v11[1] < v10[1] )
          {
            v13 = *(_QWORD *)(v1 + 984);
            v14 = v17;
            ptr = nullptr;
            v24 = 0;
            if ( v13 )
            {
              if ( *(_QWORD *)(v13 + 8LL * v17) )
              {
                v18 = *(void **)(v13 + 8LL * v17);
                v15 = strlen(*(const char **)(v13 + 8LL * v14));
                v16 = v15;
                if ( v15 )
                {
                  srca = v18;
                  v19 = v15 + 1;
                  ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
                  *(_QWORD *)&v24 = v19;
                  memmove(ptr, srca, v16);
                  *((_BYTE *)ptr + v16) = 0;
                }
              }
            }
            else
            {
              sub_35A790((char **)&ptr);
            }
            sub_368890();
          }
          v8 += 33;
          if ( (char *)src == i )
            break;
        }
        v3 = v17;
      }
      if ( (signed int)++v3 > *(_DWORD *)(v1 + 1000) )
        goto LABEL_14;
    }
    if ( !under_debugger )
      interr(1336);
LABEL_27:
    BUG();
  }
LABEL_14:
  if ( *(_QWORD *)(v22 + 72) != -1 )
  {
    sub_7BF0F0(v22 + 72);
    *(_QWORD *)(v22 + 72) = -1;
  }
  register_undo_handler(183, sub_5175D0, 0, 1);
  register_undo_handler(184, sub_5175D0, 0, 1);
  register_undo_handler(185, sub_517320, 0, 1);
  register_undo_handler(186, sub_517190, 0, 1);
  register_undo_handler(187, sub_516F90, 0, 1);
  register_undo_handler(189, sub_51F030, 0, 1);
  register_undo_handler(188, sub_51EF40, 0, 1);
  return register_undo_handler(190, sub_5158D0, 0, 1);
}
