__int64 __fastcall sub_140BCE0(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
  v3 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 1) = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v3;
  v5 = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 2) = v4;
  result = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v5;
  *((_QWORD *)a2 + 3) = result;
  return result;
}
