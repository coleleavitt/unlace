/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054430
// Address: 0x0000000140054430

//----- (0000000140054430) ----------------------------------------------------
__int64 __fastcall sub_140054430(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rax

  v4 = a4;
  v5 = 0;
  if ( a4 > -1 )
  {
    v9 = sub_14005A7C0();
    v5 = (unsigned int)v9 + 1000 * (v4 + 1000 * HIDWORD(v9));
  }
  v10 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v5 )
      {
        v12 = sub_14005A7C0();
        v13 = (unsigned int)v12 + 1000000 * HIDWORD(v12);
        if ( v13 < v5 )
          v11 = (v5 - v13) / 0x3E8;
        else
          LODWORD(v11) = 0;
      }
      else
      {
        LODWORD(v11) = -1;
      }
      if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, (unsigned int)v11) <= 0 )
        break;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, a2, v10);
      if ( v14 <= 0 )
        break;
      a2 += v14;
      v10 -= v14;
      if ( !v10 )
        return a3;
    }
    a3 -= v10;
  }
  return a3;
}
