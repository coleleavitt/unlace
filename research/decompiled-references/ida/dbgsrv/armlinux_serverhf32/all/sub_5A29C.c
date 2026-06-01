/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A29C
// Address: 0x0005A29C

//----- (0005A29C) --------------------------------------------------------
void __fastcall sub_5A29C(int a1, int a2)
{
  unsigned int *v3; // r4
  unsigned int v4; // r5
  const char *v5; // r8
  __int64 v6; // r2
  _BYTE *v7; // r0
  size_t v8; // r6
  int v9; // r5
  size_t v10; // r6
  unsigned int v11; // r7
  unsigned int v12; // r5
  _BYTE *v13; // r0
  size_t v14; // r7
  signed int v15; // r0
  int v16; // r8
  int v17; // r6
  unsigned int v18; // r7
  unsigned int v19; // r7
  char *v20; // r0
  int v21; // r2
  void (*v22)(void); // r3
  char *v23; // r0
  int v24; // r2
  char *v25; // r0
  char *v26; // r0
  int v27; // r2
  void *src; // [sp+8h] [bp-44h]
  unsigned int v30; // [sp+18h] [bp-34h]
  void *ptr; // [sp+24h] [bp-28h] BYREF
  int v32; // [sp+28h] [bp-24h]
  unsigned int v33; // [sp+2Ch] [bp-20h]
  _BYTE v34[5]; // [sp+30h] [bp-1Ch] BYREF
  _BYTE v35[3]; // [sp+35h] [bp-17h] BYREF
  _BYTE v36[10]; // [sp+38h] [bp-14h] BYREF
  _BYTE v37[2]; // [sp+42h] [bp-Ah] BYREF

  v3 = *(unsigned int **)a2;
  if ( !(28 * *(_DWORD *)(a2 + 4)) )
    return;
  while ( 1 )
  {
    v4 = *v3;
    if ( v3[2] )
      v5 = (const char *)v3[1];
    else
      v5 = (const char *)&dword_8DA5C;
    sub_67AA8((int *)&ptr, 57);
    if ( v4 == -1 )
      v6 = 0;
    else
      v6 = v4 + 1LL;
    v7 = sub_760FC(v36, (unsigned int)v37, v6, HIDWORD(v6));
    v8 = v7 - v36;
    v9 = v32;
    if ( v7 == v36 )
    {
      if ( v5 )
        goto LABEL_8;
      goto LABEL_39;
    }
    v19 = v8 + v32;
    if ( !__CFADD__(v8, v32) )
    {
      if ( v19 <= v32 )
        goto LABEL_38;
      v23 = (char *)ptr;
      if ( v19 <= v33 )
      {
        v24 = v32;
LABEL_53:
        memset(&v23[v24], 0, v19 - v24);
        v32 = v19;
        goto LABEL_38;
      }
LABEL_67:
      v23 = (char *)sub_77EB0((int)&ptr, v23, v19, 1u);
      ptr = v23;
      v24 = v32;
      goto LABEL_53;
    }
    if ( (unsigned int)v32 <= 0x7FFFFFFE )
    {
      v19 = 0x7FFFFFFF;
      v23 = (char *)ptr;
      if ( v33 >= 0x7FFFFFFF )
      {
        v24 = v32;
        goto LABEL_53;
      }
      goto LABEL_67;
    }
    if ( v32 < 0 )
      v32 = 0x7FFFFFFF;
LABEL_38:
    memcpy((char *)ptr + v9, v36, v8);
    v9 = v32;
    if ( v5 )
    {
LABEL_8:
      v10 = strlen(v5) + 1;
      v11 = v10 + v9;
      if ( !__CFADD__(v10, v9) )
        goto LABEL_40;
      goto LABEL_10;
    }
LABEL_39:
    v10 = 1;
    v11 = v9 + 1;
    v5 = &byte_8DEAC;
    if ( v9 != -1 )
    {
LABEL_40:
      if ( v11 <= v9 )
        goto LABEL_13;
      v20 = (char *)ptr;
      if ( v11 <= v33 )
      {
        v21 = v9;
LABEL_44:
        memset(&v20[v21], 0, v11 - v21);
        v32 = v11;
        goto LABEL_13;
      }
LABEL_65:
      v20 = (char *)sub_77EB0((int)&ptr, v20, v11, 1u);
      ptr = v20;
      v21 = v32;
      goto LABEL_44;
    }
LABEL_10:
    if ( (unsigned int)v9 <= 0x7FFFFFFE )
    {
      v11 = 0x7FFFFFFF;
      v20 = (char *)ptr;
      if ( v33 >= 0x7FFFFFFF )
      {
        v21 = v9;
        goto LABEL_44;
      }
      goto LABEL_65;
    }
    if ( v9 < 0 )
      v32 = 0x7FFFFFFF;
LABEL_13:
    memcpy((char *)ptr + v9, v5, v10);
    v12 = v3[5];
    src = (void *)v3[4];
    v13 = sub_75FB0(v34, (unsigned int)v35, v12);
    v14 = v13 - v34;
    if ( v13 == v34 )
    {
      if ( !v12 )
        goto LABEL_15;
      goto LABEL_27;
    }
    v16 = v32;
    v30 = v14 + v32;
    if ( !__CFADD__(v14, v32) )
    {
      if ( v32 >= v30 )
        goto LABEL_26;
      goto LABEL_55;
    }
    if ( (unsigned int)v32 <= 0x7FFFFFFE )
    {
      v30 = 0x7FFFFFFF;
LABEL_55:
      v25 = (char *)ptr;
      if ( v30 > v33 )
      {
        v25 = (char *)sub_77EB0((int)&ptr, ptr, v30, 1u);
        ptr = v25;
      }
      memset(&v25[v32], 0, v30 - v32);
      v32 = v30;
      goto LABEL_26;
    }
    if ( v32 < 0 )
      v32 = 0x7FFFFFFF;
LABEL_26:
    memcpy((char *)ptr + v16, v34, v14);
    if ( !v12 )
      goto LABEL_15;
LABEL_27:
    v17 = v32;
    v18 = v12 + v32;
    if ( __CFADD__(v12, v32) )
    {
      if ( (unsigned int)v32 > 0x7FFFFFFE )
      {
        if ( v32 < 0 )
          v32 = 0x7FFFFFFF;
        goto LABEL_32;
      }
      v18 = 0x7FFFFFFF;
      v26 = (char *)ptr;
      if ( v33 >= 0x7FFFFFFF )
      {
        v27 = v32;
        goto LABEL_62;
      }
      goto LABEL_66;
    }
    if ( v32 < v18 )
    {
      v26 = (char *)ptr;
      if ( v18 <= v33 )
      {
        v27 = v32;
LABEL_62:
        memset(&v26[v27], 0, v18 - v27);
        v32 = v18;
        goto LABEL_32;
      }
LABEL_66:
      v26 = (char *)sub_77EB0((int)&ptr, v26, v18, 1u);
      ptr = v26;
      v27 = v32;
      goto LABEL_62;
    }
LABEL_32:
    memcpy((char *)ptr + v17, src, v12);
LABEL_15:
    v15 = sub_60CB8(a1 + 100, (int *)&ptr, 0xFFFFFFFF, nullptr);
    if ( v15 < 0 )
      break;
    if ( v15 )
    {
      v22 = *(void (**)(void))(**(_DWORD **)(a1 + 244) + 284);
      if ( (char *)v22 != (char *)sub_14F14 )
        v22();
    }
    if ( ptr )
    {
      v32 = 0;
      sub_77E08(ptr);
    }
    v3 += 7;
    if ( v3 == (unsigned int *)(*(_DWORD *)a2 + 28 * *(_DWORD *)(a2 + 4)) )
      return;
  }
  if ( ptr )
  {
    v32 = 0;
    sub_77E08(ptr);
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
