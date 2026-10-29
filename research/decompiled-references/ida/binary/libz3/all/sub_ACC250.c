void __fastcall sub_ACC250(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  bool v4; // zf

  v1 = a1[3];
  *a1 = qword_1C715E0;
  if ( v1 && (v3 = a1[4], v4 = *(_DWORD *)(v1 + 8) == 1, --*(_DWORD *)(v1 + 8), v4) )
  {
    sub_15D7BC0(v3, v1);
    operator delete(a1, 0x28u);
  }
  else
  {
    operator delete(a1, 0x28u);
  }
}

