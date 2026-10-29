/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3D0
// Address: 0x0004A3D0

//----- (0004A3D0) --------------------------------------------------------
int __fastcall sub_4A3D0(int a1, unsigned __int8 **a2)
{
  int v4; // r0
  int v5; // r4
  __int64 v7; // kr00_8
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r10
  unsigned __int8 *v12; // r9
  int v13; // r3
  int v14; // r7
  _DWORD *v15; // r0
  int v16; // r3
  unsigned int v17; // r7
  int v18; // r2
  _BYTE *v19; // r0
  int v20; // r3
  char *v21; // r3
  const char *v22; // r8
  int v23; // r3
  char *v24; // r1
  int v25; // r3
  char *v26; // r3
  size_t v27; // r11
  char *s[3]; // [sp+Ch] [bp-48h] BYREF
  unsigned __int8 v29[8]; // [sp+18h] [bp-3Ch] BYREF
  int v30; // [sp+20h] [bp-34h]
  int v31; // [sp+24h] [bp-30h]
  int v32; // [sp+28h] [bp-2Ch]
  int v33; // [sp+2Ch] [bp-28h]
  unsigned __int8 v34[8]; // [sp+30h] [bp-24h] BYREF
  void *v35; // [sp+38h] [bp-1Ch] BYREF
  size_t v36; // [sp+3Ch] [bp-18h]
  int v37; // [sp+40h] [bp-14h]

  memset(s, 0, sizeof(s));
  v4 = sub_46F80(a1, (__int64 *)s);
  if ( v4 )
  {
    v5 = sub_4A214((_DWORD *)a1, v4, (const char **)s, a2);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 12);
    v8 = 24 * HIDWORD(v7) - 24;
    v9 = *(unsigned __int8 *)(v7 + v8);
    v10 = v8 + v7;
    if ( v9 == 2 && dword_D2CFC > 0 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      v12 = *a2;
      *a2 = nullptr;
      v13 = *(_DWORD *)(a1 + 40);
      v14 = *(_DWORD *)(a1 + 16);
      if ( (unsigned int)(v13 + 1) > *(_DWORD *)(a1 + 44) )
      {
        v15 = sub_77EB0(a1 + 36, *(void **)(a1 + 36), v13 + 1, 4u);
        v13 = *(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 36) = v15;
      }
      else
      {
        v15 = *(_DWORD **)(a1 + 36);
      }
      v15[v13] = v14;
      v16 = *(_DWORD *)(a1 + 16);
      v17 = *(_DWORD *)(a1 + 20);
      v18 = *(_DWORD *)(a1 + 40) + 1;
      v30 = v11;
      *(_DWORD *)(a1 + 40) = v18;
      v29[0] = 2;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      if ( v16 + 1 > v17 )
      {
        v19 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v16 + 1, 0x18u);
        v16 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 12) = v19;
      }
      else
      {
        v19 = *(_BYTE **)(a1 + 12);
      }
      v20 = 24 * v16;
      v19[v20] = 2;
      v21 = &v19[v20];
      *((_DWORD *)v21 + 3) = 0;
      *((_DWORD *)v21 + 4) = 0;
      *((_DWORD *)v21 + 5) = 0;
      *((_DWORD *)v21 + 2) = 0;
      ++*(_DWORD *)(a1 + 16);
      sub_461C4((unsigned __int8 *)v21, v29);
      if ( s[1] )
        v22 = s[0];
      else
        v22 = (const char *)&dword_8DA5C;
      v34[0] = 7;
      v35 = nullptr;
      v36 = 0;
      v37 = 0;
      if ( v22 )
      {
        v27 = strlen(v22);
        v35 = sub_77EB0((int)&v35, nullptr, v27 + 1, 1u);
        v36 = v27 + 1;
        memmove(v35, v22, v27);
        *((_BYTE *)v35 + v27) = 0;
      }
      v23 = *(_DWORD *)(a1 + 16);
      v24 = *(char **)(a1 + 12);
      if ( (unsigned int)(v23 + 1) > *(_DWORD *)(a1 + 20) )
      {
        v24 = (char *)sub_77EB0(a1 + 12, v24, v23 + 1, 0x18u);
        v23 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 12) = v24;
      }
      v25 = 24 * v23;
      v24[v25] = 2;
      v26 = &v24[v25];
      *((_DWORD *)v26 + 3) = 0;
      *((_DWORD *)v26 + 4) = 0;
      *((_DWORD *)v26 + 5) = 0;
      *((_DWORD *)v26 + 2) = 0;
      ++*(_DWORD *)(a1 + 16);
      sub_461C4((unsigned __int8 *)v26, v34);
      v5 = sub_4521C((_DWORD *)a1, v12, nullptr, -dword_D2CFC);
      sub_455C8(v34);
      sub_455C8(v29);
    }
    else
    {
      sub_4918C((_DWORD *)a1);
      v5 = 0;
    }
  }
  if ( s[0] )
  {
    s[1] = nullptr;
    sub_77E08(s[0]);
  }
  return v5;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D2CFC: using guessed type int dword_D2CFC;
