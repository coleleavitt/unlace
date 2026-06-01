__int64 __fastcall sub_9AB3A0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  int *v3; // rbx
  int v4; // ebp
  int v5; // r12d
  int v6; // ebp

  v2 = *a1;
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(v2 + 656) + 4LL * a2 + 3) >> 4) & 3) == 2 )
    v3 = sub_9AA360(v2, a2);
  else
    v3 = (int *)(*(_QWORD *)(v2 + 664) + ((unsigned __int64)a2 << 6));
  v4 = sub_182DB30(v3);
  v5 = v4 + 3 * sub_182DB30(v3 + 4);
  v6 = sub_182DB30(v3 + 8);
  return v5 ^ (v6 + 3 * (unsigned int)sub_182DB30(v3 + 12) + 1);
}

