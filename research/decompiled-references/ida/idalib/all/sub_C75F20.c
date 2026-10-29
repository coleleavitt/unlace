void __fastcall sub_C75F20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // r13
  int v9; // esi
  char *v10; // rax
  __int64 v11; // rdx
  char v12; // r15
  char v13; // r14
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  char *v20; // rdx
  int v21; // esi
  void *v22; // rdx
  char *v23; // r13
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  void *v29; // rdi
  void **v30; // rax
  void **v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // [rsp+8h] [rbp-170h]
  _QWORD *v36; // [rsp+8h] [rbp-170h]
  void **v37; // [rsp+8h] [rbp-170h]
  _QWORD *v38; // [rsp+10h] [rbp-168h]
  void **v39; // [rsp+10h] [rbp-168h]
  char *v40; // [rsp+18h] [rbp-160h]
  __int64 v41; // [rsp+20h] [rbp-158h]
  char v42; // [rsp+2Ah] [rbp-14Eh]
  char v43; // [rsp+2Bh] [rbp-14Dh]
  int v44; // [rsp+2Ch] [rbp-14Ch]
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __int64 v46; // [rsp+38h] [rbp-140h]
  _BYTE v47[312]; // [rsp+40h] [rbp-138h] BYREF

  v8 = *a1;
  v9 = *(_DWORD *)(*a1 + 900);
  ptr = v47;
  v46 = 0x800000000LL;
  v10 = *(char **)(v8 + 24);
  v11 = *((_QWORD *)v10 + 1);
  v12 = *v10;
  *((_QWORD *)v10 + 1) = &ptr;
  v13 = v10[1];
  v35 = v11;
  *(_DWORD *)(v8 + 900) = *(_DWORD *)(v8 + 40) + 1;
  sub_C68630(a1, *(_QWORD *)(a2 + 40), v11, a4, a5, a6);
  if ( (_DWORD)v46 )
  {
    v17 = *(_QWORD *)(v8 + 24);
    v18 = 32LL * (unsigned int)v46;
    *(_QWORD *)(v17 + 8) = v35;
    *(_BYTE *)(v17 + 1) = v13;
    *(_BYTE *)v17 = v12;
    *(_DWORD *)(v8 + 900) = v9;
    v19 = *a1;
    v20 = *(char **)(*a1 + 24);
    v43 = *v20;
    v42 = v20[1];
    v41 = *((_QWORD *)v20 + 1);
    v21 = *(_DWORD *)(v19 + 900);
    *((_QWORD *)v20 + 1) = &ptr;
    LODWORD(v20) = *(_DWORD *)(v19 + 40);
    v44 = v21;
    *(_DWORD *)(v19 + 900) = (_DWORD)v20 + 1;
    v22 = ptr;
    v40 = (char *)ptr;
    v23 = (char *)ptr + v18;
    do
    {
      v23 -= 32;
      v24 = *((_QWORD *)v23 + 1);
      if ( v24 )
      {
        v25 = *((_QWORD *)v23 + 2);
        if ( v25 )
        {
          if ( v24 < v25 || v24 > v25 + 14848 )
          {
            v26 = *(_QWORD **)(v24 + 528);
            v27 = &v26[8 * (unsigned __int64)*(unsigned int *)(v24 + 536)];
            if ( v26 != v27 )
            {
              do
              {
                while ( 1 )
                {
                  v27 -= 8;
                  v28 = (_QWORD *)v27[3];
                  if ( v28 == v27 + 5 )
                    break;
                  v38 = v27;
                  v36 = v26;
                  operator delete(v28);
                  v26 = v36;
                  v27 = v38;
                  if ( v36 == v38 )
                    goto LABEL_13;
                }
              }
              while ( v26 != v27 );
LABEL_13:
              v27 = *(_QWORD **)(v24 + 528);
            }
            if ( v27 != (_QWORD *)(v24 + 544) )
              free(v27);
            v29 = *(void **)(v24 + 416);
            if ( v29 != (void *)(v24 + 432) )
              free(v29);
            v30 = (void **)(v24 + 384);
            v31 = (void **)(v24 + 64);
            do
            {
              while ( *v30 != v30 + 2 )
              {
                v39 = v30;
                v37 = v31;
                operator delete(*v30);
                v31 = v37;
                v30 = v39 - 4;
                if ( v37 == v39 - 4 )
                  goto LABEL_21;
              }
              v30 -= 4;
            }
            while ( v31 != v30 );
LABEL_21:
            operator delete((void *)v24, 0x3A0u);
          }
          else
          {
            v17 = *(unsigned int *)(v25 + 14976);
            *(_DWORD *)(v25 + 14976) = v17 + 1;
            *(_QWORD *)(v25 + 8 * v17 + 14848) = v24;
          }
        }
      }
    }
    while ( v40 != v23 );
    v32 = *(_QWORD *)(a2 + 32);
    LODWORD(v46) = 0;
    sub_C68630(a1, v32, (__int64)v22, v17, v14, v15);
    v33 = *(_QWORD *)(v19 + 24);
    v34 = v46;
    *(_BYTE *)v33 = v43;
    *(_BYTE *)(v33 + 1) = v42;
    *(_QWORD *)(v33 + 8) = v41;
    *(_DWORD *)(v19 + 900) = v44;
    if ( v34 )
    {
      sub_C14610(*a1, a2, 2396);
      sub_C23820((__int64)&ptr);
      return;
    }
  }
  else
  {
    v16 = *(_QWORD *)(v8 + 24);
    *(_BYTE *)v16 = v12;
    *(_BYTE *)(v16 + 1) = v13;
    *(_QWORD *)(v16 + 8) = v35;
    *(_DWORD *)(v8 + 900) = v9;
  }
  if ( ptr != v47 )
    free(ptr);
}
