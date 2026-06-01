__int64 __fastcall sub_3D1FA0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // r14d
  __int64 v12; // r15
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v15 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 1016) = -1;
  *(_QWORD *)(a1 + 1204) = 0xFFFFFFFFLL;
  if ( (unsigned __int8)sub_3E9640(a1) )
  {
    a2 = a1 + 896;
    sub_3CCF40(a1, (_QWORD *)(a1 + 896), v5, a3, a4);
  }
  if ( v5 == -1
    || (v5 != *(_DWORD *)(a1 + 1196)
      ? (*(_DWORD *)(a1 + 1196) = v5,
         a1 += 1112,
         a2 = v5,
         v9 = rangeset_t_find_range(v6 + 1112, v5) != 0,
         *(_BYTE *)(v6 + 1200) = v9)
      : (v9 = *(_BYTE *)(a1 + 1200)),
        !v9) )
  {
    v12 = *(_QWORD *)(v6 + 1008);
    if ( (unsigned __int8)must_journal(a1, a2, v8) && *(_DWORD *)(v12 + 88) != -1 )
    {
      v14 = 0;
      ptr = nullptr;
      v10 = sub_8983E0(v12, v5, a3, a4, &ptr);
      if ( (_QWORD)v14 )
        add_undo_record(*(unsigned int *)(v12 + 88), ptr, v14);
      if ( ptr )
      {
        *(_QWORD *)&v14 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v10 = sub_8983E0(v12, v5, a3, a4, 0);
    }
  }
  else
  {
    v10 = sub_3CD180(v6, v5, a3, a4);
  }
  sub_825740(v6 + 1032, v5, a3);
  sub_3D1DA0(v6, v5, a3, a4);
  return v10;
}

