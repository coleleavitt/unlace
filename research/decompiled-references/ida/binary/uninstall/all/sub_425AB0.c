__int64 __fastcall sub_425AB0(int *a1)
{
  int v1; // ebx
  int v2; // r12d
  __int64 v3; // rax

  v1 = 0;
  v2 = *a1;
  while ( v1 < v2 )
  {
    v3 = v1++;
    Tcl_Free(*(_QWORD *)&a1[2 * v3 + 4]);
  }
  return Tcl_Free((__int64)a1);
}

