__int64 __fastcall sub_4CC920(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // eax
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // rax
  unsigned __int8 *v7; // rbx
  __int64 v8; // r8
  _BYTE *v9; // rdx
  char v10; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-38h] BYREF
  int v12; // [rsp+20h] [rbp-28h]
  char v13; // [rsp+24h] [rbp-24h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v3 = sub_3792E0(0x23u, a2, a3);
  if ( v3 < 0 )
    return 0;
  v4 = v3;
  result = 1;
  if ( v4 == 1 )
    return result;
  if ( !*(_QWORD *)(a1[2] + 96LL) )
    return 0;
  v6 = *(_QWORD *)(a2 + 16);
  v11[0] = 0;
  v12 = 0;
  v11[1] = v6;
  v13 = getinf_flag(3, 64);
  result = sub_3BF3F0(*(__int64 **)(*a1 + 1672LL), &v10, (__int64)v11);
  if ( !(_BYTE)result )
    return result;
  v7 = *(unsigned __int8 **)(a1[2] + 96LL);
  v8 = *v7;
  if ( !(_BYTE)v8 )
    return 0;
  while ( 1 )
  {
    v9 = *((_BYTE **)v7 + 1);
    if ( *v9 == v10 )
    {
      result = sub_676A90(a1, *(_QWORD *)(a2 + 16), v9, 0, v8, 1);
      if ( (_BYTE)result )
        break;
    }
    v8 = v7[16];
    v7 += 16;
    if ( !(_BYTE)v8 )
      return 0;
  }
  return result;
}
