void __fastcall sub_4EA620(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  bool v4; // zf

  v1 = a1[2];
  *a1 = &off_1C4FB98;
  if ( v1 && (v3 = a1[3], v4 = *(_DWORD *)(v1 + 8) == 1, --*(_DWORD *)(v1 + 8), v4) )
  {
    sub_15D7BC0(v3, v1);
    operator delete(a1, 0x40u);
  }
  else
  {
    operator delete(a1, 0x40u);
  }
}

