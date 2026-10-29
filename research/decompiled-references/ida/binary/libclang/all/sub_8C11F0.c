__int64 __fastcall sub_8C11F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int16 v4; // dx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // edx
  unsigned __int64 v13; // rdx

  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v3 = sub_80F120(*(_QWORD *)(a2 + 16));
  v4 = *(_WORD *)v3 & 0x1FF;
  if ( v4 == 4 )
  {
    v3 = sub_80F120(*(_QWORD *)(v3 + 16));
    if ( ((*(_WORD *)v3 + 393) & 0x1FFu) > 1 )
      goto LABEL_3;
    v11 = 1;
    v12 = 15;
  }
  else
  {
    if ( ((v4 + 393) & 0x1FFu) > 1 )
LABEL_3:
      __asm { jmp     rdx }
    v12 = (*(_WORD *)(v3 + 2) >> 3) & 0x3F;
    v11 = v12 - 14;
  }
  v5 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)a1 = v12;
  v13 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 24) = v3;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 16) = v5;
    v5 = v13;
  }
  if ( v11 <= 1 )
    return a1;
  v7 = sub_811DB0(v5);
  if ( ((*(_WORD *)v7 + 393) & 0x1FFu) <= 1 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v10 = *(_QWORD *)(v7 + 24);
  }
  else
  {
    v8 = *(unsigned __int8 *)(v7 + 3) + 8LL * ((*(_BYTE *)(v7 + 2) & 8) != 0) + 8;
    v9 = *(_QWORD *)(v7 + v8);
    v10 = *(_QWORD *)(v7 + v8 + 8);
  }
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = v7;
  if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
    return a1;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = v9;
  return a1;
}

