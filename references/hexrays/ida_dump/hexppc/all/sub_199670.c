__int64 __fastcall sub_199670(__int64 a1, __int64 a2, unsigned __int64 *a3, int a4)
{
  unsigned int **v4; // rbx
  unsigned int *v5; // rdx
  __int64 result; // rax
  unsigned int v7; // ecx
  int v8; // edx
  bool v9; // zf
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  char v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v10 = 0;
  v12 = a4;
  v13 = 1;
  v14 = 0xFFFFFFFF00000001LL;
  v15 = 1;
  v11 = 0;
  v4 = (unsigned int **)sub_1013B0(a3, (__int64)&v10);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  if ( !v4 )
    return 0;
  v5 = v4[1];
  if ( (_DWORD)v5 == 2 )
  {
    v7 = **v4;
    v8 = *(_DWORD *)(a2 + 64) - 1;
    result = (*v4)[1];
    if ( v8 != v7 )
    {
      v9 = v8 == (_DWORD)result;
      result = 0;
      if ( v9 )
        return v7;
    }
  }
  else
  {
    result = 0;
    if ( (_DWORD)v5 == 1 )
      return **v4;
  }
  return result;
}
