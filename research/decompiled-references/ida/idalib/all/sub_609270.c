__int64 __fastcall sub_609270(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // edx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( a2 != 256 && a2 != 176 )
  {
    result = 144;
    if ( a2 == 144 )
      return result;
    goto LABEL_4;
  }
  if ( (getinf(57) & 0xF) != 6 )
  {
LABEL_4:
    if ( (unsigned __int8)getinf_flag(3, 4) || (getinf(57) & 0xF) == 6 && *(_DWORD *)(a1[2] + 4LL) || !sub_609220(a1) )
    {
      if ( unk_2C81928 )
        sub_368890();
      return 112;
    }
    else
    {
      if ( unk_2C81928 )
        sub_368890();
      return 48;
    }
  }
  if ( !(unsigned __int8)getinf_flag(3, 4) )
    return 256;
  netnode_check(v8, "$ golang", 0, 0);
  v3 = v8[0];
  v4 = netnode_altval(v8[0], 0, 65);
  if ( v4 <= 0x74 )
    return 256;
  v5 = *(_DWORD *)(get_ph(v3, nullptr) + 4);
  result = 176;
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 13);
    if ( (unsigned int)v6 > 0x3B )
      return 256;
    v7 = 0x800000000000005LL;
    if ( !_bittest64(&v7, v6) || v4 == 117 )
      return 256;
  }
  return result;
}
