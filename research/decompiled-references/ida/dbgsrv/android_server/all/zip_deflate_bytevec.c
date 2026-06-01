/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_deflate_bytevec
// Address: 0x00000000000B8C28

//----- (00000000000B8C28) ----------------------------------------------------
bool __fastcall zip_deflate_bytevec(pthread_mutex_t *a1, _QWORD *a2)
{
  int v4; // w21
  __int64 v5; // x26
  __int64 v6; // x24
  __int64 v7; // x21
  unsigned __int64 v8; // x23
  unsigned __int64 v9; // x21
  __int64 align; // x1
  char *v11; // x0
  char *v12; // x8
  int v13; // w0
  size_t v14; // x20
  unsigned __int64 v15; // x24
  unsigned __int64 v16; // x22
  __int64 v17; // x0
  char *v18; // x8
  __int128 v20; // [xsp+18h] [xbp-100D8h] BYREF
  __int64 v21; // [xsp+28h] [xbp-100C8h]
  _BYTE *v22; // [xsp+30h] [xbp-100C0h]
  __int128 v23; // [xsp+38h] [xbp-100B8h]
  __int128 v24; // [xsp+48h] [xbp-100A8h]
  __int128 v25; // [xsp+58h] [xbp-10098h]
  __int128 v26; // [xsp+68h] [xbp-10088h]
  __int128 v27; // [xsp+78h] [xbp-10078h]
  _BYTE src[32768]; // [xsp+88h] [xbp-10068h] BYREF
  _BYTE v29[32776]; // [xsp+8088h] [xbp-8068h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  v23 = 0u;
  v27 = 0u;
  v26 = 0u;
  v25 = 0u;
  v24 = 0u;
  v21 = 0;
  v22 = src;
  v20 = 0u;
  LODWORD(v23) = 0x8000;
  v4 = sub_C8640(&v20, 0xFFFFFFFF, "1.3.1", 112);
  if ( !v4 )
  {
    v5 = 0;
    v6 = 0x8000;
    while ( 1 )
    {
      LODWORD(v7) = DWORD2(v20);
      if ( v6 >= 1 && !DWORD2(v20) )
      {
        if ( (unsigned __int64)(a2[1] - v5) >= 0x8000 )
          v7 = 0x8000;
        else
          v7 = a2[1] - v5;
        __memmove_chk(v29, *a2 + v5, v7, 0x8000);
        v5 += v7;
        v6 = v7;
        *(_QWORD *)&v20 = v29;
        DWORD2(v20) = v7;
      }
      if ( (_DWORD)v23 )
        goto LABEL_22;
      v8 = *(&a1->__align + 1);
      if ( v8 <= 0xFFFFFFFFFFFF7FFFLL )
        v9 = v8 + 0x8000;
      else
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v8 >= v9 )
      {
        if ( v8 <= v9 )
          goto LABEL_21;
      }
      else
      {
        align = a1->__align;
        if ( *(&a1->__align + 2) >= v9 )
        {
          v12 = (char *)*(&a1->__align + 1);
        }
        else
        {
          v11 = (char *)qvector_reserve(a1, (void *)align, v9, 1u);
          v12 = (char *)*(&a1->__align + 1);
          align = (__int64)v11;
          a1->__align = (__int64)v11;
        }
        memset(&v12[align], 0, v9 - (_QWORD)v12);
      }
      *(&a1->__align + 1) = v9;
LABEL_21:
      memcpy((void *)(a1->__align + v8), src, 0x8000u);
      LODWORD(v7) = DWORD2(v20);
      v22 = src;
      LODWORD(v23) = 0x8000;
LABEL_22:
      v13 = sub_C9850((__int64)&v20, 4 * (unsigned int)((_DWORD)v7 == 0));
      if ( v13 )
      {
        v4 = v13;
        break;
      }
    }
  }
  sub_C88E4(&v20);
  v14 = v22 - src;
  if ( v22 != src )
  {
    v15 = *(&a1->__align + 1);
    if ( __CFADD__(v15, v14) )
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v16 = v15 + v14;
    if ( v15 >= v16 )
    {
      if ( v15 <= v16 )
        goto LABEL_36;
    }
    else
    {
      if ( *(&a1->__align + 2) >= v16 )
      {
        v17 = a1->__align;
        v18 = (char *)*(&a1->__align + 1);
      }
      else
      {
        v17 = (__int64)qvector_reserve(a1, (void *)a1->__align, v16, 1u);
        v18 = (char *)*(&a1->__align + 1);
        a1->__align = v17;
      }
      memset(&v18[v17], 0, v16 - (_QWORD)v18);
    }
    *(&a1->__align + 1) = v16;
LABEL_36:
    memcpy((void *)(a1->__align + v15), src, v14);
  }
  return v4 >= 0;
}
// 36AF0: using guessed type __int64 __fastcall __memmove_chk(_QWORD, _QWORD, _QWORD, _QWORD);
