__int64 __fastcall sub_104820(_QWORD *a1)
{
  __int64 undo_info; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  undo_info = get_undo_info();
  v2 = a1[24];
  a1[27] = 0;
  a1[26] = undo_info;
  if ( v2 )
  {
    v3 = a1[23];
    v4 = 0;
    v5 = v3 + 32 * v2;
    do
    {
      v4 += *(_QWORD *)(v3 + 24);
      v3 += 32;
      a1[27] = v4;
    }
    while ( v3 != v5 );
  }
  return 1;
}

