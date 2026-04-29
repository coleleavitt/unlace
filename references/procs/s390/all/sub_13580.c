__int64 __fastcall sub_13580(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v4; // rax
  unsigned __int16 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // edi
  int v10; // esi
  __int64 v11; // rsi
  __int128 v12; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-188h]
  __int64 v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  char v16; // [rsp+28h] [rbp-170h] BYREF
  __int16 v17; // [rsp+2Eh] [rbp-16Ah]
  __int16 v18; // [rsp+56h] [rbp-142h]
  __int64 v19; // [rsp+58h] [rbp-140h]
  __int64 v20; // [rsp+60h] [rbp-138h]
  unsigned __int64 v21; // [rsp+168h] [rbp-30h] BYREF

  v21 = __readfsqword(0x28u);
  if ( a2[3] != -1 )
    return 0;
  v4 = (unsigned __int64 *)&v16;
  v12 = -1;
  v13 = -1;
  v14 = 0;
  v15 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v21 != v4 );
  decode_insn(&v12);
  if ( (unsigned __int16)(v14 - 1360) > 1u )
    return 0;
  v6 = (4 * ((_WORD)v14 == 1361) + 4) * (v18 + 1 - v17);
  if ( v13 < a2[1] )
  {
    v7 = 0;
    while ( 1 )
    {
      decode_insn(&v12);
      v8 = *(_QWORD *)(a1 + 16);
      LOWORD(v9) = 0;
      v10 = *(_DWORD *)(v8 + 104);
      if ( (unsigned __int16)v14 >= v10 && (unsigned __int16)v14 < *(int *)(v8 + 108) )
        v9 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * ((unsigned __int16)v14 - v10) + 8);
      if ( (_WORD)v14 == 730 || (_WORD)v14 == 934 )
      {
        if ( v17 != 11 || v18 != 15 )
          goto LABEL_10;
        a2[2] |= 0x10uLL;
      }
      else if ( (v14 & 0xFFF7) == 0x12 )
      {
        if ( v17 != 15 )
          goto LABEL_10;
        v7 -= v19;
      }
      else
      {
        if ( (_WORD)v14 != 669 || v17 != 15 || v18 != 15 )
        {
LABEL_10:
          if ( (v9 & 0x4003) != 0 )
            goto LABEL_25;
          goto LABEL_11;
        }
        v7 -= v20;
      }
LABEL_11:
      if ( v13 >= a2[1] )
      {
LABEL_25:
        v11 = v7;
        return add_frame(a2, v11, v6, 0, 0.0);
      }
    }
  }
  v11 = 0;
  return add_frame(a2, v11, v6, 0, 0.0);
}
