__int64 __fastcall sub_7E31C0(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r15
  bool v13; // cf
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+8h] [rbp-50h]
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( (a2 & (15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)))) != 5LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)) )
    return 1;
  v18[0] = *a4;
  v6 = v18[0];
  v7 = unpack_dq(v18);
  v8 = v18[0];
  v9 = v7;
  *a4 = v18[0];
  if ( v6 < v8 )
  {
    v16 = v8;
    v10 = unpack_dq(v18);
    v11 = v18[0];
    v12 = v10;
    v13 = v16 < v18[0];
    *a4 = v18[0];
    v17 = v11;
    if ( v13 )
    {
      v14 = unpack_dq(v18);
      v15 = v18[0];
      *a4 = v18[0];
      if ( v17 < v15 && sub_7E30F0((_DWORD *)(a1 + 24), a4) )
      {
        *(_QWORD *)a1 = v9 - 1;
        *(_QWORD *)(a1 + 8) = v12 - 1;
        *(_QWORD *)(a1 + 16) = v14 - 1;
        return 1;
      }
    }
  }
  return 0;
}
