void __fastcall sub_186F880(__int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx

  v2 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v2 <= 3u )
  {
    sub_186F530(a1, *(_QWORD *)(a2 + 16), 0);
  }
  else if ( v2 == 4 && (v3 = *(_QWORD *)(a2 + 16), (*(_WORD *)v3 & 0x1FF) == 0x2E) )
  {
    sub_186F530(a1, *(_QWORD *)(v3 + 16), 1u);
  }
  else
  {
    sub_186F790(a1, a2);
  }
}
