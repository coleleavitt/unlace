unsigned __int64 __fastcall sub_8527E0(__int64 a1, char *a2, char a3)
{
  char v3; // r12
  bool v4; // zf
  const char **v7; // r14
  _QWORD *v8; // rbp
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  const char *v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // r15
  _QWORD *v16; // r13
  const char *v17; // rsi
  _QWORD *v18; // rbp
  const char *v19; // rdi
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  const char *v25; // rsi
  const char *v26; // rdi
  int v27; // eax
  _QWORD *v28; // r13
  __int64 v29; // r13
  __int64 v30; // rbx
  void **v31; // rax
  void *v32; // rdi
  const char **v34; // [rsp+10h] [rbp-98h]
  _QWORD *v35; // [rsp+18h] [rbp-90h]
  _QWORD *v36; // [rsp+18h] [rbp-90h]
  _QWORD *v37; // [rsp+20h] [rbp-88h]
  char v38; // [rsp+2Fh] [rbp-79h]
  const char **v40; // [rsp+48h] [rbp-60h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v3 = 0;
  v4 = *(_BYTE *)(a1 + 5384) == 0;
  v43 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 5720) = a1 + 5648;
  if ( v4 )
    goto LABEL_2;
  ptr = nullptr;
  v42 = 0;
  sub_850010((__int64 *)&ptr, (const char *)(a1 + 5384));
  v7 = (const char **)ptr;
  v34 = (const char **)((char *)ptr + 24 * v42);
  if ( v34 != ptr )
  {
    while ( 2 )
    {
      v9 = *(_QWORD *)(a1 + 5720);
      v10 = sub_851620(v9, (__int64)v7);
      if ( v10 != (_QWORD *)(v9 + 8) )
      {
        v8 = (_QWORD *)v10[7];
        goto LABEL_8;
      }
      if ( !a3 )
      {
        v7 = (const char **)ptr;
        v3 = 1;
        *(_QWORD *)(a1 + 5720) = 0;
        goto LABEL_35;
      }
      v11 = operator new(0x30u);
      *(_DWORD *)(v11 + 8) = 0;
      v8 = (_QWORD *)v11;
      v11 += 8;
      *(_QWORD *)(v11 + 8) = 0;
      v8[3] = v11;
      v8[4] = v11;
      v8[5] = 0;
      v12 = *(_QWORD **)(a1 + 5720);
      if ( !v12[2] )
      {
        v15 = v12 + 1;
        goto LABEL_29;
      }
      v38 = a3;
      v13 = v7[1];
      v14 = (_QWORD *)v12[2];
      v15 = v12 + 1;
      v35 = v8;
      v16 = v12 + 1;
      v37 = *(_QWORD **)(a1 + 5720);
      while ( 1 )
      {
        v22 = v14[5];
        if ( !v13 )
          break;
        v17 = *v7;
        v18 = v14;
        v19 = haystack;
        if ( v22 )
          goto LABEL_14;
LABEL_15:
        v20 = strcmp(v19, v17);
        v21 = (_QWORD *)v14[2];
        v14 = (_QWORD *)v14[3];
        if ( v20 >= 0 )
        {
          v15 = v18;
          v14 = v21;
        }
        if ( !v14 )
        {
          v8 = v35;
          v12 = v37;
          v24 = v16;
          a3 = v38;
          goto LABEL_24;
        }
      }
      if ( !v22 )
      {
        while ( 1 )
        {
          v23 = v14[2];
          if ( !v23 )
            break;
          v15 = v14;
          v14 = (_QWORD *)v14[2];
          if ( *(_QWORD *)(v23 + 40) )
            goto LABEL_22;
        }
        v24 = v16;
        v28 = v14;
        v8 = v35;
        v12 = v37;
        a3 = v38;
        v15 = v28;
LABEL_24:
        if ( v15 == v24 )
          goto LABEL_29;
        if ( v15[5] )
        {
          v25 = (const char *)v15[4];
          v26 = haystack;
          if ( v13 )
            goto LABEL_27;
LABEL_28:
          v36 = v12;
          v27 = strcmp(v26, v25);
          v12 = v36;
          if ( v27 < 0 )
          {
LABEL_29:
            v40 = v7;
            v15 = sub_852680(v12, v15, (__int64 *)&v40);
          }
        }
        else
        {
          v25 = haystack;
          if ( v13 )
          {
LABEL_27:
            v26 = *v7;
            goto LABEL_28;
          }
        }
        v15[7] = v8;
        v3 = a3;
LABEL_8:
        v7 += 3;
        *(_QWORD *)(a1 + 5720) = v8;
        if ( v34 == v7 )
        {
          v7 = (const char **)ptr;
          goto LABEL_35;
        }
        continue;
      }
      break;
    }
LABEL_22:
    v17 = haystack;
LABEL_14:
    v19 = (const char *)v14[4];
    v18 = v14;
    goto LABEL_15;
  }
  v3 = 0;
LABEL_35:
  if ( v7 )
  {
    v29 = v42;
    if ( (_QWORD)v42 )
    {
      v30 = 0;
      do
      {
        v31 = (void **)&v7[3 * v30];
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = nullptr;
          qfree(v32);
          v7 = (const char **)ptr;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v7);
  }
LABEL_2:
  if ( a2 )
    *a2 = v3;
  return v43 - __readfsqword(0x28u);
}
