__int64 __fastcall sub_1959950(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  _BOOL8 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int128 v22; // [rsp+0h] [rbp-38h] BYREF

  v4 = 1;
  v6 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL;
  v7 = v6;
  if ( *(_DWORD *)(a2 + 40) != 1 )
  {
    v14 = sub_1944E10(a1, (unsigned __int16 *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL), a3, a4);
    v6 = v14;
    if ( v14 != 1 )
    {
      if ( !v14 )
      {
        v7 = 0;
        v4 = 0;
        goto LABEL_2;
      }
      v19 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
      v20 = *(_QWORD *)(*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v20 + 16) != 13 || ((*(_WORD *)(v20 + 18) >> 3) & 0x1FFu) <= 0x1F1 )
      {
        v6 &= 0xFFFFFFFFFFFFFFFCLL;
        v4 = 0;
        v7 = v6;
        goto LABEL_2;
      }
      v21 = sub_1907C70(*a1, v19, (__m128i)a3, a4, v15, v16, v17, v18);
      if ( v21 != 1 )
      {
        v4 = 0;
        v6 = v21 & 0xFFFFFFFFFFFFFFFCLL;
        v7 = v21 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_2;
      }
    }
    return 0;
  }
LABEL_2:
  v8 = *(_QWORD *)(a2 + 24);
  v22 = 0;
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v8 & 4) != 0 )
    {
      BYTE8(v22) = 1;
      *(_QWORD *)&v22 = v9 | 4;
    }
    else
    {
      sub_A55640((unsigned __int64 *)&v22, v9);
      BYTE8(v22) = 1;
    }
  }
  else
  {
    *(_QWORD *)&v22 = 0;
    BYTE8(v22) = 1;
  }
  v10 = *(unsigned int *)(a2 + 16);
  v11 = *a1;
  v12 = *(_DWORD *)a2 == 1;
  if ( v4 || !v6 )
    return sub_19A4FC0(v11, v7, v12, v10, v22);
  else
    return sub_19A54F0(v11, v7, v12, v10, v22);
}
