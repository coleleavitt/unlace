__int64 __fastcall sub_5C5850(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 >= v1[1] )
    return 0;
  *(_QWORD *)(a1 + 16) = v2 + 1;
  return *v1 + 16 * v2;
}

