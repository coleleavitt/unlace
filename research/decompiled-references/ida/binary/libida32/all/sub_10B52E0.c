bool __fastcall sub_10B52E0(__int64 a1)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 7) <= 2 )
    return 1;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = &v3[*(unsigned int *)(a1 + 24)];
  return v4 != sub_10B5130(v3, (__int64)v4);
}

