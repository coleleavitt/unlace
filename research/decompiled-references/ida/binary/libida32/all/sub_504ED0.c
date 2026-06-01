__int64 __fastcall sub_504ED0(__int64 a1)
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
  unsigned int *v10; // r15
  unsigned int *v11; // rax
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
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 1576) + 16LL);
  v22 = *(_QWORD *)(a1 + 1576);
  v2 = *(_QWORD *)(v1 + 1576);
  v3 = *(_DWORD *)(v1 + 828);
  if ( (signed int)v3 <= *(_DWORD *)(v1 + 832) )
  {
    while ( *(_BYTE *)(v2 + 144) )
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
            v10 = (unsigned int *)(v8 + *v6);
          v11 = sub_4EE820(*(_QWORD *)(v1 + 1480) + 1552LL, *v10);
          if ( !v11 || v11[1] < v10[1] )
          {
            v13 = *(_QWORD *)(v1 + 816);
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
              sub_3573A0((char **)&ptr);
            }
            sub_365330();
          }
          v8 += 17;
          if ( (char *)src == i )
            break;
        }
        v3 = v17;
      }
      if ( (signed int)++v3 > *(_DWORD *)(v1 + 832) )
        goto LABEL_14;
    }
    if ( !under_debugger )
      interr(1336);
LABEL_27:
    BUG();
  }
LABEL_14:
  if ( *(_DWORD *)(v22 + 68) != -1 )
  {
    sub_79BCF0(v22 + 68);
    *(_DWORD *)(v22 + 68) = -1;
  }
  register_undo_handler(183, sub_4FFA00, 0, 1);
  register_undo_handler(184, sub_4FFA00, 0, 1);
  register_undo_handler(185, sub_4FF750, 0, 1);
  register_undo_handler(186, sub_4FF5C0, 0, 1);
  register_undo_handler(187, sub_4FF3C0, 0, 1);
  register_undo_handler(189, sub_507070, 0, 1);
  register_undo_handler(188, sub_506F80, 0, 1);
  return register_undo_handler(190, sub_4FDD70, 0, 1);
}

