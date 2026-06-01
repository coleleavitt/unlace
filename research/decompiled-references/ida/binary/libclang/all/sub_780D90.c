unsigned __int64 __fastcall sub_780D90(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax

  v6 = a2[274];
  a2[284] += 16LL;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v7 + 16 && v6 )
    a2[274] = v7 + 16;
  else
    v7 = sub_779030((__int64)(a2 + 274), 16, 3);
  *(_DWORD *)(v7 + 8) = 0;
  *(_QWORD *)v7 = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  result = v7 & 0xFFFFFFFFFFFFFFF9LL | 2;
  *(_QWORD *)(a1 + 152) = result;
  return result;
}

