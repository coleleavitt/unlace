__int64 __fastcall sub_4EF930(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = sub_4EF830((int ***)a1, a2);
  result = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v2 != result && a2 >= **(_DWORD **)v2 && a2 < *(_DWORD *)(*(_QWORD *)v2 + 4LL) )
    return v2;
  return result;
}

