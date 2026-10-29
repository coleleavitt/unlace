/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C4280
// Address: 0x080C4280

//----- (080C4280) --------------------------------------------------------
bool __cdecl sub_80C4280(void **a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // edi
  bool result; // al
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  unsigned int v9; // edx
  int v10; // ecx
  void *v11; // eax
  _BYTE *v12; // esi
  int i; // edx
  _BYTE *v14; // esi
  unsigned int v15; // edi
  int v16; // ecx
  void *v17; // eax
  _BYTE *v18; // esi
  char v19; // dl
  unsigned int v20; // edi
  int v21; // ecx
  void *v22; // eax
  char v23; // [esp+0h] [ebp-38h]
  int v24; // [esp+0h] [ebp-38h]
  char v25; // [esp+0h] [ebp-38h]
  unsigned int v26; // [esp+4h] [ebp-34h]
  int v27; // [esp+4h] [ebp-34h]
  int v28; // [esp+4h] [ebp-34h]
  unsigned int v29; // [esp+Ch] [ebp-2Ch]
  int v30; // [esp+10h] [ebp-28h]
  unsigned __int8 *v31; // [esp+14h] [ebp-24h]
  int v32; // [esp+18h] [ebp-20h]
  unsigned __int8 *v33; // [esp+40h] [ebp+8h]

  v3 = a2;
  result = a1 == nullptr || a2 == nullptr;
  if ( result )
    return 0;
  if ( a3 >= 0 )
  {
    v5 = a3 / 3u + (((2863311531u * (unsigned __int64)(unsigned int)a3) >> 32) & 0xFFFFFFFE);
    if ( a3 == v5 )
    {
      v32 = 0;
      if ( !a3 )
        return 1;
    }
    else
    {
      v32 = 3 - (a3 - v5);
    }
    v26 = 0;
    v6 = 0;
    v31 = &a2[a3];
    while ( 1 )
    {
      v7 = *v3;
      v6 += 8;
      ++v3;
      v26 = (v26 << 8) | v7;
      if ( v6 <= 6 )
        goto LABEL_14;
      v33 = v3;
      v8 = v6;
      do
      {
        v8 -= 6;
        v12 = a1[1];
        v23 = aAbcdefghijklmn[(v26 >> v8) & 0x3F];
        if ( v12 )
        {
          v9 = (unsigned int)(v12 + 1);
          v10 = (int)a1[1];
          v11 = *a1;
          --v12;
          if ( (unsigned int)a1[2] >= v9 )
            goto LABEL_9;
        }
        else
        {
          v11 = *a1;
          v10 = 1;
          v9 = 2;
          if ( (unsigned int)a1[2] >= 2 )
            goto LABEL_9;
        }
        v30 = v10;
        v29 = v9;
        v11 = sub_80CF920((int)a1, v11, v9, 1u);
        v10 = v30;
        v9 = v29;
        *a1 = v11;
LABEL_9:
        a1[1] = (void *)v9;
        v12[(_DWORD)v11] = v23;
        *((_BYTE *)*a1 + v10) = 0;
      }
      while ( v8 > 6 );
      v6 = v8;
      v3 = v33;
LABEL_14:
      if ( v31 == v3 )
      {
        if ( v6 )
        {
          v18 = a1[1];
          v19 = aAbcdefghijklmn[(v26 << (6 - v6)) & 0x3F];
          if ( v18 )
          {
            v20 = (unsigned int)(v18 + 1);
            v21 = (int)a1[1];
            --v18;
          }
          else
          {
            v21 = 1;
            v20 = 2;
          }
          v22 = *a1;
          if ( (unsigned int)a1[2] < v20 )
          {
            v28 = v21;
            v25 = v19;
            v22 = sub_80CF920((int)a1, v22, v20, 1u);
            v21 = v28;
            v19 = v25;
            *a1 = v22;
          }
          a1[1] = (void *)v20;
          v18[(_DWORD)v22] = v19;
          *((_BYTE *)*a1 + v21) = 0;
        }
        if ( v32 )
        {
          for ( i = 0; i != v32; ++i )
          {
            v14 = a1[1];
            if ( v14 )
            {
              v15 = (unsigned int)(v14 + 1);
              v16 = (int)a1[1];
              v17 = *a1;
              --v14;
              if ( (unsigned int)a1[2] < v15 )
                goto LABEL_24;
            }
            else
            {
              v17 = *a1;
              v16 = 1;
              v15 = 2;
              if ( (unsigned int)a1[2] < 2 )
              {
LABEL_24:
                v27 = i;
                v24 = v16;
                v17 = sub_80CF920((int)a1, v17, v15, 1u);
                i = v27;
                v16 = v24;
                *a1 = v17;
              }
            }
            a1[1] = (void *)v15;
            v14[(_DWORD)v17] = 61;
            *((_BYTE *)*a1 + v16) = 0;
          }
        }
        return 1;
      }
    }
  }
  return result;
}
