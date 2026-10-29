unsigned __int64 __fastcall sub_B583D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl
  _BYTE *v3; // rax
  unsigned __int64 v4; // rax
  _QWORD *v5; // r13
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  void *v12; // rdi
  void **v13; // rbx
  void **v14; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+8h] [rbp-150h]
  _BYTE *v18; // [rsp+10h] [rbp-148h] BYREF
  __int64 v19; // [rsp+18h] [rbp-140h]
  _BYTE v20[312]; // [rsp+20h] [rbp-138h] BYREF

  v18 = v20;
  v19 = 0x800000000LL;
  if ( sub_990BA0(a1)
    || (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 1LL) & 8) != 0
    || (v2 = 1, (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B) && *(char *)(a1 + 97) < 0 )
  {
    v1 = *(_QWORD *)(a1 + 88);
    v2 = 0;
    if ( v1 )
    {
      if ( (v1 & 4) != 0 )
      {
        v3 = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v3 )
          v2 = (*v3 & 4) != 0;
      }
    }
  }
  v4 = sub_B58260(a1, (__int64)&v18, v2);
  v5 = v18;
  v17 = v4;
  v6 = &v18[32 * (unsigned int)v19];
  if ( v18 != (_BYTE *)v6 )
  {
    do
    {
      v6 -= 4;
      v7 = v6[1];
      if ( v7 )
      {
        v8 = v6[2];
        if ( v8 )
        {
          if ( v7 < v8 || v7 > v8 + 14848 )
          {
            v9 = *(_QWORD **)(v7 + 528);
            v10 = &v9[8 * (unsigned __int64)*(unsigned int *)(v7 + 536)];
            if ( v9 != v10 )
            {
              do
              {
                while ( 1 )
                {
                  v10 -= 8;
                  v11 = (_QWORD *)v10[3];
                  if ( v11 == v10 + 5 )
                    break;
                  operator delete(v11);
                  if ( v9 == v10 )
                    goto LABEL_14;
                }
              }
              while ( v9 != v10 );
LABEL_14:
              v10 = *(_QWORD **)(v7 + 528);
            }
            if ( v10 != (_QWORD *)(v7 + 544) )
              free(v10);
            v12 = *(void **)(v7 + 416);
            if ( v12 != (void *)(v7 + 432) )
              free(v12);
            v13 = (void **)(v7 + 384);
            v14 = (void **)(v7 + 64);
            do
            {
              while ( *v13 != v13 + 2 )
              {
                operator delete(*v13);
                v13 -= 4;
                if ( v14 == v13 )
                  goto LABEL_22;
              }
              v13 -= 4;
            }
            while ( v14 != v13 );
LABEL_22:
            operator delete((void *)v7, 0x3A0u);
          }
          else
          {
            v16 = *(unsigned int *)(v8 + 14976);
            *(_DWORD *)(v8 + 14976) = v16 + 1;
            *(_QWORD *)(v8 + 8 * v16 + 14848) = v7;
          }
        }
      }
    }
    while ( v5 != v6 );
    v6 = v18;
  }
  if ( v6 != (_QWORD *)v20 )
    free(v6);
  return v17;
}

