__int64 __fastcall sub_D0B620(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r12
  char v7; // al
  __int64 v8; // r8
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // al
  unsigned int v13; // eax
  int v14; // eax
  __int64 *v15; // r8
  char v16; // si
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r14
  int v20; // eax
  int v21; // esi
  __int64 v22; // r14
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  int v26; // edx
  __int64 *v27; // rax
  __int64 v28; // r14
  unsigned int v29; // edx
  unsigned int v30; // ebp
  __int64 v31; // r13
  __int64 v33; // rbp
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 i; // rax
  int v37; // [rsp+0h] [rbp-B8h]
  void *v38; // [rsp+8h] [rbp-B0h]
  int v39[2]; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+30h] [rbp-88h]
  __int64 v45; // [rsp+30h] [rbp-88h]
  __int64 v46; // [rsp+30h] [rbp-88h]
  int v47; // [rsp+40h] [rbp-78h]
  int v48; // [rsp+44h] [rbp-74h]
  _BYTE v49[8]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v50; // [rsp+60h] [rbp-58h] BYREF
  __int64 v51; // [rsp+68h] [rbp-50h]
  __int64 v52; // [rsp+70h] [rbp-48h] BYREF
  __int64 v53; // [rsp+78h] [rbp-40h]

  sub_EE4940(v49, "blast-term-ite", *a2);
  v5 = *a2;
  v6 = *(_QWORD *)(*a2 + 72LL);
  *(_QWORD *)v39 = *a1;
  if ( !v6 )
  {
    v40 = *a1;
    v10 = 0;
    goto LABEL_52;
  }
  v7 = *(_BYTE *)(v6 + 3) >> 6;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
LABEL_4:
      if ( v7 == 2 )
        v47 = *(_DWORD *)(v6 + 4) - 1;
      else
        v47 = *(_DWORD *)(v6 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      v7 = *(_BYTE *)(v6 + 3) >> 6;
    }
    while ( !v7 );
    if ( v7 != 1 )
      goto LABEL_4;
  }
  v47 = *(_DWORD *)(v6 + 4) + 1;
LABEL_6:
  v40 = *a1;
  if ( !v47 )
  {
    v10 = 0;
    v6 = 0;
    goto LABEL_52;
  }
  v8 = *(_QWORD *)(v5 + 88);
  v9 = *(__int64 **)v5;
  v10 = 0;
  v6 = 0;
  v41 = 0;
  HIDWORD(v38) = 0;
  v48 = 0;
  if ( !v8 )
    goto LABEL_18;
  v11 = *(_QWORD *)(v5 + 88);
  v12 = *(_BYTE *)(v8 + 3) >> 6;
  if ( !v12 )
    goto LABEL_34;
LABEL_9:
  if ( v12 == 1 )
    goto LABEL_36;
  while ( 2 )
  {
    if ( v12 == 2 )
      v13 = *(_DWORD *)(v11 + 4) - 1;
    else
      v13 = *(_DWORD *)(v11 + 4);
    if ( HIDWORD(v38) < v13 )
      goto LABEL_13;
LABEL_37:
    v16 = *(_BYTE *)(v5 + 123);
    v8 = 0;
    if ( (v16 & 0x10) != 0 )
      goto LABEL_19;
LABEL_38:
    if ( (v16 & 0x20) != 0 )
      goto LABEL_23;
LABEL_39:
    v25 = *(_QWORD *)(v5 + 72);
    v26 = 18;
    while ( 1 )
    {
      if ( !--v26 )
      {
        v46 = v8;
        sub_233F80(v9 + 77, (_DWORD *)(v5 + 72));
        v8 = v46;
        v27 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 72) + 16LL) + v41);
        goto LABEL_44;
      }
      if ( *(char *)(v25 + 3) >= 0 )
        break;
      if ( *(_BYTE *)(v25 + 3) >> 6 != 2 )
      {
        v27 = (__int64 *)(*(_QWORD *)(v25 + 16) + v41);
        goto LABEL_44;
      }
LABEL_64:
      v25 = *(_QWORD *)(v25 + 16);
    }
    if ( HIDWORD(v38) != *(_DWORD *)(v25 + 4) )
      goto LABEL_64;
    v27 = (__int64 *)(v25 + 8);
LABEL_44:
    v19 = *v27;
LABEL_24:
    if ( *((_DWORD *)a1 + 142) != -1 )
    {
      v43 = v8;
      v20 = sub_167E610(v19, v37, v38, v39[0]);
      v21 = *((_DWORD *)a1 + 140);
      v8 = v43;
      *((_DWORD *)a1 + 143) = v20;
      v48 += v21;
      *((_DWORD *)a1 + 140) = 0;
    }
    v44 = v8;
    v51 = *(_QWORD *)v39;
    v50 = v6;
    v52 = v10;
    v53 = v40;
    sub_D06900((__int64)(a1 + 1), v19, &v50, &v52);
    v22 = v52;
    v40 = v53;
    v6 = v50;
    *(_QWORD *)v39 = v51;
    v23 = sub_15DE0E0(*a1, v44, v52);
    v10 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    if ( v22 )
    {
      v24 = (*(_DWORD *)(v22 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v40, v22);
    }
    sub_EDBFA0(*a2);
    v41 += 8;
    if ( HIDWORD(v38) + 1 != v47 )
    {
      v8 = *(_QWORD *)(v5 + 88);
      v9 = *(__int64 **)v5;
      ++HIDWORD(v38);
      if ( !v8 )
        goto LABEL_18;
      v11 = *(_QWORD *)(v5 + 88);
      v12 = *(_BYTE *)(v8 + 3) >> 6;
      if ( !v12 )
      {
        do
        {
LABEL_34:
          v11 = *(_QWORD *)(v11 + 16);
          v12 = *(_BYTE *)(v11 + 3) >> 6;
        }
        while ( !v12 );
        if ( v12 != 1 )
          continue;
LABEL_36:
        if ( HIDWORD(v38) >= *(_DWORD *)(v11 + 4) + 1 )
          goto LABEL_37;
LABEL_13:
        v14 = 17;
        while ( 1 )
        {
          if ( *(char *)(v8 + 3) >= 0 )
          {
            if ( HIDWORD(v38) == *(_DWORD *)(v8 + 4) )
            {
              v15 = (__int64 *)(v8 + 8);
LABEL_17:
              v8 = *v15;
LABEL_18:
              v16 = *(_BYTE *)(v5 + 123);
              if ( (v16 & 0x10) == 0 )
                goto LABEL_38;
LABEL_19:
              v17 = *(_QWORD *)(v5 + 104);
              v18 = 17;
              do
              {
                if ( *(char *)(v17 + 3) >= 0 )
                {
                  if ( HIDWORD(v38) == *(_DWORD *)(v17 + 4) )
                    goto LABEL_22;
                }
                else if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
                {
                  goto LABEL_22;
                }
                v17 = *(_QWORD *)(v17 + 16);
                --v18;
              }
              while ( v18 );
              v45 = v8;
              sub_236900(v9 + 84, (__int64 *)(v5 + 104));
              v9 = *(__int64 **)v5;
              v8 = v45;
              v16 = *(_BYTE *)(v5 + 123);
LABEL_22:
              if ( (v16 & 0x20) != 0 )
              {
LABEL_23:
                v19 = v9[108];
                goto LABEL_24;
              }
              goto LABEL_39;
            }
          }
          else if ( *(_BYTE *)(v8 + 3) >> 6 != 2 )
          {
            v15 = (__int64 *)(*(_QWORD *)(v8 + 16) + v41);
            goto LABEL_17;
          }
          v8 = *(_QWORD *)(v8 + 16);
          if ( !--v14 )
          {
            sub_233F80(v9 + 77, (_DWORD *)(v5 + 88));
            v9 = *(__int64 **)v5;
            v15 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) + v41);
            goto LABEL_17;
          }
        }
      }
      goto LABEL_9;
    }
    break;
  }
LABEL_52:
  sub_EE4A20(":blast-term-ite-consts");
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v28 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v28 + 32);
  v29 = *(_DWORD *)(a3 + 8);
  v30 = *(_DWORD *)(a3 + 12);
  if ( v29 >= v30 )
  {
    v33 = 2 * v30;
    v31 = sub_186B270(8 * v33);
    v29 = *(_DWORD *)(a3 + 8);
    v34 = *(_QWORD **)a3;
    if ( v29 )
    {
      if ( v29 - 1 <= 2 || (_QWORD *)v31 == v34 + 1 )
      {
        for ( i = 0; i != v29; ++i )
          *(_QWORD *)(v31 + i * 8) = v34[i];
      }
      else
      {
        v35 = 0;
        do
        {
          *(__m128i *)(v31 + v35 * 8) = _mm_loadu_si128((const __m128i *)&v34[v35]);
          v35 += 2;
        }
        while ( 2LL * (v29 >> 1) != v35 );
        if ( (v29 & 1) != 0 )
          *(_QWORD *)(v31 + 8LL * (v29 & 0xFFFFFFFE)) = v34[v29 & 0xFFFFFFFE];
      }
    }
    if ( v34 != (_QWORD *)(a3 + 16) && v34 )
    {
      sub_186B220(v34);
      v29 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v31;
    *(_DWORD *)(a3 + 12) = v33;
  }
  else
  {
    v31 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v31 + 8LL * v29) = v28;
  *(_DWORD *)(a3 + 8) = v29 + 1;
  if ( v10 )
  {
    v24 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v40, v10);
  }
  if ( v6 )
  {
    v24 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(*(_QWORD *)v39, v6);
  }
  return sub_EE4A00(v49);
}

