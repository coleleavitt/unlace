unsigned __int64 __fastcall sub_1B12760(
        __int64 *a1,
        const void *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  size_t v9; // rax
  char *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // r8
  int v13; // r9d
  __int64 v14; // r9
  unsigned __int64 *v15; // rbx
  unsigned __int64 *v16; // r13
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rcx
  char v21; // r14
  __int64 v22; // r15
  char v23; // al
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rax
  _QWORD *v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v33; // [rsp-10h] [rbp-A8h]
  __int64 v34; // [rsp-8h] [rbp-A0h]
  __int64 v38; // [rsp+10h] [rbp-88h]
  __int64 v39; // [rsp+10h] [rbp-88h]
  __int64 v40; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v42; // [rsp+28h] [rbp-70h]
  _BYTE v43[104]; // [rsp+30h] [rbp-68h] BYREF

  v42 = 0x600000000LL;
  v9 = 8 * a3;
  v10 = v43;
  v11 = (8 * a3) >> 3;
  v12 = (unsigned __int64 *)v43;
  v13 = 0;
  ptr = v43;
  if ( v11 > 6 )
  {
    v39 = 8 * a3;
    sub_2237220(&ptr, v43, (8 * a3) >> 3, 8);
    v12 = (unsigned __int64 *)ptr;
    v13 = v42;
    v9 = v39;
    v10 = (char *)ptr + 8 * (unsigned int)v42;
  }
  if ( v9 )
  {
    memcpy(v10, a2, v9);
    v12 = (unsigned __int64 *)ptr;
    v13 = v42;
  }
  LODWORD(v42) = v11 + v13;
  v14 = (unsigned int)(v11 + v13);
  v15 = &v12[v14];
  if ( v15 != v12 )
  {
    v16 = v12;
    while ( 1 )
    {
      if ( !*v16 )
        goto LABEL_10;
      v17 = sub_1B12200(v16, *a1, 97, 0, 103, nullptr, a7, a8, nullptr);
      v20 = (_DWORD *)*v16;
      v21 = v17;
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v23 = *(_BYTE *)(v22 + 16);
      if ( v23 == 13 )
        break;
      if ( v23 == 47 )
      {
        v24 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                v34,
                v33,
                (__int64)v20,
                v18,
                v19);
        if ( (*((_BYTE *)v24 + 74) & 1) != 0 || (v24[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v29 = (char *)sub_F60F10(v22, v34, v25, v26, v27, v28);
          v20 = (_DWORD *)*v16;
          if ( v29[76] >= 0 )
            goto LABEL_17;
        }
        else
        {
          v20 = (_DWORD *)*v16;
        }
LABEL_8:
        if ( (BYTE1(*v20) & 0x80u) == 0 )
          goto LABEL_9;
LABEL_10:
        if ( v15 == ++v16 )
          goto LABEL_20;
      }
      else
      {
        if ( v23 != 10 )
          goto LABEL_8;
LABEL_17:
        if ( (BYTE1(*v20) & 0x80u) != 0 )
          goto LABEL_10;
        if ( !v21 )
        {
LABEL_9:
          *v16 = 0;
          goto LABEL_10;
        }
        if ( v15 == ++v16 )
        {
LABEL_20:
          v12 = (unsigned __int64 *)ptr;
          v14 = (unsigned int)v42;
          goto LABEL_21;
        }
      }
    }
    if ( (((*(_WORD *)(v22 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      goto LABEL_17;
    goto LABEL_8;
  }
LABEL_21:
  v40 = v14;
  v38 = (__int64)v12;
  v30 = (_QWORD *)sub_168B6C0((__int64)a1);
  v31 = sub_EC0270(v30, a4, a5, a6, v38, v40);
  if ( ptr != v43 )
    free(ptr);
  return v31;
}
