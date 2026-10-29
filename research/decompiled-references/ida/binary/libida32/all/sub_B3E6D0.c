__int64 __fastcall sub_B3E6D0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r9
  char v3; // cl
  int v4; // r8d
  char v5; // cl
  unsigned int v6; // r15d
  bool v8; // zf
  __int64 v9; // rax
  char *v10; // r13
  char *v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // r12
  _QWORD *v16; // rdi
  void *v17; // rdi
  void **v18; // r14
  void **v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  __int16 v24; // [rsp+10h] [rbp-198h] BYREF
  void **p_ptr; // [rsp+18h] [rbp-190h]
  unsigned int v26; // [rsp+20h] [rbp-188h] BYREF
  char v27; // [rsp+24h] [rbp-184h]
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v29; // [rsp+68h] [rbp-140h]
  _BYTE v30[312]; // [rsp+70h] [rbp-138h] BYREF

  v2 = *(_DWORD **)(a1 + 16);
  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v4 = (*v2 >> 14) & 0x1F;
  v5 = (2 * ((v3 & 2) != 0)) | ((v3 & 4) != 0 ? 0xC : 0) | (16 * ((v3 & 0x10) != 0)) | (32 * ((v3 & 8) != 0)) | v3 & 1;
  if ( (v5 & 0x10) != 0 )
    v4 = (*v2 >> 14) & 0xF | 0x10;
  v6 = v4;
  if ( (v5 & 8) != 0 )
    v6 = v4 | 8;
  if ( (v5 & 4) != 0 )
    v6 |= 4u;
  if ( (v5 & 2) != 0 )
    v6 |= 2u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 8) != 0 && *(_BYTE *)(a1 + 2) >> 3 == 4 && (v6 & 8) == 0 )
  {
    v24 = 0;
    ptr = v30;
    v27 &= ~1u;
    v26 = 0;
    v29 = 0x800000000LL;
    p_ptr = &ptr;
    v8 = (unsigned __int8)sub_C5E6D0(v2, &v24, a2, 0) == 0;
    v9 = (unsigned int)v29;
    if ( !v8 && !(_DWORD)v29 )
    {
      if ( v26 != 7 )
      {
LABEL_33:
        if ( ptr != v30 )
          free(ptr);
        if ( v26 > 1 )
          sub_A2BBA0((int *)&v26);
        return v6;
      }
      v21 = sub_A2D320((__int64)&v26);
      if ( v21 )
      {
        if ( (v21 & 3) == 0 )
        {
          v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
          v23 = v22;
          if ( v22 )
          {
            if ( (unsigned __int8)sub_B6A600(v22) && ((*(_BYTE *)(v23 + 28) & 0x7Fu) - 40 > 6 || !sub_990BA0(v23)) )
              v6 |= 8u;
          }
        }
      }
      v9 = (unsigned int)v29;
    }
    v10 = (char *)ptr;
    v11 = (char *)ptr + 32 * v9;
    while ( v10 != v11 )
    {
      v11 -= 32;
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
                  operator delete(v16);
                  if ( v14 == v15 )
                    goto LABEL_22;
                }
              }
              while ( v14 != v15 );
LABEL_22:
              v15 = *(_QWORD **)(v12 + 528);
            }
            if ( v15 != (_QWORD *)(v12 + 544) )
              free(v15);
            v17 = *(void **)(v12 + 416);
            v18 = (void **)(v12 + 416);
            if ( v17 != (void *)(v12 + 432) )
              free(v17);
            v19 = (void **)(v12 + 96);
            do
            {
              while ( 1 )
              {
                v18 -= 4;
                if ( *v18 == v18 + 2 )
                  break;
                operator delete(*v18);
                if ( v19 == v18 )
                  goto LABEL_30;
              }
            }
            while ( v19 != v18 );
LABEL_30:
            operator delete((void *)v12, 0x3A0u);
          }
          else
          {
            v20 = *(unsigned int *)(v13 + 14976);
            *(_DWORD *)(v13 + 14976) = v20 + 1;
            *(_QWORD *)(v13 + 8 * v20 + 14848) = v12;
          }
        }
      }
    }
    goto LABEL_33;
  }
  return v6;
}

