__int64 __fastcall sub_5D09F0(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // r13d
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = a3;
  v4 = sub_656410(a1, a3);
  if ( v4 == -1 )
    return 0;
  v9 = 0;
  v5 = sub_375980(0x3F0u, v10, &v9, v3);
  if ( v5 )
  {
    if ( v5 != 1 )
      return 0;
    v3 = v10[0];
  }
  else
  {
    if ( (unsigned int)str2reg(v3) == -1 )
      return 0;
    v9 = 0;
  }
  if ( !v3 )
    return 0;
  v6 = HIWORD(v9);
  *a2 = v4;
  if ( (_WORD)v6 )
    v7 = (v6 + 7) >> 3;
  else
    v7 = sub_54C1C0(a1);
  a2[1] = v7;
  return 1;
}

