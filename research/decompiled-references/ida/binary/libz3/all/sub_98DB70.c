bool __fastcall sub_98DB70(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  bool result; // al
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 336);
  result = (!*(_BYTE *)(v1 + 60)
         || (v2 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 10324LL), (unsigned int)v2 <= 9)
         || (double)*(int *)(a1 + 924) / (double)v2 >= *(double *)(v1 + 64))
        && (v4 = *(_QWORD *)(a1 + 672)) != 0
        && *(_DWORD *)(a1 + 680) < *(_DWORD *)(v4 - 4);
  return result;
}

