unsigned __int64 __fastcall sub_50ABE0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 current_extlang; // rax
  __int64 v5; // rdx
  __int64 extlang; // rax
  __int64 v7; // rdx
  char v9[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 24);
  v10 = __readfsqword(0x28u);
  if ( v3 )
    --*(_DWORD *)(v3 + 12);
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 56) = a3;
  if ( a3 == -1 )
    goto LABEL_4;
  sub_79B6F0(a1 + 56, a2, a1, 0, 83);
  sub_79B660(a1 + 56, a2, 1, v9, 1024, 83);
  extlang = find_extlang(v9);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    --*(_DWORD *)(v7 + 12);
  *(_QWORD *)(a1 + 24) = extlang;
  sub_79BAE0(a1 + 56, a2, a1 + 32, 1, 0, 1112);
  if ( !*(_QWORD *)(a1 + 24) )
  {
LABEL_4:
    current_extlang = get_current_extlang();
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
      --*(_DWORD *)(v5 + 12);
    *(_QWORD *)(a1 + 24) = current_extlang;
  }
  return v10 - __readfsqword(0x28u);
}

