_BOOL8 __fastcall sub_7925F0(_QWORD *a1)
{
  _BOOL8 result; // rax
  __int64 *v2; // rax
  __int64 v3; // rax

  result = 0;
  if ( (unsigned int)(*a1 & 7) - 3 <= 2 )
  {
    v2 = (__int64 *)a1[2];
    if ( v2 )
      v3 = *v2;
    else
      v3 = *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    return (*(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0;
  }
  return result;
}

