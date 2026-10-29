__int64 __fastcall sub_7BFE80(_DWORD *a1, __int64 a2, int a3, unsigned __int64 *a4, __int64 a5)
{
  unsigned __int64 v7; // r15
  int v9; // eax
  unsigned __int64 v10; // rdx
  int v11; // r13d
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // r15d
  bool v15; // cf
  int v16; // r14d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( (a2 & (15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)))) != 5LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)) )
    return 1;
  v20[0] = *a4;
  v7 = v20[0];
  v9 = unpack_dq(v20, a5);
  v10 = v20[0];
  v11 = v9;
  *a4 = v20[0];
  if ( v7 < v10 )
  {
    v18 = v10;
    v12 = unpack_dq(v20, a5);
    v13 = v20[0];
    v14 = v12;
    v15 = v18 < v20[0];
    *a4 = v20[0];
    v19 = v13;
    if ( v15 )
    {
      v16 = unpack_dq(v20, a5);
      v17 = v20[0];
      *a4 = v20[0];
      if ( v19 < v17 && sub_7BFDB0(a1 + 3, a4) )
      {
        *a1 = v11 - 1;
        a1[1] = v14 - 1;
        a1[2] = v16 - 1;
        return 1;
      }
    }
  }
  return 0;
}

