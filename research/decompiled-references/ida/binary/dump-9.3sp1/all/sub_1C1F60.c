__int64 __fastcall sub_1C1F60(__int64 a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int64 v6; // rbp
  int v7; // ebx
  unsigned __int64 *range; // rax
  __int64 *v9; // rdi
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3 + a4;
  v11[3] = __readfsqword(0x28u);
  v7 = a4;
  range = (unsigned __int64 *)rangeset_t_find_range();
  if ( range )
  {
    if ( v6 < *range )
    {
      if ( !under_debugger )
        sub_383060(51801);
      BUG();
    }
    v7 = range[1] - a3;
  }
  v9 = *(__int64 **)(a1 + 8);
  if ( *a2 == 3 )
  {
    sub_63E80(v9, a2[2], v7);
  }
  else
  {
    v11[0] = *(_QWORD *)(a1 + 56) + *((_QWORD *)a2 + 1);
    v11[1] = v7;
    sub_316BB0(v9 + 2, v11);
  }
  return 0;
}
