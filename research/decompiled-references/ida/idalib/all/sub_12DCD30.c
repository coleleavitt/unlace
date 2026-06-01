__int64 __fastcall sub_12DCD30(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  void **v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r15
  char *v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  char v13; // al
  char *v14; // r14
  _QWORD *v16; // r14
  _QWORD *i; // r15
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  char v20; // al
  void **v21; // r13
  void **v22; // rbx
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // rbx
  _QWORD *v26; // rax
  char *v27; // rdi
  char v28; // al
  unsigned __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h]

  if ( a2 != (__int64 *)a1 )
  {
    v3 = *a2;
    v4 = *(void ***)a1;
    v5 = a2[1];
    v30 = v5 - *a2;
    v6 = 0xCCCCCCCCCCCCCCCDLL * (v30 >> 3);
    v7 = v6;
    if ( 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) < v6 )
    {
      v16 = nullptr;
      if ( v6 )
      {
        if ( v6 > 0x666666666666666LL )
          std::__throw_bad_alloc();
        v16 = (_QWORD *)operator new(v30);
      }
      for ( i = v16; v5 != v3; *((_BYTE *)i - 4) = *(_BYTE *)(v3 - 4) & 2 | v20 & 0xFD )
      {
        v18 = i + 2;
        v19 = i;
        v3 += 40;
        i += 5;
        *(i - 5) = v18;
        sub_12DB130(v19, *(_BYTE **)(v3 - 40), *(_QWORD *)(v3 - 40) + *(_QWORD *)(v3 - 32));
        *((_DWORD *)i - 2) = *(_DWORD *)(v3 - 8);
        v20 = *(_BYTE *)(v3 - 4) & 1 | *((_BYTE *)i - 4) & 0xFE;
        *((_BYTE *)i - 4) = v20;
      }
      v21 = *(void ***)(a1 + 8);
      v22 = *(void ***)a1;
      if ( v21 != *(void ***)a1 )
      {
        do
        {
          while ( *v22 != v22 + 2 )
          {
            operator delete(*v22);
            v22 += 5;
            if ( v21 == v22 )
              goto LABEL_20;
          }
          v22 += 5;
        }
        while ( v21 != v22 );
LABEL_20:
        v22 = *(void ***)a1;
      }
      if ( v22 )
        operator delete(v22);
      *(_QWORD *)a1 = v16;
      v14 = (char *)v16 + v30;
      *(_QWORD *)(a1 + 16) = v14;
      goto LABEL_10;
    }
    v8 = *(char **)(a1 + 8);
    v9 = v8 - (char *)v4;
    v10 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - (char *)v4) >> 3);
    if ( v6 > v10 )
    {
      if ( v9 > 0 )
      {
        do
        {
          v23 = v3;
          v29 = v10;
          v3 += 40;
          sub_9EE8A0((__int64)v4, v23);
          v4 += 5;
          *((_DWORD *)v4 - 2) = *(_DWORD *)(v3 - 8);
          v24 = *(_BYTE *)(v3 - 4) & 1 | *((_BYTE *)v4 - 4) & 0xFE;
          *((_BYTE *)v4 - 4) = v24;
          *((_BYTE *)v4 - 4) = *(_BYTE *)(v3 - 4) & 2 | v24 & 0xFD;
          v10 = v29 - 1;
        }
        while ( v29 != 1 );
        v8 = *(char **)(a1 + 8);
        v4 = *(void ***)a1;
        v5 = a2[1];
        v3 = *a2;
        v9 = (__int64)&v8[-*(_QWORD *)a1];
      }
      v25 = v9 + v3;
      if ( v25 == v5 )
      {
        v14 = (char *)v4 + v30;
        goto LABEL_10;
      }
      do
      {
        v26 = v8 + 16;
        v27 = v8;
        v25 += 40;
        v8 += 40;
        *((_QWORD *)v8 - 5) = v26;
        sub_12DB130(v27, *(_BYTE **)(v25 - 40), *(_QWORD *)(v25 - 40) + *(_QWORD *)(v25 - 32));
        *((_DWORD *)v8 - 2) = *(_DWORD *)(v25 - 8);
        v28 = *(_BYTE *)(v25 - 4) & 1 | *(v8 - 4) & 0xFE;
        *(v8 - 4) = v28;
        *(v8 - 4) = *(_BYTE *)(v25 - 4) & 2 | v28 & 0xFD;
      }
      while ( v25 != v5 );
    }
    else
    {
      if ( v30 > 0 )
      {
        do
        {
          v11 = v3;
          v12 = (__int64)v4;
          v3 += 40;
          v4 += 5;
          sub_9EE8A0(v12, v11);
          *((_DWORD *)v4 - 2) = *(_DWORD *)(v3 - 8);
          v13 = *(_BYTE *)(v3 - 4) & 1 | *((_BYTE *)v4 - 4) & 0xFE;
          *((_BYTE *)v4 - 4) = v13;
          *((_BYTE *)v4 - 4) = *(_BYTE *)(v3 - 4) & 2 | v13 & 0xFD;
          --v7;
        }
        while ( v7 );
      }
      while ( v8 != (char *)v4 )
      {
        while ( *v4 != v4 + 2 )
        {
          operator delete(*v4);
          v4 += 5;
          if ( v8 == (char *)v4 )
            goto LABEL_9;
        }
        v4 += 5;
      }
    }
LABEL_9:
    v14 = (char *)(*(_QWORD *)a1 + v30);
LABEL_10:
    *(_QWORD *)(a1 + 8) = v14;
  }
  return a1;
}
