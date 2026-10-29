__int64 __fastcall sub_AA3E20(unsigned int *a1, __int64 a2)
{
  char v3; // dl
  char v5; // al
  char v6; // r9
  int v7; // r8d
  unsigned int v8; // edi
  unsigned int v9; // ecx
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v20; // rbx
  char v21; // dl
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rsi
  char v26; // si
  void **v27; // rsi
  void *v28; // rbp

  v3 = *((_BYTE *)a1 + 7);
  v5 = v3;
  v6 = v3 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    v7 = v3 & 3;
    v8 = a1[1] & 0xFFFFFF;
    v9 = v7 - 2;
    if ( (unsigned int)(v7 - 2) <= 1 )
    {
      v10 = *(_QWORD *)(((unsigned __int64)&a1[v8 + 4] + 3) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v10 )
      {
        v6 = 32;
LABEL_30:
        v26 = v5 & 0x40;
        if ( (v5 & 0x40) != 0 )
        {
          v27 = (void **)(((unsigned __int64)&a1[v8 + 4] + 3) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v6 )
            ++v27;
          v28 = *v27;
          if ( *v27 )
          {
            (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v28 + 24LL))(v28, a2);
            (**(void (__fastcall ***)(void *))v28)(v28);
            sub_186B220(v28);
            v3 = *((_BYTE *)a1 + 7);
            v8 = a1[1] & 0xFFFFFF;
            v7 = v3 & 3;
            v26 = v3 & 0x40;
            v6 = v3 & 0x20;
            v9 = v7 - 2;
            if ( (v3 & 8) == 0 )
              goto LABEL_35;
            goto LABEL_38;
          }
          if ( (v5 & 8) != 0 )
          {
            v26 = 64;
LABEL_38:
            v12 = *a1;
            if ( (_DWORD)v12 )
              goto LABEL_8;
LABEL_35:
            v11 = v26;
            goto LABEL_19;
          }
          v20 = a2 + 40;
          v11 = 64;
          v21 = v5 & 0x10;
          v22 = 4 * v8 + 8;
        }
        else
        {
          v11 = v5 & 8;
          if ( (v5 & 8) != 0 )
            goto LABEL_38;
          v20 = a2 + 40;
          v21 = v5 & 0x10;
          v22 = 4 * v8 + 8;
        }
LABEL_20:
        v22 += 4;
        goto LABEL_21;
      }
    }
    else
    {
      v10 = *(_QWORD *)(((unsigned __int64)&a1[v8 + 3] + 3) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v10 )
      {
        v26 = v3 & 0x40;
        if ( (v3 & 8) == 0 )
        {
          v20 = a2 + 40;
          v21 = v3 & 0x10;
          v11 = v26;
          v6 = 32;
          v22 = 4 * v8 + 8;
          goto LABEL_21;
        }
        v6 = 32;
        goto LABEL_38;
      }
    }
    (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v10 + 16LL))(v10, a2, a1);
    v5 = *((_BYTE *)a1 + 7);
    v3 = v5;
    v6 = v5 & 0x20;
  }
  v7 = v5 & 3;
  v9 = v7 - 2;
  v8 = a1[1] & 0xFFFFFF;
  if ( (unsigned int)(v7 - 2) <= 1 )
    goto LABEL_30;
  v11 = v5 & 0x40;
  if ( (v5 & 8) != 0 )
  {
    v12 = *a1;
    if ( (_DWORD)v12 )
    {
LABEL_8:
      v13 = 8 * v12;
      v14 = 0;
      do
      {
        while ( 1 )
        {
          v9 = v7 - 2;
          v15 = (__int64)&a1[v8 + 2];
          if ( (unsigned int)(v7 - 2) < 2 )
            v15 += 4;
          v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v6 = v3 & 0x20;
          if ( (v3 & 0x20) != 0 )
            v16 += 8LL;
          v11 = v3 & 0x40;
          if ( (v3 & 0x40) != 0 )
            v16 += 8LL;
          v17 = *(_QWORD *)(v16 + v14);
          if ( v17 > 7 )
          {
            v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_DWORD *)(v18 + 8))-- == 1 )
              break;
          }
          v14 += 8;
          if ( v14 == v13 )
            goto LABEL_19;
        }
        v14 += 8;
        sub_15D7BC0(a2, v18);
        v3 = *((_BYTE *)a1 + 7);
        v8 = a1[1] & 0xFFFFFF;
        v7 = v3 & 3;
        v11 = v3 & 0x40;
        v6 = v3 & 0x20;
        v9 = v7 - 2;
      }
      while ( v14 != v13 );
LABEL_19:
      v20 = a2 + 40;
      v21 = v3 & 0x10;
      v22 = 4 * v8 + 8;
      if ( v9 > 1 )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
  v20 = a2 + 40;
  v21 = v5 & 0x10;
  v22 = 4 * v8 + 8;
LABEL_21:
  v23 = (v22 + 7) & 0xFFFFFFF8;
  if ( v21 )
    v23 += 8 * v8;
  if ( v6 )
    v23 += 8;
  v24 = v23 + 8;
  if ( !v11 )
    v24 = v23;
  return sub_17E9C40(v20, v24, a1);
}

