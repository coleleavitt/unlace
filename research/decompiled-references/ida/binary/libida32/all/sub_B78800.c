__int64 __fastcall sub_B78800(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r15
  char v13; // r14
  char v14; // r12
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 *v17; // rdi
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  _DWORD v22[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v7 = a2[28] & 0x7F;
  if ( v7 == 38 )
  {
    if ( (unsigned int)sub_B533A0((__int64)a2, (__int64)a2) )
    {
      v12 = 0;
      v13 = 4;
      v14 = 2;
    }
    else
    {
      v12 = 1;
      v13 = 5;
      v14 = 3;
      if ( (a2[84] & 3) != 0 )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v8, v9, v10, v11);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 8u;
      }
    }
    v22[0] = 0;
    if ( !sub_B752A0((__int64)a2, v22, v8, v9) )
    {
      v22[0] = 0;
      v14 = v13;
      if ( !sub_B75320((__int64)a2, v22, a3, a4) )
      {
        v14 = v12;
        if ( (a2[84] & 3) != 0 )
        {
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 1u;
        }
      }
    }
  }
  else if ( v7 == 36 )
  {
    if ( (char)a2[82] >= 0
      || (a2[29] & 0x60) != 0
      || (v14 = 32, (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) != 0) )
    {
      v14 = 32;
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
    }
  }
  else
  {
    v14 = 8;
    if ( !sub_B744F0(a2, (__int64)a2) )
      v14 = 16 * sub_B74620(a2, (__int64)a2);
  }
  result = *((_QWORD *)a2 + 10);
  if ( (result & 0x10000000) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 104);
    v17 = (__int64 *)(v16 + 96);
    if ( (result & 0x800000) != 0 )
    {
      sub_6E4DB0(v17, v16, a3, a4, a5, a6);
      v20 = *(_QWORD *)(a1 + 128);
      v21 = *(_WORD *)(v20 + 4) & 0xE07F;
      result = v21 | ((unsigned __int8)((v14 | (*(_WORD *)(v20 + 4) >> 7)) & 0x3F) << 7);
      *(_WORD *)(v20 + 4) = v21 | ((((unsigned __int8)v14 | (unsigned __int8)(*(_WORD *)(v20 + 4) >> 7)) & 0x3F) << 7);
    }
    else
    {
      sub_6E4DB0(v17, v16, a3, a4, a5, a6);
      v18 = *(_QWORD *)(a1 + 128);
      v19 = *(_WORD *)(v18 + 6) & 0xFE07;
      result = v19 | (8 * (((unsigned __int8)v14 | (unsigned __int8)(*(_WORD *)(v18 + 6) >> 3)) & 0x3Fu));
      *(_WORD *)(v18 + 6) = v19 | (8 * (((unsigned __int8)v14 | (unsigned __int8)(*(_WORD *)(v18 + 6) >> 3)) & 0x3F));
    }
  }
  return result;
}

