unsigned __int64 __fastcall sub_16C44B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // eax
  bool v18; // bp
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rsi
  unsigned int v24; // esi
  unsigned int v25; // edx
  bool v26; // bp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD v30[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  LODWORD(v9) = *(unsigned __int8 *)(v8 + 16);
  if ( (unsigned int)(v9 - 57) <= 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v9) = *(_BYTE *)(v8 + 16);
  }
  if ( (_BYTE)v9 == 14 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v9) = *(_BYTE *)(v8 + 16);
  }
  if ( (_BYTE)v9 == 7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v9) = *(_BYTE *)(v8 + 16);
  }
  v10 = *(_QWORD *)(a1 + 2320);
  if ( (*(_BYTE *)(v10 + 1) & 8) == 0 )
  {
    if ( (_BYTE)v9 == 47 )
    {
      v11 = sub_F60F10(v8, v6, v10, a4, a5, a6)[16];
      v14 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v11 & 4) != 0 )
        {
          v30[0] = *v14;
          v14 = (_QWORD *)sub_6D5440(v30);
        }
        else
        {
          v14 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
      v9 = sub_F6B0C0((unsigned __int64)v14, a1, v11, v12, v13) & 0xFFFFFFFFFFFFFFF0LL;
      v8 = *(_QWORD *)v9;
      LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
    }
    goto LABEL_13;
  }
  if ( (_BYTE)v9 != 47 )
  {
LABEL_13:
    if ( (_BYTE)v9 == 10 )
    {
      LOBYTE(v15) = *(_BYTE *)(v8 + 32) & 1;
      v16 = (*(_DWORD *)(v8 + 32) >> 1) & 0xFFFFFF;
    }
    else
    {
      v18 = (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) <= 0xB;
      v16 = sub_AAC1F0(a1, v8 & 0xFFFFFFFFFFFFFFF0LL, v10, a4, a5);
      LOBYTE(v15) = v18;
    }
    return ((unsigned __int64)(unsigned __int8)v15 << 32) | v16;
  }
  v19 = sub_F60F10(v8, v6, v10, a4, a5, a6);
  v23 = v19[9];
  v15 = (v23 >> 40) & 2;
  if ( ((v23 >> 40) & 2) != 0 )
  {
    v26 = sub_F65240(v8, v23, v20, v15, v21, v22);
    v16 = sub_AAC1F0(a1, v8 & 0xFFFFFFFFFFFFFFF0LL, v27, v28, v29);
    LOBYTE(v15) = !v26;
  }
  else
  {
    v16 = (unsigned __int8)(*((_WORD *)v19 + 37) >> 7);
    v24 = (unsigned __int8)(v23 >> 31);
    if ( v24 )
    {
      v25 = v16 + 1;
      v16 = v24;
      if ( v25 >= v24 )
        v16 = v25;
    }
    else
    {
      LOBYTE(v15) = 1;
    }
  }
  return ((unsigned __int64)(unsigned __int8)v15 << 32) | v16;
}
