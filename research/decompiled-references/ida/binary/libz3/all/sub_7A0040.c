__int64 __fastcall sub_7A0040(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2;
  if ( (int)v2 >= 0
    && (v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 144LL) + 608LL)) != 0
    && (int)v2 < *(_DWORD *)(v3 - 4) )
  {
    return *(_QWORD *)(v3 + 8 * v2);
  }
  else
  {
    return 0;
  }
}

