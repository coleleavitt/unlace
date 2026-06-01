__int64 __fastcall sub_446B00(
        unsigned int *a1,
        char *a2,
        int a3,
        char a4,
        int *a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  char *v10; // rdx
  unsigned __int64 v12; // rax
  char *v13; // r13
  _BYTE *v14; // rbp
  size_t v15; // rdx
  int v16; // r15d
  __int64 v17; // rsi
  char v18; // al
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int *v24; // r12
  size_t v25; // rdx
  unsigned int v26; // edx
  unsigned int v27; // esi
  _BYTE *v28; // rcx
  unsigned int v30; // eax
  void *v31; // rdi
  int v32; // [rsp+0h] [rbp-88h]
  unsigned int v33; // [rsp+4h] [rbp-84h]
  __int64 i; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  int v36; // [rsp+18h] [rbp-70h]
  unsigned int v37; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int64 v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+28h] [rbp-60h]
  unsigned __int64 v40; // [rsp+30h] [rbp-58h]
  unsigned __int64 v41; // [rsp+38h] [rbp-50h]
  int v42; // [rsp+40h] [rbp-48h]
  unsigned __int16 v45; // [rsp+56h] [rbp-32h] BYREF

  v10 = &a2[a3];
  v12 = (unsigned __int64)(v10 - 3);
  v13 = a2;
  v14 = a6;
  if ( (a4 & 2) != 0 )
    v12 = (unsigned __int64)v10;
  v40 = v12;
  v37 = 0;
  v42 = (int)a2;
  v41 = (unsigned __int64)v10;
  v39 = (int)a6;
  v38 = (unsigned __int64)&a6[a7 - 1];
  if ( (a4 & 1) != 0 )
  {
    v15 = a1[1];
    v16 = 0;
    if ( (unsigned __int64)&a6[v15] > v38 )
    {
      *a8 = 0;
      *a9 = 0;
      return 4294967292LL;
    }
    memcpy(a6, a1 + 2, v15);
    v14 += a1[1];
  }
  else
  {
    v16 = *a5;
  }
  v17 = *(_QWORD *)(sub_446780((__int64)a1, v16) + 40);
  v36 = 0;
  v35 = v17 + 4;
  for ( i = *(_QWORD *)(v17 + 272); (unsigned __int64)v13 < v41; v13 += v33 )
  {
    if ( (unsigned __int64)v13 > v40 && !(unsigned int)sub_49BD40(v13, (unsigned int)(v41 - (_DWORD)v13)) )
    {
      v37 = -1;
      goto LABEL_29;
    }
    v18 = *v13;
    if ( (unsigned __int8)*v13 > 0xBFu )
    {
      v30 = sub_49BBC0(v13, &v45);
      v19 = v45;
      v33 = v30;
    }
    else
    {
      v19 = v18;
      v33 = 1;
      v45 = v18;
    }
    v20 = *(_QWORD *)(i + 8LL * HIBYTE(v19));
    v21 = *(unsigned __int16 *)(v20 + 2LL * (unsigned __int8)v19);
    if ( !*(_WORD *)(v20 + 2LL * (unsigned __int8)v19) && v19 )
    {
      v32 = v16;
      v16 = 0;
      if ( (int)a1[75] <= 0 )
      {
LABEL_16:
        v16 = v32;
        if ( (a4 & 4) != 0 )
        {
          v37 = -3;
          goto LABEL_29;
        }
        v22 = *(_QWORD *)(sub_446780((__int64)a1, v32) + 40);
        v21 = *(_DWORD *)v22;
      }
      else
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(sub_446780((__int64)a1, v16) + 40);
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 272) + 8LL * HIBYTE(v45));
          v21 = *(unsigned __int16 *)(v23 + 2LL * (unsigned __int8)v45);
          if ( *(_WORD *)(v23 + 2LL * (unsigned __int8)v45) )
            break;
          if ( (int)a1[75] <= ++v16 )
            goto LABEL_16;
        }
      }
      v35 = v22 + 4;
      i = *(_QWORD *)(v22 + 272);
      if ( v16 != v32 )
      {
        v24 = &a1[16 * (__int64)v16];
        v25 = v24[76];
        if ( (unsigned __int64)&v14[v25] > v38 )
        {
          v16 = v32;
LABEL_28:
          v37 = -4;
          goto LABEL_29;
        }
        memcpy(v14, v24 + 77, v25);
        v14 += v24[76];
      }
    }
    if ( *(_BYTE *)((v21 >> 8) + v35) )
    {
      if ( (unsigned __int64)(v14 + 1) > v38 )
        goto LABEL_28;
      *v14 = BYTE1(v21);
      v14[1] = v21;
      v14 += 2;
    }
    else
    {
      if ( (unsigned __int64)v14 > v38 )
        goto LABEL_28;
      *v14++ = v21;
    }
    ++v36;
  }
  if ( (a4 & 2) != 0 )
  {
    v26 = a1[6];
    v27 = a1[76];
    v28 = &v14[v26];
    if ( v16 )
    {
      if ( (unsigned __int64)&v28[v27] > v38 )
        goto LABEL_28;
      v31 = v14;
      v14 += v27;
      memcpy(v31, a1 + 77, v27);
      v26 = a1[6];
    }
    else if ( (unsigned __int64)v28 > v38 )
    {
      goto LABEL_28;
    }
    v16 &= ~2u;
    memcpy(v14, a1 + 7, v26);
    LODWORD(v14) = a1[6] + (_DWORD)v14;
  }
LABEL_29:
  *(_QWORD *)a5 = v16;
  *a8 = (_DWORD)v13 - v42;
  *a9 = (_DWORD)v14 - v39;
  *a10 = v36;
  return v37;
}

