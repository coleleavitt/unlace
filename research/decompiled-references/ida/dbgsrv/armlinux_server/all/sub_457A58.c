/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457A58
// Address: 0x0000000000457A58

//----- (0000000000457A58) ----------------------------------------------------
__int64 __fastcall sub_457A58(__int64 a1, __int64 a2)
{
  __int64 v4; // x2
  unsigned int v5; // w3
  __int64 v7; // x0
  __int64 (__fastcall *v8)(__int64, _QWORD); // x4
  int v9; // w0
  __int64 v10; // x0
  unsigned int (__fastcall *v11)(__int64, __int64); // x3
  __int64 v12; // [xsp+20h] [xbp-10h]
  __int64 v13; // [xsp+28h] [xbp-8h]

  v4 = *(_QWORD *)(a1 + 672);
  v5 = *(unsigned __int16 *)(v4 + 24);
  if ( v5 == 5 )
    goto LABEL_15;
  if ( v5 <= 5 )
  {
    if ( v5 == 2 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 152);
      if ( v8 )
        goto LABEL_12;
      v11 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 160);
      if ( !v11 )
      {
        *(_BYTE *)a2 = 1;
        *(_QWORD *)(a2 + 8) = 0;
        goto LABEL_8;
      }
      goto LABEL_18;
    }
    if ( v5 != 3 )
    {
LABEL_11:
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 152);
      if ( v8 )
      {
LABEL_12:
        v9 = v8(a1, *(_QWORD *)(a1 + 208));
        if ( v9 )
        {
          if ( v9 == 34 )
          {
LABEL_14:
            *(_BYTE *)(a1 + 680) = 1;
            *(_BYTE *)a2 = 1;
            *(_QWORD *)(a2 + 8) = 0;
            return v13 ^ _stack_chk_guard;
          }
LABEL_19:
          sub_451CA0(a1);
        }
        *(_BYTE *)a2 = 0;
        *(_QWORD *)(a2 + 8) = v12;
LABEL_8:
        sub_457918(a1);
        return v13 ^ _stack_chk_guard;
      }
      v11 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 160);
      if ( !v11 )
        goto LABEL_19;
LABEL_18:
      *(_BYTE *)(a1 + 684) = 0;
      *(_DWORD *)(a1 + 688) = 0;
      if ( !v11(a1, a1 + 684) )
        goto LABEL_14;
      goto LABEL_19;
    }
LABEL_15:
    v10 = *(_QWORD *)(v4 + 32);
    *(_BYTE *)a2 = *(_BYTE *)(v4 + 40);
    *(_QWORD *)(a2 + 8) = v10;
    goto LABEL_8;
  }
  if ( v5 == 8 )
  {
    v7 = *(_QWORD *)(v4 + 48);
    *(_BYTE *)a2 = *(_BYTE *)(v4 + 40);
    *(_QWORD *)(a2 + 8) = v7;
    goto LABEL_8;
  }
  if ( v5 != 40 )
    goto LABEL_11;
  sub_457950(a1, a2);
  return v13 ^ _stack_chk_guard;
}
// 457AB0: variable 'v13' is possibly undefined
// 457B74: variable 'v12' is possibly undefined
