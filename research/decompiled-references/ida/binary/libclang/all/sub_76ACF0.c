__int64 __fastcall sub_76ACF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax
  _DWORD *v8; // rdi
  char v9; // dl
  unsigned int v10; // ebx
  char v12; // dl
  __int64 v13; // rax
  char *v14; // r14
  __int64 v15; // rax
  char *v16; // rbp
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  _QWORD *v19; // r13
  unsigned __int64 v20; // rax
  _QWORD *v21; // r15
  _QWORD *v22; // rdi
  void *v23; // rdi
  _QWORD *v24; // r15
  _QWORD *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rdx
  __int16 v29; // [rsp+10h] [rbp-198h] BYREF
  void **p_ptr; // [rsp+18h] [rbp-190h]
  unsigned int v31; // [rsp+20h] [rbp-188h] BYREF
  char v32; // [rsp+24h] [rbp-184h]
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v34; // [rsp+68h] [rbp-140h]
  _BYTE v35[312]; // [rsp+70h] [rbp-138h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD **)(a1 + 16);
  v9 = *(_BYTE *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  LOWORD(v7) = v9 & 0x1F;
  LOBYTE(a6) = (unsigned __int8)v7 > 0xFu;
  v10 = (2 * (((unsigned __int16)v7 >> 1) & 1))
      | ((v9 & 4) != 0 ? 4 : 0)
      | (*v8 >> 14) & 0x1F
      | (16 * a6)
      | ((v9 & 4) != 0 ? 8 : 0);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 1LL) & 8) == 0
    || *(_BYTE *)(a1 + 2) >> 3 != 4
    || (2 * ((v9 & 2) != 0)) & 8 | (*v8 >> 14) & 8 | ((v9 & 4) != 0 ? 8 : 0) )
  {
    return v10;
  }
  v32 &= ~1u;
  v29 = 0;
  p_ptr = &ptr;
  ptr = v35;
  v34 = 0x800000000LL;
  v31 = 0;
  v12 = sub_897AC0(v8, &v29, a2, 0);
  v13 = (unsigned int)v34;
  if ( !v12 || (_DWORD)v34 )
    goto LABEL_6;
  v14 = (char *)ptr;
  if ( v31 == 7 )
  {
    v26 = sub_6A34D0((__int64)&v31);
    if ( !v26
      || (v26 & 3) != 0
      || (v27 = v26 & 0xFFFFFFFFFFFFFFFCLL, !(unsigned __int8)sub_79BA50(v26 & 0xFFFFFFFFFFFFFFFCLL))
      || (*(_BYTE *)(v27 + 28) & 0x7Fu) - 38 <= 6 && sub_76AB10(v27, (unsigned __int64)&v29) )
    {
      v13 = (unsigned int)v34;
    }
    else
    {
      v13 = (unsigned int)v34;
      v10 |= 8u;
    }
LABEL_6:
    v14 = (char *)ptr;
    v15 = 32 * v13;
    v16 = (char *)ptr + v15;
    if ( ptr != (char *)ptr + v15 )
    {
      do
      {
        v17 = *((_QWORD *)v16 - 3);
        v16 -= 32;
        if ( v17 )
        {
          v18 = *((_QWORD *)v16 + 2);
          if ( v18 )
          {
            if ( v17 >= v18 && v18 + 14848 >= v17 )
            {
              v28 = *(unsigned int *)(v18 + 14976);
              *(_DWORD *)(v18 + 14976) = v28 + 1;
              *(_QWORD *)(v18 + 8 * v28 + 14848) = v17;
            }
            else
            {
              v19 = *(_QWORD **)(v17 + 528);
              v20 = (unsigned __int64)*(unsigned int *)(v17 + 536) << 6;
              v21 = (_QWORD *)((char *)v19 + v20);
              if ( v19 != (_QWORD *)((char *)v19 + v20) )
              {
                do
                {
                  v21 -= 8;
                  v22 = (_QWORD *)v21[3];
                  if ( v22 != v21 + 5 )
                    operator delete(v22, v21[5] + 1LL);
                }
                while ( v19 != v21 );
                v21 = *(_QWORD **)(v17 + 528);
              }
              if ( v21 != (_QWORD *)(v17 + 544) )
                free(v21);
              v23 = *(void **)(v17 + 416);
              if ( v23 != (void *)(v17 + 432) )
                free(v23);
              v24 = (_QWORD *)(v17 + 400);
              do
              {
                v25 = (_QWORD *)*(v24 - 2);
                if ( v25 != v24 )
                  operator delete(v25, *v24 + 1LL);
                v24 -= 4;
              }
              while ( (_QWORD *)(v17 + 80) != v24 );
              operator delete((void *)v17, 0x3A0u);
            }
            *((_QWORD *)v16 + 1) = 0;
          }
        }
      }
      while ( v14 != v16 );
      v14 = (char *)ptr;
    }
  }
  if ( v14 != v35 )
    free(v14);
  if ( v31 > 1 )
    sub_69F740((__int64)&v31);
  return v10;
}

