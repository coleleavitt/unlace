__int64 __fastcall sub_1FF720(__int64 a1, _QWORD *a2, int a3, int *a4, int a5, __int64 a6)
{
  _QWORD *v10; // rax
  unsigned __int64 v11; // r15
  _QWORD *v12; // rsi
  int v13; // edx
  __int64 v14; // r9
  _DWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // al
  unsigned __int64 v21; // rdx
  char *v22; // rbp
  unsigned int v23; // ebx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  __int64 *v30; // r13
  __int64 v31; // rbx
  __int64 *i; // r15
  __int64 *v33; // rbp
  char v34; // al
  __int64 v35; // rdx
  int v36; // ebx
  __int64 v37; // rax
  __int64 *v38; // r15
  char *v39; // rbp
  __int64 v40; // r13
  char v41; // al
  char v42; // al
  __int64 v43; // rax
  char v45; // [rsp+8h] [rbp-B0h]
  __int64 *v46; // [rsp+8h] [rbp-B0h]
  int v47; // [rsp+8h] [rbp-B0h]
  __int64 v48; // [rsp+18h] [rbp-A0h]
  int v50; // [rsp+2Ch] [rbp-8Ch]
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int128 v52; // [rsp+38h] [rbp-80h]
  __int64 v53; // [rsp+50h] [rbp-68h] BYREF
  __int64 v54; // [rsp+58h] [rbp-60h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  char *v56; // [rsp+68h] [rbp-50h]
  char *v57; // [rsp+70h] [rbp-48h]
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v45 = 1;
  if ( *(_DWORD *)(a1 + 104) <= a3 )
    v45 = *(_BYTE *)(a1 + 109);
  src = nullptr;
  v10 = (_QWORD *)*a2;
  v52 = 0;
  if ( !v10 )
    return 0;
  if ( !a2[1] )
    return 0;
  v11 = v10[1];
  if ( v10 == (_QWORD *)v11 )
    return 0;
  do
  {
    while ( 1 )
    {
LABEL_6:
      v12 = *(_QWORD **)(a1 + 48);
      v13 = *(_DWORD *)(v11 + 48);
      v14 = *v12 + 104LL * v13;
      if ( (*(_BYTE *)(v14 + 25) & 0x10) == 0 )
        goto LABEL_66;
      v15 = *(_DWORD **)a6;
      v16 = *(_QWORD *)a6 + 4LL * *(_QWORD *)(a6 + 8);
      if ( *(_QWORD *)a6 != v16 )
      {
        while ( v13 != *v15 )
        {
          if ( (_DWORD *)v16 == ++v15 )
            goto LABEL_17;
        }
        if ( (_DWORD *)v16 != v15 )
        {
LABEL_66:
          if ( v13 >= *(_DWORD *)(a1 + 104)
            || v45
            && (v17 = *(_DWORD *)(v14 + 88),
                v18 = *(_QWORD *)(a1 + 8),
                v19 = *v12 + 104LL * *(int *)(v11 + 48),
                v53 = -1,
                v48 = v18,
                v54 = 0,
                v50 = v17,
                (unsigned __int8)sub_1C2B50(v19, (__int64)&v53, v17))
            && (HIDWORD(v54) = v50, v20 = sub_1F0CB0(v48, (__int64)&v53, *(_QWORD *)(v19 + 16)), v14 = v19, v20) )
          {
            if ( (unsigned __int8)sub_1C4520((int *)v14, *(int *)(v14 + 88), a4, a5) )
            {
              v53 = v11 + 24;
              if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
                src = (void *)qvector_reserve(&src, src, v52 + 1, 8);
              *((_QWORD *)src + v52) = v11 + 24;
              *(_QWORD *)&v52 = v52 + 1;
            }
          }
        }
      }
LABEL_17:
      if ( (*(_QWORD *)v11 & 2) != 0 )
        goto LABEL_20;
      v21 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
        break;
      do
      {
        v11 = v21;
        v21 = *(_QWORD *)(v21 + 8);
      }
      while ( (*(_BYTE *)v21 & 2) == 0 );
LABEL_20:
      if ( v11 == *a2 )
        goto LABEL_21;
    }
    v25 = (_QWORD *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
    v26 = *v25;
    if ( (*v25 & 2) == 0 )
    {
      while ( v11 == v25[2] )
      {
        v11 = v26 & 0xFFFFFFFFFFFFFFFCLL;
        v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v26 & 2) != 0 )
        {
          if ( v11 != *a2 )
            goto LABEL_6;
          goto LABEL_21;
        }
        v27 = v25;
        v25 = (_QWORD *)v11;
        v11 = (unsigned __int64)v27;
      }
    }
    v11 = (unsigned __int64)v25;
  }
  while ( v25 != (_QWORD *)*a2 );
LABEL_21:
  v22 = (char *)src;
  v23 = 0;
  if ( (_QWORD)v52 )
  {
    v28 = 8 * v52;
    v46 = (__int64 *)((char *)src + 8 * v52);
    if ( v46 == src )
    {
      v35 = *(_QWORD *)(a1 + 48);
      v47 = *(_DWORD *)(v35 + 8);
LABEL_46:
      v36 = 0;
      v37 = 0;
      while ( 1 )
      {
        v38 = *(__int64 **)&v22[8 * v37];
        v39 = (char *)*v38;
        v40 = *(_QWORD *)v35 + 104LL * *((int *)v38 + 6);
        v41 = sub_1EEE20(*(unsigned __int8 **)(a1 + 8));
        if ( !(unsigned __int8)sub_1EFEC0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v38 + 2, v40, a4, a5, v41) )
        {
          v22 = (char *)src;
          v23 = -1;
          goto LABEL_22;
        }
        *((_DWORD *)v38 + 6) = a3;
        v42 = *v39;
        if ( (*v39 & 0xFB) == 1 )
        {
          if ( !v38[2] )
            goto LABEL_48;
          if ( (unsigned int)sub_331140(*(_QWORD *)(a1 + 16), v38[4]) != -1 )
          {
            v54 = *(_QWORD *)(a1 + 8);
            v55 = *(_QWORD *)(a1 + 16);
            v57 = *(char **)(a1 + 32);
            v53 = (__int64)&off_4D9430;
            v56 = (char *)v38[4];
            v57 = (char *)v38[5];
            if ( (unsigned __int8)sub_208900(&v53, v39, *((unsigned __int8 *)v38 + 52), v38[2], v40)
              || v47 != *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
            {
              v22 = (char *)src;
              v23 = 1;
              goto LABEL_22;
            }
          }
          v42 = *v39;
        }
        if ( v42 == 9 )
        {
          v43 = *((_QWORD *)v39 + 1);
          *(_QWORD *)(v43 + 8) = v38[2];
          *(_DWORD *)(v43 + 16) = *((_DWORD *)v38 + 6);
        }
LABEL_48:
        ++v36;
        v22 = (char *)src;
        v37 = v36;
        if ( v36 >= (unsigned __int64)v52 )
          goto LABEL_58;
        v35 = *(_QWORD *)(a1 + 48);
      }
    }
    if ( v28 >> 3 )
    {
      _BitScanReverse64(&v29, v28 >> 3);
      sub_1FF500((__m128i *)src, v46, 2LL * (int)v29, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1FB450);
      if ( v28 > 128 )
      {
        v30 = (__int64 *)(v22 + 128);
        sub_1FF290(v22, v22 + 128, sub_1FB450);
        do
        {
          v31 = *v30;
          for ( i = v30; ; i[1] = *i )
          {
            v33 = i;
            v34 = sub_1FB450(v31, *--i);
            if ( !v34 )
              break;
          }
          ++v30;
          *v33 = v31;
        }
        while ( v30 != v46 );
LABEL_45:
        v35 = *(_QWORD *)(a1 + 48);
        v22 = (char *)src;
        v47 = *(_DWORD *)(v35 + 8);
        if ( !(_QWORD)v52 )
        {
LABEL_58:
          v23 = 0;
          goto LABEL_22;
        }
        goto LABEL_46;
      }
    }
    else
    {
      sub_1FF500((__m128i *)src, v46, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1FB450);
    }
    sub_1FF290(v22, (char *)v46, sub_1FB450);
    goto LABEL_45;
  }
LABEL_22:
  if ( v22 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v22);
  }
  return v23;
}
