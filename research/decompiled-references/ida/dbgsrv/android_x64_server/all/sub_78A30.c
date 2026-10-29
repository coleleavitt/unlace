/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78A30
// Address: 0x0000000000078A30

//----- (0000000000078A30) ----------------------------------------------------
unsigned __int64 __fastcall sub_78A30(__int64 a1, int a2, double a3, __m128 a4)
{
  unsigned __int64 v5; // rsi
  bool v6; // cf
  unsigned __int64 v7; // rsi
  char v9[8]; // [rsp+8h] [rbp-30h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v5 < a2;
  v7 = v5 - a2;
  if ( v6 )
  {
    if ( !(_BYTE)under_debugger )
      interr(285);
    BUG();
  }
  if ( a2 )
  {
    v9[0] = 2;
    *(_OWORD *)ptr = 0;
    v11 = 0;
    sub_68BE0(a1 + 24, v7, v9, 0.0, a4);
    if ( v9[0] == 5 )
    {
      sub_72DD0((char **)ptr[0], v9, 0.0, a4);
    }
    else if ( v9[0] == 7 && ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v11 = 0;
    }
  }
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
