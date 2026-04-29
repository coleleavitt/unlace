__int64 __fastcall sub_258210(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v1 = *a1;
  v6 = __readfsqword(0x28u);
  v3 = sub_2B61B0(a1[27], v1, 1);
  if ( (*((_DWORD *)a1 + 27) & 0xFFFFFFF4) == 0 )
    return netnode_delvalue(v3);
  v5 = (int)((*((_DWORD *)a1 + 27) & 0xFFFFFFF4) - 1);
  netnode_set(v3, &v5, 8);
  return v6 - __readfsqword(0x28u);
}
