/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcleanline
// Address: 0x00000000000C6C1C

//----- (00000000000C6C1C) ----------------------------------------------------
unsigned __int64 __fastcall qcleanline(pthread_mutex_t *a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v3; // x24
  unsigned __int64 v7; // x23
  int v8; // w8
  unsigned __int64 v9; // x25
  __int64 v10; // x26
  void *align; // x0
  _BYTE *v12; // x24
  char *v13; // x0
  char *v14; // x24
  unsigned __int64 v15; // x8
  char *v16; // x21
  char *v17; // x0
  int v18; // w8
  char *v19; // x21
  void *v20; // x0
  char *v21; // x1
  unsigned __int64 v22; // x20
  char *v23; // x0
  char v25[4]; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v26; // [xsp+8h] [xbp-58h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(&a1->__align + 1);
  if ( v3 < 2 )
    goto LABEL_58;
  if ( a2 || (a3 & 2) != 0 )
  {
    v8 = *(char *)a1->__align;
    if ( v8 < 0 )
    {
      v7 = 0;
LABEL_12:
      if ( !a2 )
        goto LABEL_33;
    }
    else
    {
      v9 = 0;
      v10 = a1->__align + 1;
      while ( isspace((unsigned __int8)v8) )
      {
        v8 = *(char *)(v10 + v9);
        v7 = ++v9;
        if ( v8 < 0 )
          goto LABEL_12;
      }
      v7 = v9;
      if ( !a2 )
        goto LABEL_33;
    }
  }
  else
  {
    v7 = 0;
    if ( !a2 )
      goto LABEL_33;
  }
  if ( v7 >= v3 - 1 )
    goto LABEL_33;
  align = (void *)a1->__align;
  if ( *(unsigned __int8 *)(a1->__align + v7) == a2 )
  {
    if ( !align )
      goto LABEL_33;
    goto LABEL_16;
  }
  if ( (a3 & 4) != 0 )
  {
    v12 = (_BYTE *)a1->__align;
    v13 = strchr((const char *)(a1->__align + v7), a2);
    if ( v13 )
    {
      v14 = (char *)(v13 - v12);
      if ( v14 != (char *)-1LL )
      {
        if ( v14 )
        {
          v15 = *(&a1->__align + 1);
          v16 = v14 + 1;
          if ( v15 >= (unsigned __int64)(v14 + 1) )
          {
            if ( (char *)v15 != v14 + 1 )
            {
              v25[0] = 0;
              sub_5C6B0(a1, (unsigned __int64)(v14 + 1), v25);
            }
          }
          else
          {
            if ( *(&a1->__align + 2) >= (unsigned __int64)v16 )
            {
              v17 = (char *)a1->__align;
            }
            else
            {
              v17 = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v14 + 1), 1u);
              v15 = *(&a1->__align + 1);
              a1->__align = (__int64)v17;
            }
            memset(&v17[v15], 0, (size_t)&v16[-v15]);
            *(&a1->__align + 1) = (__int64)v16;
          }
          v14[a1->__align] = 0;
        }
        else
        {
          align = (void *)a1->__align;
          if ( a1->__align )
          {
LABEL_16:
            *(&a1->__align + 1) = 0;
            qfree(align);
            a1->__align = 0;
            *(&a1->__align + 2) = 0;
          }
        }
      }
    }
  }
LABEL_33:
  v3 = *(&a1->__align + 1);
  if ( v3 >= 2 )
  {
    if ( (a3 & 1) != 0 )
    {
LABEL_37:
      if ( v3 < 2 )
      {
LABEL_38:
        LOBYTE(v18) = 0;
        goto LABEL_40;
      }
      while ( 1 )
      {
        v18 = *(char *)(a1->__align + v3 - 2);
        if ( v18 < 0 )
          break;
LABEL_40:
        if ( !isspace((unsigned __int8)v18) )
          break;
        v19 = (char *)(v3 - 1);
        if ( (__int64)(v3 - 1) > 1 )
        {
          v21 = (char *)a1->__align;
          if ( *(&a1->__align + 2) < (unsigned __int64)v19 )
          {
            v21 = (char *)qvector_reserve(a1, v21, v3 - 1, 1u);
            a1->__align = (__int64)v21;
          }
          *(&a1->__align + 1) = (__int64)v19;
          v21[v3 - 2] = 0;
LABEL_36:
          v3 = *(&a1->__align + 1);
          goto LABEL_37;
        }
        v20 = (void *)a1->__align;
        if ( !a1->__align )
          goto LABEL_36;
        *(&a1->__align + 1) = 0;
        qfree(v20);
        v3 = *(&a1->__align + 1);
        a1->__align = 0;
        *(&a1->__align + 2) = 0;
        if ( v3 < 2 )
          goto LABEL_38;
      }
    }
    if ( (a3 & 2) != 0 && v7 && v3 >= 2 )
    {
      v22 = v3 - 1 - v7;
      if ( v3 - 1 <= v7 )
        v22 = 0;
      else
        memmove((void *)a1->__align, (const void *)(a1->__align + v7), v3 - 1 - v7);
      if ( *(&a1->__align + 2) >= v22 + 1 )
      {
        v23 = (char *)a1->__align;
      }
      else
      {
        v23 = (char *)qvector_reserve(a1, (void *)a1->__align, v22 + 1, 1u);
        a1->__align = (__int64)v23;
      }
      *(&a1->__align + 1) = v22 + 1;
      v23[v22] = 0;
      v3 = *(&a1->__align + 1);
    }
  }
LABEL_58:
  if ( v3 )
    return v3 - 1;
  else
    return 0;
}
// C6CBC: conditional instruction was optimized away because x24.8>=2u
// C6D10: conditional instruction was optimized away because x24.8>=2u
