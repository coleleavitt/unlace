/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F530
// Address: 0x0005F530

//----- (0005F530) --------------------------------------------------------
int __fastcall sub_5F530(int a1, int *a2, const char **a3, int a4)
{
  int v4; // r5
  int v6; // r1
  char *v7; // r6
  signed int v8; // r7
  int v9; // r4
  unsigned int v10; // r7
  __int64 v11; // r2
  _BYTE *v12; // r0
  _BYTE *v13; // r0
  char *v14; // r5
  const char *v15; // r4
  int v16; // r0
  int v17; // r2
  int v18; // r1
  _BYTE *v19; // r0
  size_t v20; // r0
  _BYTE *v21; // r0
  int v22; // r7
  int v24; // [sp+8h] [bp-44h]
  int v25; // [sp+10h] [bp-3Ch]
  int v26; // [sp+14h] [bp-38h]
  signed int v27; // [sp+1Ch] [bp-30h]
  signed int v28; // [sp+1Ch] [bp-30h]
  int *v29; // [sp+20h] [bp-2Ch]
  void *v31; // [sp+28h] [bp-24h] BYREF
  unsigned int v32; // [sp+2Ch] [bp-20h]
  int v33; // [sp+30h] [bp-1Ch]
  _BYTE v34[5]; // [sp+34h] [bp-18h] BYREF
  _BYTE v35[3]; // [sp+39h] [bp-13h] BYREF
  void *v36[2]; // [sp+3Ch] [bp-10h] BYREF
  int v37; // [sp+44h] [bp-8h] BYREF

  v4 = 0;
  v25 = a4;
  if ( a4 )
  {
    v32 = 0;
    v31 = nullptr;
    v33 = 0;
    v24 = a1 + 100;
    while ( v25 >= 1 )
    {
      v6 = 0;
      v32 = 0;
      v7 = &byte_A0742;
      v8 = 0;
      do
      {
        if ( v8 >= v25 )
          break;
        v27 = v8;
        v29 = a2;
        v9 = *a2 - v6;
        v10 = 0;
        v11 = ((v9 + (v9 >> 31)) ^ (v9 >> 31)) + 1LL;
        v12 = pack_dq(v36, (unsigned int)&v37 + 2, v11, HIDWORD(v11));
        ((void (__fastcall *)(void **, void **, int))loc_30B84)(&v31, v36, v12 - (_BYTE *)v36);
        v13 = pack_dd(v34, (unsigned int)v35, (unsigned int)v9 >> 31);
        ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&v31, v34, v13 - v34);
        v26 = *v29;
        v14 = (char *)*a3;
        if ( **a3 )
        {
          v15 = *a3;
          if ( *(unsigned __int8 *)*a3 == (unsigned __int8)*v7 )
          {
            v16 = 1;
            do
            {
              v10 = v16;
              v17 = (unsigned __int8)v14[v16];
              if ( !v14[v16] )
                break;
              v18 = (unsigned __int8)v7[v16++];
            }
            while ( v17 == v18 );
            v15 = &v14[v10];
          }
        }
        else
        {
          v15 = *a3;
        }
        v19 = pack_dd(v34, (unsigned int)v35, v10);
        ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&v31, v34, v19 - v34);
        if ( !v15 )
          v15 = &byte_A0742;
        v20 = strlen(v15);
        ((void (__fastcall *)(void **, const char *, size_t))loc_30B84)(&v31, v15, v20 + 1);
        v8 = v27 + 1;
        ++a3;
        a2 = v29 + 1;
        v7 = v14;
        v6 = v26;
      }
      while ( v32 < 0x100001 );
      v25 -= v8;
      sub_6DA58((int)v36, 50);
      v28 = v8;
      v21 = pack_dd(v34, (unsigned int)v35, v8);
      ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(v36, v34, v21 - v34);
      ((void (__fastcall *)(void **, void *, unsigned int))loc_30B84)(v36, v31, v32);
      v22 = sub_680B0(v24, (int)v36, -1, 0);
      if ( v36[0] )
      {
        v36[1] = nullptr;
        qfree(v36[0]);
        v37 = 0;
        v36[0] = nullptr;
      }
      v4 = 1;
      if ( v28 != v22 )
        goto LABEL_20;
    }
    v4 = 0;
LABEL_20:
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
      v33 = 0;
      v31 = nullptr;
    }
  }
  return v4;
}
// A0742: using guessed type char byte_A0742;
