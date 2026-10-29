char __fastcall sub_19A2390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r13
  __int64 v8; // rbp
  unsigned __int8 v10; // al
  int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbp

  v6 = a2;
  v8 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)a1 = a3;
  v10 = *(_BYTE *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  v11 = v10;
  if ( ((v10 + 52) & 0x7Fu) <= 1 || (v12 = v8, (unsigned int)(v11 - 53) <= 1) )
  {
    v12 = sub_B72ED0(v8);
    v11 = *(_BYTE *)(v12 + 28) & 0x7F;
  }
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a4;
  if ( (unsigned int)(v11 - 34) >= 6 )
    v12 = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = v12;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    *(_DWORD *)(a1 + 48) = 4;
    if ( !v12 )
      return v12;
    LOBYTE(v12) = sub_B74C70(v12);
    if ( !(_BYTE)v12 )
      goto LABEL_9;
LABEL_18:
    *(_QWORD *)(a1 + 8) = 0;
    return v12;
  }
  v29 = sub_6D5440((_QWORD *)(a1 + 24));
  v30 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 48) = 4;
  *(_QWORD *)(a1 + 24) = v29;
  if ( v30 )
  {
    if ( sub_B74C70(v30) )
      goto LABEL_26;
    goto LABEL_9;
  }
  LOBYTE(v12) = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( (((_BYTE)v12 + 52) & 0x7Fu) <= 1 || (unsigned int)(unsigned __int8)v12 - 53 <= 1 )
  {
    v8 = sub_B72ED0(v8);
    LOBYTE(v12) = *(_BYTE *)(v8 + 28) & 0x7F;
  }
  if ( (_BYTE)v12 == 71 )
  {
    a2 = v8;
    v12 = sub_1864D90(v6, v8, a4, a5);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8) = v12;
      if ( sub_B74C70(v12) )
      {
LABEL_26:
        a2 = a4;
        v31 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL) + 48LL);
        v12 = sub_1864D30(v6, a4, a5);
        if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v12 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v12) & 7;
          if ( (*(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v31) & 7) == v12 )
          {
            *(_DWORD *)(a1 + 32) = 1;
            v13 = 3;
            v14 = 2;
            goto LABEL_10;
          }
        }
        goto LABEL_18;
      }
LABEL_9:
      v13 = 2;
      v14 = 1;
LABEL_10:
      if ( sub_B74C20(*(_QWORD *)(a1 + 8)) )
      {
        *(_BYTE *)(a1 + 16) = 1;
        v14 = v13;
      }
      if ( (unsigned int)sub_B76070(*(_QWORD *)(a1 + 8), a2, v15, v16) > (unsigned int)v14 )
      {
        a2 = sub_A63CE0(*(_QWORD **)(v6 + 248));
        if ( sub_199F900(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL) + 8LL * (unsigned int)v14) + 48LL),
               a2) )
        {
          v14 = (unsigned int)(v14 + 1);
          *(_DWORD *)(a1 + 40) = 1;
        }
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 8);
      }
      if ( (unsigned int)sub_B76070(v18, a2, v17, v18) > (unsigned int)v14
        && sub_F611E0(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL) + 8 * v14) + 48LL)
                       & 0xFFFFFFFFFFFFFFF0LL),
             a2,
             v19,
             v20,
             v21,
             v22) )
      {
        *(_DWORD *)(a1 + 36) = 1;
      }
      v12 = *(_QWORD *)(v6 + 232);
      if ( (*(_BYTE *)(v12 + 60) & 0x10) != 0 )
      {
        v23 = *(_QWORD *)(v6 + 664);
        v24 = *(_QWORD *)(a1 + 8);
        v25 = sub_15F1640(v6, 1);
        LODWORD(v12) = sub_178F000(v23, v25, v24, v26, v27, v28);
        *(_DWORD *)(a1 + 48) = v12;
      }
    }
  }
  return v12;
}
