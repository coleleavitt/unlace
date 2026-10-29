unsigned __int64 __fastcall sub_5C35E0(
        __int64 a1,
        __int64 a2,
        const char *a3,
        unsigned int that,
        unsigned int a5,
        __int16 a6,
        int a7)
{
  size_t v12; // r12
  void *v13; // rax
  bool (__fastcall *v14)(__int16); // r12
  int *func; // rax
  __int64 v16; // rcx
  int v17; // edi
  _DWORD *v18; // rdx
  __int64 i; // rax
  _DWORD *v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rax
  char v24; // r12
  unsigned int *v25; // rax
  unsigned int v26; // r15d
  unsigned int *v27; // rsi
  unsigned int v28; // r12d
  char k; // al
  int v30; // eax
  _DWORD *v31; // rdx
  char j; // al
  char m; // al
  unsigned __int64 v35; // [rsp+0h] [rbp-88h]
  int v36[3]; // [rsp+14h] [rbp-74h] BYREF
  _QWORD v37[3]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-50h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2B05DB0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a3 )
  {
    v12 = strlen(a3);
    v13 = (void *)qvector_reserve(a1 + 24, 0, v12 + 1, 1);
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = v12 + 1;
    memmove(v13, a3, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v12) = 0;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 72) = (a6 & 0x10) != 0;
  *(_BYTE *)(a1 + 73) = (a6 & 0x20) != 0;
  *(_BYTE *)(a1 + 74) = (a6 & 0x40) != 0;
  *(_BYTE *)(a1 + 75) = (unsigned __int8)a6 >> 7;
  *(_BYTE *)(a1 + 76) = HIBYTE(a6) & 1;
  *(_BYTE *)(a1 + 77) = (a6 & 0x200) != 0;
  v14 = sub_5BBF60;
  if ( (~((unsigned __int16)get_flags_ex(that, 4) >> 8) & 6) == 0 )
    v14 = sub_39AFB0;
  if ( that == a5 )
    a5 = -1;
  if ( that < a5 )
  {
    while ( 1 )
    {
      func = (int *)get_func(that);
      v16 = *(_QWORD *)(a1 + 56);
      if ( func )
      {
        v17 = *func;
        if ( v16 )
        {
          v18 = *(_DWORD **)(a1 + 48);
          i = 0;
          while ( 1 )
          {
            v20 = v18;
            if ( v17 == *v18 )
              break;
            ++i;
            v18 += 16;
            if ( i == v16 )
              goto LABEL_35;
          }
LABEL_13:
          v21 = i << 6;
          goto LABEL_14;
        }
LABEL_35:
        v30 = sub_5C2DD0(a1, v17);
      }
      else
      {
        if ( v16 )
        {
          v31 = *(_DWORD **)(a1 + 48);
          for ( i = 0; i != v16; ++i )
          {
            v20 = v31;
            if ( that == *v31 )
              goto LABEL_13;
            v31 += 16;
          }
        }
        v30 = sub_5C2DD0(a1, that);
      }
      v21 = (__int64)v30 << 6;
      v20 = (_DWORD *)(v21 + *(_QWORD *)(a1 + 48));
LABEL_14:
      *((_BYTE *)v20 + 60) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v21 + 61) = a6 & 3;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + v21 + 56) = a7;
      if ( a5 != -1 )
      {
        that = next_that(that, a5, v14, 0);
        if ( that < a5 )
          continue;
      }
      break;
    }
  }
  v22 = 0;
  v35 = *(_QWORD *)(a1 + 56);
  while ( 1 )
  {
    v23 = v35;
    if ( (a6 & 4) != 0 )
      v23 = *(_QWORD *)(a1 + 56);
    if ( v22 >= v23 )
      return v39 - __readfsqword(0x28u);
    v24 = a6;
    v25 = (unsigned int *)(*(_QWORD *)(a1 + 48) + (v22 << 6));
    v26 = *v25;
    if ( (a6 & 8) != 0 )
      v24 = *((_BYTE *)v25 + 61);
    if ( (v24 & 1) != 0 )
    {
      for ( j = xrefblk_t_first_to(v36, v26, 1);
            j && (unsigned int)sub_5C3460((_BYTE *)a1, v36, 1) != -1;
            j = xrefblk_t_next_to(v36) )
      {
        ;
      }
    }
    if ( (v24 & 2) != 0 )
    {
      v27 = (unsigned int *)get_func(v26);
      if ( v27 )
      {
        v38 = -1;
        v37[0] = 0;
        v37[1] = 0xFFFFFFFFLL;
        v37[2] = 0;
        v38 = *v27;
        if ( (unsigned __int8)func_tail_iterator_set(v37, v27, 0xFFFFFFFFLL) )
        {
          do
          {
            v28 = v38;
            for ( k = xrefblk_t_first_from(v36, v38, 1); k; k = xrefblk_t_next_from(v36) )
            {
              if ( (unsigned int)sub_5C3460((_BYTE *)a1, v36, 2) == -1 )
                goto LABEL_33;
            }
          }
          while ( v28 != -1 && (unsigned __int8)func_item_iterator_next(v37, sub_39AFB0, 0) );
        }
LABEL_33:
        if ( v37[0] )
          lock_func_range(v37[0], 0);
      }
      else
      {
        for ( m = xrefblk_t_first_from(v36, v26, 1);
              m && (unsigned int)sub_5C3460((_BYTE *)a1, v36, 2) != -1;
              m = xrefblk_t_next_from(v36) )
        {
          ;
        }
      }
    }
    ++v22;
  }
}

