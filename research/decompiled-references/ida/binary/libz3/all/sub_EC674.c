__int64 __fastcall sub_EC674(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  sub_182A4B0(a1, *(_QWORD *)a2);
  while ( 1 )
  {
    v4 = *(_QWORD **)(a2 + 8);
    if ( v2 >= *(_DWORD *)(a2 + 16) )
      break;
    v5 = v2++;
    sub_182A4B0(a1, v4[v5]);
  }
  *(_DWORD *)(a2 + 16) = 0;
  if ( v4 != (_QWORD *)(a2 + 24) && v4 )
    sub_186B220(v4);
  return sub_17E9C40(a1 + 560, 88, a2);
}

