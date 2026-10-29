unsigned __int64 __fastcall sub_781080(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( v1 && (~(_BYTE)v1 & 6) == 0 )
    return *(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFF8LL;
  return v2;
}

