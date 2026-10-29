__int64 __fastcall sub_15B6A10(_QWORD **a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r13d
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  char v15; // dl
  unsigned __int64 v16; // r8
  char v17; // al
  unsigned __int64 v18; // r14
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8

  v3 = ((__int64 (__fastcall *)(_QWORD))**a1)((*a1)[1]);
  if ( (_BYTE)v3 && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    LOBYTE(v4) = sub_B979F0((_QWORD *)a2);
    v7 = v4;
    if ( !(_BYTE)v4 )
    {
      v9 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v10 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 26 )
        v10 = sub_F63050(*v9, a2, v5, v6);
      v11 = *(_QWORD *)(v10 + 16);
      if ( (v11 & 0x1000000) != 0 )
      {
        v12 = *(unsigned __int16 *)(v10 + 22);
        v13 = (v11 & 0x40000000) != 0;
        v14 = 8 * v12 + 48;
        v15 = *(_BYTE *)(v10 + 19);
        if ( (v15 & 0x40) != 0 )
          v13 += (*(_BYTE *)(((v10 + v14 + ((v15 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v16 = ((v10 + v14 + ((SBYTE3(v11) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v13;
        v17 = ((unsigned __int8)v15 >> 1) & 0xF;
        if ( v17 != 2 )
          __asm { jmp     rdx }
        v26 = v16 + 8LL * (*(_WORD *)((v10 + v14 + ((v15 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
        v25 = v26;
        v24 = v26 + v12;
        if ( (v11 & 0x20000000) != 0 )
          v25 = v24;
        v18 = *(_QWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        v19 = (unsigned int)v18 >> 9;
      }
      else
      {
        if ( *(_BYTE *)(v10 + 16) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F63050(v10, a2, v5, v11) )
        {
          v18 = *(_BYTE *)(v10 + 18) >> 5;
        }
        else
        {
          v18 = 0;
        }
        v19 = 0;
      }
      v20 = *a1[1];
      v21 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
      v22 = 0;
      if ( (v21 & 8) != 0 )
        v22 = *(__int64 *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL));
      v23 = v22 | ((unsigned __int8)v20 | (unsigned __int8)v21) & 7;
      if ( (unsigned int)v23 >> 9 == v19 || sub_F56A30(v19, (unsigned int)v23 >> 9, *a1[2]) )
      {
        if ( (((v18 >> 4) & 3) == ((v23 >> 4) & 3) || (v18 & 0x30) == 0 || (v23 & 0x30) == 0)
          && HIDWORD(v23) == HIDWORD(v18)
          && ((v18 >> 6) & 7) == ((v23 >> 6) & 7)
          && ((unsigned __int8)v23 & (unsigned __int8)~(_BYTE)v18 & 7) == 0
          && ((v23 & 8) == 0 || (v18 & 8) != 0) )
        {
          return v3;
        }
      }
      else
      {
        return 0;
      }
    }
    return v7;
  }
  return v3;
}
