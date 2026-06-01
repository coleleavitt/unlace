__int16 __fastcall sub_9B92D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r12d
  int *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // ebp
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r11
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  int v23; // r8d

  v2 = *(_QWORD *)(a2 + 16);
  LOWORD(v3) = *(_WORD *)v2 & 0x1FF;
  if ( (_WORD)v3 == 71 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 32LL))(*(_QWORD *)(v2 + 16));
    if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 26 <= 0x1A
      && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 42) <= 2u )
    {
      v6 = sub_9B6470((int *)(*a1 + 72), v3);
      v7 = *a1;
      v8 = v6;
      v9 = (int *)(*a1 + 72);
      if ( (*(_WORD *)v5 & 0x1FF) == 0x47 )
      {
        v10 = *(unsigned int *)(v7 + 160);
        v11 = *(_QWORD *)(v5 + 16);
        v12 = *(_QWORD *)(v7 + 144);
        if ( (_DWORD)v10 )
        {
          LODWORD(v13) = (v10 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
          v14 = v12 + 16LL * (unsigned int)v13;
          if ( v11 != *(_QWORD *)v14 )
          {
            if ( *(_QWORD *)v14 == -4096 )
              goto LABEL_20;
            v21 = 1;
            while ( 1 )
            {
              v13 = ((_DWORD)v10 - 1) & (unsigned int)(v13 + v21);
              v14 = v12 + 16 * v13;
              if ( v11 == *(_QWORD *)v14 )
                break;
              ++v21;
              if ( *(_QWORD *)v14 == -4096 )
                goto LABEL_20;
            }
          }
          if ( v14 != v12 + 16 * v10 )
          {
LABEL_10:
            v15 = *(_DWORD *)(v14 + 8);
LABEL_11:
            v16 = sub_9B8790((__int64 *)(v7 + 216), 24, 3u);
            *(_BYTE *)(v16 + 8) = 2;
            *(_QWORD *)v16 = off_2B40528;
            *(_DWORD *)(v16 + 12) = v8;
            *(_DWORD *)(v16 + 16) = v15;
            LOWORD(v3) = sub_9B58F0((__int64)(a1 + 2), v16);
            return v3;
          }
        }
LABEL_20:
        v22 = sub_9B6470(v9, v11);
        v7 = *a1;
        v15 = v22;
        goto LABEL_11;
      }
      v17 = *(unsigned int *)(v7 + 184);
      v18 = *(_QWORD *)(v7 + 168);
      if ( (_DWORD)v17 )
      {
        LODWORD(v19) = (v17 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
        v14 = v18 + 16LL * (unsigned int)v19;
        if ( v5 != *(_QWORD *)v14 )
        {
          if ( *(_QWORD *)v14 == -4096 )
            goto LABEL_15;
          v23 = 1;
          while ( 1 )
          {
            v19 = ((_DWORD)v17 - 1) & (unsigned int)(v19 + v23);
            v14 = v18 + 16 * v19;
            if ( v5 == *(_QWORD *)v14 )
              break;
            ++v23;
            if ( *(_QWORD *)v14 == -4096 )
              goto LABEL_15;
          }
        }
        if ( v14 != v18 + 16 * v17 )
          goto LABEL_10;
      }
LABEL_15:
      v20 = sub_9B6620((__int64)v9, v5);
      v7 = *a1;
      v15 = v20;
      goto LABEL_11;
    }
  }
  return v3;
}
