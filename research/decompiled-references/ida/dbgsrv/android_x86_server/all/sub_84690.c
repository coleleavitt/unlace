/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84690
// Address: 0x00084690

//----- (00084690) --------------------------------------------------------
int __cdecl sub_84690(int a1, int *a2, char **a3, int a4)
{
  int v4; // edi
  int v5; // edx
  char *v6; // esi
  signed int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  char *v12; // edi
  char v13; // al
  unsigned int v14; // ecx
  bool v15; // zf
  char *v16; // eax
  int v17; // eax
  char v18; // dl
  char *v19; // esi
  _BYTE *v20; // eax
  char *v21; // eax
  char *v22; // esi
  size_t v23; // eax
  _BYTE *v24; // eax
  int v25; // esi
  int v26; // esi
  signed int v28; // [esp+4h] [ebp-58h]
  unsigned int v29; // [esp+4h] [ebp-58h]
  int v32; // [esp+18h] [ebp-44h]
  int v33; // [esp+1Ch] [ebp-40h]
  int v34; // [esp+20h] [ebp-3Ch] BYREF
  size_t v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  _BYTE v37[5]; // [esp+33h] [ebp-29h] BYREF
  void *src[2]; // [esp+38h] [ebp-24h] BYREF
  _DWORD v39[7]; // [esp+40h] [ebp-1Ch] BYREF

  v4 = a4;
  v39[2] = __readgsdword(0x14u);
  if ( !a4 )
    return 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  while ( v4 > 0 )
  {
    v35 = 0;
    v5 = 0;
    v6 = &byte_DCEE2;
    v7 = 0;
    v32 = v4;
    do
    {
      if ( v7 >= v4 )
        break;
      v28 = v7;
      v8 = *a2 - v5;
      v9 = v5 - *a2;
      if ( v9 < 1 )
        v9 = *a2 - v5;
      v10 = pack_dq(src, (unsigned int)v39 + 2, v9 + 1, (unsigned __int64)(v9 + 1LL) >> 32);
      sub_3A950(&v34, src, v10 - (_BYTE *)src);
      v11 = pack_dd(v37, (unsigned int)src, v8 >> 31);
      sub_3A950(&v34, v37, v11 - v37);
      v33 = *a2;
      v12 = *a3;
      v13 = **a3;
      v14 = 0;
      if ( v13 )
      {
        v15 = v13 == *v6;
        v16 = *a3;
        if ( v15 )
        {
          v17 = 1;
          do
          {
            v14 = v17;
            v18 = v12[v17];
            if ( !v18 )
              break;
            ++v17;
          }
          while ( v18 == v6[v14] );
          v16 = &v12[v14];
        }
      }
      else
      {
        v16 = *a3;
      }
      v19 = v16;
      v20 = pack_dd(v37, (unsigned int)src, v14);
      sub_3A950(&v34, v37, v20 - v37);
      v21 = v19;
      v15 = v19 == nullptr;
      v22 = &byte_DCEE2;
      if ( !v15 )
        v22 = v21;
      v23 = strlen(v22);
      sub_3A950(&v34, v22, v23 + 1);
      ++a2;
      ++a3;
      v7 = v28 + 1;
      v6 = v12;
      v4 = v32;
      v5 = v33;
    }
    while ( v35 < (unsigned int)byte_100001 );
    v29 = v7;
    sub_96B40((int)src, 50);
    v24 = pack_dd(v37, (unsigned int)src, v29);
    sub_3A950(src, v37, v24 - v37);
    sub_3A950(src, (void *)v34, v35);
    v25 = sub_8FC90(a1 + 100, (int)src, -1, 0);
    if ( src[0] )
    {
      src[1] = nullptr;
      qfree(src[0]);
      src[0] = nullptr;
      v39[0] = 0;
    }
    v4 -= v29;
    if ( v29 != v25 )
    {
      v26 = 1;
      goto LABEL_24;
    }
  }
  v26 = 0;
LABEL_24:
  if ( v34 )
  {
    v35 = 0;
    qfree((void *)v34);
    v34 = 0;
    v36 = 0;
  }
  return v26;
}
// DCEE2: using guessed type char byte_DCEE2;
