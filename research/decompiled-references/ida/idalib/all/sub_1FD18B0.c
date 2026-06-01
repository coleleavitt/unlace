__int64 __fastcall sub_1FD18B0(__int64 *a1, unsigned __int64 *a2, unsigned __int64 **a3)
{
  int v3; // r8d
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 *v13; // rcx
  __int64 v14; // r15
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // al
  unsigned __int64 *v23; // rcx
  char v24; // al
  unsigned __int64 *v25; // [rsp+0h] [rbp-50h]
  int v26; // [rsp+8h] [rbp-48h]
  int v27; // [rsp+Ch] [rbp-44h]
  unsigned __int64 **v28; // [rsp+10h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *a2;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( !v8 )
      {
LABEL_7:
        v10 = -1916529075;
        goto LABEL_8;
      }
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v8 & 4) == 0 )
        break;
      v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        goto LABEL_7;
    }
    v20 = HIDWORD(v9);
    v21 = 0x9DDFEA08EB382D69LL * (v20 ^ (((8 * v8) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v10 = -348639895
        * (((unsigned int)((0x9DDFEA08EB382D69LL * (v21 ^ v20 ^ (v21 >> 47))) >> 32) >> 15)
         ^ (-348639895 * (v21 ^ v20 ^ (v21 >> 47))));
LABEL_8:
    v11 = v3 - 1;
    v12 = 1;
    v13 = nullptr;
    v14 = v11 & (unsigned int)v10;
    v15 = (unsigned __int64 *)(v6 + 16 * v14);
    v16 = *v15;
    if ( *v15 != v5 )
    {
      while ( 1 )
      {
        if ( v5 != -4096 && v5 != -8192 && v16 != -4096 && v16 != -8192 )
        {
          v17 = v5;
          do
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( !v18 )
            {
              v17 = 0;
              break;
            }
            v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          }
          while ( (v18 & 4) != 0 && v17 );
          while ( 1 )
          {
            v19 = *(_QWORD *)(v16 + 8);
            if ( !v19 )
              break;
            v16 = v19 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v19 & 4) == 0 || !v16 )
              goto LABEL_20;
          }
          v16 = 0;
LABEL_20:
          if ( v17 == v16 )
            break;
        }
        v28 = a3;
        v27 = v12;
        v25 = v13;
        v26 = v11;
        v22 = sub_FEE490(*v15, 0xFFFFFFFFFFFFF000LL);
        v23 = v25;
        if ( v22 )
        {
          if ( !v25 )
            v23 = v15;
          *v28 = v23;
          return 0;
        }
        v24 = sub_FEE490(*v15, 0xFFFFFFFFFFFFE000LL);
        v13 = v25;
        v11 = v26;
        a3 = v28;
        if ( !v25 && v24 )
          v13 = v15;
        v14 = v26 & (unsigned int)(v14 + v27);
        v15 = (unsigned __int64 *)(v6 + 16 * v14);
        v16 = *v15;
        if ( *v15 == v5 )
          break;
        v12 = v27 + 1;
      }
    }
    *a3 = v15;
    return 1;
  }
  else
  {
    *a3 = nullptr;
    return 0;
  }
}
