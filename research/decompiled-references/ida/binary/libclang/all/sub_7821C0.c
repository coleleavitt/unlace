unsigned __int64 __fastcall sub_7821C0(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  unsigned __int64 result; // rax

  v6 = a2[274];
  a2[284] += 16LL;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 16 && v6 )
    a2[274] = result + 16;
  else
    result = sub_779030((__int64)(a2 + 274), 16, 3);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  *(_QWORD *)(a1 + 144) = result;
  return result;
}

