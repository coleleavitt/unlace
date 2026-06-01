__int64 __fastcall sub_C8A970(__int64 *a1)
{
  __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // [rsp+0h] [rbp-10h] BYREF

  if ( !*(_BYTE *)(*a1 + 584) )
    return 1;
  v2 = a1[2];
  v3 = *((_DWORD *)a1 + 2);
  v4 = *a1;
  v5 = v2 | 4;
  return sub_C7EAD0(v4, v3, &v5);
}

