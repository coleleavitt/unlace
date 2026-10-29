/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A9D4
// Address: 0x0003A9D4

//----- (0003A9D4) --------------------------------------------------------
int __fastcall sub_3A9D4(_DWORD *a1)
{
  int v1; // r4
  void **v3; // r10
  int v4; // r5
  void **v5; // r8
  void **v6; // r6
  const char *v7; // r0
  const char *v8; // r1
  const char *v9; // r9
  _DWORD *v10; // r9
  unsigned int v11; // r1
  int v12; // r3
  char *v13; // r10
  int v15; // r3
  _DWORD *v16; // r10
  _DWORD *v17; // r0
  char *v18; // r11
  size_t v19; // r10
  void *ptr; // [sp+8h] [bp-5Ch] BYREF
  size_t v21; // [sp+Ch] [bp-58h]
  int v22; // [sp+10h] [bp-54h]
  unsigned __int8 v23[8]; // [sp+18h] [bp-4Ch] BYREF
  int v24; // [sp+20h] [bp-44h]
  int v25; // [sp+24h] [bp-40h]
  int v26; // [sp+28h] [bp-3Ch]
  int v27; // [sp+2Ch] [bp-38h]
  void *v28; // [sp+30h] [bp-34h]
  size_t v29; // [sp+34h] [bp-30h]
  int v30; // [sp+38h] [bp-2Ch]
  unsigned __int8 v31[8]; // [sp+40h] [bp-24h] BYREF
  int v32; // [sp+48h] [bp-1Ch]
  int v33; // [sp+4Ch] [bp-18h]
  int v34; // [sp+50h] [bp-14h]
  int v35; // [sp+54h] [bp-10h]

  v1 = a1[16];
  v3 = *(void ***)(v1 + 52);
  v4 = a1[7];
  v5 = &v3[10 * *(_DWORD *)(v1 + 56)];
  if ( v5 == v3 )
  {
LABEL_9:
    if ( v4 )
      v9 = (const char *)a1[6];
    else
      v9 = (const char *)&dword_8DA5C;
    ptr = nullptr;
    v21 = 0;
    v22 = 0;
    if ( v9 )
    {
      v19 = strlen(v9);
      ptr = sub_77EB0((int)&ptr, nullptr, v19 + 1, 1u);
      v21 = v19 + 1;
      memmove(ptr, v9, v19);
      *((_BYTE *)ptr + v19) = 0;
      v3 = *(void ***)(v1 + 52);
    }
    v25 = 0;
    v23[0] = 2;
    v10 = v3;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v11 = *(_DWORD *)(v1 + 60);
    if ( v3 <= &ptr && &ptr < &v3[10 * v11] )
    {
      v32 = 0;
      v29 = v21;
      v31[0] = 2;
      v28 = ptr;
      v30 = v22;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      ptr = nullptr;
      v21 = 0;
      v22 = 0;
      sub_459A0(v31, v23);
      v15 = *(_DWORD *)(v1 + 56);
      v16 = *(_DWORD **)(v1 + 52);
      if ( (unsigned int)(v15 + 1) > *(_DWORD *)(v1 + 60) )
      {
        v17 = sub_77EB0(v1 + 52, *(void **)(v1 + 52), v15 + 1, 0x28u);
        v15 = *(_DWORD *)(v1 + 56);
        v16 = v17;
        *(_DWORD *)(v1 + 52) = v17;
      }
      v16[10 * v15] = v28;
      v18 = (char *)&v16[10 * v15];
      v28 = nullptr;
      *((_DWORD *)v18 + 1) = v29;
      v29 = 0;
      *((_DWORD *)v18 + 2) = v30;
      v18[16] = 2;
      *((_DWORD *)v18 + 6) = 0;
      *((_DWORD *)v18 + 7) = 0;
      *((_DWORD *)v18 + 8) = 0;
      *((_DWORD *)v18 + 9) = 0;
      v30 = 0;
      sub_459A0((unsigned __int8 *)v18 + 16, v31);
      sub_455C8(v31);
      if ( v28 )
      {
        v29 = 0;
        sub_77E08(v28);
      }
    }
    else
    {
      v12 = *(_DWORD *)(v1 + 56);
      if ( v11 < v12 + 1 )
      {
        v10 = sub_77EB0(v1 + 52, v3, v12 + 1, 0x28u);
        v12 = *(_DWORD *)(v1 + 56);
        *(_DWORD *)(v1 + 52) = v10;
      }
      v10[10 * v12] = ptr;
      v13 = (char *)&v10[10 * v12];
      ptr = nullptr;
      *((_DWORD *)v13 + 1) = v21;
      v21 = 0;
      *((_DWORD *)v13 + 2) = v22;
      v13[16] = 2;
      *((_DWORD *)v13 + 6) = 0;
      *((_DWORD *)v13 + 7) = 0;
      *((_DWORD *)v13 + 8) = 0;
      *((_DWORD *)v13 + 9) = 0;
      v22 = 0;
      sub_459A0((unsigned __int8 *)v13 + 16, v23);
    }
    ++*(_DWORD *)(v1 + 56);
    sub_455C8(v23);
    if ( ptr )
    {
      v21 = 0;
      sub_77E08(ptr);
    }
  }
  else
  {
    v6 = *(void ***)(v1 + 52);
    while ( 1 )
    {
      v7 = (const char *)(v6[1] ? *v6 : &dword_8DA5C);
      v8 = v4 ? (const char *)a1[6] : (const char *)&dword_8DA5C;
      if ( !strcmp(v7, v8) )
        break;
      v6 += 10;
      if ( v5 == v6 )
        goto LABEL_9;
    }
  }
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
