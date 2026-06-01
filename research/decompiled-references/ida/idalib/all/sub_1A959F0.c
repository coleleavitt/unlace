void __fastcall sub_1A959F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int16 v4; // r8
  __int16 v5; // ax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v9; // rbp
  unsigned int v10; // edx
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v26[200]; // [rsp+10h] [rbp-C8h] BYREF

  v4 = *(_WORD *)(a2 + 72);
  v5 = *(_WORD *)(a3 + 72);
  if ( ((v4 & 0x40) == 0) != ((v5 & 0x40) == 0) )
  {
    if ( a4 && (*(_WORD *)(a3 + 74) & 0x140) == 0 )
    {
      v15 = v5 & 0xFEBF;
      v14 = v15;
      HIBYTE(v15) |= 1u;
      v16 = v14 | 0x40;
      if ( (v4 & 0x40) != 0 )
        v15 = v16;
      *(_WORD *)(a3 + 72) = v15;
    }
    else if ( ((v4 & 0x40) != 0 || (v4 & 1) == 0 || (*(_BYTE *)(a2 + 75) & 1) != 0)
           && ((v5 & 0x40) != 0 || (v5 & 1) == 0 || (*(_BYTE *)(a3 + 75) & 1) != 0) )
    {
      v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      {
        v6 = *(_QWORD *)v6;
        if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x17 )
          goto LABEL_21;
      }
      else if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x17 )
      {
        goto LABEL_21;
      }
      if ( v6 != 48 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 40LL);
        goto LABEL_15;
      }
LABEL_21:
      v7 = *(_QWORD *)(v6 - 8);
LABEL_15:
      v9 = (__int64 *)(a1 + 8);
      v10 = *(_DWORD *)(a3 + 24);
      v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 7) != 0 )
        v11 = 0;
      sub_168B9F0((__int64)v26, v9, v10, 0x1C7Eu, 0);
      v24 = *(_QWORD *)(a3 + 40);
      v12 = sub_15894B0((__int64)v26, &v24);
      v13 = v12;
      if ( *(_BYTE *)(v12 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v12 + 32), (__int64)"atomic", 1u);
        if ( !*(_BYTE *)(v13 + 120) )
          goto LABEL_28;
      }
      else
      {
        if ( !*(_BYTE *)(v12 + 132) )
        {
LABEL_19:
          sub_15F7200(v26);
          sub_168B9F0((__int64)v26, v9, *(_DWORD *)(a2 + 24), 0x189Au, 0);
          sub_15F7200(v26);
          return;
        }
        sub_1A939B0(v12, (__int64)"atomic");
        if ( !*(_BYTE *)(v13 + 120) )
        {
LABEL_28:
          if ( *(_BYTE *)(v13 + 132) )
          {
            v21 = sub_168B9E0((_QWORD *)v13);
            v22 = *(_QWORD *)(v13 + 16);
            if ( v22 )
              v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(*(_QWORD *)(v13 + 16));
            v25 = v22;
            v23 = sub_1587BC0(v21, &v25, v17, v18, v19, v20);
            sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v13 + 128) + 8), v11, 5u);
          }
          goto LABEL_19;
        }
      }
      sub_AE9DF0((unsigned __int8 **)(v13 + 32), v11, 5u);
      goto LABEL_19;
    }
  }
}
