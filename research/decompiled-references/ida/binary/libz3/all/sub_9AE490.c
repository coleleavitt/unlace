__int64 __fastcall sub_9AE490(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  int *v3; // rbx
  int v4; // r12d
  int v5; // ebp
  int v6; // r13d
  int v7; // r12d
  int v8; // r13d

  v2 = *a1;
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(v2 + 720) + 4LL * a2 + 3) >> 4) & 3) == 2 )
    v3 = sub_9ACE50(v2, a2);
  else
    v3 = (int *)(*(_QWORD *)(v2 + 728) + 96LL * a2);
  v4 = sub_182DB30(v3);
  v5 = v4 + 3 * sub_182DB30(v3 + 4);
  v6 = sub_182DB30(v3 + 8);
  v7 = v6 + 3 * sub_182DB30(v3 + 12);
  v8 = sub_182DB30(v3 + 16);
  return v7 ^ v5 ^ (v8 + 3 * (unsigned int)sub_182DB30(v3 + 20) + 1);
}

