_QWORD *__fastcall sub_15D2160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9,
        __int64 a10)
{
  _QWORD *v10; // r15
  _QWORD *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  unsigned int v15; // ebx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  void *v18; // rax
  unsigned __int64 *v20; // rbx
  unsigned __int64 *v21; // r15
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r12
  _QWORD *v25; // r14
  _QWORD *v26; // rdi
  void *v27; // rdi
  void **v28; // r14
  void **v29; // r12
  __int64 v30; // rcx
  int v31; // eax
  size_t v32; // rcx
  __int64 v38; // [rsp+30h] [rbp-B8h]
  __int64 v39; // [rsp+40h] [rbp-A8h]
  _QWORD *v40; // [rsp+48h] [rbp-A0h]
  _QWORD v41[2]; // [rsp+50h] [rbp-98h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h]
  __int64 v43; // [rsp+68h] [rbp-80h]
  _QWORD v44[2]; // [rsp+70h] [rbp-78h] BYREF
  int v45; // [rsp+80h] [rbp-68h]
  __int64 v46; // [rsp+84h] [rbp-64h]
  __int16 v47; // [rsp+8Ch] [rbp-5Ch]
  void *v48; // [rsp+90h] [rbp-58h]
  unsigned __int64 *v49; // [rsp+98h] [rbp-50h]
  __int64 v50; // [rsp+A0h] [rbp-48h]

  v10 = (_QWORD *)a1;
  v38 = *(unsigned int *)(a2 + 24);
  if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_32:
    memset(v10, 0, 0x58u);
    v10[2] = v10 + 4;
    v10[3] = 0x100000000LL;
    return v10;
  }
  v11 = v41;
  v12 = a2;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 8 * v13);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v14 + 392LL))(
      v11,
      v14,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10);
    if ( v41[0] )
      break;
    v20 = (unsigned __int64 *)v48;
    if ( v49 != v48 )
    {
      v39 = v12;
      v21 = v49;
      v40 = v11;
      do
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = v20[1];
          if ( v23 )
          {
            if ( v22 < v23 || v22 > v23 + 14848 )
            {
              v24 = *(_QWORD **)(v22 + 528);
              v25 = &v24[8 * (unsigned __int64)*(unsigned int *)(v22 + 536)];
              if ( v24 != v25 )
              {
                do
                {
                  while ( 1 )
                  {
                    v25 -= 8;
                    v26 = (_QWORD *)v25[3];
                    if ( v26 == v25 + 5 )
                      break;
                    operator delete(v26);
                    if ( v24 == v25 )
                      goto LABEL_16;
                  }
                }
                while ( v24 != v25 );
LABEL_16:
                v25 = *(_QWORD **)(v22 + 528);
              }
              if ( v25 != (_QWORD *)(v22 + 544) )
                free(v25);
              v27 = *(void **)(v22 + 416);
              if ( v27 != (void *)(v22 + 432) )
                free(v27);
              v28 = (void **)(v22 + 384);
              v29 = (void **)(v22 + 64);
              do
              {
                while ( *v28 != v28 + 2 )
                {
                  operator delete(*v28);
                  v28 -= 4;
                  if ( v28 == v29 )
                    goto LABEL_24;
                }
                v28 -= 4;
              }
              while ( v28 != v29 );
LABEL_24:
              operator delete((void *)v22, 0x3A0u);
            }
            else
            {
              v30 = *(unsigned int *)(v23 + 14976);
              *(_DWORD *)(v23 + 14976) = v30 + 1;
              *(_QWORD *)(v23 + 8 * v30 + 14848) = v22;
            }
          }
        }
        v20 += 3;
      }
      while ( v21 != v20 );
      v12 = v39;
      v11 = v40;
      v20 = (unsigned __int64 *)v48;
    }
    if ( v20 )
      operator delete(v20);
    if ( ptr == v44 )
    {
      if ( v38 == ++v13 )
      {
LABEL_31:
        v10 = (_QWORD *)a1;
        goto LABEL_32;
      }
    }
    else
    {
      free(ptr);
      if ( v38 == ++v13 )
        goto LABEL_31;
    }
  }
  v10 = (_QWORD *)a1;
  v15 = v43;
  v16 = ptr;
  *(_QWORD *)a1 = v41[0];
  v17 = v41[1];
  *(_QWORD *)(a1 + 24) = 0x100000000LL;
  *(_QWORD *)(a1 + 8) = v17;
  v18 = (void *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a1 + 32;
  if ( v15 )
  {
    if ( v16 != v11 + 4 )
    {
      v31 = HIDWORD(v43);
      *(_QWORD *)(a1 + 16) = v16;
      v16 = v11 + 4;
      *(_DWORD *)(a1 + 24) = v15;
      *(_DWORD *)(a1 + 28) = v31;
      ptr = v11 + 4;
      v43 = 0;
      goto LABEL_5;
    }
    v32 = 8;
    if ( v15 != 1 )
    {
      sub_2237220(a1 + 16, a1 + 32, v15, 8);
      v16 = ptr;
      v32 = 8LL * (unsigned int)v43;
      if ( !v32 )
        goto LABEL_45;
      v18 = *(void **)(a1 + 16);
    }
    memcpy(v18, v16, v32);
    v16 = ptr;
LABEL_45:
    *(_DWORD *)(a1 + 24) = v15;
    LODWORD(v43) = 0;
  }
LABEL_5:
  *(_QWORD *)(a1 + 40) = v44[1];
  *(_DWORD *)(a1 + 48) = v45;
  *(_QWORD *)(a1 + 52) = v46;
  *(_WORD *)(a1 + 60) = v47;
  *(_QWORD *)(a1 + 64) = v48;
  *(_QWORD *)(a1 + 72) = v49;
  *(_QWORD *)(a1 + 80) = v50;
  if ( v16 != v11 + 4 )
    free(v16);
  return v10;
}
