__int64 __fastcall sub_1672250(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r13
  char v11; // dl
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // dl
  char v23; // dl
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __m128i v29[10]; // [rsp+0h] [rbp-A8h] BYREF

  v4 = a3;
  result = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)result - 34 > 5 )
  {
    if ( (_BYTE)result == 18 )
    {
      result = sub_1670EA0(a1, a2, *(_QWORD *)(a2 + 80), a3);
      if ( (_BYTE)v16 )
      {
        *(_QWORD *)(a2 + 80) = result;
        result = sub_1670DE0(result, a2, v16, v17, v18);
        if ( !(_BYTE)result )
        {
          v19 = (unsigned __int8)((*(_QWORD *)(a2 + 56) >> 26) & 0x3F | 0x40) >> 6;
          *(_BYTE *)(a2 + 59) = (4 * ((*(_QWORD *)(a2 + 56) >> 26) & 0x3F | 0x40)) | *(_BYTE *)(a2 + 59) & 3;
          result = *(_BYTE *)(a2 + 60) & 0xFE | (unsigned int)v19;
          *(_BYTE *)(a2 + 60) = result;
        }
      }
    }
    else if ( (unsigned int)(unsigned __int8)result - 26 > 0x1A )
    {
      if ( (_BYTE)result == 75 )
      {
        result = sub_1670EA0(a1, a2, *(_QWORD *)(a2 + 56), a3);
        if ( (_BYTE)v26 )
        {
          *(_QWORD *)(a2 + 56) = result;
          result = sub_1670DE0(result, a2, v26, v27, v28);
          if ( !(_BYTE)result )
            *(_WORD *)(a2 + 72) |= 0x2000u;
        }
      }
    }
    else
    {
      result = sub_1670EA0(a1, a2, *(_QWORD *)(a2 + 48), a3);
      if ( v22 )
      {
        v23 = *(_BYTE *)(a2 + 28);
        *(_QWORD *)(a2 + 48) = result;
        v24 = v23 & 0x7F;
        if ( (_BYTE)v24 == 43 && (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
        {
          result = sub_1670DE0(result, a2, v24, v20, v21);
          if ( !(_BYTE)result )
          {
            LOBYTE(v25) = 64;
            if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
              v25 = (*(_DWORD *)(a2 + 96) >> 13) & 0x3F | 0x40;
            result = *(_DWORD *)(a2 + 96) & 0xFFF01FFF | ((v25 & 0x7F) << 13);
            *(_DWORD *)(a2 + 96) = result;
          }
        }
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25;
    if ( (unsigned int)v8 > 1 )
      v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v8, a3, a4);
    result = sub_1670EA0(a1, a2, *(_QWORD *)(v7 + 24), v4);
    v10 = result;
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v13 = *(unsigned __int8 *)(v12 + 16);
      if ( (unsigned int)(v13 - 25) > 1 )
      {
        v14 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v9);
        LOBYTE(v13) = *(_BYTE *)(v14 + 16);
        v12 = v14;
      }
      v15 = *(_QWORD *)(a1 + 248);
      if ( (_BYTE)v13 == 26 )
      {
        sub_A5E110((__m128 *)v29, v12);
        result = sub_A73610(v15, v10, (__int64 *)(v12 + 48), *(unsigned __int16 *)(v12 + 22), v29, 0);
        *(_QWORD *)(a2 + 48) = result;
      }
      else
      {
        v29[0].m128i_i16[0] = *(_WORD *)(v12 + 20) >> 2;
        result = sub_A71610(v15, v10, (unsigned __int16 *)v29);
        *(_QWORD *)(a2 + 48) = result;
      }
    }
  }
  return result;
}
