char __fastcall sub_3255D0(__int64 a1)
{
  int v1; // eax
  char result; // al
  unsigned int v3; // edx
  __int64 v4; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v5[16]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v6; // [rsp+20h] [rbp-48h]
  unsigned __int64 v7; // [rsp+58h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 924);
  if ( v1 != -1 )
    return v1 != 0;
  v3 = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 924) = 0;
  if ( v3 == 18 )
  {
    v4 = -1;
    netnode_check(&v4, "$ elfnode", 0, 1);
    if ( netnode_valobj(v4, v5, 64) != 64 || v6 != 1 )
      return *(_DWORD *)(a1 + 924) != 0;
    goto LABEL_9;
  }
  if ( v3 <= 0x12 )
  {
    if ( ((v3 - 10) & 0xFFFFFFFD) != 0 )
      return 0;
    goto LABEL_9;
  }
  result = 0;
  if ( v3 == 25 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 924) = 1;
    return 1;
  }
  return result;
}
