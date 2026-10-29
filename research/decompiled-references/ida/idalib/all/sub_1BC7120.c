__int64 __fastcall sub_1BC7120(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax

  if ( !sub_F58100(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) )
    return 0;
  LOBYTE(v7) = sub_F58100(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  v5 = v7;
  if ( !(_BYTE)v7 )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 13 )
  {
    v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_BYTE *)(v10 + 16);
    if ( v9 == 485 )
    {
      if ( v11 != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FB) != 0x1E0 )
        goto LABEL_9;
    }
    else if ( v11 != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1E5 || (v9 & 0x1FB) != 0x1E0 )
    {
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  v12 = sub_A62D20(*a1, a2);
  v13 = (__int64)*a1;
  v14 = a3;
  v15 = v12;
  v16 = sub_A62D20(*a1, a3);
  v18 = sub_21F90D0(v13, v14, v17);
  v19 = sub_21F90C0();
  if ( v15 == v18 && v19 == v16 || v19 == v15 && v16 == v18 )
    return 0;
  return v5;
}
