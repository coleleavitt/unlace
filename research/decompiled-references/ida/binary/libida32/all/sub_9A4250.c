bool __fastcall sub_9A4250(_QWORD **a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(**a1 + 8LL * a2) + 8LL);
  if ( (v2 & 2) != 0 )
    return *a1[1] == 0;
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v3 )
    return *a1[1] == 0;
  if ( *(_BYTE *)v3 == 12 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    return *a1[1] == v4;
  }
  v4 = 0;
  if ( *(_BYTE *)v3 != 4 )
    return *a1[1] == v4;
  return *a1[1] == *(_QWORD *)(v3 + 16);
}

