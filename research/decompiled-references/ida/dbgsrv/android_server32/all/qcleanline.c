/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcleanline
// Address: 0x00084588

//----- (00084588) --------------------------------------------------------
unsigned int __fastcall qcleanline(void **a1, int a2, int a3)
{
  unsigned int v4; // r6
  unsigned int v5; // r7
  int v6; // r1
  int v7; // r5
  char *v8; // r2
  char *v9; // r5
  char *v10; // r0
  char *v11; // r5
  unsigned int v12; // r1
  char *v13; // r0
  char *v14; // r0
  unsigned int v15; // r2
  size_t v16; // r1
  char *v17; // r6
  int v18; // r1
  char *v19; // r5
  void *v20; // r0
  char *v21; // r1
  size_t v22; // r5
  _BYTE *v23; // r0
  unsigned int result; // r0
  int v26; // [sp+Ch] [bp-14h]
  char *ptr; // [sp+14h] [bp-Ch]
  char v29[4]; // [sp+18h] [bp-8h] BYREF

  v4 = (unsigned int)a1[1];
  if ( v4 < 2 )
    goto LABEL_47;
  v26 = a3 & 2;
  v5 = 0;
  if ( a2 || (a3 & 2) != 0 )
  {
    v5 = 0;
    v6 = *(char *)*a1;
    if ( v6 >= 0 )
    {
      v7 = (int)*a1 + 1;
      v5 = 0;
      do
      {
        if ( !isspace((unsigned __int8)v6) )
          break;
        v6 = *(char *)(v7 + v5++);
      }
      while ( v6 > -1 );
    }
  }
  if ( a2 && v5 < v4 - 1 )
  {
    v8 = (char *)*a1;
    if ( *((unsigned __int8 *)*a1 + v5) == a2 )
      goto LABEL_11;
    if ( (a3 & 4) == 0 )
      goto LABEL_24;
    ptr = (char *)*a1;
    v9 = (char *)*a1;
    v10 = strchr((const char *)*a1 + v5, a2);
    v11 = (char *)(v10 - v9);
    v8 = ptr;
    if ( !v10 )
      goto LABEL_24;
    v12 = (unsigned int)(v11 + 1);
    if ( v11 == (char *)-1 )
      goto LABEL_24;
    if ( !v11 )
    {
LABEL_11:
      if ( v8 )
      {
        a1[1] = nullptr;
        qfree(v8);
        a1[2] = nullptr;
        *a1 = nullptr;
      }
    }
    else
    {
      if ( v4 >= v12 )
      {
        if ( v4 != v12 )
        {
          v29[0] = 0;
          sub_37884(a1, v12, v29);
        }
      }
      else
      {
        if ( (unsigned int)a1[2] < v12 )
        {
          v13 = (char *)qvector_reserve((int)a1, ptr, (unsigned int)(v11 + 1), 1u);
          v12 = (unsigned int)(v11 + 1);
          v8 = v13;
          *a1 = v13;
          v4 = (unsigned int)a1[1];
        }
        v14 = &v8[v4];
        v15 = v12;
        v16 = v12 - v4;
        v17 = (char *)v15;
        memset(v14, 0, v16);
        a1[1] = v17;
      }
      v11[(_DWORD)*a1] = 0;
    }
  }
LABEL_24:
  v4 = (unsigned int)a1[1];
  if ( v4 >= 2 )
  {
    if ( a3 << 31 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          LOBYTE(v18) = 0;
          if ( v4 >= 2 )
          {
            v18 = *((char *)*a1 + v4 - 2);
            if ( v18 <= -1 )
              goto LABEL_37;
          }
          if ( !isspace((unsigned __int8)v18) )
            goto LABEL_37;
          v19 = (char *)(v4 - 1);
          if ( (int)(v4 - 1) <= 1 )
            break;
          v21 = (char *)*a1;
          if ( a1[2] < v19 )
          {
            v21 = (char *)qvector_reserve((int)a1, v21, v4 - 1, 1u);
            *a1 = v21;
          }
          a1[1] = v19;
          v21[v4 - 2] = 0;
LABEL_27:
          v4 = (unsigned int)a1[1];
        }
        v20 = *a1;
        if ( !*a1 )
          goto LABEL_27;
        a1[1] = nullptr;
        qfree(v20);
        a1[2] = nullptr;
        *a1 = nullptr;
        v4 = (unsigned int)a1[1];
      }
    }
LABEL_37:
    if ( v26 && v5 && v4 >= 2 )
    {
      v22 = 0;
      if ( v4 - 1 > v5 )
      {
        v22 = v4 - 1 - v5;
        memmove(*a1, (char *)*a1 + v5, v22);
      }
      if ( (unsigned int)a1[2] >= v22 + 1 )
      {
        v23 = *a1;
      }
      else
      {
        v23 = qvector_reserve((int)a1, *a1, v22 + 1, 1u);
        *a1 = v23;
      }
      a1[1] = (void *)(v22 + 1);
      v23[v22] = 0;
      v4 = (unsigned int)a1[1];
    }
  }
LABEL_47:
  result = v4 - 1;
  if ( !v4 )
    return 0;
  return result;
}
// 845F0: conditional instruction was optimized away because r6.4>=2u
// 8461E: conditional instruction was optimized away because r6.4>=2u
