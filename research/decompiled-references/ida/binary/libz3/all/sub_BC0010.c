__int64 __fastcall sub_BC0010(__int64 a1, char a2, char a3, double a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v8; // rcx

  v4 = *(_QWORD *)(a1 + 1128);
  if ( !v4 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v5 >= *(_DWORD *)(v4 - 4) )
      break;
    v8 = v5++;
    v6 |= sub_BBF690(a1, *(_QWORD *)(v4 + 8 * v8), a2, a3, a4);
    v4 = *(_QWORD *)(a1 + 1128);
  }
  while ( v4 );
  return v6;
}

