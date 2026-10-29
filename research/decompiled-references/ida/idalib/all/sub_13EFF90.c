__int64 __fastcall sub_13EFF90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = a1[1];
  v3 = 0xAAAAAAAAAAAAAAABLL * ((a1[2] - v2) >> 3);
  if ( (_DWORD)v3 )
  {
    v4 = (_QWORD *)(v2 + 8);
    v5 = v2 + 24LL * (unsigned int)(v3 - 1) + 32;
    do
    {
      v6 = *(v4 - 1);
      if ( v6 != *v4 )
        *v4 = v6;
      v4 += 3;
    }
    while ( v4 != (_QWORD *)v5 );
  }
  result = *(_QWORD *)(a2 + 2264);
  a1[4] = result;
  *(_QWORD *)(a2 + 2264) = a1;
  return result;
}
