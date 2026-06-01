/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BB28
// Address: 0x000000000042BB28

//----- (000000000042BB28) ----------------------------------------------------
__int64 __fastcall sub_42BB28(__int64 a1)
{
  unsigned int v2; // w21
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x24
  unsigned int v7; // w1
  unsigned __int64 v8; // x3
  __int64 v9; // x21
  unsigned __int64 v10; // x1
  unsigned __int64 v11; // x22
  unsigned int v12; // w21
  __int64 v13; // x1
  unsigned __int64 v14; // x0
  char *v15; // x0
  __int64 v16; // x22
  __int64 v17; // x21
  int v18; // w23
  int v19; // w0
  int v20; // w0
  unsigned int v21; // w1
  __int64 v22; // x2
  int v23; // w0
  unsigned int v24; // w1
  __int64 v25; // x2
  unsigned int v26; // w1
  unsigned int v27; // w0
  __int64 v28; // x22
  __int64 v29; // x25
  int v30; // w23
  unsigned int v31; // w2
  const char *v32; // x0
  _QWORD *v33; // x0
  void *v34; // x0
  int v35; // w2
  const char *v36; // x2
  int v37; // w0
  const char *v38; // x0
  char *s1; // [xsp+68h] [xbp-38h]
  char *s1a; // [xsp+68h] [xbp-38h]
  char *v41; // [xsp+70h] [xbp-30h]
  void *ptr; // [xsp+80h] [xbp-20h] BYREF
  char *v43; // [xsp+88h] [xbp-18h]
  __int64 v44; // [xsp+90h] [xbp-10h]

  v2 = 0;
  if ( *(_QWORD *)(a1 + 544) )
  {
    v4 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
    v5 = *(_QWORD *)(a1 + 480);
    v6 = v4 - v5;
    if ( sub_48C428(*(_QWORD *)(a1 + 472), v5 + *(_QWORD *)(a1 + 544), 0) == -1 )
    {
LABEL_17:
      v2 = 0;
LABEL_18:
      sub_48C428(*(_QWORD *)(a1 + 472), v6 + *(_QWORD *)(a1 + 480), 0);
      return v2;
    }
    v7 = *(_DWORD *)(a1 + 568);
    v8 = *(_QWORD *)(a1 + 120);
    v9 = v7;
    if ( v7 > v8 )
    {
      v15 = *(char **)(a1 + 112);
      if ( (unsigned __int64)v7 > *(_QWORD *)(a1 + 128) )
      {
        v15 = (char *)sub_491288(a1 + 112, *(void **)(a1 + 112), v7, 0x40u);
        *(_QWORD *)(a1 + 112) = v15;
        v8 = *(_QWORD *)(a1 + 120);
      }
      memset(&v15[64 * v8], 0, (v9 - v8) << 6);
      *(_QWORD *)(a1 + 120) = v9;
      v7 = *(_DWORD *)(a1 + 568);
    }
    else if ( v7 != v8 && v7 < v8 )
    {
      *(_QWORD *)(a1 + 120) = v7;
    }
    *(_BYTE *)(a1 + 248) = 1;
    if ( v7 )
    {
      v10 = *(_QWORD *)(a1 + 544);
      v11 = 0;
      v12 = 0;
      do
      {
        if ( sub_48C428(*(_QWORD *)(a1 + 472), v10 + *(_QWORD *)(a1 + 480), 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 248) )
          sub_4068C0();
        v13 = 0;
        if ( *(_QWORD *)(a1 + 120) > v11 )
          v13 = *(_QWORD *)(a1 + 112) + (v11 << 6);
        if ( !sub_420FD8((int *)a1, v13) )
          break;
        if ( *(_DWORD *)(a1 + 568) <= ++v12 )
          goto LABEL_22;
        v14 = *(_QWORD *)(a1 + 544);
        v11 = v12;
        v10 = v14 + v12 * (unsigned __int64)*(unsigned __int16 *)(a1 + 562);
      }
      while ( v14 <= v10 );
      goto LABEL_17;
    }
LABEL_22:
    v16 = *(_QWORD *)(a1 + 112);
    v17 = v16 + (*(_QWORD *)(a1 + 120) << 6);
    if ( v17 != v16 )
    {
      v18 = 0;
      while ( 1 )
      {
        do
        {
          v16 += 64;
          ++v18;
          if ( v16 == v17 )
            goto LABEL_46;
        }
        while ( !v18 || !*(_QWORD *)(v16 + 32) );
        v19 = *(_DWORD *)(v16 + 4);
        switch ( v19 )
        {
          case 6:
            v26 = *(_DWORD *)(v16 + 40);
            if ( !*(_BYTE *)(a1 + 248) )
              sub_4068C0();
            if ( (unsigned __int64)v26 < *(_QWORD *)(a1 + 120)
              && (v25 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v26 << 6)) != 0 )
            {
              if ( *(_DWORD *)(v25 + 4) != 11 )
                goto LABEL_37;
              *(_DWORD *)(v25 + 40) = 0;
            }
            else
            {
              sub_40A690((int)"Illegal link section %d of the dynamic linking information section\n");
            }
            break;
          case 11:
            v23 = *(unsigned __int8 *)(a1 + 248);
            *(_DWORD *)(a1 + 160) = v18;
            v24 = *(_DWORD *)(v16 + 40);
            if ( !v23 )
              sub_4068C0();
            if ( (unsigned __int64)v24 < *(_QWORD *)(a1 + 120)
              && (v25 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v24 << 6)) != 0 )
            {
LABEL_37:
              sub_42B9D8(a1, (__int64 *)(a1 + 352), v25, 1);
            }
            else
            {
              sub_40A690((int)"Illegal link section %d of the string table for dynamic linking symbols\n");
            }
            break;
          case 2:
            v20 = *(unsigned __int8 *)(a1 + 248);
            *(_DWORD *)(a1 + 192) = v18;
            v21 = *(_DWORD *)(v16 + 40);
            if ( !v20 )
              sub_4068C0();
            if ( (unsigned __int64)v21 < *(_QWORD *)(a1 + 120)
              && (v22 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v21 << 6)) != 0 )
            {
              sub_42B9D8(a1, (__int64 *)(a1 + 320), v22, 1);
            }
            else
            {
              sub_40A690((int)"Illegal link section %d of the string table for symbols\n");
            }
            break;
        }
      }
    }
LABEL_46:
    v27 = *(_DWORD *)(a1 + 572);
    if ( v27 )
    {
      if ( !*(_BYTE *)(a1 + 248) )
        sub_4068C0();
      v28 = *(_QWORD *)(a1 + 112);
      if ( (unsigned __int64)v27 < *(_QWORD *)(a1 + 120) )
      {
        v33 = (_QWORD *)(v28 + ((unsigned __int64)v27 << 6));
        if ( v33 )
        {
          *(_QWORD *)(a1 + 256) = v33[3];
          *(_QWORD *)(a1 + 264) = v33[2];
          *(_QWORD *)(a1 + 272) = v33[4];
        }
      }
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 112);
    }
    ptr = nullptr;
    v43 = nullptr;
    v44 = 0;
    if ( v17 == v28 )
    {
      v29 = a1 + 80;
      v34 = nullptr;
LABEL_67:
      v35 = *(_DWORD *)(v29 + 84);
      if ( *(_DWORD *)(v29 + 88) )
      {
        if ( !v35 )
          *(_DWORD *)(v29 + 88) = 0;
      }
      else
      {
        *(_DWORD *)(v29 + 88) = v35;
      }
      if ( v34 )
      {
        v43 = nullptr;
        j__free(v34);
      }
      v2 = 1;
      goto LABEL_18;
    }
    v29 = a1 + 80;
    v30 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              v28 += 64;
              ++v30;
              if ( v28 == v17 )
              {
                v34 = ptr;
                goto LABEL_67;
              }
            }
            while ( !v30 || !*(_QWORD *)(v28 + 32) );
            v43 = nullptr;
            sub_42B750((__int64 *)(a1 + 80), (__int64)&ptr, (unsigned int *)v28);
            v31 = *(_DWORD *)(v28 + 4);
            if ( v31 != 18 )
              break;
            v37 = *(_DWORD *)(v28 + 40);
            if ( v37 )
            {
              if ( v37 == *(_DWORD *)(a1 + 192) )
              {
                *(_DWORD *)(a1 + 204) = v30;
                v37 = *(_DWORD *)(v28 + 40);
              }
              if ( v37 == *(_DWORD *)(a1 + 160) )
                *(_DWORD *)(a1 + 208) = v30;
            }
          }
          if ( v31 <= 0x12 )
            break;
          switch ( v31 )
          {
            case 0x6FFFFFFEu:
              *(_DWORD *)(a1 + 220) = v30;
              break;
            case 0x6FFFFFFFu:
              *(_DWORD *)(a1 + 224) = v30;
              break;
            case 0x6FFFFFFDu:
              *(_DWORD *)(a1 + 216) = v30;
              break;
          }
        }
        if ( v31 != 3 )
          break;
        v36 = (const char *)ptr;
        if ( !v43 )
          v36 = (const char *)&qword_4B2D48;
        s1a = (char *)v36;
        if ( !strcmp(v36, ".strtab") )
        {
          sub_42B9D8(a1, (__int64 *)(a1 + 320), v28, 0);
        }
        else if ( !strcmp(s1a, ".dynstr") )
        {
          sub_42B9D8(a1, (__int64 *)(a1 + 352), v28, 0);
        }
      }
      if ( v31 == 8 )
        break;
      if ( v31 == 1 )
      {
        v32 = (const char *)ptr;
        if ( !v43 )
          v32 = (const char *)&qword_4B2D48;
        s1 = v43;
        v41 = (char *)v32;
        if ( !strcmp(v32, ".interp") )
        {
          *(_DWORD *)(a1 + 176) = v30;
        }
        else if ( !strcmp(v41, ".got") )
        {
          *(_DWORD *)(a1 + 164) = v30;
          *(_BYTE *)(a1 + 249) = 1;
        }
        else if ( !strcmp(v41, ".got.plt") )
        {
          *(_DWORD *)(a1 + 168) = v30;
        }
        else if ( !strcmp(v41, ".plt.got") )
        {
          *(_DWORD *)(a1 + 212) = v30;
        }
        else if ( !strcmp(v41, ".plt.sec") )
        {
          *(_DWORD *)(a1 + 228) = v30;
        }
        else if ( !strcmp(v41, ".gnu_debugdata") )
        {
          *(_DWORD *)(a1 + 232) = v30;
        }
        else if ( !strcmp(v41, ".eh_frame") )
        {
          *(_DWORD *)(a1 + 236) = v30;
        }
        else if ( *(_BYTE *)(a1 + 617) && !strcmp(v41, ".opd") )
        {
          *(_DWORD *)(a1 + 200) = v30;
        }
        else
        {
LABEL_91:
          v38 = (const char *)ptr;
          if ( !s1 )
            v38 = (const char *)&qword_4B2D48;
          if ( !strcmp(v38, ".plt") )
            *(_DWORD *)(a1 + 184) = v30;
        }
      }
    }
    s1 = v43;
    goto LABEL_91;
  }
  return v2;
}
// 42BB28: could not find valid save-restore pair for x24
// 4B2D48: using guessed type __int64 qword_4B2D48;
