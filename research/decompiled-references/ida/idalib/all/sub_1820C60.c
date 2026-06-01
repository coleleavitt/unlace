void __fastcall sub_1820C60(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _WORD *v17; // rcx
  __m128i *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rax
  __int64 *v27; // r13
  char *v28; // rax
  __int64 v29; // rcx
  char *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  char *v33; // rcx
  size_t v34; // rdx
  unsigned int v35; // ecx
  _WORD **v36; // rax
  char *v37; // rsi
  char *i; // rax
  unsigned int v39; // [rsp+8h] [rbp-100h] BYREF
  int v40; // [rsp+Ch] [rbp-FCh] BYREF
  __int64 v41; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-F0h] BYREF
  void *s2; // [rsp+20h] [rbp-E8h] BYREF
  size_t v44; // [rsp+28h] [rbp-E0h]
  void *v45[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v47[184]; // [rsp+50h] [rbp-B8h] BYREF

  s2 = nullptr;
  v44 = 0;
  v39 = 0;
  if ( !(unsigned __int8)sub_181F2D0(a1, (__int64)a3, &s2, &v39, a4, a5) )
    return;
  v8 = v39;
  sub_18067E0(&v41, a1, (int)s2, v44);
  if ( v41 )
  {
    sub_168B9F0((__int64)v47, (__int64 *)(a1 + 8), v8, 0xC96u, 0);
    v23 = v41;
    v41 = 0;
    v42 = v23;
    sub_2221210(v45, &v42);
    v24 = sub_1682AF0((__int64)v47, (__int64)v45);
    v40 = 0;
    sub_1587D10(v24, &v40);
    if ( v45[0] != &v46 )
      operator delete(v45[0]);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
    sub_15F7200(v47);
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_9;
    v13 = sub_B8C3D0(a2, a1, v9, v10, v11, v12);
    v15 = *v13;
    v16 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( v15 >= v16 )
    {
      if ( v15 == v16 )
        goto LABEL_9;
      v17 = *(_WORD **)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 178 )
      {
        v36 = (_WORD **)(v16 + 8);
        while ( v36 != (_WORD **)v15 )
        {
          v17 = *v36++;
          if ( v17[18] == 178 )
            goto LABEL_18;
        }
        goto LABEL_9;
      }
    }
    else
    {
      v17 = (_WORD *)v15;
      while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 178 )
      {
        v17 += 4;
        if ( (_WORD *)v16 == v17 )
          goto LABEL_9;
      }
      if ( (_WORD *)v16 == v17 )
        goto LABEL_9;
    }
LABEL_18:
    v25 = *(_QWORD *)v15;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 178 )
    {
      v26 = (__int64 *)(v15 + 8);
      do
        v25 = *v26++;
      while ( *(_WORD *)(v25 + 36) != 178 );
    }
    if ( (*(_BYTE *)(v25 + 38) & 4) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v27 = sub_B8C3D0(a2, v25, v15, (__int64)v17, v14, v12);
        v28 = (char *)*v27;
        v29 = 8LL * *((unsigned int *)v27 + 2);
        v30 = (char *)(*v27 + v29);
        v31 = v29 >> 3;
        v32 = v29 >> 5;
        if ( v32 )
        {
          if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 178 )
          {
            v37 = (char *)*v27;
          }
          else if ( *(_WORD *)(*((_QWORD *)v28 + 1) + 36LL) == 178 )
          {
            v37 = v28 + 8;
          }
          else if ( *(_WORD *)(*((_QWORD *)v28 + 2) + 36LL) == 178 )
          {
            v37 = v28 + 16;
          }
          else
          {
            v33 = &v28[32 * v32];
            if ( *(_WORD *)(*((_QWORD *)v28 + 3) + 36LL) == 178 )
            {
              v37 = v28 + 24;
            }
            else
            {
              while ( 1 )
              {
                v37 = v28 + 32;
                if ( v33 == v28 + 32 )
                {
                  v31 = (v30 - v37) >> 3;
                  goto LABEL_36;
                }
                if ( *(_WORD *)(*((_QWORD *)v28 + 4) + 36LL) == 178 )
                  goto LABEL_52;
                if ( *(_WORD *)(*((_QWORD *)v28 + 5) + 36LL) == 178 )
                {
                  v37 = v28 + 40;
                  goto LABEL_52;
                }
                if ( *(_WORD *)(*((_QWORD *)v28 + 6) + 36LL) == 178 )
                {
                  v37 = v28 + 48;
                  goto LABEL_52;
                }
                if ( *(_WORD *)(*((_QWORD *)v28 + 7) + 36LL) == 178 )
                  break;
                v28 += 32;
              }
              v37 = v28 + 56;
            }
          }
          goto LABEL_52;
        }
        v37 = (char *)*v27;
LABEL_36:
        if ( v31 != 2 )
        {
          if ( v31 != 3 )
          {
            if ( v31 != 1 )
            {
LABEL_39:
              v37 = v30;
LABEL_40:
              sub_17A9430(v27, v37, v30);
              if ( !*((_DWORD *)v27 + 2) )
                *(_BYTE *)(a2 + 29) &= ~1u;
              goto LABEL_9;
            }
LABEL_65:
            if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 178 )
              goto LABEL_39;
LABEL_52:
            if ( v30 != v37 )
            {
              for ( i = v37 + 8; v30 != i; i += 8 )
              {
                if ( *(_WORD *)(*(_QWORD *)i + 36LL) != 178 )
                {
                  *(_QWORD *)v37 = *(_QWORD *)i;
                  v37 += 8;
                }
              }
            }
            goto LABEL_40;
          }
          if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 178 )
            goto LABEL_52;
          v37 += 8;
        }
        if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 178 )
          goto LABEL_52;
        v37 += 8;
        goto LABEL_65;
      }
LABEL_9:
      v18 = sub_180ADB0(a1, a2, a3, s2, v44, v12);
      if ( v18 )
        sub_B8CC60(a2, (__int64)v18, v19, v20, v21, v22);
      return;
    }
    v34 = *(unsigned int *)(v25 + 40);
    v35 = 3465;
    if ( v34 == v44 )
    {
      v35 = 6861;
      if ( *(_DWORD *)(v25 + 40) )
        v35 = memcmp(*(const void **)(v25 + 48), s2, v34) == 0 ? 6861 : 3465;
    }
    sub_168B9F0((__int64)v47, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], v35, 0);
    sub_15F7200(v47);
  }
}
