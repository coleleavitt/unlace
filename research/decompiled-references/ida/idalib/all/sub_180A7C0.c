__int64 __fastcall sub_180A7C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, _QWORD *a5)
{
  unsigned int v7; // r14d
  size_t v9; // rax
  unsigned int *v10; // r13
  unsigned int *v11; // rbp
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  void *v17; // rdi
  void **v18; // rbx
  void **v19; // rax
  void *v20; // rdi
  __int64 v21; // rdx
  unsigned int *v22; // r13
  unsigned int v23; // edx
  __int64 v24; // rcx
  _QWORD *v26; // [rsp+8h] [rbp-1E0h]
  void **v27; // [rsp+8h] [rbp-1E0h]
  _BYTE v28[144]; // [rsp+10h] [rbp-1D8h] BYREF
  unsigned int *v29; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-140h]
  _BYTE v31[312]; // [rsp+B0h] [rbp-138h] BYREF

  if ( !a5[1] )
  {
    v9 = j__strlen("<no message provided>");
    *a5 = "<no message provided>";
    a5[1] = v9;
  }
  v7 = 1;
  v29 = (unsigned int *)v31;
  v30 = 0x800000000LL;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 && (*(_DWORD *)*a4 & 0x20000) == 0 )
  {
    v7 = sub_C44650(*a4, a2, (__int64)&v29);
    if ( !(_BYTE)v7 )
    {
      sub_168B9F0((__int64)v28, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0xC47u, 0);
      sub_15DD120((__int64)v28, a3);
      sub_15F7200(v28);
      v22 = v29;
      v11 = &v29[8 * (unsigned int)v30];
      if ( v29 == v11 )
      {
LABEL_25:
        if ( v11 != (unsigned int *)v31 )
          free(v11);
        return v7;
      }
      do
      {
        v23 = *v22;
        v24 = (__int64)(v22 + 2);
        v22 += 8;
        sub_168CDE0((__int64)v28, (__int64 *)(a1 + 8), v23, v24, 0);
        sub_15F7200(v28);
      }
      while ( v11 != v22 );
    }
    v10 = v29;
    v11 = &v29[8 * (unsigned int)v30];
    if ( v29 != v11 )
    {
      do
      {
        v11 -= 8;
        v12 = *((_QWORD *)v11 + 1);
        if ( v12 )
        {
          v13 = *((_QWORD *)v11 + 2);
          if ( v13 )
          {
            if ( v12 < v13 || v12 > v13 + 14848 )
            {
              v14 = *(_QWORD **)(v12 + 528);
              v15 = &v14[8 * (unsigned __int64)*(unsigned int *)(v12 + 536)];
              if ( v14 != v15 )
              {
                do
                {
                  while ( 1 )
                  {
                    v15 -= 8;
                    v16 = (_QWORD *)v15[3];
                    if ( v16 == v15 + 5 )
                      break;
                    v26 = v14;
                    operator delete(v16);
                    v14 = v26;
                    if ( v26 == v15 )
                      goto LABEL_14;
                  }
                }
                while ( v14 != v15 );
LABEL_14:
                v15 = *(_QWORD **)(v12 + 528);
              }
              if ( v15 != (_QWORD *)(v12 + 544) )
                free(v15);
              v17 = *(void **)(v12 + 416);
              if ( v17 != (void *)(v12 + 432) )
                free(v17);
              v18 = (void **)(v12 + 384);
              v19 = (void **)(v12 + 64);
              do
              {
                while ( 1 )
                {
                  v20 = *v18;
                  if ( *v18 == v18 + 2 )
                    break;
                  v27 = v19;
                  v18 -= 4;
                  operator delete(v20);
                  v19 = v27;
                  if ( v27 == v18 )
                    goto LABEL_22;
                }
                v18 -= 4;
              }
              while ( v19 != v18 );
LABEL_22:
              operator delete((void *)v12, 0x3A0u);
            }
            else
            {
              v21 = *(unsigned int *)(v13 + 14976);
              *(_DWORD *)(v13 + 14976) = v21 + 1;
              *(_QWORD *)(v13 + 8 * v21 + 14848) = v12;
            }
          }
        }
      }
      while ( v10 != v11 );
      v11 = v29;
    }
    goto LABEL_25;
  }
  return v7;
}
