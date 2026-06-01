void __fastcall sub_16D2940(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, double a5)
{
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *i; // rax
  unsigned __int64 v18; // rax
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // bl
  unsigned __int64 v23; // rbx
  unsigned int v24; // [rsp+Ch] [rbp-ECh]
  __int64 v26; // [rsp+18h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v28[200]; // [rsp+30h] [rbp-C8h] BYREF

  v24 = a2;
  v8 = sub_BFB9F0(a3);
  if ( (*(_WORD *)v8 & 0x1FF) == 0x20 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    if ( (v9 & 4) == 0 )
    {
      v18 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
      {
        v10 = *(_QWORD *)(v18 + 56);
        v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v13 = *(_QWORD *)&byte_8[*(_QWORD *)(v18 + 56) & 0xFFFFFFFFFFFFFFF0LL];
          LODWORD(v11) = 0;
          if ( (v13 & 8) != 0 )
            goto LABEL_17;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
  v10 = *(_QWORD *)(a3 + 8);
  LODWORD(v11) = 0;
  v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v13 & 8) != 0 )
  {
LABEL_17:
    v11 = ((*(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v13 & 7)) >> 6) & 7;
    if ( (_DWORD)v11 == 3 )
    {
      a2 = 6504;
      v26 = v13;
      v19 = sub_FD3830(
              *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
              0x1968u,
              v24,
              *(_QWORD *)(a1 + 264),
              v13,
              (*(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v13 & 7)) >> 6);
      v13 = v26;
      if ( v19 != 1 )
      {
        v20 = *(unsigned int *)(a1 + 40);
        v21 = 0;
        if ( (_DWORD)v20 )
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v20 - 8);
        a2 = a3;
        sub_15EED40(v21, a3);
        v13 = v12[1];
        if ( (v13 & 8) == 0 )
          return;
      }
    }
    v22 = v13 | v10;
    v13 &= 0xFFFFFFFFFFFFFFF0LL;
    v23 = (*(_QWORD *)(v13 + 24) | (unsigned __int64)(v22 & 7)) >> 6;
    if ( (v23 & 5) == 1 )
    {
      a2 = v24;
      if ( (unsigned __int8)sub_16D2760(a1, v24, v23 & 7, (_WORD *)a4, 0, a5) )
        return;
    }
  }
LABEL_4:
  if ( v8 )
  {
    if ( !(_DWORD)v11 )
    {
      v14 = *(_QWORD *)(v8 + 16);
      if ( (v14 & 4) == 0 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v15 )
        {
          v16 = *(unsigned __int16 *)(v15 + 72);
          if ( (v16 & 4) != 0 )
          {
            if ( (*(_BYTE *)(v15 + 74) & 4) != 0 || !(unsigned __int8)sub_F6AE00(*v12, a2, v16, v7, v13) )
            {
              for ( i = (_WORD *)a4; (*i & 0x1FF) == 0x4F; a4 = (unsigned __int64)i )
              {
                if ( ((*(_WORD *)(a4 + 2) >> 3) & 0x7F) == 0x37 )
                {
                  sub_168B9F0((__int64)v28, (__int64 *)(a1 + 8), v24, 0x196Bu, 0);
                  v27 = sub_EEC8C0(a4, a1 + 8, a5);
                  sub_1587DB0((__int64)v28, &v27);
                  sub_15F7200(v28);
                  return;
                }
                i = *(_WORD **)(a4 + 16);
              }
            }
          }
          else if ( (v16 & 0x200) != 0 )
          {
            sub_16D2760(a1, v24, 3, (_WORD *)a4, 1u, a5);
          }
        }
      }
    }
  }
}
