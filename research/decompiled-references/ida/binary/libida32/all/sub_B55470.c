__int64 __fastcall sub_B55470(__int64 a1, __int64 a2, int a3, int a4, const void *a5, size_t a6)
{
  size_t v8; // rcx
  __int64 v11; // rbp
  __int64 v12; // rbx

  v8 = a6 + 1;
  v11 = a2;
  if ( a2 )
  {
    v11 = a2 + 40;
    v12 = sub_B6C590(40, a1, a2 + 40, v8);
  }
  else
  {
    v12 = sub_B6C590(40, a1, 0, v8);
  }
  sub_B4E870(v12, 0xBu, v11, a3);
  *(_DWORD *)(v12 + 36) = a4;
  *(_QWORD *)v12 = &off_2B20BB8;
  if ( a6 )
    memmove((void *)(v12 + 40), a5, a6);
  *(_BYTE *)(v12 + a6 + 40) = 0;
  return v12;
}

