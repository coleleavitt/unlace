/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50D00
// Address: 0x0000000000050D00

//----- (0000000000050D00) ----------------------------------------------------
__int64 __fastcall sub_50D00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  char **v6; // r15
  unsigned __int64 v7; // rdi
  char *v8; // rax
  char *v9; // rbx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  bool v12; // cf
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rbx
  int v18; // ebp
  int v19; // eax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax
  char *v28; // rcx
  __int64 v29; // rax
  char *v30; // r14
  __int64 *v31; // r13
  int v32; // r15d
  _DWORD *v33; // rcx
  int v34; // eax
  char *v35; // rbp
  const char *v36; // r13
  int v37; // eax
  const char *v38; // rdi
  int v39; // eax
  const char *v40; // rbp
  int v41; // eax
  __int64 v43; // [rsp+10h] [rbp-98h]
  char *s1[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v45; // [rsp+40h] [rbp-68h]
  __int128 v46; // [rsp+50h] [rbp-58h]
  __int128 v47; // [rsp+60h] [rbp-48h]
  unsigned __int64 v48; // [rsp+70h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 544) )
  {
    LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  v2 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v3 = *(_QWORD *)(a1 + 480);
  v4 = v2 - v3;
  if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 544) + v3, 0) == -1 )
    goto LABEL_47;
  v5 = *(unsigned int *)(a1 + 568);
  v6 = (char **)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 >= v5 )
  {
    if ( v7 != v5 )
    {
      v47 = 0;
      v46 = 0;
      v45 = 0;
      *(_OWORD *)s1 = 0;
      sub_5BFB0(a1 + 112, v5, (char *)s1);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 128) >= v5 )
    {
      v8 = *v6;
    }
    else
    {
      v8 = (char *)qvector_reserve(a1 + 112, *v6, *(unsigned int *)(a1 + 568), 0x40u);
      *(_QWORD *)(a1 + 112) = v8;
      v7 = *(_QWORD *)(a1 + 120);
    }
    memset(&v8[64 * v7], 0, (v5 - v7) << 6);
    *(_QWORD *)(a1 + 120) = v5;
  }
  *(_BYTE *)(a1 + 248) = 1;
  if ( *(_DWORD *)(a1 + 568) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = v10 * (unsigned __int64)*(unsigned __int16 *)(a1 + 562);
      v12 = __CFADD__(*(_QWORD *)(a1 + 544), v11);
      v13 = *(_QWORD *)(a1 + 544) + v11;
      if ( v12 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v13, 0) == -1 )
        break;
      if ( !*(_BYTE *)(a1 + 248) )
      {
        if ( !(_BYTE)under_debugger )
          interr(20099);
LABEL_127:
        BUG();
      }
      v14 = *(_QWORD *)(a1 + 120) <= (unsigned __int64)v10 ? 0LL : (__int64)&(*v6)[64 * (unsigned __int64)v10];
      if ( !(unsigned __int8)sub_50920(a1, v14) )
        break;
      if ( ++v10 >= *(_DWORD *)(a1 + 568) )
        goto LABEL_21;
    }
LABEL_47:
    LODWORD(v9) = 0;
    goto LABEL_115;
  }
LABEL_21:
  v43 = v4;
  v15 = *(_QWORD *)(a1 + 112);
  v16 = *(_QWORD *)(a1 + 120) << 6;
  if ( v16 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( !v18 || !*(_QWORD *)(v15 + v17 + 32) )
        goto LABEL_44;
      v19 = *(_DWORD *)(v15 + v17 + 4);
      if ( v19 == 11 )
        break;
      if ( v19 == 6 )
      {
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( !(_BYTE)under_debugger )
            interr(20099);
          goto LABEL_127;
        }
        v22 = *(unsigned int *)(v15 + v17 + 40);
        if ( *(_QWORD *)(a1 + 120) <= v22 || (v23 = *v6, v24 = v22 << 6, (v25 = (__int64)&(*v6)[64 * v22]) == 0) )
        {
          sub_390A0((int)"Illegal link section %d of the dynamic linking information section\n");
          goto LABEL_44;
        }
        if ( *(_DWORD *)&v23[v24 + 4] != 11 )
          goto LABEL_40;
        *(_DWORD *)&v23[v24 + 40] = 0;
      }
      else if ( v19 == 2 )
      {
        *(_DWORD *)(a1 + 192) = v18;
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( !(_BYTE)under_debugger )
            interr(20099);
          goto LABEL_127;
        }
        v20 = *(unsigned int *)(v15 + v17 + 40);
        if ( *(_QWORD *)(a1 + 120) > v20 && (v21 = (__int64)&(*v6)[64 * v20]) != 0 )
          sub_515D0(a1, (__int64 *)(a1 + 320), v21, 1);
        else
          sub_390A0((int)"Illegal link section %d of the string table for symbols\n");
      }
LABEL_44:
      ++v18;
      v17 += 64;
      if ( v16 == v17 )
        goto LABEL_48;
    }
    *(_DWORD *)(a1 + 160) = v18;
    if ( !*(_BYTE *)(a1 + 248) )
    {
      if ( !(_BYTE)under_debugger )
        interr(20099);
      goto LABEL_127;
    }
    v26 = *(unsigned int *)(v15 + v17 + 40);
    if ( *(_QWORD *)(a1 + 120) <= v26 || (v25 = (__int64)&(*v6)[64 * v26]) == 0 )
    {
      sub_390A0((int)"Illegal link section %d of the string table for dynamic linking symbols\n");
      goto LABEL_44;
    }
LABEL_40:
    sub_515D0(a1, (__int64 *)(a1 + 352), v25, 1);
    goto LABEL_44;
  }
LABEL_48:
  v27 = *(unsigned int *)(a1 + 572);
  if ( *(_DWORD *)(a1 + 572) )
  {
    if ( !*(_BYTE *)(a1 + 248) )
    {
      if ( !(_BYTE)under_debugger )
        interr(20099);
      goto LABEL_127;
    }
    if ( *(_QWORD *)(a1 + 120) > v27 )
    {
      v28 = *v6;
      v29 = v27 << 6;
      if ( &(*v6)[v29] )
      {
        *(_QWORD *)(a1 + 256) = *(_QWORD *)&v28[v29 + 24];
        *(_QWORD *)(a1 + 264) = *(_QWORD *)&v28[v29 + 16];
        *(_QWORD *)(a1 + 272) = *(_QWORD *)&v28[v29 + 32];
      }
    }
  }
  v30 = (char *)(v16 + v15);
  *(_OWORD *)s1 = 0;
  *(_QWORD *)&v45 = 0;
  v9 = *v6;
  if ( *v6 == v30 )
  {
    v33 = (_DWORD *)(a1 + 168);
    goto LABEL_108;
  }
  v31 = (__int64 *)(a1 + 256);
  v32 = 0;
  do
  {
    if ( v32 && *((_QWORD *)v9 + 4) )
    {
      s1[1] = nullptr;
      if ( *v31 > 0 && *(_QWORD *)(a1 + 272) )
        sub_57CE0(*(_QWORD *)(a1 + 240), (__int64)s1, v31, *(_DWORD *)v9);
      v34 = *((_DWORD *)v9 + 1);
      if ( v34 > 1879048188 )
      {
        switch ( v34 )
        {
          case 1879048189:
            *(_DWORD *)(a1 + 216) = v32;
            break;
          case 1879048190:
            *(_DWORD *)(a1 + 220) = v32;
            break;
          case 1879048191:
            *(_DWORD *)(a1 + 224) = v32;
            break;
        }
      }
      else
      {
        switch ( v34 )
        {
          case 1:
            v35 = s1[1];
            v36 = ::s1;
            if ( s1[1] )
              v36 = s1[0];
            if ( !strcmp(v36, ".interp") )
            {
              *(_DWORD *)(a1 + 176) = v32;
LABEL_105:
              v31 = (__int64 *)(a1 + 256);
              break;
            }
            if ( !strcmp(v36, ".got") )
            {
              *(_DWORD *)(a1 + 164) = v32;
              *(_BYTE *)(a1 + 249) = 1;
              goto LABEL_105;
            }
            if ( !strcmp(v36, ".got.plt") )
            {
              *(_DWORD *)(a1 + 168) = v32;
              goto LABEL_105;
            }
            if ( !strcmp(v36, ".plt.got") )
            {
              *(_DWORD *)(a1 + 212) = v32;
              goto LABEL_105;
            }
            if ( !strcmp(v36, ".plt.sec") )
            {
              *(_DWORD *)(a1 + 228) = v32;
              goto LABEL_105;
            }
            if ( !strcmp(v36, ".gnu_debugdata") )
            {
              *(_DWORD *)(a1 + 232) = v32;
              goto LABEL_105;
            }
            if ( !strcmp(v36, ".eh_frame") )
            {
              *(_DWORD *)(a1 + 236) = v32;
              goto LABEL_105;
            }
            if ( !*(_BYTE *)(a1 + 617) )
            {
              v31 = (__int64 *)(a1 + 256);
              goto LABEL_81;
            }
            v37 = strcmp(v36, ".opd");
            v31 = (__int64 *)(a1 + 256);
            if ( v37 )
              goto LABEL_81;
            *(_DWORD *)(a1 + 200) = v32;
            break;
          case 3:
            v40 = ::s1;
            if ( s1[1] )
              v40 = s1[0];
            if ( !strcmp(v40, ".strtab") )
            {
              sub_515D0(a1, (__int64 *)(a1 + 320), (__int64)v9, 0);
            }
            else if ( !strcmp(v40, ".dynstr") )
            {
              sub_515D0(a1, (__int64 *)(a1 + 352), (__int64)v9, 0);
            }
            break;
          case 8:
            v35 = s1[1];
LABEL_81:
            v38 = ::s1;
            if ( v35 )
              v38 = s1[0];
            if ( !strcmp(v38, ".plt") )
              *(_DWORD *)(a1 + 184) = v32;
            break;
          case 18:
            v39 = *((_DWORD *)v9 + 10);
            if ( v39 )
            {
              if ( v39 == *(_DWORD *)(a1 + 192) )
              {
                *(_DWORD *)(a1 + 204) = v32;
                v39 = *((_DWORD *)v9 + 10);
              }
              if ( v39 == *(_DWORD *)(a1 + 160) )
                *(_DWORD *)(a1 + 208) = v32;
            }
            break;
          default:
            break;
        }
      }
    }
    v9 += 64;
    ++v32;
  }
  while ( v30 != v9 );
  v33 = (_DWORD *)(a1 + 168);
LABEL_108:
  v41 = *(_DWORD *)(a1 + 164);
  v4 = v43;
  if ( *(_DWORD *)(a1 + 168) )
  {
    if ( !v41 )
    {
      v41 = 0;
      goto LABEL_111;
    }
  }
  else
  {
LABEL_111:
    *v33 = v41;
  }
  if ( s1[0] )
  {
    s1[1] = nullptr;
    qfree(s1[0]);
    s1[0] = nullptr;
    *(_QWORD *)&v45 = 0;
  }
  LOBYTE(v9) = 1;
LABEL_115:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v4, 0);
  return (unsigned int)v9;
}
// 158B40: using guessed type __int64 under_debugger;
