void __fastcall sub_697AC0(__int64 a1, int a2, int a3)
{
  char v4; // dl
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // r15
  char v18; // dl
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // r12
  __int64 *v22; // rdi
  __int64 v23; // rsi
  _DWORD *v24; // rax
  _DWORD *v25; // rcx
  __int64 *v26; // rdi
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  _BYTE v30[57]; // [rsp+Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 24);
  if ( !v4 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
    v8 = *(int *)(v7 + 448);
    v30[0] = 0;
    if ( (unsigned int)(v8 + 1) <= 1 )
      goto LABEL_20;
    if ( (int)v8 >= 0 )
    {
      v9 = *(_QWORD *)(v7 + 184) + 24 * v8;
      goto LABEL_6;
    }
    v15 = (unsigned int)(-2 - v8);
    v16 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v16, v15) )
    {
      v17 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v15 >> 5));
      if ( *v17 )
      {
        v9 = *v17 + 24 * (v15 & 0x1F);
LABEL_6:
        if ( *(char *)(v9 + 3) >= 0 )
        {
          v10 = *(_DWORD *)v9 & 0x7FFFFFFF;
LABEL_8:
          if ( a2 != v10 || a3 )
            return;
          *(_BYTE *)(a1 + 24) = 1;
          v11 = *(int *)(v7 + 448);
          v12 = *(_QWORD *)(a1 + 16);
          v30[0] = 0;
          if ( (unsigned int)(v11 + 1) <= 1 )
            goto LABEL_26;
          if ( (int)v11 >= 0 )
          {
            v13 = *(_QWORD *)(v7 + 184) + 24 * v11;
            goto LABEL_13;
          }
          v19 = (unsigned int)(-2 - v11);
          v20 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v11) >> 6));
          if ( _bittest64(&v20, v19) )
          {
            v21 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v19 >> 5));
            if ( *v21 )
            {
              v13 = *v21 + 24 * (v19 & 0x1F);
LABEL_13:
              if ( *(char *)(v13 + 3) >= 0 )
              {
                v14 = *(_QWORD *)((*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_15:
                sub_67B460(v12, v14);
                return;
              }
LABEL_26:
              v14 = 0;
              goto LABEL_15;
            }
            v26 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
            v27 = *v26;
            v26[10] += 768;
            v28 = (_DWORD *)((v27 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v26[1] >= (unsigned __int64)(v28 + 192) && v27 )
              *v26 = (__int64)(v28 + 192);
            else
              v28 = (_DWORD *)sub_696B80((__int64)v26, 768, 3);
            *v21 = v28;
            v29 = v28 + 192;
            do
            {
              *v28 = 0;
              v28 += 6;
              *((_OWORD *)v28 - 1) = 0;
            }
            while ( v29 != v28 );
            v18 = v30[0];
            v13 = *v21 + 24 * (v19 & 0x1F);
          }
          else
          {
            v13 = sub_CA9380(v7, (unsigned int)v19, v30);
            v18 = v30[0];
          }
          if ( v18 || !v13 )
            goto LABEL_26;
          goto LABEL_13;
        }
LABEL_20:
        v10 = 0;
        goto LABEL_8;
      }
      v22 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v23 = *v22;
      v22[10] += 768;
      v24 = (_DWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v22[1] >= (unsigned __int64)(v24 + 192) && v23 )
      {
        *v22 = (__int64)(v24 + 192);
      }
      else
      {
        v24 = (_DWORD *)sub_696B80((__int64)v22, 768, 3);
        v4 = v30[0];
      }
      *v17 = v24;
      v25 = v24 + 192;
      do
      {
        *v24 = 0;
        v24 += 6;
        *((_OWORD *)v24 - 1) = 0;
      }
      while ( v25 != v24 );
      v9 = *v17 + 24 * (v15 & 0x1F);
    }
    else
    {
      v9 = sub_CA9380(v7, (unsigned int)v15, v30);
      v4 = v30[0];
    }
    if ( v4 || !v9 )
      goto LABEL_20;
    goto LABEL_6;
  }
}

