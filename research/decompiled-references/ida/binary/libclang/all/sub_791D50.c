__int64 __fastcall sub_791D50(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi

  v1 = *a1;
  v2 = *a1 & 7;
  if ( (unsigned int)(v2 - 3) > 2 )
  {
    if ( (_DWORD)v2 == 7 && (v5 = v1 & 0xFFFFFFFFFFFFFFF8LL, !*(_DWORD *)v5) && (v6 = *(_QWORD *)(v5 + 16)) != 0 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v7 & 4) != 0 )
        v8 = (_QWORD *)*v8;
      return sub_79B8A0(v8);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v3 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    result = 0;
    if ( (v3 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      return (*(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0;
  }
  return result;
}

