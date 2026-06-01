/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003307C
// Address: 0x000000010003307C

//----- (000000010003307C) ----------------------------------------------------
void __fastcall sub_10003307C(__int64 a1, unsigned __int8 *a2)
{
  int v2; // w8
  int v4; // w23
  __int64 v6; // x21
  unsigned int v7; // w21
  int v8; // w24
  _QWORD *v9; // x1
  __int64 v10; // x8
  int v11; // w8
  _QWORD v12[3]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v13; // [xsp+18h] [xbp-B8h] BYREF
  int v14; // [xsp+20h] [xbp-B0h]
  _QWORD *v15; // [xsp+48h] [xbp-88h] BYREF
  __int64 v16; // [xsp+50h] [xbp-80h]
  unsigned __int64 v17; // [xsp+58h] [xbp-78h]

  v2 = *(_DWORD *)(a1 + 24) - 1;
  *(_DWORD *)(a1 + 24) = v2;
  if ( !v2 )
  {
    v4 = *(_DWORD *)(a1 + 28);
    if ( v4 )
    {
      do
      {
        while ( 1 )
        {
          v6 = sub_10002F0C0(v4);
          v4 = *(_DWORD *)(v6 + 24);
          if ( *(_DWORD *)(v6 + 64) == -1 )
            break;
          *(_DWORD *)(a1 + 24) += 32;
          sub_100038FB0((__int64)v12, 0, 1);
          v7 = *(_DWORD *)(v6 + 64);
          v8 = v14;
          v9 = v15;
          v10 = v16;
          if ( v17 < v16 + 1 )
          {
            v9 = qvector_reserve(&v15, v15, v16 + 1, 4u);
            v15 = v9;
            v10 = v16;
          }
          *((_DWORD *)v9 + v10) = v8;
          ++v16;
          sub_10002B5D4(&v13, a2);
          sub_100037FE0(v12, nullptr, nullptr, v7);
          sub_100039190((__int64)v12);
          v11 = *(_DWORD *)(a1 + 24) - 32;
          *(_DWORD *)(a1 + 24) = v11;
          if ( v11 || !v4 )
          {
            if ( v11 )
              return;
            goto LABEL_11;
          }
        }
      }
      while ( v4 );
      if ( *(_DWORD *)(a1 + 24) )
        return;
    }
LABEL_11:
    sub_100030EE0(a1, *(unsigned __int8 **)(a1 + 8));
    operator delete((void *)a1);
  }
}
