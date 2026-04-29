__int64 __fastcall sub_19BC0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r12
  __int16 flags; // ax
  __int64 not_tail; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  int v19; // [rsp+10h] [rbp-38h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 33380);
  if ( v3 == -1 )
    return 0;
  if ( !v3 )
  {
    *(_DWORD *)(a1 + 33380) = 1;
    v7 = *(_QWORD *)(a1 + 33201);
    *(_QWORD *)(a1 + 66160) = v7;
    v8 = netnode_altval(v7, -1, 65);
    v18 = v8;
    if ( v8 <= 1 )
      goto LABEL_19;
    if ( *(unsigned int *)(a1 + 33061) < v8 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 66168) = v8;
    v9 = *(_QWORD *)(a1 + 33360);
    v18 = v8 + 1;
    if ( !netnode_getblob(*(_QWORD *)(a1 + 66160), v9, &v18, 0, 106) || *(_DWORD *)(a1 + 66168) != v18 )
      goto LABEL_19;
  }
  v10 = *(_QWORD *)(a3 + 20);
  if ( v10 == -1 )
    v10 = *(_QWORD *)(a2 + 16) - 1LL;
  v11 = netnode_supnext(*(_QWORD *)(a1 + 66160), v10, 83);
  v12 = v11;
  if ( v11 == -1 )
    return 0;
  flags = get_flags_ex(v11, 4);
  not_tail = v12;
  if ( (flags & 0x600) == 0x200 )
    not_tail = prev_not_tail(v12, 4, v12);
  if ( *(_QWORD *)(a2 + 16) != not_tail )
    return 0;
  if ( netnode_supval(*(_QWORD *)(a1 + 66160), v12, &v18, 12, 83) != 12
    || (v16 = (unsigned int)v18, (unsigned int)v18 <= 1)
    || (v17 = HIDWORD(v18), (unsigned int)v18 >= HIDWORD(v18))
    || *(_DWORD *)(a1 + 66168) < HIDWORD(v18) )
  {
LABEL_19:
    sub_E6A0();
  }
  *(_QWORD *)(a3 + 20) = v12;
  *(_QWORD *)a3 = *(_QWORD *)(a1 + 33360) + v16;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 33360) + v17;
  *(_DWORD *)(a3 + 16) = v19;
  return 1;
}
