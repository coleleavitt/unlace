void __fastcall sub_E54680(__int64 a1, char a2, __int64 a3)
{
  char v3; // bp
  _BYTE *v5; // r13
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax

  v3 = a3;
  v5 = (_BYTE *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 592) )
      goto LABEL_5;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_BYTE **)(v6 + 32);
    if ( (unsigned __int64)v7 < *(_QWORD *)(v6 + 24) )
      goto LABEL_4;
LABEL_20:
    sub_2257CD0(v6, 69);
    goto LABEL_5;
  }
  v12 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v12 & 8) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 592) )
      goto LABEL_5;
    goto LABEL_18;
  }
  v13 = (*(_DWORD *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v12 & 7)) >> 9;
  if ( v13 == 18 || *(_BYTE *)(a1 + 592) && v13 - 16 > 1 )
  {
LABEL_18:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
       - 25 <= 1 )
      goto LABEL_5;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_BYTE **)(v6 + 32);
    if ( (unsigned __int64)v7 < *(_QWORD *)(v6 + 24) )
    {
LABEL_4:
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 69;
      goto LABEL_5;
    }
    goto LABEL_20;
  }
LABEL_5:
  if ( (a2 & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_BYTE **)(v8 + 32);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 24) )
    {
      sub_2257CD0(v8, 73);
      if ( (a2 & 8) == 0 )
        goto LABEL_9;
LABEL_12:
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_BYTE **)(v10 + 32);
      if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
      {
        sub_2257CD0(v10, 70);
      }
      else
      {
        *(_QWORD *)(v10 + 32) = v11 + 1;
        *v11 = 70;
      }
      return;
    }
    *(_QWORD *)(v8 + 32) = v9 + 1;
    *v9 = 73;
  }
  if ( (a2 & 8) != 0 )
    goto LABEL_12;
LABEL_9:
  if ( v5 && (v3 & 8) != 0 && (v5[24] & 8) != 0 )
    goto LABEL_12;
}

