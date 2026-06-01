__int64 __fastcall sub_4D8A50(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned __int8 *v10; // rdx
  int v11; // r8d
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // r14
  int v15; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a1[3] + 16 * a3;
  v16[1] = __readfsqword(0x28u);
  v6 = *(_DWORD *)(v4 + 8);
  if ( v6 == a4 )
    return 1;
  result = 0;
  if ( v6 )
    return result;
  v8 = *a1 + 24 * a3;
  v9 = *(_BYTE *)(v8 + 9) & 1;
  if ( (*(_BYTE *)(v8 + 9) & 1) != 0 )
  {
    if ( (unsigned int)(a4 - 1) <= 4 )
      *(_QWORD *)v4 = 0;
    return 1;
  }
  v12 = sub_4D89F0(a2, *(_DWORD *)v8, 0);
  if ( a4 == 3 )
  {
    v16[0] = 0;
    result = parse_pretty_size(v16, v10);
    if ( (_BYTE)result )
    {
      if ( v16[0] < 0LL )
        result = 0;
      else
        *(_QWORD *)v4 = v16[0];
    }
  }
  else
  {
    result = 1;
    if ( a4 == 4 )
    {
      result = 1;
      if ( (v11 & 0x70000) == 0x20000 )
      {
        v16[0] = 0;
        v13 = *v10 - 48;
        if ( *v10 == 48 )
          v13 = v10[1] - 120;
        v14 = 2LL * (v13 == 0);
        if ( (unsigned int)qsscanf(&v10[v14], "%llx%n", v16, &v15) == 1 && v15 == v12 - v14 )
        {
          v9 = 1;
          *(_QWORD *)v4 = v16[0];
        }
        result = v9;
      }
    }
  }
  *(_DWORD *)(v4 + 8) = a4;
  return result;
}
