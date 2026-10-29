__int64 __fastcall sub_15F37F0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rax
  int v5; // ecx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  _QWORD *v17; // r15
  int v18; // esi
  _DWORD *v19; // r13
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // r12
  _QWORD *v24; // rdi
  void *v25; // rdi
  void **v26; // r14
  void **v27; // r12
  int v28; // ebp
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  _QWORD v34[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v32 = (_QWORD *)(a1 + 16);
    v11 = sub_2237400(a1, a1 + 16, 0, 32, v34);
    v33 = v11;
    v12 = v11 + 32LL * *(unsigned int *)(a1 + 8);
    *(_DWORD *)v12 = *a2;
    v13 = *(_DWORD *)(a3 + 16);
    *(_QWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 24) = v13;
    v14 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = v14;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)a3;
    v15 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a3 = 0;
    v16 = *(_DWORD **)a1;
    v17 = (_QWORD *)(*(_QWORD *)a1 + 32 * v15);
    if ( *(_QWORD **)a1 != v17 )
    {
      do
      {
        v18 = *v16;
        *(_QWORD *)(v11 + 16) = 0;
        v16 += 8;
        v11 += 32;
        *(_QWORD *)(v11 - 24) = 0;
        *(_DWORD *)(v11 - 32) = v18;
        *(_DWORD *)(v11 - 8) = *(v16 - 2);
        *(_QWORD *)(v11 - 16) = *((_QWORD *)v16 - 2);
        *(_QWORD *)(v11 - 24) = *((_QWORD *)v16 - 3);
        *((_QWORD *)v16 - 3) = 0;
      }
      while ( v17 != (_QWORD *)v16 );
      v19 = *(_DWORD **)a1;
      v17 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
      if ( *(_QWORD **)a1 != v17 )
      {
        do
        {
          v17 -= 4;
          v20 = v17[1];
          if ( v20 )
          {
            v21 = v17[2];
            if ( v21 )
            {
              if ( v20 < v21 || v20 > v21 + 14848 )
              {
                v22 = *(_QWORD **)(v20 + 528);
                v23 = &v22[8 * (unsigned __int64)*(unsigned int *)(v20 + 536)];
                if ( v22 != v23 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v23 -= 8;
                      v24 = (_QWORD *)v23[3];
                      if ( v24 == v23 + 5 )
                        break;
                      operator delete(v24);
                      if ( v22 == v23 )
                        goto LABEL_12;
                    }
                  }
                  while ( v22 != v23 );
LABEL_12:
                  v23 = *(_QWORD **)(v20 + 528);
                }
                if ( v23 != (_QWORD *)(v20 + 544) )
                  free(v23);
                v25 = *(void **)(v20 + 416);
                if ( v25 != (void *)(v20 + 432) )
                  free(v25);
                v26 = (void **)(v20 + 384);
                v27 = (void **)(v20 + 64);
                do
                {
                  while ( *v26 != v26 + 2 )
                  {
                    operator delete(*v26);
                    v26 -= 4;
                    if ( v26 == v27 )
                      goto LABEL_20;
                  }
                  v26 -= 4;
                }
                while ( v27 != v26 );
LABEL_20:
                operator delete((void *)v20, 0x3A0u);
              }
              else
              {
                v31 = *(unsigned int *)(v21 + 14976);
                *(_DWORD *)(v21 + 14976) = v31 + 1;
                *(_QWORD *)(v21 + 8 * v31 + 14848) = v20;
              }
            }
          }
        }
        while ( v19 != (_DWORD *)v17 );
        v17 = *(_QWORD **)a1;
      }
    }
    v28 = v34[0];
    if ( v32 != v17 )
      free(v17);
    v29 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 12) = v28;
    v30 = (unsigned int)(v29 + 1);
    *(_QWORD *)a1 = v33;
    *(_DWORD *)(a1 + 8) = v30;
    return v33 + 32 * v30 - 32;
  }
  else
  {
    v3 = *a2;
    v4 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
    *(_QWORD *)(v4 + 16) = 0;
    *(_DWORD *)v4 = v3;
    v5 = *(_DWORD *)(a3 + 16);
    *(_QWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 24) = v5;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
    LODWORD(v4) = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a3 = 0;
    v6 = *(_DWORD **)a1;
    v7 = (unsigned int)(v4 + 1);
    *(_DWORD *)(a1 + 8) = v7;
    return (__int64)&v6[8 * v7 - 8];
  }
}
