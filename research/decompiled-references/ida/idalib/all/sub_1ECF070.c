__int64 __fastcall sub_1ECF070(__int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4, unsigned __int8 a5)
{
  unsigned __int64 v5; // r15
  int *v6; // rbp
  int v7; // eax
  _QWORD *v8; // rbx
  _DWORD *v9; // r13
  bool v10; // zf
  __int64 i; // rax
  __int64 v12; // rax
  char v13; // r9
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  size_t v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // r12d
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  void *v29; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
  v6 = *(int **)(v5 + 32);
  if ( v6 )
  {
    v7 = *v6;
    v29 = *(void **)(v5 + 32);
    *v6 = v7 + 2;
  }
  else
  {
    v29 = nullptr;
  }
  v8 = (_QWORD *)operator new(0x3B90u);
  sub_FCA6E0((__int64)v8, (__int64 *)&v29, a2, 0, 1);
  v9 = v29;
  ++*(_DWORD *)v8;
  if ( v9 )
  {
    v10 = (*v9)-- == 1;
    if ( v10 )
    {
      sub_FD5580((__int64)v9);
      operator delete(v9, 0x18u);
    }
  }
  sub_10CE470((__int64)v8, a2, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 8LL), 0);
  for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 168LL)
                      - 8); *(_DWORD *)(i + 3272); i = **(_QWORD **)(i + 3264) )
    ;
  if ( *(_DWORD *)(i + 4)
    || (v27 = sub_13C9950(
                *(__int64 **)(*(_QWORD *)(a1 + 8) + 104LL),
                *(_QWORD *)(i + 40),
                *(_QWORD *)(i + 48),
                *(unsigned int *)(i + 812),
                1,
                0)) == 0 )
  {
    v21 = 0;
    v10 = (*(_DWORD *)v8)-- == 1;
    if ( !v10 )
      goto LABEL_22;
LABEL_36:
    sub_FCAA60(v8);
    operator delete(v8, 0x3B90u);
    goto LABEL_22;
  }
  v12 = sub_145C8F0(*(_QWORD *)(a1 + 8));
  v13 = 0;
  v14 = v12;
  if ( v12 )
  {
    v15 = *(_QWORD *)(v5 + 40);
    v16 = *(_QWORD *)(v15 + 240);
    v25 = *(_QWORD *)(v15 + 248);
    v17 = (v25 - v16) >> 7;
    v18 = (v25 - v16) >> 5;
    if ( v17 > 0 )
    {
      v19 = *(_QWORD *)(v14 + 8);
      v28 = v16 + (v17 << 7);
      while ( *(_QWORD *)(v16 + 8) != v19 || v19 && memcmp(*(const void **)v16, *(const void **)v14, v19) )
      {
        if ( v19 == *(_QWORD *)(v16 + 40) && (!v19 || !memcmp(*(const void **)(v16 + 32), *(const void **)v14, v19)) )
        {
          v13 = v25 != v16 + 32;
          goto LABEL_21;
        }
        if ( v19 == *(_QWORD *)(v16 + 72) && (!v19 || !memcmp(*(const void **)(v16 + 64), *(const void **)v14, v19)) )
        {
          v13 = v25 != v16 + 64;
          goto LABEL_21;
        }
        if ( v19 == *(_QWORD *)(v16 + 104) && (!v19 || !memcmp(*(const void **)(v16 + 96), *(const void **)v14, v19)) )
        {
          v13 = v25 != v16 + 96;
          goto LABEL_21;
        }
        v16 += 128;
        if ( v16 == v28 )
        {
          v18 = (v25 - v16) >> 5;
          goto LABEL_39;
        }
      }
      goto LABEL_20;
    }
LABEL_39:
    if ( v18 != 2 )
    {
      if ( v18 != 3 )
      {
        if ( v18 != 1 )
        {
LABEL_42:
          v13 = 0;
          goto LABEL_21;
        }
LABEL_47:
        if ( !sub_1EA9620(v14, v16) )
          goto LABEL_42;
LABEL_20:
        v13 = v25 != v16;
        goto LABEL_21;
      }
      if ( sub_1EA9620(v14, v16) )
        goto LABEL_20;
      v16 += 32;
    }
    if ( sub_1EA9620(v14, v16) )
      goto LABEL_20;
    v16 += 32;
    goto LABEL_47;
  }
LABEL_21:
  v20 = sub_1ECEB70((unsigned __int64)v8, v5, a3, a4, (*(_BYTE *)(v27 + 904) & 0x40) != 0, v13, a5);
  v10 = (*(_DWORD *)v8)-- == 1;
  v21 = v20;
  if ( v10 )
    goto LABEL_36;
LABEL_22:
  if ( v6 )
  {
    v10 = (*v6)-- == 1;
    if ( v10 )
    {
      sub_FD5580((__int64)v6);
      operator delete(v6, 0x18u);
    }
  }
  return v21;
}
