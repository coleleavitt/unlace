unsigned __int64 __fastcall sub_4221C0(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1640);
  *(_DWORD *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  memset(
    (void *)((v1 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 16) & 0xFFFFFFF8) + 136) >> 3));
  return sub_422110(v1);
}
