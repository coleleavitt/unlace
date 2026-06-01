__int64 __fastcall sub_4845A0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5)
{
  char *v8; // rdi
  __int64 v10; // r13
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  int alias_target; // eax
  unsigned int v20; // ebx
  bool v21; // cc
  __int64 v22; // rdi
  int v23; // eax
  __int64 tinfo_property; // rdx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  size_t v29; // r8
  char *v30; // r8
  char *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rcx
  unsigned int v36; // edx
  int i; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  const char *v40; // rdx
  __int64 v42; // rax
  const void *v43; // r11
  void *v44; // rdi
  __int64 v45; // rax
  char *v46; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v47; // [rsp+0h] [rbp-A8h]
  __int64 v48; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+8h] [rbp-A0h]
  size_t v50; // [rsp+10h] [rbp-98h]
  const void *v51; // [rsp+18h] [rbp-90h]
  __int64 v52; // [rsp+28h] [rbp-80h] BYREF
  char *v53; // [rsp+30h] [rbp-78h] BYREF
  __int128 v54; // [rsp+38h] [rbp-70h]
  __int128 v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+58h] [rbp-50h]
  int v57; // [rsp+60h] [rbp-48h]
  unsigned __int64 v58; // [rsp+68h] [rbp-40h]

  v8 = *(char **)a1;
  v58 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v11 = *(void **)(a1 + 24);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v12 = *(void **)(a1 + 48);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v13 = *(void **)(a1 + 72);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v14 = *(void **)(a1 + 96);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v15 = *(void **)(a1 + 128);
  *(_DWORD *)(a1 + 120) = 0;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  v16 = *(void **)(a1 + 152);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  v17 = *(void **)(a1 + 192);
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  if ( v17 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  v18 = *(void **)(a1 + 216);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  *(_DWORD *)(a1 + 176) = a4;
  *(_QWORD *)(a1 + 400) = 0;
  *(_WORD *)(a1 + 408) = 0;
  alias_target = get_alias_target(a3, a4);
  if ( alias_target != *(_DWORD *)(a1 + 176) )
    *(_DWORD *)(a1 + 180) = alias_target;
  v20 = sub_4835B0(a1, a2, a3);
  if ( (_BYTE)v20 )
  {
    v21 = *(_QWORD *)(a1 + 32) <= 1u;
    v52 = 0;
    if ( v21 || !(unsigned __int8)sub_481280(a1, (__int64)&v52, 0) )
    {
LABEL_47:
      clear_tinfo_t(&v52);
      return v20;
    }
    v22 = v52;
    v23 = *(_DWORD *)(a1 + 400);
    if ( (v52 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 400) = v23 | 2;
      tinfo_property = get_tinfo_property(v22, 4);
      v25 = *(_DWORD *)(a1 + 400);
      if ( tinfo_property )
      {
        v26 = v25 | 4;
LABEL_27:
        *(_DWORD *)(a1 + 400) = v26;
        sub_633930(v10, a3, a1 + 24, a1 + 192, 0);
        v27 = *(_QWORD *)(a1 + 32);
        v28 = a1 + 128;
        if ( v27 && (v29 = v27 - 1, v27 != 1) )
        {
          v43 = *(const void **)(a1 + 24);
          v44 = *(void **)(a1 + 128);
          if ( *(_QWORD *)(a1 + 144) < v27 )
          {
            v51 = *(const void **)(a1 + 24);
            v50 = v27 - 1;
            v49 = *(_QWORD *)(a1 + 32);
            v45 = qvector_reserve(a1 + 128, *(_QWORD *)(a1 + 128), v49, 1);
            *(_QWORD *)(a1 + 128) = v45;
            v43 = v51;
            v44 = (void *)v45;
            v29 = v50;
            v27 = v49;
            v28 = a1 + 128;
          }
          *(_QWORD *)(a1 + 136) = v27;
          v48 = v28;
          v47 = v27;
          memmove(v44, v43, v29);
          v28 = v48;
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + v47 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 136) = 0;
        }
        sub_633930(v10, a3, v28, 0, "__deleted_type__");
        if ( (*(_BYTE *)(a1 + 400) & 2) == 0 && (*(_BYTE *)(a1 + 184) & 0x2F) == 0xD )
        {
          v57 = 1;
          v53 = nullptr;
          v56 = 0;
          v54 = 0;
          v55 = 0;
          if ( (unsigned __int8)get_tinfo_details(v52, 13, &v53) )
          {
            v30 = v53;
            v31 = &v53[128 * (_QWORD)v54];
            if ( v31 != v53 )
            {
              do
              {
                v32 = *(_QWORD *)(a1 + 224);
                v33 = *(_QWORD *)(a1 + 216);
                v34 = v32 + 1;
                if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v32 + 1) )
                {
                  v46 = v30;
                  v42 = qvector_reserve(a1 + 216, v33, v32 + 1, 16);
                  v32 = *(_QWORD *)(a1 + 224);
                  *(_QWORD *)(a1 + 216) = v42;
                  v33 = v42;
                  v30 = v46;
                  v34 = v32 + 1;
                }
                *(_QWORD *)(a1 + 224) = v34;
                v35 = v33 + 16 * v32;
                v36 = 1;
                *(_QWORD *)v35 = *((_QWORD *)v30 + 1);
                *(_DWORD *)(v35 + 8) = *((_DWORD *)v30 + 29);
                for ( i = *((int *)v30 + 28) >> 1; i; i >>= 1 )
                  ++v36;
                v38 = (unsigned __int8)v30[120];
                if ( v38 < v36 )
                  LOBYTE(v38) = v36;
                v30 += 128;
                *(_BYTE *)(v35 + 12) = v38;
              }
              while ( v30 != v31 );
            }
            v39 = *(_DWORD *)(a1 + 400) | 1;
          }
          else
          {
            get_tinfo_details(v52, 141, &v53);
            v39 = *(_DWORD *)(a1 + 400) & 0xFFFFFFFE;
          }
          *(_DWORD *)(a1 + 400) = v39;
          *(_DWORD *)(a1 + 404) = HIDWORD(v56);
          *(_WORD *)(a1 + 408) = *(_WORD *)((char *)&v57 + 1);
          if ( a5 )
          {
            v40 = haystack;
            if ( *(_QWORD *)(a1 + 8) )
              v40 = *(const char **)a1;
            sub_6A0BD0(a1 + 240, v10, v40, &v53, 1);
          }
          sub_37B290(&v53);
        }
        goto LABEL_47;
      }
    }
    else
    {
      v25 = v23 & 0xFFFFFFFD;
    }
    v26 = v25 & 0xFFFFFFFB;
    goto LABEL_27;
  }
  return v20;
}

