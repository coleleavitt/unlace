__int64 __fastcall sub_11AB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
  {
    if ( !under_debugger )
      sub_37EEE0(51130);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 8);
  v5[0] = off_4CA6A8;
  v3 = *(_QWORD *)(v2 + 16);
  v5[2] = a2;
  v5[1] = v3;
  return for_all_arglocs(v5, v2, *(unsigned int *)(a1 + 4), 0);
}
