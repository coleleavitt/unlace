unsigned __int64 __fastcall sub_1E70C90(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  int v9; // edi
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // rax
  int v13; // [rsp+8h] [rbp-30h]
  unsigned int v14; // [rsp+8h] [rbp-30h]
  unsigned int v15; // [rsp+Ch] [rbp-2Ch]
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  v9 = *(unsigned __int8 *)(*(_QWORD *)v7 + 16LL);
  if ( v9 == 43 )
    goto LABEL_8;
  v10 = a2;
  if ( (unsigned __int8)(v9 - 25) <= 1u || v9 == 44 )
  {
    if ( v9 != 44 )
    {
      if ( *(_BYTE *)(v6 + 16) != 26 )
      {
        v16 = a4;
        v14 = a3;
        if ( (_BYTE)v9 != 26 )
          goto LABEL_9;
        v12 = sub_F63050(v6, a2, a3, a4);
        a3 = v14;
        v6 = v12;
        a4 = v16;
        if ( !v12 )
          goto LABEL_9;
      }
LABEL_6:
      v15 = a4;
      v13 = a3;
      if ( sub_A5DBE0(v6, a2, a3, a4, v8) )
        goto LABEL_9;
      LODWORD(a3) = v13;
      a4 = v15;
      if ( (*(_BYTE *)(v6 + 18) & 0x18) != 0 )
        goto LABEL_9;
    }
LABEL_8:
    v10 = sub_1E70970(a1, a2, (_DWORD)a3 == 0, a4, v8);
    v5 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_9;
  }
  if ( (_BYTE)v9 != 13 || ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B3 )
    goto LABEL_8;
  if ( *(_BYTE *)(v6 + 16) == 26 )
    goto LABEL_6;
LABEL_9:
  result = 0;
  if ( v5 )
    return v10;
  return result;
}
