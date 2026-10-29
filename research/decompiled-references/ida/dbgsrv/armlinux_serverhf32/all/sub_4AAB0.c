/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AAB0
// Address: 0x0004AAB0

//----- (0004AAB0) --------------------------------------------------------
int __fastcall sub_4AAB0(unsigned __int8 *a1, const char *a2, unsigned __int8 *a3, int a4, int a5)
{
  _DWORD *v7; // r6
  int v8; // r4
  size_t v9; // r9
  unsigned int v10; // r11
  size_t v11; // r0
  _DWORD *v12; // r0
  unsigned __int8 *v13; // r9
  int v14; // r2
  _DWORD *v15; // r0
  unsigned __int8 *v16; // r5
  unsigned __int8 *v17; // r6
  int v18; // r5
  int v19; // r1
  unsigned __int8 *i; // r4
  const char *v22; // r0
  const char *v23; // r5
  size_t v24; // r0
  size_t v25; // r4
  unsigned int v26; // r6
  void *v27; // r0
  int v30; // [sp+24h] [bp-78h]
  void *ptr; // [sp+28h] [bp-74h] BYREF
  size_t v32; // [sp+2Ch] [bp-70h]
  int v33; // [sp+30h] [bp-6Ch]
  unsigned __int8 v34[8]; // [sp+78h] [bp-24h] BYREF
  int v35; // [sp+80h] [bp-1Ch]
  int v36; // [sp+84h] [bp-18h]
  int v37; // [sp+88h] [bp-14h]
  int v38; // [sp+8Ch] [bp-10h]

  if ( a2 )
  {
    v7 = (_DWORD *)sub_3F278(a2);
    if ( !v7 )
    {
      v8 = 1536;
      sub_70A98(0, a2);
      goto LABEL_26;
    }
  }
  else
  {
    v7 = nullptr;
  }
  v34[0] = 2;
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v8 = sub_46860((int)v34, (unsigned int)v7);
  if ( !v8 )
  {
    if ( v7 )
    {
      ptr = nullptr;
      v32 = 0;
      v33 = 0;
      if ( a2 )
      {
        v9 = strlen(a2);
        ptr = sub_77EB0((int)&ptr, nullptr, v9 + 1, 1u);
        v32 = v9 + 1;
        memmove(ptr, a2, v9);
        *((_BYTE *)ptr + v9) = 0;
      }
      v30 = sub_42798(v7, (int)&ptr);
      if ( v30 != -1 )
      {
        if ( ptr )
        {
          v32 = 0;
          sub_77E08(ptr);
        }
        v10 = a4 + 1;
        if ( a4 == -1 )
          goto LABEL_11;
        if ( !is_mul_ok(v10, 0x18u) )
        {
          v13 = (unsigned __int8 *)sub_77E84(0x7FFFFFFF);
LABEL_15:
          sub_459A0(v13, v34);
          if ( a4 )
          {
            v16 = a3;
            v17 = v13 + 24;
            do
            {
              sub_459A0(v17, v16);
              ++v8;
              v17 += 24;
              v16 += 24;
            }
            while ( v8 != a4 );
          }
          sub_458B0((int)&ptr, 0, 0);
          v18 = sub_4A5E4((int)&ptr, nullptr, v30, a4 + 1, v13, a1, a5);
          if ( v13 )
          {
            v19 = 24 * *((_DWORD *)v13 - 1);
            for ( i = &v13[v19]; v13 != i; sub_455C8(i) )
              i -= 24;
            sub_81220(v13 - 8);
          }
          sub_46D88((int)&ptr);
          sub_455C8(v34);
          return v18;
        }
        if ( v10 <= 0x5555555 )
LABEL_11:
          v11 = 24 * v10 + 8;
        else
          v11 = -1;
        v12 = sub_80B00(v11);
        *v12 = 24;
        v12[1] = v10;
        v13 = (unsigned __int8 *)(v12 + 2);
        v14 = a4;
        if ( a4 >= 0 )
        {
          v15 = v12 + 5;
          do
          {
            --v14;
            *((_BYTE *)v15 - 12) = 2;
            *v15 = 0;
            v15[1] = 0;
            v15 += 6;
            *(v15 - 4) = 0;
            *(v15 - 7) = 0;
          }
          while ( v14 != -1 );
        }
        goto LABEL_15;
      }
      if ( ptr )
      {
        v32 = 0;
        sub_77E08(ptr);
      }
    }
    sub_461C4(a1, v34);
    v18 = 1;
    sub_455C8(v34);
    return v18;
  }
  sub_455C8(v34);
LABEL_26:
  v18 = a5;
  sub_70A2C(v8);
  sub_49088(a1);
  if ( a5 )
  {
    v22 = sub_79818(-1);
    v23 = v22;
    if ( v22 && (v24 = strlen(v22), (v25 = v24) != 0) )
    {
      v26 = v24 + 1;
      v27 = *(void **)a5;
      if ( v26 > *(_DWORD *)(a5 + 8) )
      {
        v27 = sub_77EB0(a5, *(void **)a5, v26, 1u);
        *(_DWORD *)a5 = v27;
      }
      *(_DWORD *)(a5 + 4) = v26;
      memmove(v27, v23, v25);
      v18 = 0;
      *(_BYTE *)(*(_DWORD *)a5 + v25) = 0;
    }
    else
    {
      v18 = 0;
      *(_DWORD *)(a5 + 4) = 0;
    }
  }
  return v18;
}
