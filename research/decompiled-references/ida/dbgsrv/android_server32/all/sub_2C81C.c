/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C81C
// Address: 0x0002C81C

//----- (0002C81C) --------------------------------------------------------
int __fastcall sub_2C81C(int a1)
{
  _QWORD *v2; // r6
  int v3; // r4
  __int64 v4; // r0
  unsigned int v5; // r5
  __int64 v6; // r2
  int v7; // r6
  __int64 v8; // r0
  unsigned int v9; // r4
  unsigned int v10; // r1
  char *v11; // r0
  unsigned int v12; // r5
  unsigned __int64 v13; // r0
  unsigned int v14; // r7
  __int64 v15; // r2
  int v16; // r1
  int v17; // r4
  int v18; // r6
  int v19; // r4
  int v20; // r5
  int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // r1
  _DWORD *v24; // r2
  unsigned int v25; // r1
  unsigned int v26; // r0
  _DWORD *v27; // r0
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v31; // r3
  unsigned int *v32; // r6
  int v33; // r5
  int v34; // r0
  const char *v35; // r4
  char *v36; // r0
  const char *v37; // r0
  unsigned int v38; // r0
  const char *v39; // r0
  bool v40; // zf
  int *v41; // r0
  _DWORD *v42; // r2
  int v43; // r0
  unsigned __int64 v45; // [sp+44h] [bp-84h]
  unsigned int *v46; // [sp+58h] [bp-70h]
  void **v47; // [sp+5Ch] [bp-6Ch]
  char *v48; // [sp+60h] [bp-68h]
  char *v49; // [sp+60h] [bp-68h]
  _DWORD *v50; // [sp+64h] [bp-64h]
  int *v51; // [sp+70h] [bp-58h]
  _DWORD *v52; // [sp+74h] [bp-54h]
  unsigned int v53; // [sp+78h] [bp-50h]
  _BYTE *v54; // [sp+78h] [bp-50h]
  __int64 *v55; // [sp+78h] [bp-50h]
  int v56; // [sp+7Ch] [bp-4Ch]
  unsigned int *v57; // [sp+7Ch] [bp-4Ch]
  int v58; // [sp+80h] [bp-48h]
  char *s1[16]; // [sp+84h] [bp-44h] BYREF

  v2 = (_QWORD *)(a1 + 428);
  v3 = 0;
  if ( *(_QWORD *)(a1 + 428) )
  {
    v4 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
    v58 = a1;
    v53 = *(_DWORD *)(a1 + 372);
    v5 = *(_DWORD *)(a1 + 368);
    v45 = v4 - __PAIR64__(v53, v5);
    v52 = (_DWORD *)(v58 + 368);
    v51 = (int *)(v58 + 364);
    v6 = *v2;
    v50 = v2;
    v7 = v58;
    v8 = qlseek(*(_DWORD *)(v58 + 364), v6 + __PAIR64__(v53, v5), 0);
    v3 = 0;
    if ( ((unsigned int)v8 & HIDWORD(v8)) == 0xFFFFFFFF )
    {
LABEL_119:
      qlseek(*v51, *(_QWORD *)v52 + v45, 0);
      return v3;
    }
    v9 = *(_DWORD *)(v58 + 452);
    v46 = (unsigned int *)(v58 + 452);
    v10 = *(_DWORD *)(v58 + 60);
    v47 = (void **)(v58 + 56);
    if ( v10 >= v9 )
    {
      if ( v10 != v9 )
      {
        memset(s1, 0, sizeof(s1));
        sub_35DA8(v47, v9, (int *)s1);
      }
    }
    else
    {
      if ( *(_DWORD *)(v58 + 64) >= v9 )
      {
        v11 = (char *)*v47;
      }
      else
      {
        v11 = (char *)qvector_reserve((int)v47, *v47, v9, 0x40u);
        *(_DWORD *)(v58 + 56) = v11;
        v10 = *(_DWORD *)(v58 + 60);
      }
      memset(&v11[64 * v10], 0, (v9 - v10) << 6);
      *(_DWORD *)(v58 + 60) = v9;
    }
    *(_BYTE *)(v58 + 176) = 1;
    v54 = (_BYTE *)(v58 + 176);
    if ( *v46 )
    {
      v12 = 0;
      v56 = 0;
      while ( 1 )
      {
        v13 = *(unsigned __int16 *)(v58 + 446) * (unsigned __int64)v12;
        v14 = (v13 + *(_QWORD *)v50) >> 32;
        if ( __CFADD__(__CFADD__((_DWORD)v13, *v50), v50[1]) | __CFADD__(HIDWORD(v13), v14) )
          break;
        HIDWORD(v15) = *(_DWORD *)(v58 + 372);
        v3 = 0;
        v7 = v58;
        LODWORD(v15) = v13 + *v50;
        if ( qlseek(*v51, __PAIR64__(v14, *v52) + v15, 0) == -1 )
          goto LABEL_119;
        if ( !*v54 )
        {
          if ( !under_debugger )
            interr(20099);
LABEL_131:
          __debugbreak();
        }
        v16 = 0;
        if ( *(_DWORD *)(v58 + 60) > v12 )
          v16 = (int)*v47 + v56;
        ++v12;
        v3 = 0;
        if ( !sub_2C574(v58, v16) )
          goto LABEL_119;
        v56 += 64;
        if ( v12 >= *v46 )
          goto LABEL_22;
      }
      v3 = 0;
      goto LABEL_119;
    }
    v47 = (void **)(v58 + 56);
LABEL_22:
    v17 = *(_DWORD *)(v7 + 56);
    v18 = *(_DWORD *)(v7 + 60) << 6;
    v57 = (unsigned int *)(v17 + v18);
    if ( v18 )
    {
      v19 = v17 + 32;
      v20 = 0;
      while ( 1 )
      {
        if ( !v20 || !*(_QWORD *)v19 )
          goto LABEL_45;
        v21 = *(_DWORD *)(v19 - 28);
        if ( v21 == 11 )
          break;
        if ( v21 == 6 )
        {
          if ( !*v54 )
          {
            if ( !under_debugger )
              interr(20099);
            goto LABEL_131;
          }
          v23 = *(_DWORD *)(v19 + 8);
          if ( *(_DWORD *)(v58 + 60) <= v23 || (v24 = (char *)*v47 + 64 * v23) == nullptr )
          {
            sub_1BBA0((int)"Illegal link section %d of the dynamic linking information section\n", v23);
            goto LABEL_45;
          }
          if ( v24[1] != 11 )
            goto LABEL_41;
          v24[10] = 0;
        }
        else if ( v21 == 2 )
        {
          *(_DWORD *)(v58 + 124) = v20;
          if ( !*v54 )
          {
            if ( !under_debugger )
              interr(20099);
            goto LABEL_131;
          }
          v22 = *(_DWORD *)(v19 + 8);
          if ( *(_DWORD *)(v58 + 60) > v22 && (char *)*v47 + 64 * v22 )
            sub_2CF34(v58, (unsigned int *)(v58 + 232), (_DWORD *)*v47 + 16 * v22, 1);
          else
            sub_1BBA0((int)"Illegal link section %d of the string table for symbols\n", v22);
        }
LABEL_45:
        v19 += 64;
        v18 -= 64;
        ++v20;
        if ( !v18 )
          goto LABEL_48;
      }
      *(_DWORD *)(v58 + 92) = v20;
      if ( !*v54 )
      {
        if ( !under_debugger )
          interr(20099);
        goto LABEL_131;
      }
      v25 = *(_DWORD *)(v19 + 8);
      if ( *(_DWORD *)(v58 + 60) <= v25 || (v24 = (char *)*v47 + 64 * v25) == nullptr )
      {
        sub_1BBA0((int)"Illegal link section %d of the string table for dynamic linking symbols\n", v25);
        goto LABEL_45;
      }
LABEL_41:
      sub_2CF34(v58, (unsigned int *)(v58 + 264), v24, 1);
      goto LABEL_45;
    }
LABEL_48:
    v26 = *(_DWORD *)(v58 + 456);
    if ( v26 )
    {
      if ( !*v54 )
      {
        if ( !under_debugger )
          interr(20099);
        goto LABEL_131;
      }
      if ( *(_DWORD *)(v58 + 60) > v26 )
      {
        v27 = (char *)*v47 + 64 * v26;
        if ( v27 )
        {
          v28 = v27[6];
          *(_DWORD *)(v58 + 188) = v27[7];
          *(_DWORD *)(v58 + 184) = v28;
          v29 = v27[4];
          *(_DWORD *)(v58 + 196) = v27[5];
          *(_DWORD *)(v58 + 192) = v29;
          v30 = v27[8];
          *(_DWORD *)(v58 + 204) = v27[9];
          *(_DWORD *)(v58 + 200) = v30;
        }
      }
    }
    v31 = 0;
    memset(s1, 0, 12);
    v32 = (unsigned int *)*v47;
    if ( *v47 == v57 )
    {
      v41 = (int *)(v58 + 96);
      v42 = (_DWORD *)(v58 + 100);
    }
    else
    {
      v55 = (__int64 *)(v58 + 184);
      v33 = 0;
      do
      {
        if ( v33 && *((_QWORD *)v32 + 4) )
        {
          s1[1] = nullptr;
          if ( *v55 >= 1 && *(_QWORD *)(v58 + 200) )
            sub_32154(*(_DWORD *)(v58 + 172), (void **)s1, v55, *v32);
          v34 = v32[1];
          if ( v34 > 1879048188 )
          {
            switch ( v34 )
            {
              case 1879048189:
                *(_DWORD *)(v58 + 148) = v33;
                break;
              case 1879048190:
                *(_DWORD *)(v58 + 152) = v33;
                break;
              case 1879048191:
                *(_DWORD *)(v58 + 156) = v33;
                break;
            }
          }
          else
          {
            switch ( v34 )
            {
              case 1:
                v48 = s1[1];
                if ( s1[1] )
                  v35 = s1[0];
                else
                  v35 = &byte_B3CBE;
                if ( !strcmp(v35, ".interp") )
                {
                  *(_DWORD *)(v58 + 108) = v33;
                }
                else if ( !strcmp(v35, ".got") )
                {
                  *(_DWORD *)(v58 + 96) = v33;
                  *(_BYTE *)(v58 + 177) = 1;
                }
                else if ( !strcmp(v35, ".got.plt") )
                {
                  *(_DWORD *)(v58 + 100) = v33;
                }
                else if ( !strcmp(v35, ".plt.got") )
                {
                  *(_DWORD *)(v58 + 144) = v33;
                }
                else if ( !strcmp(v35, ".plt.sec") )
                {
                  *(_DWORD *)(v58 + 160) = v33;
                }
                else if ( !strcmp(v35, ".gnu_debugdata") )
                {
                  *(_DWORD *)(v58 + 164) = v33;
                }
                else if ( !strcmp(v35, ".eh_frame") )
                {
                  *(_DWORD *)(v58 + 168) = v33;
                }
                else
                {
                  if ( !*(_BYTE *)(v58 + 481) )
                  {
                    if ( v48 )
                      goto LABEL_71;
                    goto LABEL_106;
                  }
                  v40 = strcmp(v35, ".opd") == 0;
                  v36 = v48;
                  if ( !v40 )
                    goto LABEL_70;
                  *(_DWORD *)(v58 + 132) = v33;
                }
                break;
              case 3:
                if ( s1[1] )
                  v39 = s1[0];
                else
                  v39 = &byte_B3CBE;
                v49 = (char *)v39;
                if ( !strcmp(v39, ".strtab") )
                {
                  sub_2CF34(v58, (unsigned int *)(v58 + 232), v32, 0);
                }
                else if ( !strcmp(v49, ".dynstr") )
                {
                  sub_2CF34(v58, (unsigned int *)(v58 + 264), v32, 0);
                }
                break;
              case 8:
                v36 = s1[1];
LABEL_70:
                if ( v36 )
LABEL_71:
                  v37 = s1[0];
                else
LABEL_106:
                  v37 = &byte_B3CBE;
                if ( !strcmp(v37, ".plt") )
                  *(_DWORD *)(v58 + 116) = v33;
                break;
              case 18:
                v38 = v32[10];
                if ( v38 )
                {
                  if ( v38 == *(_DWORD *)(v58 + 124) )
                  {
                    *(_DWORD *)(v58 + 136) = v33;
                    v38 = v32[10];
                  }
                  if ( v38 == *(_DWORD *)(v58 + 92) )
                    *(_DWORD *)(v58 + 140) = v33;
                }
                break;
              default:
                break;
            }
          }
        }
        ++v33;
        v32 += 16;
      }
      while ( v57 != v32 );
      v42 = (_DWORD *)(v58 + 100);
      v31 = 0;
      v41 = (int *)(v58 + 96);
    }
    v43 = *v41;
    if ( *v42 )
    {
      if ( v43 )
      {
LABEL_116:
        if ( s1[0] )
        {
          s1[1] = nullptr;
          qfree(s1[0]);
          s1[2] = nullptr;
          s1[0] = nullptr;
        }
        v3 = 1;
        goto LABEL_119;
      }
    }
    else
    {
      v31 = v43;
    }
    *v42 = v31;
    goto LABEL_116;
  }
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
