__int64 __fastcall sub_BF9EA0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]

  v1 = *(_QWORD *)(a1[3] + 40);
  v2 = a1[4];
  v8 = *((_DWORD *)a1 + 10);
  v7 = v1;
  v9 = v2;
  result = sub_B85A10((__int64)&v7);
  if ( (_DWORD)result )
  {
    v4 = *a1;
    if ( (*a1 & 0x400000) == 0 )
      return result;
  }
  else
  {
    v4 = *a1;
    result = v8;
    if ( (*a1 & 0x400000) == 0 )
      goto LABEL_9;
  }
  v5 = v4 >> 16;
  v6 = &a1[2 * ((v5 & 0x10) != 0) + ((v5 & 0x20) != 0)];
  if ( *((_DWORD *)v6 + 12) )
  {
    result = 0;
    if ( (v5 & 0x40) != 0 )
      return *((unsigned int *)v6 + 13);
    return result;
  }
LABEL_9:
  if ( !(_DWORD)result )
    return sub_EEC140(a1[2]);
  return result;
}
