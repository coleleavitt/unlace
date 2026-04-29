unsigned __int64 __fastcall sub_38C5C0(__int64 *a1, int a2, const char *a3)
{
  __int64 v4; // r13
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r15
  __int64 v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  bool v14; // si
  int v15; // r12d
  __int64 v16; // r13
  char v17; // bp
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  char *v23; // r12
  char *v24; // r8
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rbp
  char v29; // r13
  __int64 v30; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // [rsp+8h] [rbp-60h]
  char v35; // [rsp+1Dh] [rbp-4Bh] BYREF
  __int64 v36; // [rsp+1Eh] [rbp-4Ah] BYREF
  __int16 v37; // [rsp+26h] [rbp-42h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = a1[1];
    v6 = strlen(a3);
    v7 = v6;
    v8 = v6;
    if ( v4 )
    {
      --v4;
      v8 = v6 + v4;
    }
    v9 = *a1;
    v10 = v8 + 1;
    if ( a1[2] < v8 + 1 )
    {
      v33 = qvector_reserve(a1, v9, v10, 1);
      v10 = v8 + 1;
      *a1 = v33;
      v9 = v33;
    }
    a1[1] = v10;
    *(_BYTE *)(v9 + v8) = 0;
    memmove((void *)(v4 + *a1), a3, v7);
  }
  v36 = 0;
  v37 = 0;
  if ( a2 <= 25 )
  {
    v15 = 0;
  }
  else
  {
    v11 = 1;
    do
    {
      *(&v35 + v11) = a2 % 0x1Au;
      v12 = a2;
      a2 /= 0x1Au;
      v13 = v11;
      v14 = v12 > 675;
      LOBYTE(v12) = v11++ != 10;
    }
    while ( ((unsigned __int8)v12 & v14) != 0 );
    v15 = v13;
    LOBYTE(a2) = a2 - 1;
  }
  v16 = a1[1];
  v17 = a2 + 65;
  if ( v16 )
  {
    v18 = v16 + 1;
    v19 = a1[1];
    v20 = *a1;
    --v16;
    if ( a1[2] >= v18 )
      goto LABEL_13;
  }
  else
  {
    v20 = *a1;
    v19 = 1;
    v18 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_13;
  }
  v32 = qvector_reserve(a1, v20, v18, 1);
  *a1 = v32;
  v20 = v32;
LABEL_13:
  a1[1] = v18;
  *(_BYTE *)(v20 + v16) = v17;
  *(_BYTE *)(*a1 + v19) = 0;
  if ( v15 )
  {
    v21 = v15 - 1;
    v22 = (unsigned int)(v15 - 1);
    v23 = (char *)&v36 + v21;
    v24 = &v35 + v21 - v22;
    do
    {
      v28 = a1[1];
      v29 = *v23 + 65;
      if ( v28 )
      {
        v25 = v28 + 1;
        v26 = a1[1];
        v27 = *a1;
        --v28;
        if ( a1[2] < v25 )
          goto LABEL_19;
      }
      else
      {
        v27 = *a1;
        v26 = 1;
        v25 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_19:
          v34 = v24;
          v30 = qvector_reserve(a1, v27, v25, 1);
          v24 = v34;
          *a1 = v30;
          v27 = v30;
        }
      }
      a1[1] = v25;
      --v23;
      *(_BYTE *)(v27 + v28) = v29;
      *(_BYTE *)(*a1 + v26) = 0;
    }
    while ( v24 != v23 );
  }
  return v38 - __readfsqword(0x28u);
}
