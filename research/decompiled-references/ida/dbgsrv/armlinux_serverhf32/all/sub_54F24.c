/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54F24
// Address: 0x00054F24

//----- (00054F24) --------------------------------------------------------
void __fastcall sub_54F24(char **a1, unsigned int a2)
{
  unsigned int v2; // r4
  char *v5; // r1
  unsigned int v6; // r12
  int v7; // r8
  signed int v8; // r3
  char *v9; // r5
  char *v10; // r0
  unsigned int v11; // r9
  int v12; // r5
  int *v13; // r3
  void *v14; // r0
  void *v15; // r0
  const void *v16; // r1
  int v17; // r1
  int v18; // r8
  signed int v19; // r3
  int *v20; // r5
  char *v21; // r0
  int v22; // r3
  void *v23; // r0
  const void *v24; // r1
  int v25; // r1
  size_t n; // [sp+4h] [bp-40h]
  size_t na; // [sp+4h] [bp-40h]
  char v28[8]; // [sp+8h] [bp-3Ch] BYREF
  __int64 src; // [sp+10h] [bp-34h]
  int v30; // [sp+18h] [bp-2Ch]
  int v31; // [sp+1Ch] [bp-28h]
  int v32; // [sp+20h] [bp-24h] BYREF
  __int64 ptr; // [sp+28h] [bp-1Ch]
  int v34; // [sp+30h] [bp-14h]
  int v35; // [sp+34h] [bp-10h]

  v2 = (unsigned int)a1[1];
  if ( v2 == a2 )
    return;
  *(_DWORD *)v28 = -2;
  v30 = 0;
  v31 = 0;
  src = -1;
  if ( v2 > a2 )
  {
    v11 = a2;
    v12 = 24 * a2;
    do
    {
      v13 = (int *)&(*a1)[v12];
      if ( *v13 >= -1 )
      {
        v14 = (void *)v13[2];
        if ( v14 )
        {
          v13[3] = 0;
          sub_77E08(v14);
        }
      }
      ++v11;
      v12 += 24;
    }
    while ( v2 != v11 );
  }
  else
  {
    if ( v2 >= a2 )
      return;
    v5 = *a1;
    v6 = (unsigned int)a1[2];
    if ( *a1 <= v28 && v28 < &v5[24 * v6] )
    {
      v32 = -2;
      v34 = 0;
      ptr = -1;
      v35 = 0;
      if ( a2 <= v6
        || (v21 = (char *)sub_77EB0((int)a1, v5, a2, 0x18u), v2 = (unsigned int)a1[1], v5 = v21, *a1 = v21, a2 > v2) )
      {
        v18 = 24 * v2;
        while ( 1 )
        {
          v20 = (int *)&v5[v18];
          *(_DWORD *)&v5[v18] = -2;
          v20[2] = 0;
          v20[3] = 0;
          v20[4] = 0;
          v20[5] = 0;
          if ( &v5[v18] != (char *)&v32 )
          {
            v25 = v32;
            if ( v32 >= -1 )
            {
              v20[2] = 0;
              v20[3] = 0;
              v19 = HIDWORD(ptr);
              v20[4] = 0;
              na = v19;
              if ( v19 )
              {
                v23 = sub_77E84(v19);
                v20[2] = (int)v23;
                v24 = (const void *)ptr;
                v20[4] = na;
                memcpy(v23, v24, na);
                v25 = v32;
                v20[3] = na;
              }
            }
            else
            {
              *((_QWORD *)v20 + 1) = ptr;
            }
            *v20 = v25;
          }
          ++v2;
          v18 += 24;
          if ( a2 <= v2 )
            break;
          v5 = *a1;
        }
      }
      v22 = v32;
      a1[1] = (char *)a2;
      if ( v22 >= -1 && (_DWORD)ptr )
      {
        HIDWORD(ptr) = 0;
        sub_77E08((void *)ptr);
      }
      goto LABEL_18;
    }
    if ( a2 <= v6
      || (v10 = (char *)sub_77EB0((int)a1, v5, a2, 0x18u), v2 = (unsigned int)a1[1], v5 = v10, *a1 = v10, a2 > v2) )
    {
      v7 = 24 * v2;
      while ( 1 )
      {
        v9 = &v5[v7];
        *(_DWORD *)&v5[v7] = -2;
        *((_DWORD *)v9 + 2) = 0;
        *((_DWORD *)v9 + 3) = 0;
        *((_DWORD *)v9 + 4) = 0;
        *((_DWORD *)v9 + 5) = 0;
        if ( &v5[v7] != v28 )
        {
          v17 = *(_DWORD *)v28;
          if ( *(int *)v28 >= -1 )
          {
            *((_DWORD *)v9 + 2) = 0;
            *((_DWORD *)v9 + 3) = 0;
            v8 = HIDWORD(src);
            *((_DWORD *)v9 + 4) = 0;
            n = v8;
            if ( v8 )
            {
              v15 = sub_77E84(v8);
              *((_DWORD *)v9 + 2) = v15;
              v16 = (const void *)src;
              *((_DWORD *)v9 + 4) = n;
              memcpy(v15, v16, n);
              v17 = *(_DWORD *)v28;
              *((_DWORD *)v9 + 3) = n;
            }
          }
          else
          {
            *((_QWORD *)v9 + 1) = src;
          }
          *(_DWORD *)v9 = v17;
        }
        ++v2;
        v7 += 24;
        if ( a2 <= v2 )
          break;
        v5 = *a1;
      }
    }
  }
  a1[1] = (char *)a2;
LABEL_18:
  if ( *(int *)v28 >= -1 )
  {
    if ( (_DWORD)src )
    {
      HIDWORD(src) = 0;
      sub_77E08((void *)src);
    }
  }
}
