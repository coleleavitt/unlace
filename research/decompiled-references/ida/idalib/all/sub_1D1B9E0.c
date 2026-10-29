__int64 __fastcall sub_1D1B9E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned int *v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 *v19; // r15
  char v20; // bp
  unsigned __int64 v21; // rdi
  int v22; // eax
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rax
  _BYTE *v30; // rsi
  __int64 v31; // rbx
  int v33; // ebx
  int v34; // ebp
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v40; // [rsp+28h] [rbp-60h]
  _BYTE v41[88]; // [rsp+30h] [rbp-58h] BYREF

  v9 = *a1;
  ptr = v41;
  v40 = 0x400000000LL;
  v10 = sub_15F2610(v9, 0, a3, a4, a5, a6);
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v10;
  if ( (v14 & 1) != 0 )
  {
    v16 = (unsigned int *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    v17 = (__int64)&v16[2 * *v16 + 2];
    v18 = (__int64)(v16 + 2);
    v37 = (__int64 *)v17;
  }
  else
  {
    if ( !v14 )
      goto LABEL_28;
    v12 = a2 + 16;
    v18 = a2 + 8;
    v37 = (__int64 *)(a2 + 16);
  }
  if ( (__int64 *)v18 != v37 )
  {
    v19 = (__int64 *)v18;
    v20 = 0;
    while ( 1 )
    {
      v24 = *v19;
      v25 = sub_1D1B120((__int64)a1, *v19, a7, a8, v11, v12, v13, v18);
      v27 = v25;
      if ( !v25 )
        break;
      if ( v24 != v25 )
        v20 = 1;
      if ( v15 )
      {
        v22 = *(_BYTE *)(v25 + 28) & 0x7F;
        if ( (unsigned int)(v22 - 58) <= 9 )
        {
          v28 = *(_QWORD *)(*a1 + 248);
          v29 = *(_QWORD *)(v27 + 48);
          if ( v29 )
          {
            v21 = v29 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v21 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v27, v28, v26, v13, v18);
            v28 = *(_QWORD *)(*a1 + 248);
          }
          *(_BYTE *)(v15 + 1465) |= *(_BYTE *)(*(_QWORD *)(sub_F6B250(v21, v28, v28, v26, v13) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 17LL)
                                  & 1;
          v22 = *(_BYTE *)(v27 + 28) & 0x7F;
        }
        if ( (unsigned int)(v22 - 40) <= 6 )
          *(_BYTE *)(v15 + 1465) |= *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      }
      v12 = HIDWORD(v40);
      v23 = (unsigned int)v40 + 1LL;
      if ( v23 > HIDWORD(v40) )
      {
        ++v19;
        sub_2237220(&ptr, v41, v23, 8);
        v11 = (unsigned int)v40;
        *((_QWORD *)ptr + (unsigned int)v40) = v27;
        LODWORD(v40) = v40 + 1;
        if ( v37 == v19 )
          goto LABEL_19;
      }
      else
      {
        v11 = (__int64)ptr;
        ++v19;
        *((_QWORD *)ptr + (unsigned int)v40) = v27;
        LODWORD(v40) = v40 + 1;
        if ( v37 == v19 )
          goto LABEL_19;
      }
    }
    v31 = 1;
    v30 = ptr;
    goto LABEL_21;
  }
LABEL_28:
  v20 = 0;
LABEL_19:
  v30 = ptr;
  if ( *(_DWORD *)(*a1 + 12632) || (v31 = a2, v20) )
  {
    v33 = *(_DWORD *)(a2 + 16);
    v34 = *(_DWORD *)(a2 + 20);
    v35 = sub_17B2ED0(*a1, (__int64 *)ptr, (unsigned int)v40, v12, v13, a7);
    v36 = sub_1C36280(*a1, v35, v33, v34);
    v30 = ptr;
    v31 = v36;
  }
LABEL_21:
  if ( v30 != v41 )
    free(v30);
  return v31;
}
