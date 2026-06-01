/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400551D0
// Address: 0x00000001400551D0

//----- (00000001400551D0) ----------------------------------------------------
char __fastcall sub_1400551D0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v7; // eax
  signed int v9; // edx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = 32 * v1;
    v5 = sub_14005A7C0();
    if ( v5 >= *(_QWORD *)(v4 + v3 - 16) )
    {
      v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
      if ( v6 )
      {
        v7 = v6(*(unsigned __int8 *)(v3 + 24), *(_QWORD *)(v3 + 8), *(_QWORD *)v3, *(_QWORD *)(a1 + 16));
        if ( v7 == 2 )
        {
          *(_DWORD *)(a1 + 96) = -15059582;
          *(_QWORD *)(a1 + 88) = "cancelled";
          return 1;
        }
        if ( v7 == 1 )
        {
          *(_DWORD *)(a1 + 96) = -21015;
          *(_QWORD *)(a1 + 88) = "skip_iter";
        }
        else
        {
          v9 = *(_DWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 8) && v9 > -1 )
            *(_QWORD *)(v4 + v3 - 16) = sub_140054640(v5, v9);
          else
            *(_QWORD *)(v4 + v3 - 16) = 0;
        }
      }
    }
  }
  return 0;
}
