__int64 *__fastcall sub_102CC40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = operator new(0x280u);
  sub_1051A00(v4, a2, a3);
  *(_DWORD *)(v4 + 156) = 6;
  *(_QWORD *)v4 = &off_2BE87B0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 32) - 37) <= 1 )
    *(_BYTE *)(v4 + 278) = 1;
  *a1 = v4;
  return a1;
}

