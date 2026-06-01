/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB4F0
// Address: 0x00000000000AB4F0

//----- (00000000000AB4F0) ----------------------------------------------------
char __fastcall sub_AB4F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  unsigned __int64 v6; // r14
  int v7; // eax
  __int64 *v9; // rbx
  signed int v10; // esi
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v3 = 32 * v1;
    v4 = qtime64();
    if ( v4 >= *(_QWORD *)(v2 + v3 - 16) )
    {
      v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
      if ( v5 )
      {
        v6 = v4;
        v7 = v5(*(unsigned __int8 *)(v2 + 24), *(_QWORD *)(v2 + 8), *(_QWORD *)v2, *(_QWORD *)(a1 + 16));
        if ( v7 == 2 )
        {
          *(_QWORD *)(a1 + 88) = "cancelled";
          *(_DWORD *)(a1 + 96) = -15059582;
          return 1;
        }
        if ( v7 == 1 )
        {
          *(_QWORD *)(a1 + 88) = "skip_iter";
          *(_DWORD *)(a1 + 96) = -21015;
        }
        else
        {
          v9 = (__int64 *)(v2 + v3 - 16);
          v10 = *(_DWORD *)(a1 + 24);
          v11 = 0;
          if ( v10 >= 0 )
          {
            if ( *(_QWORD *)(a1 + 8) )
              v11 = sub_A9580(v6, v10);
          }
          *v9 = v11;
        }
      }
    }
  }
  return 0;
}
