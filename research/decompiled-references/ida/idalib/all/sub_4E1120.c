unsigned __int64 __fastcall sub_4E1120(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-8078h]
  void *ptr; // [rsp+10h] [rbp-8068h] BYREF
  __int128 v17; // [rsp+18h] [rbp-8060h]
  _QWORD v18[4097]; // [rsp+30h] [rbp-8048h] BYREF
  unsigned __int64 v19; // [rsp+8038h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1728);
  if ( !*(_BYTE *)(v1 + 704) )
    return v19 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1672);
  *(_BYTE *)(v1 + 704) = 0;
  v4 = sub_4E09E0(v1);
  v5 = *(_QWORD *)(v3 + 2408);
  v6 = v4;
  v7 = 2 * v4;
  v9 = sub_8B8E80(v5, 0);
  if ( v9 )
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL) - **(_QWORD **)(v5 + 56);
  v10 = *(_QWORD *)(v3 + 2408);
  if ( v9 < v7 )
  {
    if ( !(unsigned __int8)must_journal(v10, 0, v8) || *(_DWORD *)(v10 + 96) == -1 )
    {
      sub_8BBE70(v10, v9, v7, 0);
    }
    else
    {
      ptr = nullptr;
      v17 = 0;
      if ( !(unsigned int)sub_8BBE70(v10, v9, v7, &ptr) && (_QWORD)v17 )
        add_undo_record(*(unsigned int *)(v10 + 96), ptr, v17);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
    }
    goto LABEL_13;
  }
  if ( !(unsigned __int8)must_journal(v10, 0, v8) || *(_DWORD *)(v10 + 96) == -1 )
  {
    sub_8BBFF0(v10, v7, v9, 0);
    if ( !v7 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  ptr = nullptr;
  v17 = 0;
  if ( !(unsigned int)sub_8BBFF0(v10, v7, v9, &ptr) && (_QWORD)v17 )
    add_undo_record(*(unsigned int *)(v10 + 96), ptr, v17);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  if ( v7 )
  {
LABEL_13:
    v15 = 0;
    ptr = (void *)sub_4E0AC0(v1);
    for ( *(_QWORD *)&v17 = v11; v6; v6 -= v12 )
    {
      v12 = 4096;
      if ( v6 <= 0x1000 )
        v12 = v6;
      v13 = v18;
      do
      {
        ++v13;
        v14 = sub_4DE480((unsigned int **)&ptr);
        *(_QWORD *)&v17 = v17 + 4;
        *(v13 - 1) = v14;
      }
      while ( &v18[v12] != v13 );
      sub_8B96E0(*(_QWORD *)(v3 + 2408), v15, v18, 2 * v12);
      v15 += 2 * v12;
    }
  }
  return v19 - __readfsqword(0x28u);
}
