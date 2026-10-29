__int64 __fastcall sub_9A0380(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // ebp

  v2 = *a1;
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(v2 + 592) + 4LL * a2 + 3) >> 4) & 3) == 2 )
    v3 = sub_999840(v2, a2);
  else
    v3 = *(_QWORD *)(v2 + 600) + 32LL * a2;
  v4 = sub_182DB30(v3);
  return v4 + 3 * (unsigned int)sub_182DB30(v3 + 16);
}

