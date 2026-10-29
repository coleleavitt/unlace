/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065330
// Address: 0x0000000140065330

//----- (0000000140065330) ----------------------------------------------------
__int64 __fastcall sub_140065330(_WORD *a1, __int64 a2)
{
  int v2; // esi
  int v4; // ebp
  int v6; // ebp
  unsigned __int16 v7; // bx
  int v8; // esi
  __int64 v9; // r11
  unsigned int v10; // eax
  __int64 v11; // rbp
  _WORD *v12; // rax
  int v13; // ecx
  __int16 v14; // r9
  int v15; // eax
  int v16; // esi
  __int128 v18; // [rsp+28h] [rbp-60h] BYREF
  int v19; // [rsp+38h] [rbp-50h]
  __int16 v20; // [rsp+3Ch] [rbp-4Ch]

  v2 = *(unsigned __int16 *)(a2 + 2);
  v4 = (unsigned __int16)a1[1];
  v6 = v4 - sub_1400656A0(a1);
  v7 = 0;
  v8 = v2 - sub_1400656A0((_WORD *)a2);
  v19 = 0;
  v20 = 0;
  v18 = 0;
  if ( v8 >= v6 )
  {
    v9 = a2 - (_QWORD)(a1 + 2);
    v10 = v8 - v6 + 1;
    v11 = v10;
    v8 -= v10;
    do
    {
      v12 = a1 + 2;
      v13 = 2;
      while ( *v12 == *(_WORD *)((char *)v12 + v9 + 4) )
      {
        ++v13;
        ++v12;
        if ( v13 >= 11 )
          goto LABEL_8;
      }
      if ( *v12 > *(_WORD *)((char *)v12 + v9 + 4) )
        goto LABEL_9;
LABEL_8:
      sub_140065790(a1, (_WORD *)a2);
LABEL_9:
      sub_140065AC0(&v18);
      v7 = v14 | v20;
      v20 |= v14;
      sub_140065AC0((_WORD *)a2);
      --v11;
    }
    while ( v11 );
  }
  v15 = sub_1400656A0((_WORD *)a2);
  if ( v15 <= 112 )
  {
    v16 = v8 - v15;
    if ( v16 < 0x7FFF )
    {
      if ( v16 >= 0 )
      {
        *(_WORD *)(a2 + 20) = 0;
        if ( v16 > 0 )
        {
          *(_WORD *)(a2 + 2) = v16;
          return v7;
        }
      }
      else if ( v16 > -113 )
      {
        sub_140067430((_WORD *)a2, v16);
      }
    }
  }
  *(_OWORD *)a2 = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_WORD *)(a2 + 20) = 0;
  return v7;
}
// 1400653D3: variable 'v9' is possibly undefined
// 14006541F: variable 'v14' is possibly undefined
