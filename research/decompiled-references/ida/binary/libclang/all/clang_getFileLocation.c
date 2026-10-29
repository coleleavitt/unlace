void __fastcall clang_getFileLocation(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  int v13; // esi
  unsigned __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned __int64 v16; // r15
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  char v21; // dl
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r10
  __int64 *v25; // rdi
  __int64 v26; // rsi
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  unsigned int v29; // [rsp+Ch] [rbp-5Ch]
  unsigned int v30; // [rsp+Ch] [rbp-5Ch]
  unsigned int v31; // [rsp+Ch] [rbp-5Ch]
  unsigned int v32; // [rsp+10h] [rbp-58h]
  unsigned int v33; // [rsp+10h] [rbp-58h]
  char v34; // [rsp+14h] [rbp-54h]
  _QWORD *v35; // [rsp+18h] [rbp-50h]
  _BYTE v36[57]; // [rsp+2Fh] [rbp-39h] BYREF

  if ( (a7 & 1) != 0 )
  {
    sub_68C870(a1, a2, a3, a4, a5, a6, a7);
    return;
  }
  v13 = a9;
  if ( a9 && a7 )
  {
    if ( a9 < 0 )
      v13 = sub_CADBE0(a7, (unsigned int)a9);
    v14 = sub_633200(a7, v13);
    v15 = v14;
    if ( (_DWORD)v14 )
    {
      v16 = HIDWORD(v14);
      v17 = HIDWORD(v14);
      if ( !a1 )
      {
LABEL_14:
        if ( a2 )
        {
          v32 = v17;
          v29 = v15;
          v20 = sub_CAB8D0(a7, v15, v17, 0);
          v17 = v32;
          v15 = v29;
          *a2 = v20;
        }
        if ( a3 )
          *a3 = sub_CAC390(a7, v15, v17, 0);
        if ( a4 )
          *a4 = v16;
        return;
      }
      v36[0] = 0;
      if ( (unsigned int)(v14 + 1) <= 1 )
        goto LABEL_33;
      if ( (v14 & 0x80000000) == 0LL )
      {
        v18 = *(_QWORD *)(a7 + 184) + 24LL * (int)v14;
        goto LABEL_11;
      }
      v22 = (unsigned int)(-2 - v14);
      v23 = *(_QWORD *)(*(_QWORD *)(a7 + 256) + 8LL * ((unsigned int)(-2 - v14) >> 6));
      if ( _bittest64(&v23, v22) )
      {
        v24 = (_QWORD *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v22 >> 5));
        if ( *v24 )
        {
          v18 = *v24 + 24 * (v22 & 0x1F);
LABEL_11:
          if ( *(char *)(v18 + 3) >= 0 )
          {
            v19 = *(_QWORD *)((*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_13:
            *a1 = v19;
            goto LABEL_14;
          }
LABEL_33:
          v19 = 0;
          goto LABEL_13;
        }
        v25 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v26 = *v25;
        v25[10] += 768;
        v27 = (_DWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v25[1] >= (unsigned __int64)(v27 + 192) && v26 )
        {
          *v25 = (__int64)(v27 + 192);
        }
        else
        {
          v35 = v24;
          v34 = v22;
          v33 = v17;
          v31 = v15;
          v27 = (_DWORD *)sub_68E100((__int64)v25, 768, 3);
          v24 = v35;
          LOBYTE(v22) = v34;
          v17 = v33;
          v15 = v31;
        }
        *v24 = v27;
        v28 = v27 + 192;
        do
        {
          *v27 = 0;
          v27 += 6;
          *((_OWORD *)v27 - 1) = 0;
        }
        while ( v27 != v28 );
        v21 = v36[0];
        v18 = *v24 + 24 * (v22 & 0x1F);
      }
      else
      {
        v30 = v15;
        v18 = sub_CA9380(a7, (unsigned int)v22, v36);
        v21 = v36[0];
        v15 = v30;
        v17 = v16;
      }
      if ( v21 || !v18 )
        goto LABEL_33;
      goto LABEL_11;
    }
  }
  if ( a1 )
    *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
}

