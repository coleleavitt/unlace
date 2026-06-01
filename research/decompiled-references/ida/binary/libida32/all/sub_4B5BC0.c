__int64 __fastcall sub_4B5BC0(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // eax
  int v4; // edx
  __int64 result; // rax
  int v6; // eax
  unsigned __int8 *v7; // rbx
  __int64 v8; // r8
  _BYTE *v9; // rdx
  char v10; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  int v12; // [rsp+18h] [rbp-30h]
  int v13; // [rsp+1Ch] [rbp-2Ch]
  char v14; // [rsp+20h] [rbp-28h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v3 = sub_375980(0x23u, a2, a3);
  if ( v3 < 0 )
    return 0;
  v4 = v3;
  result = 1;
  if ( v4 == 1 )
    return result;
  if ( !*(_QWORD *)(a1[2] + 96LL) )
    return 0;
  v6 = *(_DWORD *)(a2 + 8);
  v11 = 0;
  v13 = 0;
  v12 = v6;
  v14 = getinf_flag(3, 64);
  result = sub_3BA550(*(_QWORD **)(*a1 + 1480LL), &v10, (__int64)&v11);
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
      result = sub_658B20(a1, *(unsigned int *)(a2 + 8), v9, 0, v8, 1);
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

