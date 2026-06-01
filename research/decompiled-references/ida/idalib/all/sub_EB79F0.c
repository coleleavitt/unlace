__int64 __fastcall sub_EB79F0(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r13
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(); // rdi
  _BYTE *v5; // rax
  __int64 v6; // rbx
  _BYTE *v7; // rax
  __int64 (__fastcall ***v8)(); // rdi
  _BYTE *v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // r12
  unsigned int *v12; // r15
  __int64 (__fastcall ***v13)(); // r13
  _BYTE *v14; // rax
  const void *v15; // rax
  size_t v16; // rdx
  __int64 (__fastcall **v17)(); // rdi
  size_t v18; // r14
  _BYTE *v19; // rax
  unsigned int *v21; // [rsp+0h] [rbp-B8h]
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+20h] [rbp-98h]
  char v25; // [rsp+3Eh] [rbp-7Ah] BYREF
  char v26; // [rsp+3Fh] [rbp-79h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+40h] [rbp-78h] BYREF
  int v28; // [rsp+48h] [rbp-70h]
  __int128 v29; // [rsp+50h] [rbp-68h]
  _BYTE *v30; // [rsp+60h] [rbp-58h]
  char v31; // [rsp+68h] [rbp-50h]
  int v32; // [rsp+6Ch] [rbp-4Ch]
  __int64 v33; // [rsp+70h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v33 = a1;
  v27 = &off_2BEBE68;
  v28 = 0;
  v31 = 0;
  v32 = 1;
  v30 = nullptr;
  v29 = 0;
  sub_227B8B0(&v27, 0, 0, 0);
  v2 = *a2;
  v23 = (__int64)&(*a2)[34 * *((unsigned int *)a2 + 2)];
  if ( (unsigned int *)v23 != *a2 )
  {
    while ( 1 )
    {
      v3 = v30;
      if ( (unsigned __int64)v30 >= *((_QWORD *)&v29 + 1) )
      {
        v4 = (__int64 (__fastcall ***)())sub_227BA10(&v27, 36);
      }
      else
      {
        v4 = &v27;
        ++v30;
        *v3 = 36;
      }
      v5 = v4[4];
      if ( v5 >= (_BYTE *)v4[3] )
      {
        v4 = (__int64 (__fastcall ***)())sub_227BA10(v4, 83);
      }
      else
      {
        v4[4] = (__int64 (__fastcall **)())(v5 + 1);
        *v5 = 83;
      }
      sub_227B910(v4, *v2);
      v6 = *((_QWORD *)v2 + 1);
      v22 = v6 + 56LL * v2[4];
      if ( v6 != v22 )
        break;
LABEL_28:
      v2 += 34;
      if ( (unsigned int *)v23 == v2 )
        goto LABEL_29;
    }
    v21 = v2;
    while ( 1 )
    {
      v25 = 0;
      v26 = 0;
      sub_20F8580(*(unsigned int *)(v6 + 8), *v21, &v25, &v26);
      v7 = v30;
      if ( (unsigned __int64)v30 >= *((_QWORD *)&v29 + 1) )
      {
        v8 = (__int64 (__fastcall ***)())sub_227BA10(&v27, 36);
      }
      else
      {
        v8 = &v27;
        ++v30;
        *v7 = 36;
      }
      v9 = v8[4];
      if ( v9 >= (_BYTE *)v8[3] )
      {
        v8 = (__int64 (__fastcall ***)())sub_227BA10(v8, 115);
      }
      else
      {
        v8[4] = (__int64 (__fastcall **)())(v9 + 1);
        *v9 = 115;
      }
      sub_227B910(v8, *(unsigned int *)(v6 + 8));
      if ( v26 )
      {
        if ( *(_DWORD *)(v6 + 8) != 13 )
        {
          v10 = *(unsigned int **)(v6 + 16);
          v11 = &v10[6 * *(unsigned int *)(v6 + 24)];
          if ( v10 != v11 )
            break;
        }
      }
LABEL_26:
      v6 += 56;
      if ( v6 == v22 )
      {
        v2 = v21;
        goto LABEL_28;
      }
    }
    v12 = *(unsigned int **)(v6 + 16);
    while ( 1 )
    {
      v19 = v30;
      if ( (unsigned __int64)v30 < *((_QWORD *)&v29 + 1) )
      {
        v13 = &v27;
        ++v30;
        *v19 = 36;
        v14 = v30;
        if ( (unsigned __int64)v30 >= *((_QWORD *)&v29 + 1) )
          goto LABEL_24;
      }
      else
      {
        v13 = (__int64 (__fastcall ***)())sub_227BA10(&v27, 36);
        v14 = v13[4];
        if ( v14 >= (_BYTE *)v13[3] )
        {
LABEL_24:
          v13 = (__int64 (__fastcall ***)())sub_227BA10(v13, 80);
          goto LABEL_18;
        }
      }
      v13[4] = (__int64 (__fastcall **)())(v14 + 1);
      *v14 = 80;
LABEL_18:
      v15 = (const void *)sub_20F7F10(*v12, *((_QWORD *)v12 + 1), *((_QWORD *)v12 + 2));
      v17 = v13[4];
      v18 = v16;
      if ( v16 > (char *)v13[3] - (char *)v17 )
      {
        v12 += 6;
        sub_227BF10(v13, v15, v16);
        if ( v11 == v12 )
          goto LABEL_26;
      }
      else
      {
        if ( v16 )
        {
          memcpy(v17, v15, v16);
          v13[4] = (__int64 (__fastcall **)())((char *)v13[4] + v18);
        }
        v12 += 6;
        if ( v11 == v12 )
          goto LABEL_26;
      }
    }
  }
LABEL_29:
  v27 = &off_2BEBE68;
  sub_227B7A0(&v27);
  return a1;
}
