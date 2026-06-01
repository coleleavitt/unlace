__int64 __fastcall sub_75CAE0(_QWORD *a1, unsigned int **a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r12
  char v7; // r13
  __int64 v8; // rax
  char v9; // r13
  __int64 v10; // rbx
  char v11; // r11
  __int64 v12; // r10
  unsigned int *v13; // rbp
  __int64 v14; // rdi
  unsigned int *v15; // r9
  unsigned int *v16; // rax
  unsigned int *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // al
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int *v25; // rbx
  unsigned int *v26; // rdi
  unsigned int v28; // eax
  unsigned int v29; // r9d
  void (__fastcall *v30)(__int64, __int64, unsigned int, __int64, unsigned int); // rax
  __int64 v31; // rax
  char v32; // al
  __int64 *v33; // r12
  __int64 v34; // [rsp+0h] [rbp-B8h]
  char v35; // [rsp+10h] [rbp-A8h]
  char v36; // [rsp+10h] [rbp-A8h]
  unsigned int v37; // [rsp+10h] [rbp-A8h]
  char v38; // [rsp+14h] [rbp-A4h]
  unsigned int v39; // [rsp+14h] [rbp-A4h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  unsigned int v42; // [rsp+30h] [rbp-88h]
  char v43; // [rsp+37h] [rbp-81h]
  void *s; // [rsp+40h] [rbp-78h] BYREF
  __int64 v45; // [rsp+48h] [rbp-70h]
  void *v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  int v48; // [rsp+60h] [rbp-58h]
  __int64 v49; // [rsp+68h] [rbp-50h]
  __int64 v50; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[5] + 8LL) & 1) == 0 || !a1[7] )
    return v51 - __readfsqword(0x28u);
  v42 = 0;
  v3 = 0;
  v43 = 0;
  do
  {
    v4 = a1[6];
    v48 = 1065353216;
    v49 = 0;
    v50 = 0;
    v5 = 176 * v3;
    v6 = v5 + v4;
    v41 = v5;
    v7 = *(_BYTE *)(v6 + 164);
    v8 = *(_QWORD *)(v6 + 32);
    s = &v50;
    v45 = 1;
    v34 = v8;
    v46 = nullptr;
    v9 = (v7 & 4) != 0;
    v47 = 0;
    if ( !v8 )
      goto LABEL_24;
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = 5 * v10;
      v13 = (unsigned int *)(5 * v10 + *(_QWORD *)(v6 + 24));
      if ( !*((_BYTE *)v13 + 4) )
      {
        v14 = *v13;
        v15 = a2[1];
        if ( !v15 )
          goto LABEL_12;
        v16 = *a2;
        v17 = nullptr;
        while ( 1 )
        {
          v18 = *v16;
          if ( (unsigned int)v14 >= (unsigned int)v18 )
          {
            v19 = *((_QWORD *)v16 + 1);
            if ( (unsigned int)v14 < v19 + (unsigned __int64)(unsigned int)v18 )
              break;
          }
          v17 = (unsigned int *)((char *)v17 + 1);
          v16 += 4;
          if ( v15 == v17 )
            goto LABEL_12;
        }
        if ( v16
          && (v38 = v11,
              v28 = correct_address(v14, v18, v16[1], v19, 0),
              v11 = v38,
              v29 = v28,
              v12 = 5 * v10,
              (_DWORD)v14 != v28) )
        {
          v30 = *(void (__fastcall **)(__int64, __int64, unsigned int, __int64, unsigned int))(*a1 + 120LL);
          if ( v30 == sub_753890 )
          {
            v31 = a1[6] + v41;
            if ( (*(_BYTE *)(v31 + 164) & 4) == 0 )
            {
              v39 = v29;
              v36 = v11;
              sub_753360((_QWORD *)(v31 + 48), v14);
              v11 = v36;
              v29 = v39;
              v12 = 5 * v10;
            }
          }
          else
          {
            v37 = v29;
            v30((__int64)a1, (__int64)&s, v42, v10, v14);
            v12 = 5 * v10;
            v11 = v38;
            v29 = v37;
          }
          v32 = v11;
          *v13 = v29;
          v11 = 1;
          *(_DWORD *)(v6 + 164) |= 1u;
          v20 = v32 ^ 1;
          v43 = 1;
        }
        else
        {
LABEL_12:
          v20 = v11;
          v11 = 0;
        }
        v21 = v9 & v20;
        if ( v21 )
        {
          if ( !v10 || (*(_BYTE *)(v6 + 164) & 4) == 0 )
            goto LABEL_36;
          v22 = *(_QWORD *)(v6 + 24);
          v23 = v22 + v12 - 5;
          v9 = *(_BYTE *)(v23 + 4);
          if ( v9 )
            goto LABEL_20;
          v24 = v12 + v22;
          if ( *(_BYTE *)(v24 + 4) || *(_DWORD *)v23 >= *(_DWORD *)v24 )
          {
            v35 = v11;
            sub_7579F0(a1, v42, 4, 0, 0);
            v11 = v35;
          }
          else
          {
LABEL_36:
            v9 = v21;
          }
        }
      }
LABEL_20:
      ++v10;
    }
    while ( v34 != v10 );
    v25 = (unsigned int *)v46;
    if ( (*(_BYTE *)(v6 + 164) & 4) != 0 )
    {
LABEL_22:
      while ( v25 )
      {
        v26 = v25;
        v25 = *(unsigned int **)v25;
        operator delete(v26, 0x10u);
      }
    }
    else
    {
      v33 = (__int64 *)(v6 + 48);
      if ( v46 )
      {
        do
        {
          sub_753C70(v33, v25 + 2);
          v25 = *(unsigned int **)v25;
        }
        while ( v25 );
        v25 = (unsigned int *)v46;
        goto LABEL_22;
      }
    }
LABEL_24:
    memset(s, 0, 8 * v45);
    v47 = 0;
    v46 = nullptr;
    if ( s != &v50 )
      operator delete(s, 8 * v45);
    v3 = ++v42;
  }
  while ( (unsigned __int64)v42 < a1[7] );
  if ( v43 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
    sub_396090(0x47u, a1[4]);
    return sub_754740((__int64)a1, 71);
  }
  return v51 - __readfsqword(0x28u);
}

