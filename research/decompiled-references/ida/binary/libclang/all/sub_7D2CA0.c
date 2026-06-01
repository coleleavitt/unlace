unsigned __int64 __fastcall sub_7D2CA0(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = a1[274];
  a1[284] += 16LL;
  result = (v1 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] < result + 16 || !v1 )
    return sub_7CF9B0((__int64)(a1 + 274), 16, 3);
  a1[274] = result + 16;
  return result;
}

