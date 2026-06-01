/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4286B8
// Address: 0x00000000004286B8

//----- (00000000004286B8) ----------------------------------------------------
__int64 __fastcall sub_4286B8(__int64 a1)
{
  unsigned int v1; // w24
  char *v2; // x0
  __int64 v3; // x22
  __int64 v4; // x21
  __int64 v5; // x20
  char *v6; // x19
  void *v7; // x0
  void *v8; // x0
  _BYTE v10[32]; // [xsp+48h] [xbp-278h] BYREF
  void *v11; // [xsp+68h] [xbp-258h]
  __int64 v12; // [xsp+70h] [xbp-250h]
  void *v13; // [xsp+B8h] [xbp-208h]
  __int64 v14; // [xsp+C0h] [xbp-200h]
  void *v15; // [xsp+168h] [xbp-158h]
  __int64 v16; // [xsp+170h] [xbp-150h]
  __int64 (*v17)(); // [xsp+238h] [xbp-88h]
  void *ptr; // [xsp+288h] [xbp-38h]
  __int64 v19; // [xsp+290h] [xbp-30h]
  __int64 v20; // [xsp+2A0h] [xbp-20h]

  sub_428560((__int64)v10, a1, 0);
  v17 = sub_417F78;
  v1 = sub_420B70((__int64)v10);
  if ( v1 )
    v1 = (unsigned __int8)sub_4210E8((__int64)v10);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  if ( ptr )
  {
    v19 = 0;
    j__free(ptr);
  }
  v2 = (char *)v15;
  if ( v15 )
  {
    v3 = v16;
    if ( v16 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          j__free(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v8);
        }
        ++v5;
        v4 += 96;
        v2 = (char *)v15;
      }
      while ( v3 != v5 );
    }
    v16 = 0;
    j__free(v2);
  }
  if ( v13 )
  {
    v14 = 0;
    j__free(v13);
  }
  if ( v11 )
  {
    v12 = 0;
    j__free(v11);
  }
  return v1;
}
