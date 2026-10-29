__int64 __fastcall sub_921B80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // ebp

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 336LL) + 32LL * a2;
  v3 = sub_182DB30(v2);
  return v3 + 3 * (unsigned int)sub_182DB30(v2 + 16);
}

