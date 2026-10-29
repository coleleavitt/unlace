/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808DDF0
// Address: 0x0808DDF0

//----- (0808DDF0) --------------------------------------------------------
int __cdecl sub_808DDF0(_DWORD *a1, int *a2, unsigned __int8 **a3)
{
  char *v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v8; // eax
  size_t v9; // esi
  unsigned int v10; // edx
  _BYTE *v11; // eax
  size_t v12; // ecx
  unsigned int v13; // eax
  size_t v14; // esi
  unsigned int v15; // edx
  char *v16; // eax
  char *v17; // eax
  unsigned int v18; // [esp-54h] [ebp-54h]
  unsigned int v19; // [esp-48h] [ebp-48h]
  int v20; // [esp-44h] [ebp-44h]
  int v21; // [esp-44h] [ebp-44h]
  unsigned int v22; // [esp-44h] [ebp-44h]
  size_t v23; // [esp-44h] [ebp-44h]
  char *v24; // [esp-3Ch] [ebp-3Ch] BYREF
  unsigned int v25; // [esp-38h] [ebp-38h]
  int v26; // [esp-34h] [ebp-34h]
  char *v27; // [esp-2Ch] [ebp-2Ch] BYREF
  size_t v28; // [esp-28h] [ebp-28h]
  unsigned int v29; // [esp-24h] [ebp-24h]
  unsigned int v30; // [esp-20h] [ebp-20h]

  v30 = __readgsdword(0x14u);
  *a2 = -1;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v20 = sub_808B670((int)a1, (int *)&v24);
  v3 = v24;
  if ( v20 )
  {
    v18 = v25;
    v4 = (_DWORD *)sub_8080DD0(*(_DWORD *)(v20 + 28));
    v5 = sub_8084920(v4, (int)&v24);
    if ( v5 != -1 )
    {
      *a2 = v5;
LABEL_4:
      v6 = 1;
      goto LABEL_5;
    }
    if ( (unsigned __int8)sub_808DC70(a1, v20, (const char **)&v24, a3) )
      goto LABEL_4;
    sub_80C7880(88);
    v8 = sub_8080DD0(*(_DWORD *)(v20 + 28));
    v9 = *(_DWORD *)(v8 + 36);
    v21 = v8;
    v10 = 2;
    v27 = nullptr;
    v11 = nullptr;
    v28 = 0;
    v29 = 0;
    if ( v9 )
    {
      v27 = (char *)sub_80CF8B0(v9);
      v29 = v9;
      memcpy(v27, *(const void **)(v21 + 32), v9);
      v28 = v9;
      v11 = v27;
      v12 = v9 - 1;
      v10 = v9 + 1;
      if ( v29 >= v9 + 1 )
      {
LABEL_12:
        v28 = v10;
        v11[v12] = 46;
        v27[v12 + 1] = 0;
        if ( v18 )
        {
          v13 = v18 - 1;
          v23 = v18 - 1;
          if ( v18 != 1 )
          {
            v14 = v28;
            v15 = v18 - 1;
            if ( v28 )
            {
              v14 = v28 - 1;
              v15 = v13 + v28 - 1;
              v18 = v13 + v28;
            }
            v16 = v27;
            if ( v29 < v18 )
            {
              v19 = v15;
              v16 = (char *)sub_80CF920((int)&v27, v27, v18, 1u);
              v15 = v19;
              v27 = v16;
            }
            v28 = v18;
            v16[v15] = 0;
            memcpy(&v27[v14], v3, v23);
          }
        }
        v17 = (char *)&dword_80DDFD8;
        if ( v28 )
          v17 = v27;
        sub_80C7910(0, v17);
        if ( v27 )
        {
          v28 = 0;
          sub_80CF780(v27);
        }
        goto LABEL_23;
      }
      --v9;
    }
    v22 = v10;
    v11 = sub_80CF920((int)&v27, v11, v10, 1u);
    v27 = v11;
    v10 = v22;
    v12 = v9;
    goto LABEL_12;
  }
LABEL_23:
  v6 = 0;
LABEL_5:
  if ( v3 )
    sub_80CF780(v3);
  if ( v30 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
