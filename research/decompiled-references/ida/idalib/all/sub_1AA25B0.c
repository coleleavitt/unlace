unsigned __int64 __fastcall sub_1AA25B0(__int64 a1, unsigned __int64 a2)
{
  _WORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // r12
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned int v15; // eax
  _BYTE v16[184]; // [rsp+0h] [rbp-B8h] BYREF

  v3 = (_WORD *)sub_BFBAE0(a2);
  v6 = *(_BYTE *)(a1 + 96);
  v7 = (unsigned __int64)v3;
  if ( v6 )
    v6 = *(_BYTE *)(a1 + 97);
  *(_WORD *)(a1 + 96) = 0;
  v8 = *v3 & 0x1FF;
  v9 = (unsigned int)(v8 + 389);
  LOWORD(v9) = (v8 + 389) & 0x1FF;
  if ( (unsigned __int16)v9 > 1u )
  {
    v15 = sub_C00A40(a2, a2, v9, v4, v5);
    sub_168B9F0((__int64)v16, (__int64 *)a1, v15, 0xB68u, 0);
    v11 = 1;
    sub_15F7200(v16);
    return v11;
  }
  while ( 1 )
  {
    if ( (_WORD)v8 == 124 )
    {
LABEL_18:
      v13 = *(_QWORD *)(v7 + 24);
      goto LABEL_19;
    }
    if ( (_WORD)v8 != 123 )
      break;
    if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v9, v4, v5) )
      goto LABEL_18;
    v13 = *(_QWORD *)(v7 + 16);
LABEL_19:
    v7 = sub_BFBAE0(v13);
    LOWORD(v8) = *(_WORD *)v7 & 0x1FF;
  }
  if ( (_WORD)v8 != 71 )
    goto LABEL_11;
  if ( (*(_QWORD *)v7 & 0x200000LL) != 0 )
    v10 = *(_QWORD *)(v7 + 16LL * ((*(_QWORD *)v7 & 0x80000LL) != 0) + 32);
  else
    v10 = *(_QWORD *)(v7 + 16);
  if ( ((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) + 28) + 88) & 0x7Fu) <= 7 )
    goto LABEL_20;
  LOWORD(v8) = *(_WORD *)v7 & 0x1FF;
LABEL_11:
  if ( (_WORD)v8 == 46 )
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 24) + 32LL))(*(_QWORD *)(v7 + 24)) + 28)
        & 0x7Fu)
       - 49 > 2 )
    {
      LOWORD(v8) = *(_WORD *)v7 & 0x1FF;
      goto LABEL_14;
    }
LABEL_20:
    v11 = 0;
    if ( !v6 )
      return a2;
  }
  else
  {
LABEL_14:
    if ( (_WORD)v8 == 69 || (_WORD)v8 == 109 )
      goto LABEL_20;
    v11 = 1;
    if ( (_WORD)v8 != 16 )
    {
      v12 = sub_C00A40(a2, a2, v9, v4, v5);
      sub_168B9F0((__int64)v16, (__int64 *)a1, v12, 0xB68u, 0);
      sub_15F7200(v16);
    }
  }
  return v11;
}
