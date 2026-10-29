unsigned __int64 __fastcall sub_67C450(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 fchunk; // rsi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  int v11; // eax
  _DWORD *func; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17[2]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v18; // [rsp+8h] [rbp-30h]
  int v19[2]; // [rsp+18h] [rbp-20h]
  int v20; // [rsp+20h] [rbp-18h]
  int v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+30h] [rbp-8h]

  v3 = *a1;
  *(_QWORD *)v19 = __readfsqword(0x28u);
  if ( (int)get_func_chunknum(v3, a2) < 0 && (!a1[2] || !rangeset_t_find_range(a1 + 1, (unsigned int)a2)) )
  {
    fchunk = get_fchunk((unsigned int)a2);
    if ( fchunk )
    {
      if ( *a1 != fchunk )
      {
        if ( *(char *)(fchunk + 9) < 0 )
        {
          *(_QWORD *)v17 = 0;
          func_parent_iterator_set(v17, fchunk);
          v10 = *(_QWORD *)v17;
          LODWORD(v18) = 0;
          if ( *(_QWORD *)v17 )
          {
            if ( *(char *)(*(_QWORD *)v17 + 9LL) >= 0 )
              goto LABEL_11;
            if ( *(int *)(*(_QWORD *)v17 + 20LL) > 0 )
            {
              while ( 1 )
              {
                func = (_DWORD *)get_func(*(unsigned int *)(*(_QWORD *)(v10 + 24) + 4LL * (int)v18));
                if ( func )
                  sub_67C450((_DWORD)a1, *func, v13, v14, v15, v16, v17[0], v18, *((__int64 *)&v18 + 1));
                v10 = *(_QWORD *)v17;
                if ( (int)v18 + 1 >= *(_DWORD *)(*(_QWORD *)v17 + 20LL) )
                  break;
                LODWORD(v18) = v18 + 1;
              }
            }
            if ( v10 )
LABEL_11:
              lock_func_range(v10, 0);
          }
        }
        else if ( *a1 )
        {
          *(_QWORD *)v17 = 0;
          *(_QWORD *)((char *)&v18 + 4) = 0;
          func_tail_iterator_set(v17, fchunk, 0xFFFFFFFFLL);
          LODWORD(v10) = v17[0];
          LODWORD(v18) = -1;
          if ( *(_QWORD *)v17 )
          {
            while ( 1 )
            {
              rangeset_t_add(
                (_DWORD)a1 + 8,
                v10,
                v6,
                v7,
                v8,
                v9,
                v17[0],
                (void *)v18,
                *((__int64 *)&v18 + 1),
                v19[0],
                v20,
                v21,
                v22);
              v10 = *(_QWORD *)v17;
              if ( !*(_QWORD *)v17 )
                break;
              v11 = v18 + 1;
              if ( (int)v18 + 1 >= *(_DWORD *)(*(_QWORD *)v17 + 104LL) )
                goto LABEL_11;
              LODWORD(v18) = v18 + 1;
              if ( v11 >= 0 )
              {
                v6 = *(_QWORD *)(*(_QWORD *)v17 + 112LL);
                LODWORD(v10) = v6 + 8 * v11;
              }
            }
          }
        }
        else
        {
          *a1 = fchunk;
        }
      }
    }
  }
  return *(_QWORD *)v19 - __readfsqword(0x28u);
}

