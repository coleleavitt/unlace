__int64 __fastcall sub_1A980(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rax
  _QWORD *v4; // rbp
  char v5; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v6 = __readfsqword(0x28u);
  v5 = 1;
  v2 = (_QWORD *)sub_4A4B0(a1 + 16, v1, &v5, 8);
  if ( !v2 )
    return 0;
  if ( v5 )
  {
    v4 = v2;
    put_dword(*v2, 0);
    put_dword(*v4 + 4LL, 0);
    *(_QWORD *)(a1 + 16) = *v4 + 4LL;
    set_name(*v4 + 4LL, "_GLOBAL_OFFSET_TABLE_", 6144);
  }
  return sub_4A750(a1 + 16, *(_QWORD *)(a1 + 8), 0);
}

