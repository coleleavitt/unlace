__int64 __fastcall sub_21970(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  int v6; // ebp
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r12

  v6 = 65;
  do
  {
    v9 = a2 & 0xFFFFFFFFFFFFFFFELL;
    v10 = v9;
    if ( a4 )
      sub_13520(*(_QWORD *)(a1 + 8), v9, 0, 12, 0);
    v8 = sub_218F0(a1, v9 + 8);
    a2 = v8;
    if ( (v8 & 2) == 0 )
    {
      if ( --v6 )
        continue;
    }
    return -1;
  }
  while ( (v8 & 1) != 0 );
  if ( a3 )
  {
    *a3 = sub_218F0(a1, v10);
    a3[1] = sub_218F0(a1, v10 + 4);
  }
  return a2;
}
