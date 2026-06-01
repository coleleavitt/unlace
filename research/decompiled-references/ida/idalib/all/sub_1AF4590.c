unsigned __int64 __fastcall sub_1AF4590(__int64 *a1, const void *a2, __int64 a3, __int64 a4, int a5, int a6, double a7)
{
  int v7; // r15d
  _WORD *v11; // r12
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-D0h]
  _BYTE v28[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( a4 )
  {
    v7 = 0;
    v11 = *(_WORD **)(a4 + 8LL * *(unsigned int *)(a4 + 8) + 32);
    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
    {
LABEL_10:
      sub_15F2480(*a1);
      v21 = (_QWORD *)sub_168B6C0((__int64)a1);
      return sub_F01380(v21, a5, a6, a2, a3, a4, v7);
    }
    v12 = (unsigned __int64)v11;
    if ( ((*v11 + 509) & 0x1FFu) > 0x7E )
    {
LABEL_4:
      v13 = sub_EEB7E0(v12, (__int64)a2, a7);
      sub_168B9F0((__int64)v28, a1, v13, 0x117Fu, 0);
      sub_15F7200(v28);
      return 1;
    }
    v15 = sub_BFD550((unsigned __int64)v11);
    v16 = sub_BFB900(v15);
    v17 = *(_WORD *)v16 & 0x1FF;
    if ( v17 <= 0x75u )
    {
      if ( v17 == 91 && ((*(_BYTE *)(v16 + 3) >> 1) & 0x3F) == 0xF )
      {
        v18 = sub_1AE7570(*(_QWORD *)(v16 + 8 * (((*(_BYTE *)(v16 + 2) & 8) != 0) + 1LL) + 40));
        if ( v18 )
          goto LABEL_9;
      }
    }
    else if ( v17 <= 0x77u )
    {
      if ( ((*(_WORD *)(v16 + 2) >> 3) & 0x3F) == 0x15 )
      {
        v18 = sub_1AE7570(*(_QWORD *)(v16 + 24));
        if ( v18 )
        {
LABEL_9:
          v7 = sub_C00A40(v18, (__int64)a2, v18, v19, v20);
          goto LABEL_10;
        }
      }
LABEL_15:
      v12 = v16;
      goto LABEL_4;
    }
    v22 = sub_BFD550(v16);
    v23 = sub_BFB900(v22);
    if ( ((*(_WORD *)v23 + 423) & 0x1FFu) <= 4 )
    {
      v27 = v23;
      v24 = sub_BFBC70(*(_QWORD *)(v23 + 32));
      if ( v24 )
      {
        v18 = v27;
        if ( (*(_BYTE *)(v24 + 28) & 0x7Fu) - 34 <= 5 )
          goto LABEL_9;
      }
    }
    goto LABEL_15;
  }
  return 1;
}
