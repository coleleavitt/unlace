void __fastcall sub_6E02C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf

  *a1 = (__int64)&off_1C53418;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_2B4F40(a1 + 3);
  v3 = a1[1];
  if ( v3 && (v4 = a1[2], v5 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v5) )
  {
    sub_15D7BC0(v4, v3);
    operator delete(a1, 0x30u);
  }
  else
  {
    operator delete(a1, 0x30u);
  }
}

