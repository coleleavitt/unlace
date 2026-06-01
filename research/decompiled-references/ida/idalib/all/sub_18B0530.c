__int64 __fastcall sub_18B0530(__int64 a1, unsigned int a2, __int64 a3, double a4, __m128 a5)
{
  char v7; // r8
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  char v10; // cl
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // r12
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _BYTE v20[168]; // [rsp+0h] [rbp-A8h] BYREF

  v7 = *(_BYTE *)(a3 + 19);
  v8 = ((unsigned __int8)v7 >> 1) & 0xF;
  if ( v8 == 11 )
    goto LABEL_19;
  if ( (unsigned int)v8 - 9 > 1 )
    return a3;
  v9 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
  v10 = BYTE3(*(_QWORD *)(a3 + 16));
  v11 = (v10 & 0x40) != 0;
  v12 = (a3 + v9 + ((v10 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 0x40) != 0 )
    v11 += (*(_BYTE *)(((a3 + v9 + ((v7 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
  v13 = (__int64 *)(v12 + 8 * v11);
  if ( v8 != 2 )
  {
    switch ( v8 )
    {
      case 0u:
      case 1u:
        goto LABEL_7;
      default:
        return a3;
    }
  }
  v13 += *(_WORD *)((a3 + v9 + ((v7 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF;
LABEL_7:
  v14 = *v13;
  result = *(_QWORD *)(*(_QWORD *)(*v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) != 26 )
    result = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v13 + 48) & 0xFFFFFFFFFFFFFFF0LL), v11, a3, v13);
  v16 = (*(_BYTE *)(result + 19) >> 1) & 0xF;
  v17 = (unsigned int)(v16 - 9);
  if ( (unsigned int)v17 <= 1 )
  {
    if ( v16 == 9 )
      sub_188E070(a1, a2, v14, v17, a4, a5);
    else
      sub_1E0E760(a1, a2, v14);
    result = *(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) != 26 )
      result = sub_F63050(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v18, v19);
    if ( ((*(_BYTE *)(result + 19) >> 1) & 0xF) == 0xB )
    {
LABEL_19:
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a2, 0xE9Bu, 0);
      sub_15F7200(v20);
      return 0;
    }
  }
  return result;
}
