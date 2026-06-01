unsigned __int64 __fastcall sub_6D4E90(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  unsigned __int64 v5; // rax

  result = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v3 = a1[2275];
  if ( v3 )
  {
    v4 = a1[274];
    a1[284] += 24LL;
    v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[275] >= v5 + 24 && v4 )
      a1[274] = v5 + 24;
    else
      v5 = sub_6A76A0((__int64)(a1 + 274), 24, 3);
    *(_QWORD *)v5 = v3;
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = a2;
    return v5 | 4;
  }
  return result;
}

