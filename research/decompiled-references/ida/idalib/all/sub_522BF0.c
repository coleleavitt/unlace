unsigned __int64 __fastcall sub_522BF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 current_extlang; // rax
  __int64 v6; // rdx
  __int64 extlang; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // al
  bool v11; // zf
  char v13[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-30h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 24);
  v14 = __readfsqword(0x28u);
  if ( v4 )
    --*(_DWORD *)(v4 + 12);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = a3;
  if ( a3 == -1 )
    goto LABEL_4;
  sub_7BEA80(a1 + 56, a2, a1, 0, 83);
  sub_7BE9F0(a1 + 56, a2, 1, v13, 1024, 83);
  extlang = find_extlang(v13);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
    --*(_DWORD *)(v8 + 12);
  *(_QWORD *)(a1 + 24) = extlang;
  a1 += 56;
  sub_7BEED0(v3 + 56, a2, v3 + 32, 1, 0, 1112);
  v10 = is_cvt64(v3 + 56, a2, v9);
  v11 = *(_QWORD *)(v3 + 24) == 0;
  *(_BYTE *)(v3 + 64) = v10;
  if ( v11 )
  {
LABEL_4:
    current_extlang = get_current_extlang(a1);
    v6 = *(_QWORD *)(v3 + 24);
    if ( v6 )
      --*(_DWORD *)(v6 + 12);
    *(_QWORD *)(v3 + 24) = current_extlang;
  }
  return v14 - __readfsqword(0x28u);
}
