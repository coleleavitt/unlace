unsigned __int64 __fastcall sub_7BFE30(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx
  char *v5; // rbp
  char *v6; // r12
  char v8; // bl
  __int64 v9; // rax
  _QWORD *v10; // rcx
  char v11; // al
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  char v23; // [rsp+Eh] [rbp-8Ah] BYREF
  bool v24; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v25; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+18h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v28[13]; // [rsp+30h] [rbp-68h] BYREF

  v25 = *(_QWORD *)(a1 + 40);
  v3 = sub_C87220(&v25, a2, a3);
  if ( v3 <= 1 )
  {
    if ( (*(_BYTE *)(a1 + 58) & 8) == 0 )
    {
      v4 = 0;
      if ( (_BYTE)a2 )
      {
        ptr[0] = v28;
        ptr[1] = (void *)0x800000000LL;
        sub_7BFD20(a1, (__int64)ptr);
        v5 = (char *)ptr[0];
        v6 = (char *)ptr[0] + 8 * LODWORD(ptr[1]);
        if ( v6 != ptr[0] )
        {
          do
          {
            v4 = sub_7BFE30(*(_QWORD *)v5, 0);
            if ( v4 )
              break;
            v5 += 8;
          }
          while ( v6 != v5 );
          v5 = (char *)ptr[0];
        }
        if ( v5 != (char *)v28 )
          free(v5);
      }
      return v4;
    }
    v8 = v3;
    v9 = *(_QWORD *)(sub_79A2E0(a1 + 48) + 16);
    v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v9 & 4) != 0 )
      v10 = (_QWORD *)*v10;
    if ( !v10 )
      BUG();
    v11 = *(_BYTE *)(a1 + 58);
    v12 = (__int64)(v10 - 6);
    if ( (*((_BYTE *)v10 - 20) & 0x7Fu) - 19 <= 1 && (v11 & 0x10) != 0 )
      v12 = v10[5];
    v28[0] = &v25;
    v24 = (v11 & 2) != 0;
    v23 = (v8 ^ 1) & 1;
    *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v24, (__m128i)(unsigned __int64)&v23);
    v4 = sub_7B4220((__int64)ptr, v12);
    if ( v4 )
      return v4;
    if ( (*(_BYTE *)(v12 + 28) & 0x7F) == 0x15 )
    {
      v13 = *(_QWORD *)(v12 + 88);
      v4 = sub_7B4220((__int64)ptr, v13);
      if ( v4 )
        return v4;
    }
    else
    {
      v13 = v12;
    }
    v14 = *(_QWORD *)(v13 + 120);
    if ( !v14 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v13 + 96) + 88LL), *(_QWORD *)(v13 + 96));
      v14 = *(_QWORD *)(v13 + 120);
    }
    if ( v14 <= 7 )
    {
      v16 = 0;
    }
    else
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v15 + 72) & 1) != 0 )
      {
        sub_7B7DB0(v13);
        v15 = *(_QWORD *)(v13 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v16 = *(_QWORD *)(v15 + 56);
    }
    v26 = v16;
    sub_7BC620(&v26);
    v17 = v26;
    if ( !v26 )
    {
LABEL_35:
      v20 = *(_QWORD *)(v13 + 120);
      if ( !v20 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v13 + 96) + 88LL), *(_QWORD *)(v13 + 96));
        v20 = *(_QWORD *)(v13 + 120);
      }
      if ( v20 <= 7 )
      {
        v22 = 0;
      }
      else
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v21 + 72) & 1) != 0 )
        {
          sub_7B7DB0(v13);
          v21 = *(_QWORD *)(v13 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v22 = *(_QWORD *)(v21 + 56);
      }
      while ( 1 )
      {
        if ( v12 != v22 )
        {
          v4 = sub_7B4220((__int64)ptr, v22);
          if ( v4 )
            break;
        }
        v22 = *(_QWORD *)(v22 + 128);
      }
      return v4;
    }
LABEL_27:
    if ( v12 == v17 || (v18 = sub_7B4220((__int64)ptr, v17)) == 0 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v17 + 128);
        if ( !v17 )
          goto LABEL_35;
        while ( *(char *)(v17 + 28) >= 0 )
        {
          v19 = *(_QWORD *)(v17 + 40);
          if ( (v19 & 7) == 0 && v19 > 7 )
            break;
          if ( (*(_BYTE *)(v17 + 8) & 6) == 0 )
            goto LABEL_27;
          v17 = *(_QWORD *)(v17 + 128);
          if ( !v17 )
            goto LABEL_35;
        }
      }
    }
    return v18;
  }
  return 0;
}

