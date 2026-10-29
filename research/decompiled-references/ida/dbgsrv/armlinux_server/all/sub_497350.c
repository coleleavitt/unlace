/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_497350
// Address: 0x0000000000497350

//----- (0000000000497350) ----------------------------------------------------
__int64 __fastcall sub_497350(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // w22
  int v6; // w0
  char v7; // w0
  __int64 v8; // x2
  _BYTE *v9; // x0
  __int64 v10; // x21
  unsigned __int64 v11; // x21
  _BYTE *v12; // x0
  char *v13; // x20
  char *v14; // x23
  __int64 v15; // x2
  _BYTE *v16; // x0
  char *v17; // x1
  unsigned __int64 v18; // x2
  unsigned __int64 v19; // x20
  void *v20; // [xsp+30h] [xbp-40h] BYREF
  unsigned __int64 v21; // [xsp+38h] [xbp-38h]
  unsigned __int64 v22; // [xsp+40h] [xbp-30h]
  void *ptr; // [xsp+48h] [xbp-28h] BYREF
  __int64 v24; // [xsp+50h] [xbp-20h]
  __int64 v25; // [xsp+58h] [xbp-18h]
  int v26; // [xsp+60h] [xbp-10h]
  char v27; // [xsp+64h] [xbp-Ch]

  if ( a1 )
  {
    v4 = 0;
    if ( *a2 < a2[1] )
    {
      v6 = *(_DWORD *)(a1 + 32);
      ptr = nullptr;
      v24 = 0;
      v25 = 0;
      v26 = v6;
      if ( v6 == -1 )
        v7 = 0;
      else
        v7 = sub_47DBD8();
      v27 = v7;
      v4 = (unsigned __int8)sub_496458((void **)a1, a2, (__int64)&ptr);
      if ( v4 )
      {
        if ( v27 )
        {
          v8 = v24;
          if ( v24 )
          {
            v20 = nullptr;
            v21 = 0;
            v22 = 0;
            v9 = nullptr;
            v10 = 21 * v24 + 10;
            if ( 21 * v24 != -10 )
            {
              v20 = sub_491288((__int64)&v20, nullptr, 21 * v24 + 10, 1u);
              memset((char *)v20 + v21, 0, v10 - v21);
              v21 = v10;
              v9 = v20;
              v8 = v24;
            }
            v11 = (unsigned __int64)&v9[v10];
            v12 = sub_48E4D8(v9, v11, v8);
            v13 = (char *)ptr;
            v14 = (char *)ptr + 24 * v24;
            if ( ptr != v14 )
            {
              v15 = 0;
              do
              {
                if ( (unsigned __int64)v12 < v11 )
                  *v12++ = v13[16];
                v16 = sub_48E4D8(v12, v11, *(_QWORD *)v13 - v15);
                v12 = sub_48E4D8(v16, v11, *((_QWORD *)v13 + 1) - *(_QWORD *)v13);
                v15 = *((_QWORD *)v13 + 1);
                v13 += 24;
              }
              while ( v14 != v13 );
            }
            v17 = (char *)v20;
            v18 = v21;
            v19 = v12 - (_BYTE *)v20;
            if ( v12 - (_BYTE *)v20 > v21 )
            {
              if ( v19 > v22 )
              {
                v17 = (char *)sub_491288((__int64)&v20, v20, v19, 1u);
                v18 = v21;
                v20 = v17;
              }
              memset(&v17[v18], 0, v19 - v18);
              v21 = v19;
            }
            else if ( v12 - (_BYTE *)v20 < v21 )
            {
              v21 = v12 - (_BYTE *)v20;
            }
            sub_47DBC8();
            v24 = 0;
            if ( v20 )
            {
              v21 = 0;
              j__free(v20);
            }
          }
        }
      }
      if ( ptr )
      {
        v24 = 0;
        j__free(ptr);
      }
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
