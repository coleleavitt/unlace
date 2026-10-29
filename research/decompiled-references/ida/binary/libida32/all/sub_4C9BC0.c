unsigned __int64 __fastcall sub_4C9BC0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rbp
  _DWORD *v13; // r14
  int v14; // eax
  unsigned int v15; // [rsp+4h] [rbp-4074h]
  void *ptr; // [rsp+10h] [rbp-4068h] BYREF
  __int128 v17; // [rsp+18h] [rbp-4060h]
  _DWORD v18[4098]; // [rsp+30h] [rbp-4048h] BYREF
  unsigned __int64 v19; // [rsp+4038h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1536);
  if ( !*(_BYTE *)(v1 + 704) )
    return v19 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1480);
  *(_BYTE *)(v1 + 704) = 0;
  v4 = sub_4C9510(v1);
  v5 = *(_QWORD *)(v3 + 2320);
  v6 = v4;
  v7 = sub_8954D0(v5, 0);
  v9 = 0;
  if ( v7 )
  {
    v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL) - **(_DWORD **)(v5 + 48));
    v7 = (unsigned int)v9;
  }
  v10 = *(_QWORD *)(v3 + 2320);
  if ( v7 < v6 )
  {
    if ( !(unsigned __int8)must_journal(v5, v9, v8) || *(_DWORD *)(v10 + 88) == -1 )
    {
      sub_898180(v10, (unsigned int)v9, (unsigned int)v6, 0);
    }
    else
    {
      v17 = 0;
      ptr = nullptr;
      if ( !(unsigned int)sub_898180(v10, (unsigned int)v9, (unsigned int)v6, &ptr) && (_QWORD)v17 )
        add_undo_record(*(unsigned int *)(v10 + 88), ptr, v17);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
    }
    goto LABEL_13;
  }
  if ( !(unsigned __int8)must_journal(v5, v9, v8) || *(_DWORD *)(v10 + 88) == -1 )
  {
    sub_8982E0(v10, (unsigned int)v6, (unsigned int)v9, 0);
    if ( !v6 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  v17 = 0;
  ptr = nullptr;
  if ( !(unsigned int)sub_8982E0(v10, (unsigned int)v6, (unsigned int)v9, &ptr) && (_QWORD)v17 )
    add_undo_record(*(unsigned int *)(v10 + 88), ptr, v17);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  if ( v6 )
  {
LABEL_13:
    v15 = 0;
    ptr = (void *)sub_4C95E0(v1);
    *(_QWORD *)&v17 = v11;
    do
    {
      v12 = 4096;
      if ( v6 <= 0x1000 )
        v12 = v6;
      v13 = v18;
      do
      {
        ++v13;
        v14 = sub_4C7340((unsigned int **)&ptr);
        *(_QWORD *)&v17 = v17 + 4;
        *(v13 - 1) = v14;
      }
      while ( &v18[v12] != v13 );
      sub_895CA0(*(_QWORD *)(v3 + 2320), v15, v18, v12);
      v15 += v12;
      v6 -= v12;
    }
    while ( v6 );
  }
  return v19 - __readfsqword(0x28u);
}

