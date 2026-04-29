__int64 __fastcall sub_14D8D0(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  unsigned __int8 *v2; // r12
  int v3; // eax
  unsigned __int8 *v5; // rdx
  unsigned __int8 *v6; // r15
  unsigned __int8 *v7; // r14
  char v8[16]; // [rsp+0h] [rbp-68h] BYREF
  char v9[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v1 = *(unsigned __int8 **)(a1 + 56);
  v2 = *(unsigned __int8 **)(a1 + 40);
  v10 = __readfsqword(0x28u);
  v3 = *(_DWORD *)v2;
  if ( *(_DWORD *)v1 != 33 )
  {
    if ( v3 != 33 )
      return 0;
    v3 = *(_DWORD *)v1;
    v5 = v2;
    v2 = v1;
    v1 = v5;
  }
  if ( (unsigned int)(v3 - 34) > 1 )
    return 0;
  if ( v3 == 34 )
  {
    if ( v1[32] != 4 || **((_DWORD **)v1 + 5) != 13 )
      return 0;
    v7 = v1 + 48;
    if ( sub_1255A0(v2 + 32, (__int64)(v1 + 48), 0)
      && sub_1255A0((unsigned __int8 *)(*((_QWORD *)v1 + 5) + 32LL), (__int64)(v2 + 32), 0)
      && sub_1255A0((unsigned __int8 *)(*((_QWORD *)v1 + 5) + 48LL), (__int64)(v2 + 48), 0) )
    {
      v6 = v1 + 32;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v2 != 35 )
      return 0;
  }
  if ( v1[48] != 4 )
    return 0;
  if ( **((_DWORD **)v1 + 7) != 13 )
    return 0;
  v6 = v1 + 32;
  if ( !sub_1255A0(v2 + 32, (__int64)(v1 + 32), 0) )
    return 0;
  if ( !sub_1255A0((unsigned __int8 *)(*((_QWORD *)v1 + 7) + 32LL), (__int64)(v2 + 32), 0) )
    return 0;
  v7 = v1 + 48;
  if ( !sub_1255A0((unsigned __int8 *)(*((_QWORD *)v1 + 7) + 48LL), (__int64)(v2 + 48), 0) )
    return 0;
LABEL_12:
  *(_DWORD *)a1 = 37;
  *(_DWORD *)(a1 + 4) = *((_DWORD *)v2 + 1);
  sub_123480((__int64)v8, v6);
  sub_123480((__int64)v9, v7);
  sub_11C450((char *)(a1 + 32), v8);
  sub_11C450((char *)(a1 + 48), v9);
  sub_11C7E0((__int64)v9);
  sub_11C7E0((__int64)v8);
  return 1;
}
