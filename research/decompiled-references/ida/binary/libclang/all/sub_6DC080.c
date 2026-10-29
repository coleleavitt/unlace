unsigned __int64 __fastcall sub_6DC080(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rbp
  char v6; // al
  __int64 v8; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+8h] [rbp-B0h]
  __int64 **v24; // [rsp+8h] [rbp-B0h]
  __m128i v25[10]; // [rsp+10h] [rbp-A8h] BYREF

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  v6 = *(_BYTE *)(*v4 + 16);
  switch ( v6 )
  {
    case 0:
      v10 = sub_6DC080(a1, *(_QWORD *)(v5 + 40), a3);
      return sub_6C4490(a1, *(_QWORD *)(v5 + 32), v10);
    case 8:
      v11 = *(_QWORD *)(v5 + 32);
      v12 = sub_6DC080(a1, *(_QWORD *)(v5 + 48), a3);
      v13 = sub_6DC080(a1, *(_QWORD *)(v5 + 40), a3);
      return sub_6C7EB0(a1, *(_WORD *)(v5 + 18) >> 3, v13, v12, v11);
    case 9:
      v14 = sub_6DC080(a1, *(_QWORD *)(v5 + 32), a3);
      return sub_6C80F0(a1, *(_QWORD *)(v5 + 40), v14);
    case 24:
      v15 = sub_6DC080(a1, *(_QWORD *)(v5 + 40), a3);
      return sub_6C8A10(a1, (unsigned __int8)(*(_WORD *)(v5 + 18) >> 3), *(_QWORD *)(v5 + 32), v15, 0);
    case 29:
      v16 = *(_QWORD *)(v5 + 32);
      v17 = sub_6DC080(a1, *(_QWORD *)(v5 + 24), a3);
      return sub_6C8F20(a1, v17, v16);
    case 39:
      v18 = sub_6DC080(a1, *(_QWORD *)(v5 + 32), a3);
      return sub_6C8D20(a1, v18);
    default:
      if ( v6 == 25 )
        goto LABEL_3;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25 )
      {
        v22 = a4;
        v19 = sub_B0D320(*v4);
        a4 = v22;
        v5 = v19;
        if ( v19 )
        {
LABEL_3:
          v8 = *(_QWORD *)(a4 + 8);
          v25[0].m128i_i16[0] = *(_WORD *)(v5 + 18) >> 3;
          return sub_6C7100(v8, **(_QWORD **)a4, (unsigned __int16 *)v25);
        }
        v5 = *v4;
        v6 = *(_BYTE *)(*v4 + 16);
      }
      if ( v6 != 26 )
      {
        v23 = a4;
        v20 = sub_B0D320(v5);
        a4 = v23;
        v5 = v20;
      }
      v21 = *(_QWORD *)(a4 + 8);
      v24 = (__int64 **)a4;
      sub_6B29F0((__int64)v25, v5);
      return sub_6DB070(v21, **v24, v5 + 48, (unsigned __int16)(*(_DWORD *)(v5 + 20) >> 6), v25, 0);
  }
}

