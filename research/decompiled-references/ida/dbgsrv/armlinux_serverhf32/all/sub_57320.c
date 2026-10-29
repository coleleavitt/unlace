/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57320
// Address: 0x00057320

//----- (00057320) --------------------------------------------------------
int __fastcall sub_57320(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r4
  int *v6; // r1
  int v7; // r0
  int v8; // r7
  signed int v9; // r5
  char *v10; // r0
  unsigned int v11; // r11
  int *v12; // r8
  int v13; // r1
  signed int v14; // r3
  int (__fastcall *v15)(_DWORD *, int, int, void *, _DWORD); // r5
  int v16; // r0
  char *v17; // r0
  int v18; // r8
  unsigned int v19; // r9
  int v20; // r4
  char *v21; // r3
  int v22; // r5
  int v23; // r2
  char *v24; // r3
  void *v25; // r0
  void *v27; // r0
  const void *v28; // r1
  int v29; // [sp+Ch] [bp-40h]
  size_t n; // [sp+14h] [bp-38h]
  int v31; // [sp+18h] [bp-34h] BYREF
  void *ptr; // [sp+1Ch] [bp-30h] BYREF
  unsigned int v33; // [sp+20h] [bp-2Ch]
  int v34; // [sp+24h] [bp-28h]
  int v35; // [sp+28h] [bp-24h] BYREF
  __int64 src; // [sp+30h] [bp-1Ch]
  int v37; // [sp+38h] [bp-14h]
  int v38; // [sp+3Ch] [bp-10h]

  v4 = sub_570D8();
  v5 = (_DWORD *)v4;
  if ( *(_DWORD *)(a1 + 12) )
    v6 = *(int **)(a1 + 8);
  else
    v6 = &dword_8DA5C;
  v7 = (*(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v4 + 244))(v4, v6, &v31);
  v8 = v7;
  if ( v7 < 0 )
    goto LABEL_6;
  v9 = v5[87];
  if ( v9 )
  {
    if ( v7 >= v9 )
      goto LABEL_6;
  }
  else
  {
    v9 = v5[99];
    if ( v7 >= v9 )
    {
LABEL_6:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(30056);
    }
  }
  ptr = nullptr;
  v33 = 0;
  v34 = 0;
  v37 = 0;
  v38 = 0;
  v35 = -2;
  src = -1;
  v10 = (char *)sub_77EB0((int)&ptr, nullptr, v9, 0x18u);
  v11 = v33;
  ptr = v10;
  if ( v33 < v9 )
  {
    v29 = 24 * v33;
    while ( 1 )
    {
      v12 = (int *)&v10[v29];
      *v12 = -2;
      v12[2] = 0;
      v12[3] = 0;
      v12[4] = 0;
      v12[5] = 0;
      if ( &v10[v29] != (char *)&v35 )
      {
        v13 = v35;
        if ( v35 < -1 )
        {
          *((_QWORD *)v12 + 1) = src;
        }
        else
        {
          v12[2] = 0;
          v12[3] = 0;
          v14 = HIDWORD(src);
          v12[4] = 0;
          n = v14;
          if ( v14 )
          {
            v27 = sub_77E84(v14);
            v12[2] = (int)v27;
            v28 = (const void *)src;
            v12[4] = n;
            memcpy(v27, v28, n);
            v13 = v35;
            v12[3] = n;
          }
        }
        *v12 = v13;
      }
      ++v11;
      v29 += 24;
      if ( v11 == v9 )
        break;
      v10 = (char *)ptr;
    }
  }
  v33 = v9;
  if ( v35 >= -1 && (_DWORD)src )
  {
    HIDWORD(src) = 0;
    sub_77E08((void *)src);
  }
  v15 = *(int (__fastcall **)(_DWORD *, int, int, void *, _DWORD))(*v5 + 112);
  v16 = sub_570E4();
  if ( v15(v5, v16, v31, ptr, 0) <= 0 )
  {
    v18 = sub_3774C((_BYTE *)a2, "failed to read register value");
    v17 = (char *)ptr;
  }
  else
  {
    v17 = (char *)ptr;
    v18 = 0;
    *(_DWORD *)(a2 + 8) = *((_DWORD *)ptr + 6 * v8 + 2);
  }
  if ( v17 )
  {
    v19 = v33;
    if ( v33 )
    {
      v20 = 0;
      v21 = v17;
      v22 = 0;
      while ( 1 )
      {
        v23 = *(_DWORD *)&v21[v20];
        v24 = &v21[v20];
        if ( v23 >= -1 )
        {
          v25 = *((void **)v24 + 2);
          if ( v25 )
          {
            *((_DWORD *)v24 + 3) = 0;
            sub_77E08(v25);
          }
        }
        ++v22;
        v20 += 24;
        if ( v19 == v22 )
          break;
        v21 = (char *)ptr;
      }
      v17 = (char *)ptr;
    }
    v33 = 0;
    sub_77E08(v17);
  }
  return v18;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
