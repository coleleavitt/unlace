/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A47C0
// Address: 0x00000000000A47C0

//----- (00000000000A47C0) ----------------------------------------------------
__int64 __fastcall sub_A47C0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbx
  const char *v6; // rsi
  int v7; // eax
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // eax
  int v12; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h]
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v5 = sub_A4110();
  if ( *(_QWORD *)(a1 + 48) )
    v6 = *(const char **)(a1 + 40);
  else
    v6 = s1;
  v7 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, double, double))(*(_QWORD *)v5 + 488LL))(
         v5,
         v6,
         0,
         a3,
         *(double *)a4.m128_u64);
  if ( v7 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30055);
    BUG();
  }
  v8 = v7;
  v9 = idcv_int64(a1, a3, a4);
  if ( !v9 )
  {
    v12 = -2;
    v14 = 0;
    ptr = *(void **)(a1 + 8);
    v10 = sub_A4120();
    *(_QWORD *)(a2 + 8) = (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v5 + 232LL))(
                            v5,
                            v10,
                            v8,
                            &v12,
                            0);
    if ( v12 >= -1 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v14 = 0;
        qfree(ptr);
        ptr = nullptr;
        *((_QWORD *)&v14 + 1) = 0;
      }
      v12 = -2;
    }
  }
  return v9;
}
// 158B40: using guessed type __int64 under_debugger;
