void __fastcall sub_220BA90(__int64 a1, __int64 *a2, __int64 a3, char a4, bool a5, char a6, char a7)
{
  char *v7; // r13
  char v8; // r14
  unsigned int v9; // ebp
  bool v11; // al
  char *v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned int v16; // ecx
  _BYTE *i; // r9
  unsigned __int64 v18; // rax
  _BYTE *v19; // r14
  size_t v20; // rbx
  _BYTE *v21; // rdx
  __int64 v22; // r15
  unsigned int v23; // r14d
  unsigned int v24; // r13d
  int v25; // eax
  int v26; // r10d
  _DWORD *j; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // r10
  unsigned int v31; // r10d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r10
  int v37; // eax
  unsigned int v38; // r11d
  bool v39; // al
  char v40; // r14
  __int64 v41; // rax
  char *v42; // rax
  char *v43; // r9
  char *v44; // rax
  char v45; // dl
  char v46; // cl
  char *v47; // rax
  char *v48; // rax
  unsigned int v49; // r14d
  int v50; // eax
  bool v51; // al
  char v52; // r10
  __int64 v53; // rax
  unsigned int v54; // [rsp+0h] [rbp-B8h]
  unsigned int v55; // [rsp+4h] [rbp-B4h]
  unsigned int v56; // [rsp+4h] [rbp-B4h]
  bool v57; // [rsp+8h] [rbp-B0h]
  unsigned int v59; // [rsp+10h] [rbp-A8h]
  char v60; // [rsp+10h] [rbp-A8h]
  char v61; // [rsp+1Bh] [rbp-9Dh]
  unsigned __int64 v62; // [rsp+28h] [rbp-90h] BYREF
  void *v63; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v64; // [rsp+38h] [rbp-80h]
  _BYTE v65[71]; // [rsp+71h] [rbp-47h] BYREF

  v57 = a5;
  if ( !a5 )
  {
    if ( (a3 & 0xFFFFFFFD) == 8 )
    {
      v7 = (char *)&byte_22F0C30;
      v54 = 3;
      v57 = (_DWORD)a3 == 8;
      v8 = 0;
    }
    else
    {
      v8 = 0;
      v7 = (char *)&byte_22F0C30;
      v54 = 4;
    }
    goto LABEL_8;
  }
  if ( (_DWORD)a3 == 8 )
  {
    v8 = 48;
    v7 = "0";
  }
  else
  {
    if ( (unsigned int)a3 <= 8 )
    {
      if ( (_DWORD)a3 == 2 )
      {
        v7 = "0b";
        goto LABEL_7;
      }
LABEL_127:
      sub_220C370(a1, a2, a3);
      return;
    }
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 16 )
      {
        v7 = "0x";
LABEL_7:
        v54 = 4;
        v8 = 48;
        v57 = (_DWORD)a3 == 8;
        goto LABEL_8;
      }
      goto LABEL_127;
    }
    v8 = 0;
    v7 = (char *)&byte_22F0C30;
  }
  v54 = 3;
  v57 = (_DWORD)a3 == 8;
LABEL_8:
  v9 = *(_DWORD *)(a1 + 8);
  v55 = a3;
  if ( v9 <= 0x40 )
    v11 = *(_QWORD *)a1 == 0;
  else
    v11 = (unsigned int)sub_2206780((__int64 *)a1) == v9;
  if ( !v11 )
  {
    v12 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if ( !a6 )
      v12 = &a0123456789abcd_4[-36];
    if ( v9 <= 0x40 )
    {
      v13 = *(_QWORD *)a1;
      if ( !a4 )
        goto LABEL_15;
      if ( v9 )
      {
        v13 = (__int64)(v13 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9);
        if ( (v13 & 0x8000000000000000LL) == 0LL )
        {
LABEL_15:
          v14 = a2[1];
          if ( !v8 )
            goto LABEL_19;
          goto LABEL_16;
        }
        v13 = -(__int64)v13;
        sub_FC8050(a2, 45);
        v14 = a2[1];
        if ( !v8 )
        {
          v15 = a2[2];
LABEL_20:
          if ( a7 )
          {
            v16 = 0;
            for ( i = v65; ; i = v19 )
            {
              v19 = i - 1;
              if ( v16 % v54 || !v16 )
              {
                ++v16;
                v18 = v13 / v55;
                *(i - 1) = v12[v13 % v55];
                if ( v13 < v55 )
                  goto LABEL_27;
              }
              else
              {
                *(i - 1) = 39;
                v19 = i - 2;
                v18 = v13 / v55;
                ++v16;
                *(i - 2) = v12[v13 % v55];
                if ( v13 < v55 )
                  goto LABEL_27;
              }
              v13 = v18;
            }
          }
          v19 = v65;
          while ( 1 )
          {
            *--v19 = v12[v13 % v55];
            if ( v55 > v13 )
              break;
            v13 /= v55;
          }
LABEL_27:
          v20 = v65 - v19;
          v21 = (_BYTE *)(v14 + v65 - v19);
          if ( (unsigned __int64)v21 <= v15 )
            goto LABEL_28;
          goto LABEL_109;
        }
      }
      else
      {
        v14 = a2[1];
        v13 = 0;
        if ( !v8 )
        {
          v15 = a2[2];
          goto LABEL_107;
        }
      }
      do
      {
LABEL_16:
        if ( v14 + 1 > a2[2] )
        {
          sub_2236E10(a2, a2 + 3, v14 + 1, 1);
          *(_BYTE *)(*a2 + a2[1]) = v8;
        }
        else
        {
          *(_BYTE *)(*a2 + v14) = v8;
        }
        ++v7;
        v14 = a2[1] + 1;
        a2[1] = v14;
        v8 = *v7;
      }
      while ( *v7 );
LABEL_19:
      v15 = a2[2];
      if ( v13 )
        goto LABEL_20;
LABEL_107:
      if ( v14 <= v15 )
      {
LABEL_30:
        a2[1] = v14;
        return;
      }
      v21 = (_BYTE *)v14;
      v19 = v65;
      v20 = 0;
LABEL_109:
      sub_2236E10(a2, a2 + 3, v21, 1);
      v14 = a2[1];
LABEL_28:
      if ( v19 == v65 )
      {
        v14 += v20;
      }
      else
      {
        memcpy((void *)(*a2 + v14), v19, v20);
        v14 = a2[1] + v20;
      }
      goto LABEL_30;
    }
    v64 = v9;
    sub_2205510((__int64)&v63, (const void **)a1);
    if ( a4 )
    {
      v34 = *(unsigned int *)(a1 + 8);
      v35 = *(_QWORD *)a1;
      if ( (unsigned int)v34 > 0x40 )
        v35 = *(_QWORD *)(v35 + 8LL * ((unsigned int)(v34 - 1) >> 6));
      if ( (v35 & (1LL << ((unsigned __int8)v34 - 1))) != 0 )
      {
        sub_C16720((__int64)&v63, v34);
        sub_2205900((unsigned __int64 *)&v63);
        sub_FC8050(a2, 45);
      }
    }
    v22 = a2[1];
    if ( v8 )
    {
      do
      {
        if ( v22 + 1 > (unsigned __int64)a2[2] )
        {
          sub_2236E10(a2, a2 + 3, v22 + 1, 1);
          *(_BYTE *)(*a2 + a2[1]) = v8;
        }
        else
        {
          *(_BYTE *)(*a2 + v22) = v8;
        }
        ++v7;
        v22 = a2[1] + 1;
        a2[1] = v22;
        v8 = *v7;
      }
      while ( *v7 );
    }
    if ( v55 == 16 || v55 == 2 || v57 )
    {
      v23 = 4;
      if ( v55 != 16 )
        v23 = 2 * (v55 == 8) + 1;
      v24 = 0;
      v56 = v55 - 1;
      if ( v64 <= 0x40 )
        goto LABEL_57;
      while ( 1 )
      {
        v25 = sub_2206780((__int64 *)&v63);
        if ( v25 == v26 )
          break;
        for ( j = v63; ; j = &v63 )
        {
          v28 = *j & v56;
          if ( a7 && !(v24 % v54) && v24 )
          {
            v59 = *j & v56;
            sub_FC8050(a2, 39);
            v28 = v59;
          }
          v29 = a2[1];
          v30 = v12[v28];
          if ( v29 + 1 > (unsigned __int64)a2[2] )
          {
            v60 = v12[v28];
            sub_2236E10(a2, a2 + 3, v29 + 1, 1);
            v29 = a2[1];
            v30 = v60;
          }
          *(_BYTE *)(*a2 + v29) = v30;
          v31 = v64;
          ++a2[1];
          if ( v31 > 0x40 )
          {
            sub_220A970(v63, ((unsigned __int64)v31 + 63) >> 6, v23);
            v31 = v64;
          }
          else
          {
            v63 = v23 == v31 ? nullptr : (void *)((unsigned __int64)v63 >> v23);
          }
          ++v24;
          if ( v31 > 0x40 )
            break;
LABEL_57:
          if ( !v63 )
          {
            v48 = (char *)(*a2 + a2[1]);
            v43 = (char *)(*a2 + (unsigned int)v22);
            if ( v48 != v43 )
            {
              v44 = v48 - 1;
              if ( v44 > v43 )
                goto LABEL_99;
            }
            return;
          }
        }
      }
      v42 = (char *)(*a2 + a2[1]);
      v43 = (char *)(*a2 + (unsigned int)v22);
      if ( v42 == v43 || (v44 = v42 - 1, v44 <= v43) )
      {
LABEL_102:
        if ( v63 )
          operator delete[](v63);
        return;
      }
    }
    else
    {
      v36 = v22;
      if ( a7 )
      {
        v49 = 0;
        while ( 1 )
        {
          v38 = v64;
          if ( v64 > 0x40 )
          {
            v50 = sub_2206780((__int64 *)&v63);
            v51 = v38 == v50;
          }
          else
          {
            v51 = v63 == nullptr;
          }
          if ( v51 )
            break;
          sub_22088A0((_QWORD **)&v63, v55, (__int64)&v63, &v62);
          if ( !(v49 % v54) && v49 )
            sub_FC8050(a2, 39);
          v52 = v12[v62];
          v53 = a2[1];
          if ( v53 + 1 > (unsigned __int64)a2[2] )
          {
            v61 = v12[v62];
            sub_2236E10(a2, a2 + 3, v53 + 1, 1);
            v53 = a2[1];
            v52 = v61;
          }
          ++v49;
          *(_BYTE *)(*a2 + v53) = v52;
          v36 = a2[1] + 1;
          a2[1] = v36;
        }
      }
      else
      {
        while ( 1 )
        {
          v38 = v64;
          if ( v64 > 0x40 )
          {
            v37 = sub_2206780((__int64 *)&v63);
            v39 = v37 == v38;
          }
          else
          {
            v39 = v63 == nullptr;
          }
          if ( v39 )
            break;
          sub_22088A0((_QWORD **)&v63, v55, (__int64)&v63, &v62);
          v40 = v12[v62];
          v41 = a2[1];
          if ( a2[2] < (unsigned __int64)(v41 + 1) )
          {
            sub_2236E10(a2, a2 + 3, v41 + 1, 1);
            v41 = a2[1];
          }
          *(_BYTE *)(*a2 + v41) = v40;
          v36 = a2[1] + 1;
          a2[1] = v36;
        }
      }
      v47 = (char *)(*a2 + v36);
      v43 = (char *)(*a2 + (unsigned int)v22);
      if ( v43 == v47 || (v44 = v47 - 1, v43 >= v44) )
      {
LABEL_101:
        if ( v38 <= 0x40 )
          return;
        goto LABEL_102;
      }
    }
    do
    {
LABEL_99:
      v45 = *v43;
      v46 = *v44;
      ++v43;
      --v44;
      *(v43 - 1) = v46;
      v44[1] = v45;
    }
    while ( v43 < v44 );
    v38 = v64;
    goto LABEL_101;
  }
  if ( v8 )
  {
    v32 = a2[1];
    do
    {
      if ( v32 + 1 > (unsigned __int64)a2[2] )
      {
        sub_2236E10(a2, a2 + 3, v32 + 1, 1);
        v33 = *a2;
        v32 = a2[1];
      }
      else
      {
        v33 = *a2;
      }
      *(_BYTE *)(v33 + v32) = v8;
      ++v7;
      v32 = a2[1] + 1;
      a2[1] = v32;
      v8 = *v7;
    }
    while ( *v7 );
  }
  sub_FC8050(a2, 48);
}
