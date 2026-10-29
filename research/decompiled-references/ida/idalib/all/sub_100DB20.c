void __fastcall sub_100DB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, size_t a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int v10; // esi
  int v11; // eax
  char *v12; // rbp
  char *v13; // rdi
  size_t v14; // rdx
  void *v15; // r13
  __int64 v16; // r15
  void **v17; // r13
  void **v18; // r15
  void *v19; // rax
  __int64 v20; // r14
  unsigned int v21; // ebp
  int v22; // eax
  char *v23; // r11
  unsigned __int64 v24; // r13
  char *v25; // r15
  int v26; // eax
  bool v27; // al
  bool v28; // al
  bool v29; // al
  char v30; // r15
  void *v31; // rbp
  void *v32; // rbp
  int v33; // eax
  int v34; // eax
  bool v35; // al
  int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-B8h]
  int v38; // [rsp+1Ch] [rbp-9Ch]
  int v39; // [rsp+20h] [rbp-98h]
  char *v40; // [rsp+20h] [rbp-98h]
  unsigned int v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+28h] [rbp-90h]
  size_t v43; // [rsp+28h] [rbp-90h]
  char *v44; // [rsp+28h] [rbp-90h]
  char *v45; // [rsp+30h] [rbp-88h]
  unsigned int v46; // [rsp+30h] [rbp-88h]
  size_t v47; // [rsp+30h] [rbp-88h]
  __int64 v48; // [rsp+38h] [rbp-80h]
  __int64 v49; // [rsp+38h] [rbp-80h]
  void *v50; // [rsp+40h] [rbp-78h] BYREF
  void *v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-68h]
  void *v53; // [rsp+60h] [rbp-58h] BYREF
  void *s2; // [rsp+68h] [rbp-50h]
  __int64 v55; // [rsp+70h] [rbp-48h]

  v6 = a3 << 6;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v37 = a2 + v6;
  if ( a2 != a2 + v6 )
  {
    v7 = 0;
    v8 = a2;
LABEL_3:
    v50 = nullptr;
LABEL_4:
    v10 = 2 * v7;
LABEL_5:
    sub_E62B10(a1, v10, v6, a4, a5, a6);
    sub_E5E370((__int64 *)a1, v8, &v50);
    v11 = *(_DWORD *)(a1 + 8) + 1;
LABEL_6:
    *(_DWORD *)(a1 + 8) = v11;
    sub_E59960((void ***)&v53, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    v12 = (char *)v50;
    v13 = *((char **)v50 + 1);
    if ( s2 == (void *)-1LL )
    {
      v28 = v13 + 1 == nullptr;
    }
    else
    {
      if ( s2 != (void *)-2LL )
      {
        v14 = *((_QWORD *)v50 + 2);
        if ( v55 == v14 && (!v14 || !memcmp(v13, s2, v14)) )
          goto LABEL_11;
        goto LABEL_42;
      }
      v28 = v13 + 2 == nullptr;
    }
    if ( v28 )
    {
LABEL_11:
      v15 = v53;
      if ( v53 )
      {
        if ( *(void **)v53 != (char *)v53 + 16 )
          operator delete(*(void **)v53);
        operator delete(v15, 0x20u);
      }
      v16 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
      {
        v17 = (void **)operator new(0x20u);
        *v17 = v17 + 2;
        sub_100CAC0(v17, *(_BYTE **)v16, *(_QWORD *)v16 + *(_QWORD *)(v16 + 8));
        v18 = *(void ***)v12;
        *(_QWORD *)v12 = v17;
        if ( v18 )
        {
          if ( *v18 != v18 + 2 )
            operator delete(*v18);
          operator delete(v18, 0x20u);
          v17 = *(void ***)v12;
        }
        v19 = v17[1];
        *((_QWORD *)v12 + 1) = *v17;
        *((_QWORD *)v12 + 2) = v19;
      }
      else
      {
        *(__m128i *)(v12 + 8) = _mm_loadu_si128((const __m128i *)(v8 + 8));
      }
      *((_WORD *)v12 + 12) = 0;
      sub_2229580(v12 + 24, v8 + 24);
      while ( 1 )
      {
        v8 += 64;
        if ( v37 == v8 )
          return;
        v7 = *(_DWORD *)(a1 + 16);
        v20 = *(_QWORD *)a1;
        if ( !v7 )
          goto LABEL_3;
        v21 = v7 - 1;
        sub_E59960((void ***)&v50, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
        sub_E59960((void ***)&v53, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
        v22 = sub_2248890(*(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
        v38 = 1;
        v23 = *(char **)(v8 + 8);
        a6 = 0;
        a4 = v21 & v22;
        while ( 1 )
        {
          v24 = v20 + ((unsigned __int64)(unsigned int)a4 << 6);
          v25 = *(char **)(v24 + 8);
          a5 = *(_QWORD *)(v24 + 16);
          if ( v25 == (char *)-1LL )
          {
            v29 = v23 + 1 == nullptr;
          }
          else if ( v25 == (char *)-2LL )
          {
            v29 = v23 + 2 == nullptr;
          }
          else
          {
            if ( a5 != *(_QWORD *)(v8 + 16) )
              goto LABEL_28;
            if ( !a5 )
            {
              v30 = 1;
              goto LABEL_47;
            }
            v48 = a6;
            v46 = a4;
            v43 = *(_QWORD *)(v24 + 16);
            v40 = v23;
            v34 = memcmp(v23, *(const void **)(v24 + 8), v43);
            a6 = v48;
            a4 = v46;
            a5 = v43;
            v23 = v40;
            v29 = v34 == 0;
          }
          if ( v29 )
          {
            v30 = v29;
            goto LABEL_47;
          }
LABEL_28:
          if ( v51 == (void *)-1LL )
          {
            v35 = v25 + 1 == nullptr;
            goto LABEL_66;
          }
          if ( v51 == (void *)-2LL )
          {
            v35 = v25 + 2 == nullptr;
            goto LABEL_66;
          }
          if ( a5 != v52 )
            goto LABEL_31;
          v44 = v23;
          v41 = a4;
          if ( !a5 )
            break;
          v49 = a6;
          v47 = a5;
          v36 = memcmp(v25, v51, a5);
          v23 = v44;
          a4 = v41;
          a6 = v49;
          a5 = v47;
          v35 = v36 == 0;
LABEL_66:
          if ( v35 )
            break;
LABEL_31:
          if ( s2 == (void *)-1LL )
          {
            v27 = v25 + 1 == nullptr;
            goto LABEL_36;
          }
          if ( s2 == (void *)-2LL )
          {
            v27 = v25 + 2 == nullptr;
LABEL_36:
            if ( !v27 )
              goto LABEL_39;
            goto LABEL_37;
          }
          if ( a5 != v55 )
            goto LABEL_39;
          if ( a5 )
          {
            v45 = v23;
            v42 = a6;
            v39 = a4;
            v26 = memcmp(v25, s2, a5);
            v23 = v45;
            a6 = v42;
            LODWORD(a4) = v39;
            v27 = v26 == 0;
            goto LABEL_36;
          }
LABEL_37:
          if ( !a6 )
            a6 = v24;
LABEL_39:
          a4 = v21 & (v38 + (_DWORD)a4);
          ++v38;
        }
        v30 = 0;
        if ( a6 )
          v24 = a6;
LABEL_47:
        v31 = v53;
        if ( v53 )
        {
          if ( *(void **)v53 != (char *)v53 + 16 )
            operator delete(*(void **)v53);
          operator delete(v31, 0x20u);
        }
        v32 = v50;
        if ( v50 )
        {
          if ( *(void **)v50 != (char *)v50 + 16 )
            operator delete(*(void **)v50);
          operator delete(v32, 0x20u);
        }
        if ( !v30 )
        {
          v33 = *(_DWORD *)(a1 + 8);
          v7 = *(_DWORD *)(a1 + 16);
          v50 = (void *)v24;
          v11 = v33 + 1;
          v6 = 3 * v7;
          a4 = (unsigned int)(4 * v11);
          if ( (unsigned int)a4 >= (unsigned int)v6 )
            goto LABEL_4;
          a4 = v7 - (v11 + *(_DWORD *)(a1 + 12));
          v6 = v7 >> 3;
          if ( (unsigned int)a4 <= (unsigned int)v6 )
          {
            v10 = v7;
            goto LABEL_5;
          }
          goto LABEL_6;
        }
      }
    }
LABEL_42:
    --*(_DWORD *)(a1 + 12);
    goto LABEL_11;
  }
}
