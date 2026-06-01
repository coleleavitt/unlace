__int64 __fastcall sub_21FF7E0(__int64 *a1)
{
  char v1; // dl
  unsigned int v2; // ebx
  int v4; // eax
  __int64 *v5; // rdx
  unsigned int v6; // ebx
  int v7; // r12d
  _QWORD v8[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+10h] [rbp-28h]
  char v10; // [rsp+14h] [rbp-24h]

  v1 = *((_BYTE *)a1 + 20) & 7;
  if ( v1 == 1 )
    return 0x80000000;
  if ( v1 == 3 )
    return (unsigned int)-2147483647;
  v2 = 0x7FFFFFFF;
  if ( !v1 )
    return v2;
  v2 = *((_DWORD *)a1 + 4);
  if ( v2 != *(_DWORD *)(*a1 + 4) )
    return v2;
  v4 = *(_DWORD *)(*a1 + 8);
  v5 = a1 + 1;
  if ( (unsigned int)(v4 + 64) > 0x7F )
    v5 = (__int64 *)a1[1];
  if ( (unsigned int)sub_22097E0(v5, (unsigned int)(v4 - 1)) )
    return *((unsigned int *)a1 + 4);
  sub_21F9140(v8, *a1);
  sub_21F9190((__int64)v8, (__int64)a1);
  v6 = v9;
  v7 = *(_DWORD *)(*a1 + 8) - 1;
  v9 += v7;
  if ( (v10 & 7) != 3 && (v10 & 6) != 0 )
  {
    sub_21FAC20((__int64)v8, 1, 0);
    v6 = v9 - v7;
  }
  sub_21F9170(v8);
  return v6;
}
