__int64 __fastcall sub_14C5310(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rsi
  __int64 result; // rax

  v1 = a1[1];
  v2 = **a1;
  if ( v2 )
  {
    result = sub_173F990(
               *(_QWORD *)(v1[12] + 656),
               *(_QWORD *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
               *((_DWORD *)a1[2] + 41),
               *a1[3],
               *((_DWORD *)a1[3] + 2),
               *((_DWORD *)a1[4] + 12),
               0);
    *((_BYTE *)a1[1] + 368) = 1;
  }
  else
  {
    *((_BYTE *)v1 + 368) = 1;
    return 0;
  }
  return result;
}
