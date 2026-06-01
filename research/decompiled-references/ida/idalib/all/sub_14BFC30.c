__int64 __fastcall sub_14BFC30(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  int *v6; // r12
  __int64 *v7; // rdi
  int v8; // eax
  unsigned __int16 v9; // r14
  int v10; // edi
  unsigned int v11; // r13d
  unsigned __int64 v12; // r8
  int v13; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+8h] [rbp-A0h]
  unsigned __int16 v23; // [rsp+8h] [rbp-A0h]
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+14h] [rbp-94h] BYREF
  char v26; // [rsp+1Ch] [rbp-8Ch]
  __int64 v27[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( a2 != 1 )
  {
    v6 = (int *)(a1 + 16);
    v7 = *(__int64 **)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 16);
    if ( a2 )
    {
      *(_DWORD *)(a1 + 40) = v8;
      v9 = *(_WORD *)(a1 + 32);
      sub_14634E0(v7, v6);
      v7 = *(__int64 **)(a1 + 8);
      v22 = *(_DWORD *)(a1 + 40);
      v8 = *(_DWORD *)(a1 + 16);
    }
    else
    {
      v22 = 0;
      v9 = 0;
    }
    *(_DWORD *)(a1 + 40) = v8;
    sub_14634E0(v7, v6);
    v10 = *(unsigned __int16 *)(a1 + 32);
    v11 = *(_DWORD *)(a1 + 40);
    v12 = 0;
    if ( (_WORD)v10 == 23 )
      goto LABEL_12;
    v13 = sub_FFF790(v10, *(_BYTE *)(a1 + 1952), 1);
    if ( (v13 & 0xFFFFFFF7) == 3 || v13 <= 0 )
    {
      sub_1564820(v27, a1, *(unsigned int *)(a1 + 16), 1618);
      sub_AEA040((__int64)v27);
      return 1;
    }
    v15 = *(_WORD *)(a1 + 32);
    v16 = *(unsigned int *)(a1 + 16);
    if ( v9 )
    {
      if ( v9 != v15 )
      {
        sub_1564820(v27, a1, v16, 1671);
        v26 = 1;
        LODWORD(v25) = v22;
        HIDWORD(v25) = v22;
        sub_AEC610(v27, &v25);
        sub_AEA040((__int64)v27);
        v15 = *(_WORD *)(a1 + 32);
        LODWORD(v16) = *(_DWORD *)(a1 + 16);
      }
    }
    *(_DWORD *)(a1 + 40) = v16;
    v23 = v15;
    sub_14634E0(*(__int64 **)(a1 + 8), v6);
    v17 = sub_14BFC10((const __m128i *)a1, 0, a4);
    if ( v17 != 1 )
    {
      v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v9 = v23;
LABEL_12:
      v24 = v12;
      sub_1564820(v27, a1, v11, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) == 0 ? 1982 : 2083);
      sub_AEA040((__int64)v27);
      sub_14808E0(a3, (__int64 *)a1, v18, v19, v20, v21);
      return sub_1E5BE60(
               *(_QWORD *)(a1 + 96),
               *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
               *(_DWORD *)(a3 + 48),
               (unsigned int)a2 & 0xFFFFFFFE,
               v9,
               v11,
               v24,
               *(_DWORD *)(a3 + 52));
    }
  }
  sub_156E210(a3);
  return 1;
}
