/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424C50
// Address: 0x0000000000424C50

//----- (0000000000424C50) ----------------------------------------------------
__int64 __fastcall sub_424C50(__int64 a1)
{
  __int64 v1; // rax
  __off64_t v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned int v12; // r13d
  size_t v13; // rax
  unsigned __int64 v14; // rax

  v1 = sub_47F740(*(_QWORD *)(a1 + 472), 0, 1);
  v2 = *(_QWORD *)(a1 + 480);
  v3 = v1 - v2;
  v4 = sub_47F740(*(_QWORD *)(a1 + 472), v2, 0);
  v5 = *(_QWORD *)(a1 + 480);
  if ( v4 == -1
    || (v6 = *(_QWORD *)(a1 + 488) - v5,
        v7 = sub_47F740(*(_QWORD *)(a1 + 472), 0, 1),
        v5 = *(_QWORD *)(a1 + 480),
        v10 = v7 - v5,
        v10 >= v6) )
  {
    v12 = 0;
  }
  else
  {
    v11 = v6 - v10;
    v12 = 0;
    if ( v11 > 0xF )
    {
      *(_OWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 568) = 0;
      *(_OWORD *)(a1 + 520) = 0;
      *(_OWORD *)(a1 + 536) = 0;
      *(_OWORD *)(a1 + 552) = 0;
      v13 = sub_47F6E0(*(_QWORD *)(a1 + 472), (void *)(a1 + 504), 16, v8, v9);
      v5 = *(_QWORD *)(a1 + 480);
      if ( v13 == 16 && *(_DWORD *)(a1 + 504) == 1179403647 )
      {
        v14 = 52;
        if ( *(_BYTE *)(a1 + 617) )
          v14 = 64;
        LOBYTE(v12) = v11 >= v14;
      }
    }
  }
  sub_47F740(*(_QWORD *)(a1 + 472), v3 + v5, 0);
  return v12;
}
// 424D06: variable 'v8' is possibly undefined
// 424D06: variable 'v9' is possibly undefined
