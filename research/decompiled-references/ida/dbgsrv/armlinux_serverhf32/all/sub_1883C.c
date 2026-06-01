/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1883C
// Address: 0x0001883C

//----- (0001883C) --------------------------------------------------------
int __fastcall sub_1883C(int result, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v3; // r8
  int v4; // r6
  int v6; // r2
  int v7; // r0
  void *v8; // r11
  size_t v9; // r10
  const char *v10; // r0
  const char *v11; // r1
  int v12; // r0
  size_t v13; // r3
  int v14; // r1
  void *v15; // r0
  int v16; // r2
  int v17; // r1
  unsigned int v18; // r10
  _DWORD *v19; // r11
  _DWORD *v20; // r10
  unsigned int v21; // r11
  void *v22; // r0
  _DWORD *v23; // r0
  __int64 v24; // r2
  _DWORD *v25; // r10
  int v26; // r2
  int v27; // r4
  _DWORD *v28; // r6
  int v29; // r1
  int v30; // r1
  void *v31; // r0
  size_t nb; // [sp+0h] [bp-2Ch]
  size_t n; // [sp+0h] [bp-2Ch]
  size_t na; // [sp+0h] [bp-2Ch]
  void *src; // [sp+Ch] [bp-20h]
  void *srca; // [sp+Ch] [bp-20h]
  _DWORD *v37; // [sp+10h] [bp-1Ch]
  int v38; // [sp+14h] [bp-18h]
  void *ptr; // [sp+18h] [bp-14h] BYREF
  size_t v40; // [sp+1Ch] [bp-10h]
  int v41; // [sp+20h] [bp-Ch]

  v2 = *(_DWORD **)(result + 1012);
  v3 = result + 1004;
  if ( v2 != (_DWORD *)(result + 1004) )
  {
    v4 = result;
    while ( 1 )
    {
      v6 = v2[5];
      ptr = nullptr;
      v40 = 0;
      v41 = 0;
      v7 = sub_1877C(v4, (int *)&ptr, v6);
      v8 = ptr;
      if ( !v7 )
        goto LABEL_9;
      v9 = v40;
      v10 = (const char *)ptr;
      if ( !v40 )
        v10 = (const char *)&dword_8DA5C;
      v11 = v2[14] ? (const char *)v2[13] : (const char *)&dword_8DA5C;
      nb = v2[14];
      v12 = strcmp(v10, v11);
      v13 = nb;
      if ( !v12 )
        goto LABEL_9;
      v14 = v41;
      v15 = (void *)v2[13];
      n = (size_t)(v2 + 13);
      v2[14] = v9;
      v16 = v2[15];
      v2[13] = v8;
      v2[15] = v14;
      v18 = a2[2];
      v17 = a2[1];
      v40 = v13;
      v41 = v16;
      ptr = v15;
      if ( v17 + 1 > v18 )
      {
        v23 = sub_77EB0((int)a2, nullptr, v17 + 1, 0x10u);
        v24 = *(_QWORD *)(a2 + 1);
        v19 = v23;
        a2[2] = v18;
        v25 = (_DWORD *)*a2;
        v26 = v24 - 1;
        srca = (void *)HIDWORD(v24);
        if ( v26 >= 0 )
        {
          v37 = v2;
          v27 = v26;
          v38 = v4;
          v28 = v23;
          do
          {
            *v28 = *v25;
            v28[1] = v25[1];
            v29 = v25[2];
            v25[1] = 0;
            v28[2] = v29;
            v30 = v25[3];
            v25[2] = 0;
            v28[3] = v30;
            v31 = (void *)v25[1];
            v25[3] = 0;
            if ( v31 )
            {
              v25[2] = 0;
              sub_77E08(v31);
            }
            --v27;
            v25 += 4;
            v28 += 4;
          }
          while ( v27 != -1 );
          v2 = v37;
          v4 = v38;
          v25 = (_DWORD *)*a2;
        }
        sub_77E08(v25);
        v17 = a2[1];
        *a2 = v19;
        a2[2] = srca;
      }
      else
      {
        v19 = (_DWORD *)*a2;
      }
      v20 = &v19[4 * v17];
      v20[1] = 0;
      v20[2] = 0;
      v20[3] = 0;
      ++a2[1];
      *v20 = v2[5];
      if ( (_DWORD *)n == v20 + 1 )
        goto LABEL_23;
      v21 = v2[14];
      if ( v21 )
      {
        na = v21 - 1;
        if ( v21 != 1 )
          break;
      }
      v8 = ptr;
      v20[2] = 0;
LABEL_9:
      if ( v8 )
      {
        v40 = 0;
        sub_77E08(v8);
      }
      result = sub_81290((int)v2);
      v2 = (_DWORD *)result;
      if ( v3 == result )
        return result;
    }
    v22 = (void *)v20[1];
    src = (void *)v2[13];
    if ( v21 > v20[3] )
    {
      v22 = sub_77EB0((int)(v20 + 1), v22, v21, 1u);
      v20[1] = v22;
    }
    v20[2] = v21;
    memmove(v22, src, na);
    *(_BYTE *)(v20[1] + na) = 0;
LABEL_23:
    v8 = ptr;
    goto LABEL_9;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
