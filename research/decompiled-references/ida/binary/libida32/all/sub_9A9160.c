void __fastcall sub_9A9160(
        __int64 a1,
        __int64 a2,
        unsigned __int16 **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rbp
  unsigned __int16 v15; // r9
  __int64 v16; // rdx
  char v17; // al
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  int v20; // eax
  __int64 v21; // r15
  void (*v22)(); // r14
  _BYTE *v23; // rdi
  char *v24; // rdi
  char *v25; // r12
  bool v26; // al
  char *v27; // r13
  _BYTE *v28; // rdi
  bool v29; // al
  __int64 v30; // r15
  __int64 *v31; // r15
  char *v32; // r14
  __int64 v33; // r13
  __int64 *v34; // r13
  unsigned int v36; // [rsp+10h] [rbp-C8h]
  void (*v37)(); // [rsp+10h] [rbp-C8h]
  unsigned __int16 v38; // [rsp+18h] [rbp-C0h]
  unsigned int v39; // [rsp+18h] [rbp-C0h]
  __int64 v40; // [rsp+18h] [rbp-C0h]
  __int64 *v41; // [rsp+20h] [rbp-B8h]
  __int64 v42; // [rsp+28h] [rbp-B0h]
  unsigned int v47; // [rsp+5Ch] [rbp-7Ch]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __m128i si128; // [rsp+68h] [rbp-70h]
  char v50; // [rsp+78h] [rbp-60h] BYREF
  __m128i v51; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v52[72]; // [rsp+90h] [rbp-48h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a2 + 8);
  ptr = &v50;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383D40);
  if ( v7 )
  {
    sub_9A6BA0(&ptr, (const void **)a2);
    v8 = *a3;
    v42 = (__int64)&(*a3)[(_QWORD)a3[1]];
    if ( *a3 != (unsigned __int16 *)v42 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      goto LABEL_3;
    }
LABEL_25:
    v24 = (char *)ptr;
    v25 = (char *)ptr + 2 * si128.m128i_i64[0];
    if ( v25 != ptr )
    {
      v26 = a6 == 3 || a6 == 0;
      if ( a6 == 1 )
      {
        v32 = (char *)ptr;
        if ( v26 )
        {
          do
          {
            v34 = *(__int64 **)(*(_QWORD *)(v6 + 544) + 8LL * *(unsigned __int16 *)v32);
            if ( !sub_9A6250((__int64)a3, (__int64 *)(v6 + 544), v34 + 1) )
            {
              (*(void (__fastcall **)(__int64 *, void **, __int64, _QWORD, __int64, _QWORD))(*v34 + 16))(
                v34,
                &ptr,
                v6 + 544,
                a4,
                1,
                *(_QWORD *)(v6 + 320));
              sub_9A6400((_QWORD *)a2, (__int64 *)(v6 + 544), v34 + 1);
            }
            v32 += 2;
          }
          while ( v25 != v32 );
        }
        else
        {
          do
          {
            v33 = *(_QWORD *)(*(_QWORD *)(v6 + 544) + 8LL * *(unsigned __int16 *)v32);
            if ( !sub_9A6250((__int64)a3, (__int64 *)(v6 + 544), (__int64 *)(v33 + 8)) )
            {
              if ( *(_BYTE *)(v33 + 34) != 3 )
                (*(void (__fastcall **)(__int64, void **, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v33 + 16LL))(
                  v33,
                  &ptr,
                  v6 + 544,
                  a4,
                  1,
                  *(_QWORD *)(v6 + 320));
              sub_9A6400((_QWORD *)a2, (__int64 *)(v6 + 544), (__int64 *)(v33 + 8));
            }
            v32 += 2;
          }
          while ( v25 != v32 );
        }
      }
      else
      {
        v27 = (char *)ptr;
        if ( v26 )
        {
          do
          {
            v31 = *(__int64 **)(*(_QWORD *)(v6 + 544) + 8LL * *(unsigned __int16 *)v27);
            if ( !sub_9A6250((__int64)a3, (__int64 *)(v6 + 544), v31 + 1) )
              (*(void (__fastcall **)(__int64 *, void **, __int64, _QWORD, _QWORD, _QWORD))(*v31 + 16))(
                v31,
                &ptr,
                v6 + 544,
                a4,
                a6,
                *(_QWORD *)(v6 + 320));
            v27 += 2;
          }
          while ( v25 != v27 );
        }
        else
        {
          do
          {
            v30 = *(_QWORD *)(*(_QWORD *)(v6 + 544) + 8LL * *(unsigned __int16 *)v27);
            if ( !sub_9A6250((__int64)a3, (__int64 *)(v6 + 544), (__int64 *)(v30 + 8)) && *(_BYTE *)(v30 + 34) != 3 )
              (*(void (__fastcall **)(__int64, void **, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v30 + 16LL))(
                v30,
                &ptr,
                v6 + 544,
                a4,
                a6,
                *(_QWORD *)(v6 + 320));
            v27 += 2;
          }
          while ( v25 != v27 );
        }
      }
      v24 = (char *)ptr;
    }
    if ( v24 != &v50 )
      free(v24);
  }
  else
  {
    v8 = *a3;
    v42 = (__int64)&(*a3)[(_QWORD)a3[1]];
    if ( *a3 != (unsigned __int16 *)v42 )
    {
LABEL_3:
      v9 = v8;
      v41 = (__int64 *)(a1 + 544);
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 544);
        v38 = *v9;
        v11 = *(_QWORD *)a2 + 2 * v7;
        v12 = *(_QWORD *)(v10 + 8LL * *v9);
        v13 = sub_9A60C0(*(unsigned __int16 **)a2, v11, v41, (__int64 *)(v12 + 8));
        v14 = v13;
        if ( (unsigned __int16 *)v11 != v13 )
          break;
        if ( *(_BYTE *)(v12 + 34) == 3 && a5 != 2 )
          goto LABEL_19;
        ++v9;
        (*(void (__fastcall **)(__int64, unsigned __int16 **, __int64 *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 16LL))(
          v12,
          a3,
          v41,
          a4,
          a5,
          *(_QWORD *)(a1 + 320));
        if ( (unsigned __int16 *)v42 == v9 )
        {
LABEL_24:
          v6 = a1;
          goto LABEL_25;
        }
LABEL_20:
        v7 = *(_QWORD *)(a2 + 8);
      }
      v15 = v38;
      v16 = *(_QWORD *)(v10 + 8LL * *v13);
      v17 = *(_BYTE *)(v12 + 32);
      if ( *(_BYTE *)(v16 + 32) )
      {
        v18 = 0;
        if ( v17 )
        {
          v20 = *(unsigned __int8 *)(v12 + 33);
          if ( *(_BYTE *)(v16 + 33) != (_BYTE)v20 )
            goto LABEL_10;
          goto LABEL_39;
        }
      }
      else
      {
        v18 = *(_DWORD *)(v16 + 40);
        v19 = 0;
        if ( v17 )
          goto LABEL_8;
      }
      v19 = *(_DWORD *)(v12 + 40);
LABEL_8:
      if ( v19 != v18 )
      {
        v40 = *(_QWORD *)(a1 + 320);
        v37 = *(void (**)())(*(_QWORD *)v40 + 48LL);
        v47 = *(_DWORD *)(v12 + 36);
        sub_9A8660(&v51, (__int64 *)(v12 + 8));
        v28 = (_BYTE *)v51.m128i_i64[0];
        if ( v37 != nullsub_352 )
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64))v37)(
            v40,
            *(_QWORD *)(v12 + 16),
            *(_QWORD *)(v12 + 24),
            v51.m128i_i64[0],
            v51.m128i_i64[1],
            v47,
            a4,
            a5,
            1);
          v28 = (_BYTE *)v51.m128i_i64[0];
        }
        if ( v28 != v52 )
          operator delete(v28);
        v29 = v19 > v18 && a5 != 0;
        goto LABEL_34;
      }
      v20 = *(unsigned __int8 *)(v12 + 33);
      if ( *(_BYTE *)(v16 + 33) != (_BYTE)v20 )
      {
LABEL_10:
        if ( (*(_BYTE *)(v16 + 34) & 0xFD) != 1 || (*(_BYTE *)(v12 + 34) & 0xFD) != 1 || !(v20 | a5) )
        {
          v21 = *(_QWORD *)(a1 + 320);
          v22 = *(void (**)())(*(_QWORD *)v21 + 56LL);
          v39 = *(_DWORD *)(v16 + 36);
          v36 = *(_DWORD *)(v12 + 36);
          sub_9A8660(&v51, (__int64 *)(v12 + 8));
          v23 = (_BYTE *)v51.m128i_i64[0];
          if ( v22 != nullsub_353 )
          {
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD))v22)(
              v21,
              *(_QWORD *)(v12 + 16),
              *(_QWORD *)(v12 + 24),
              v51.m128i_i64[0],
              v51.m128i_i64[1],
              v36,
              v39);
            v23 = (_BYTE *)v51.m128i_i64[0];
          }
          if ( v23 != v52 )
            operator delete(v23);
          if ( !a5 || *(_BYTE *)(v12 + 33) != 1 )
          {
LABEL_19:
            if ( (unsigned __int16 *)v42 == ++v9 )
              goto LABEL_24;
            goto LABEL_20;
          }
          goto LABEL_35;
        }
        v29 = v20 == 0;
LABEL_34:
        if ( !v29 )
          goto LABEL_19;
LABEL_35:
        v15 = *v9;
        goto LABEL_36;
      }
LABEL_39:
      if ( !a5 || *(_BYTE *)(v16 + 34) != 1 || *(_BYTE *)(v12 + 34) == 1 )
        goto LABEL_19;
LABEL_36:
      *v14 = v15;
      goto LABEL_19;
    }
  }
}

