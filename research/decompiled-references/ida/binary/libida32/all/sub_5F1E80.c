unsigned __int64 __fastcall sub_5F1E80(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 (*v5)(); // rax
  unsigned int *v6; // rsi
  unsigned int v7; // eax
  unsigned __int64 *v9; // rax
  char insn; // al
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int item_end; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  char v22; // [rsp+Fh] [rbp-149h] BYREF
  void *ptr; // [rsp+10h] [rbp-148h] BYREF
  __int128 v24; // [rsp+18h] [rbp-140h]
  _QWORD v25[3]; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-110h]
  _QWORD v27[3]; // [rsp+50h] [rbp-108h] BYREF
  char v28; // [rsp+68h] [rbp-F0h] BYREF
  unsigned __int64 v29; // [rsp+128h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  v4 = a2;
  v5 = *(__int64 (**)())(*(_QWORD *)v3 + 32LL);
  if ( v5 != sub_5E98F0 && ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v5)(v3, a2) )
  {
    item_end = get_item_end(a2, a2, v16, v17);
    sub_5F18C0(a1, item_end);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) != *(_DWORD *)(a1 + 52) )
  {
    v25[0] = 0;
    v6 = *(unsigned int **)(a1 + 32);
    v25[1] = 0xFFFFFFFFLL;
    v25[2] = 0;
    v26 = -1;
    ptr = nullptr;
    v22 = 0;
    v24 = 0;
    if ( v4 == -1 && v6 )
      v7 = *v6;
    else
      v7 = v4;
    v26 = v7;
    if ( (unsigned __int8)func_tail_iterator_set(v25, v6, v4) )
    {
      v27[0] = -1;
      v27[2] = 0;
      v27[1] = 0xFFFFFFFFLL;
      v9 = (unsigned __int64 *)&v28;
      do
      {
        *(_WORD *)v9 = 0;
        v9 += 3;
        *((_WORD *)v9 - 11) = 0;
        *((_WORD *)v9 - 10) = 0;
        *((_DWORD *)v9 - 1) = 0;
        *((_WORD *)v9 - 9) = 0;
        *(v9 - 2) = 0;
        *((_DWORD *)v9 - 2) = 0;
      }
      while ( &v29 != v9 );
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
        goto LABEL_18;
LABEL_17:
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) != *(_DWORD *)(a1 + 52) )
      {
LABEL_18:
        while ( 1 )
        {
          if ( (get_flags_ex(v4, 4) & 0x10000) != 0 )
          {
            insn = func_item_iterator_decode_prev_insn(v25, v27);
            v22 = 0;
          }
          else
          {
            insn = func_item_iterator_decode_preceding_insn(v25, &ptr, &v22, v27);
          }
          if ( !insn )
            break;
          v4 = v26;
          if ( (~((unsigned __int16)get_flags_ex(v26, 4) >> 8) & 6) != 0 )
            break;
          if ( v22
            && (v11 = *(_QWORD *)(a1 + 8), v12 = *(__int64 (**)())(*(_QWORD *)v11 + 32LL), v12 != sub_5E98F0)
            && ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v12)(v11, v4) )
          {
            v21 = get_item_end(v4, v4, v19, v20);
            sub_5F18C0(a1, v21);
          }
          else
          {
            sub_5F18C0(a1, v4);
          }
          v13 = v24;
          v14 = ptr;
          if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v24 + 1, 4);
            v14 = ptr;
            v13 = v24;
          }
          v14[v13] = v4;
          v15 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v24 = v24 + 1;
          if ( !*(_QWORD *)(v15 + 8) )
            goto LABEL_17;
        }
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    if ( v25[0] )
      lock_func_range(v25[0], 0);
  }
  return v29 - __readfsqword(0x28u);
}

