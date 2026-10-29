unsigned __int64 __fastcall sub_1E441A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  _BYTE *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 *v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r13
  _WORD *v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 *v20; // r15
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r13
  __int64 v27; // rdi
  unsigned int v28; // ebp
  __int64 v29; // r15
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 *v35; // rbp
  __int64 *v37; // rbx
  __int64 v38; // rdi
  _QWORD v39[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-C0h]
  _BYTE v42[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = v42;
  v41 = 0x1000000000LL;
  v7 = *(unsigned int *)(a2 + 100);
  ptr = v42;
  v8 = a2 + 104 + 8 * v7;
  if ( a2 + 104 == v8 )
  {
    v17 = 0;
    v10 = 0;
  }
  else
  {
    v9 = (__int64 *)(a2 + 104);
    v10 = 0;
    do
    {
      v11 = *v9;
      v12 = *(_WORD **)(*v9 + 64);
      if ( v12 && (*v12 & 0x1FF) == 0x3B )
        v10 = *v9;
      v13 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v11 + 40) & 7) != 0 )
        v13 = 0;
      v14 = sub_B9ACF0(*(_QWORD **)(*a1 + 248), a1[3], *(_DWORD *)(v11 + 24), v13, *(_QWORD *)(v11 + 48));
      *((_BYTE *)v14 + 29) = (8 * sub_B8C090((_BYTE *)v11)) | *((_BYTE *)v14 + 29) & 0xF7;
      sub_1DC20B0(*(_QWORD *)(*a1 + 11280), v11, (__int64)v14, v15);
      v16 = (unsigned int)v41 + 1LL;
      if ( v16 > HIDWORD(v41) )
        sub_2237220(&ptr, v42, v16, 8);
      *((_QWORD *)ptr + (unsigned int)v41) = v14;
      ++v9;
      v17 = (unsigned int)(v41 + 1);
      LODWORD(v41) = v41 + 1;
    }
    while ( (__int64 *)v8 != v9 );
    v6 = ptr;
  }
  v39[0] = v6;
  v39[1] = v17;
  v18 = sub_1E43C10(a1, a2, 0, (__int64)v39, a3, a4, a5);
  v19 = v18;
  if ( v18 && *(char *)(v18 + 28) >= 0 )
  {
    if ( v10 )
    {
      v20 = (__int64 *)(v18 + 104);
      v21 = 8LL * *(unsigned int *)(v18 + 100);
      v22 = &v20[(unsigned __int64)v21 / 8];
      v23 = v21 >> 3;
      v24 = v21 >> 5;
      if ( v24 )
      {
        v25 = v19 + 32 * v24 + 104;
        while ( !sub_B799A0(*v20) )
        {
          if ( sub_B799A0(v20[1]) )
          {
            v22 = v20 + 1;
            goto LABEL_23;
          }
          if ( sub_B799A0(v20[2]) )
          {
            v22 = v20 + 2;
            goto LABEL_23;
          }
          if ( sub_B799A0(v20[3]) )
          {
            v22 = v20 + 3;
            goto LABEL_23;
          }
          v20 += 4;
          if ( (__int64 *)v25 == v20 )
          {
            v23 = v22 - v20;
            goto LABEL_34;
          }
        }
        goto LABEL_22;
      }
LABEL_34:
      if ( v23 != 2 )
      {
        if ( v23 != 3 )
        {
          if ( v23 != 1 )
          {
LABEL_23:
            v26 = *v22;
            v27 = v10;
            v28 = 0;
            v29 = sub_B9AE60(v27);
            v31 = v30;
            v33 = sub_B9AE60(v26);
            v34 = 0;
            if ( v31 )
            {
              do
              {
                sub_1DC20B0(*(_QWORD *)(*a1 + 11280), *(_QWORD *)(v29 + 8 * v34), *(_QWORD *)(v33 + 8 * v34), v32);
                v34 = ++v28;
              }
              while ( v28 < v31 );
            }
            goto LABEL_25;
          }
LABEL_37:
          if ( sub_B799A0(*v20) )
            v22 = v20;
          goto LABEL_23;
        }
        if ( sub_B799A0(*v20) )
        {
LABEL_22:
          v22 = v20;
          goto LABEL_23;
        }
        ++v20;
      }
      if ( !sub_B799A0(*v20) )
      {
        ++v20;
        goto LABEL_37;
      }
      goto LABEL_22;
    }
LABEL_25:
    v35 = (__int64 *)ptr;
    goto LABEL_26;
  }
  v37 = (__int64 *)ptr;
  v35 = (__int64 *)((char *)ptr + 8 * (unsigned int)v41);
  if ( ptr != v35 )
  {
    do
    {
      v38 = *v37++;
      sub_B88650(v38, 1);
    }
    while ( v35 != v37 );
    goto LABEL_25;
  }
LABEL_26:
  if ( v35 != (__int64 *)v42 )
    free(v35);
  return v19;
}
