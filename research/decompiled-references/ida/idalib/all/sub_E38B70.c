unsigned __int64 __fastcall sub_E38B70(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // r14
  int v5; // ecx
  unsigned __int64 v6; // r13

  v3 = a1 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  if ( (unsigned int)(v5 - 34) <= 5 )
  {
    v6 = sub_B77AF0(a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6 )
    {
      *a3 = sub_B77B50(v3);
      return v6 | a1 & 7;
    }
    v5 = *(_BYTE *)(v3 + 28) & 0x7F;
  }
  if ( (unsigned int)(v5 - 60) > 1 )
  {
    if ( (unsigned int)(v5 - 41) > 1 )
    {
      return 0;
    }
    else
    {
      *a3 = *(_QWORD *)(v3 + 128);
      return a1 & 7 | sub_BBFE00(v3);
    }
  }
  else
  {
    *a3 = *(_QWORD *)(v3 + 168);
    return a1 & 7 | sub_BBF290(v3);
  }
}
