__int64 __fastcall sub_19F2860(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 i; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a2 + 96) & 7) == 2 || (*(_BYTE *)(a2 + 96) & 7) == 0 && ((*(_BYTE *)(a2 + 96) >> 3) & 3) == 2 )
  {
    if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) == 0 )
    {
LABEL_14:
      sub_19EAE00(a1, 16, 3, *(_DWORD *)(a2 + 24));
      goto LABEL_3;
    }
    v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v9 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(v8 + 8)) + 8) & 0x7F;
      if ( !v9 )
        goto LABEL_3;
    }
    else
    {
      v9 = *(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F;
      if ( !v9 )
        goto LABEL_3;
    }
    if ( v9 != 24 )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
        goto LABEL_14;
      v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v10 = *(_QWORD *)v10;
      if ( ((*(_BYTE *)(v10 + 8) + 70) & 0x7Fu) > 3 )
        goto LABEL_14;
    }
  }
LABEL_3:
  v4 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 248LL);
  if ( (unsigned int)sub_B73D90(a2, v4) == 1 )
  {
    v11 = *(_DWORD *)(a2 + 24);
    for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(v13 + 32) )
    {
      v13 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
      v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v15 = (unsigned int)(v14 - 2);
      if ( (unsigned __int8)(v14 - 2) > 4u )
        break;
      if ( (unsigned __int8)(*(_BYTE *)(v13 + 16) - 2) > 4u )
      {
        v27 = (unsigned int)(v14 - 2);
        if ( (unsigned int)v27 > 4 )
          BUG();
        v13 = sub_F63050(v13, v4, v15, v27);
      }
    }
    if ( (_BYTE)v14 == 48 )
    {
      v16 = sub_F63270(v13, v4, v15, v14, v5, v6);
      if ( v16 )
      {
        v17 = sub_B97300((__int64)v16);
        v18 = v17;
        if ( v17 )
        {
          v19 = v17;
          v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL);
          if ( v20 == sub_B94CD0 )
            v21 = sub_B709C0(v19);
          else
            v21 = v20(v19);
          if ( (*(_BYTE *)(v21 + 82) & 0x40) == 0 )
          {
            sub_19EC960((__int64)v28, v18, 0, v22, v23);
            sub_19EC1F0(a1, v28, v11, v24, v25, v26);
          }
        }
      }
    }
  }
  return 1;
}
