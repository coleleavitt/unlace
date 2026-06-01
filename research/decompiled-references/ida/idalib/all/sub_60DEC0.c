unsigned __int64 __fastcall sub_60DEC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 (*v5)(); // rax
  __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 *v9; // rax
  bool insn; // al
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 item_end; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // [rsp+Fh] [rbp-1E9h] BYREF
  void *ptr; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v24; // [rsp+18h] [rbp-1E0h]
  _QWORD v25[2]; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-1B8h]
  __int64 v27; // [rsp+50h] [rbp-1A8h]
  __int128 v28; // [rsp+60h] [rbp-198h] BYREF
  __int64 v29; // [rsp+70h] [rbp-188h]
  __int64 v30; // [rsp+78h] [rbp-180h]
  __int64 v31; // [rsp+80h] [rbp-178h]
  char v32; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int64 v33; // [rsp+1C8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  v4 = a2;
  v5 = *(__int64 (**)())(*(_QWORD *)v3 + 32LL);
  if ( v5 != sub_6057B0 && ((unsigned __int8 (__fastcall *)(__int64, __int64))v5)(v3, a2) )
  {
    item_end = get_item_end(a2, a2, v16, v17);
    sub_60D8C0(a1, item_end);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) != *(_DWORD *)(a1 + 56) )
  {
    v25[0] = 0;
    v6 = *(__int64 **)(a1 + 32);
    v25[1] = 0xFFFFFFFFLL;
    v27 = -1;
    ptr = nullptr;
    v22 = 0;
    v26 = 0;
    v24 = 0;
    if ( v4 == -1 && v6 )
      v7 = *v6;
    else
      v7 = v4;
    v27 = v7;
    if ( (unsigned __int8)func_tail_iterator_set(v25, v6, v4) )
    {
      v29 = -1;
      v9 = (unsigned __int64 *)&v32;
      v30 = 0;
      v31 = 0;
      v28 = -1;
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
      while ( &v33 != v9 );
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
        goto LABEL_18;
LABEL_17:
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) != *(_DWORD *)(a1 + 56) )
      {
LABEL_18:
        while ( 1 )
        {
          if ( (get_flags_ex(v4, 4) & 0x10000) != 0 )
          {
            insn = func_item_iterator_decode_prev_insn((__int64)v25, (__int64)&v28, 0.0);
            v22 = 0;
          }
          else
          {
            insn = func_item_iterator_decode_preceding_insn((__int64)v25, (__int64)&ptr, &v22, (__int64)&v28, 0.0);
          }
          if ( !insn )
            break;
          v4 = v27;
          if ( (~((unsigned __int16)get_flags_ex(v27, 4) >> 8) & 6) != 0 )
            break;
          if ( v22
            && (v11 = *(_QWORD *)(a1 + 8), v12 = *(__int64 (**)())(*(_QWORD *)v11 + 32LL), v12 != sub_6057B0)
            && ((unsigned __int8 (__fastcall *)(__int64, __int64))v12)(v11, v4) )
          {
            v21 = get_item_end(v4, v4, v19, v20);
            sub_60D8C0(a1, v21);
          }
          else
          {
            sub_60D8C0(a1, v4);
          }
          v13 = v24;
          v14 = ptr;
          if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v24 + 1, 8);
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
  return v33 - __readfsqword(0x28u);
}
