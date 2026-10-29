__int64 __fastcall sub_1703690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _BOOL8 v8; // rax
  __int64 v9; // rdi
  char v10; // dl
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  char v13; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi

  v4 = (__int64 *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 16) != 26 )
    v5 = sub_F63050(*v4, a2, a3, a4);
  v6 = *(_QWORD *)(v5 + 16);
  if ( (v6 & 0x1000000) != 0 )
  {
    v7 = *(unsigned __int16 *)(v5 + 22);
    v8 = (v6 & 0x40000000) != 0;
    v9 = 8 * v7 + 48;
    v10 = *(_BYTE *)(v5 + 19);
    v11 = (v5 + v9 + ((SBYTE3(v6) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 0x40) != 0 )
    {
      v12 = v11 + 8 * (((*(_BYTE *)(((v5 + v9 + ((v10 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v8);
      v13 = ((unsigned __int8)v10 >> 1) & 0xF;
      if ( v13 != 2 )
LABEL_6:
        __asm { jmp     rdx }
    }
    else
    {
      v12 = v11 + 8 * v8;
      v13 = ((unsigned __int8)v10 >> 1) & 0xF;
      if ( v13 != 2 )
        goto LABEL_6;
    }
    v14 = v12 + 8LL * (*(_WORD *)((v5 + v9 + ((v10 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    v15 = v14 + v7;
    if ( (v6 & 0x20000000) != 0 )
      v14 = v15;
    return *(_QWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else if ( *(_BYTE *)(v5 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
         && sub_F63050(v5, a2, a3, v6) )
  {
    return *(_BYTE *)(v5 + 18) >> 5;
  }
  else
  {
    return 0;
  }
}
