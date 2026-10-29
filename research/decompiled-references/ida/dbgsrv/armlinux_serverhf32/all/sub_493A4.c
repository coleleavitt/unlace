/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493A4
// Address: 0x000493A4

//----- (000493A4) --------------------------------------------------------
int __fastcall sub_493A4(unsigned __int8 *a1, int a2, char *a3, int a4)
{
  int v7; // r0
  int v8; // r4
  _DWORD *v10; // r10
  unsigned __int8 *v11; // r0
  int v12; // r9
  size_t v13; // r10
  unsigned __int8 *v14; // r10
  int v15; // r9
  pthread_mutex_t *v16; // r0
  int v17; // r0
  int v18; // r10
  pthread_mutex_t *v19; // r0
  size_t v20; // r8
  int v21; // r0
  const char *v22; // r2
  const char *v23; // r1
  _DWORD *v24; // [sp+0h] [bp-94h]
  size_t n; // [sp+4h] [bp-90h]
  unsigned __int8 *v26; // [sp+Ch] [bp-88h] BYREF
  void *v27; // [sp+14h] [bp-80h] BYREF
  size_t v28; // [sp+18h] [bp-7Ch]
  int v29; // [sp+1Ch] [bp-78h]
  void *ptr; // [sp+20h] [bp-74h] BYREF
  size_t v31; // [sp+24h] [bp-70h]
  int v32; // [sp+28h] [bp-6Ch]
  int v33[2]; // [sp+70h] [bp-24h] BYREF
  int v34; // [sp+78h] [bp-1Ch]
  int v35; // [sp+7Ch] [bp-18h]
  int v36; // [sp+80h] [bp-14h]
  int v37; // [sp+84h] [bp-10h]

  v26 = a1;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v7 = sub_3E348();
  if ( !a2 )
  {
    v10 = (_DWORD *)v7;
    v11 = (unsigned __int8 *)sub_3EF7C(a3);
    if ( v11 )
    {
      v8 = (int)v26;
      if ( v26 )
      {
        LOBYTE(v33[0]) = 2;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        sub_459A0((unsigned __int8 *)v33, v11);
        sub_42494((int *)v26, v33);
        v8 = 0;
        sub_455C8((unsigned __int8 *)v33);
        sub_7A128((pthread_mutex_t *)dword_D3A90);
        return v8;
      }
    }
    else
    {
      v15 = sub_3F390(v10, a3);
      if ( v15 == 0x7FFFFFFF )
      {
        sub_70A98(0, a3);
        v8 = 1538;
        sub_7A128((pthread_mutex_t *)dword_D3A90);
        goto LABEL_4;
      }
      v8 = (int)v26;
      if ( v26 )
      {
        v8 = 0;
        sub_455C8(v26);
        *v26 = 6;
        v16 = (pthread_mutex_t *)dword_D3A90;
        *((_DWORD *)v26 + 2) = v15;
        sub_7A128(v16);
        return v8;
      }
    }
LABEL_16:
    sub_7A128((pthread_mutex_t *)dword_D3A90);
    return v8;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v8 = 1532;
    sub_7A128((pthread_mutex_t *)dword_D3A90);
LABEL_4:
    sub_70A2C(v8);
    return v8;
  }
  v12 = *(_DWORD *)(a2 + 8);
  ptr = nullptr;
  v31 = 0;
  v32 = 0;
  if ( a3 )
  {
    v13 = strlen(a3);
    ptr = sub_77EB0((int)&ptr, nullptr, v13 + 1, 1u);
    v31 = v13 + 1;
    memmove(ptr, a3, v13);
    *((_BYTE *)ptr + v13) = 0;
  }
  v14 = (unsigned __int8 *)sub_42C84(v12, (const char **)&ptr);
  if ( ptr )
  {
    v31 = 0;
    sub_77E08(ptr);
  }
  if ( v14 != (unsigned __int8 *)(v12 + 4) )
  {
    v8 = (int)v26;
    if ( v26 )
    {
      LOBYTE(v33[0]) = 2;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      sub_459A0((unsigned __int8 *)v33, v14 + 32);
      sub_42494((int *)v26, v33);
      v8 = 0;
      sub_455C8((unsigned __int8 *)v33);
      sub_7A128((pthread_mutex_t *)dword_D3A90);
      return v8;
    }
    goto LABEL_16;
  }
  v17 = sub_3F1E4(*(_DWORD *)(v12 + 28));
  ptr = nullptr;
  v31 = 0;
  v24 = (_DWORD *)v17;
  v32 = 0;
  if ( a3 )
  {
    n = strlen(a3);
    ptr = sub_77EB0((int)&ptr, nullptr, n + 1, 1u);
    v31 = n + 1;
    memmove(ptr, a3, n);
    *((_BYTE *)ptr + n) = 0;
  }
  v18 = sub_42798(v24, (int)&ptr);
  if ( ptr )
  {
    v31 = 0;
    sub_77E08(ptr);
  }
  if ( v18 != -1 )
  {
    v8 = (int)v26;
    if ( v26 )
    {
      v8 = 0;
      sub_455C8(v26);
      *v26 = 6;
      v19 = (pthread_mutex_t *)dword_D3A90;
      *((_DWORD *)v26 + 2) = v18;
      sub_7A128(v19);
      return v8;
    }
    goto LABEL_16;
  }
  sub_7A128((pthread_mutex_t *)dword_D3A90);
  if ( a4 )
  {
    v27 = nullptr;
    v28 = 0;
    v29 = 0;
    if ( a3 )
    {
      v20 = strlen(a3);
      v27 = sub_77EB0((int)&v27, nullptr, v20 + 1, 1u);
      v28 = v20 + 1;
      memmove(v27, a3, v20);
      *((_BYTE *)v27 + v20) = 0;
    }
    sub_458B0((int)&ptr, 0, 1);
    if ( sub_492B4(&ptr, v12, (const char **)&v27, &v26) )
    {
      sub_46D88((int)&ptr);
      if ( v27 )
      {
        v28 = 0;
        sub_77E08(v27);
      }
      return 0;
    }
    sub_46D88((int)&ptr);
    if ( v27 )
    {
      v28 = 0;
      sub_77E08(v27);
    }
  }
  ptr = nullptr;
  v31 = 0;
  v32 = 0;
  v21 = sub_3F1E4(*(_DWORD *)(v12 + 28));
  if ( *(_DWORD *)(v21 + 36) )
    v22 = *(const char **)(v21 + 32);
  else
    v22 = (const char *)&dword_8DA5C;
  sub_1873C((int)&ptr, "%s.%s", v22, a3);
  if ( v31 )
    v23 = (const char *)ptr;
  else
    v23 = (const char *)&dword_8DA5C;
  sub_70A98(0, v23);
  v8 = sub_70A2C(1538);
  if ( ptr )
  {
    v31 = 0;
    sub_77E08(ptr);
  }
  return v8;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D3A90: using guessed type int dword_D3A90;
