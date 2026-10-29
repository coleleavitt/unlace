__int64 __fastcall sub_18CA280(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10
  int v6; // eax

  v5 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 2
    || v6 == 5
    || v6 != 4 && (unsigned int)(v6 - 6) > 1
    || *(_BYTE *)(v5 + 596)
    || (unsigned int)(v6 - 6) > 1 )
  {
    return 0;
  }
  else
  {
    return sub_18C9A50(a1, a2, a3, a4, a5);
  }
}
