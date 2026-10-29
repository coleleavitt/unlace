/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467620
// Address: 0x0000000000467620

//----- (0000000000467620) ----------------------------------------------------
__int64 __fastcall sub_467620(__int64 *a1)
{
  void *v2; // x1
  __int64 v3; // x0
  unsigned int v4; // w21
  const char *v6; // x24
  void **v7; // x0
  void **v8; // x22
  char *v9; // x0
  __int64 v10; // x3
  char *v11; // x0
  unsigned int v12; // w2
  __int64 v13; // x0
  __off64_t v14; // x2
  void *v15; // x0
  bool v16; // zf
  bool v17; // zf
  char v18; // w1
  void *v19; // [xsp+40h] [xbp-2A0h] BYREF
  __int64 v20; // [xsp+48h] [xbp-298h]
  __int64 v21; // [xsp+50h] [xbp-290h]
  _QWORD v22[3]; // [xsp+58h] [xbp-288h] BYREF
  unsigned __int8 v23; // [xsp+70h] [xbp-270h]
  __int64 (__fastcall **v24)(); // [xsp+78h] [xbp-268h] BYREF
  void *ptr; // [xsp+80h] [xbp-260h]
  __int64 v26; // [xsp+88h] [xbp-258h]
  __int64 v27; // [xsp+90h] [xbp-250h]
  int v28; // [xsp+C0h] [xbp-220h]
  unsigned __int16 v29; // [xsp+C4h] [xbp-21Ch]
  unsigned __int16 v30; // [xsp+C6h] [xbp-21Ah]
  unsigned int v31; // [xsp+CCh] [xbp-214h]
  int v32; // [xsp+D0h] [xbp-210h]
  unsigned __int16 v33; // [xsp+D4h] [xbp-20Ch]
  unsigned __int16 v34; // [xsp+D6h] [xbp-20Ah]
  __int64 v35; // [xsp+2C8h] [xbp-18h]

  v2 = &_stack_chk_guard;
  v3 = *a1;
  if ( v3 && (v2 = (void *)*(unsigned int *)(v3 + 8), (_DWORD)v2 == 1) )
  {
    if ( *(_QWORD *)(v3 + 24) )
      v6 = *(const char **)(v3 + 16);
    else
      v6 = (const char *)&qword_4B2D48;
    v7 = (void **)sub_48BF60(v6, 0);
    v8 = v7;
    if ( v7 )
    {
      v24 = off_51ACC0;
      ptr = nullptr;
      v26 = 0;
      v27 = 0;
      v4 = sub_4637F0((__int64)&v24, (__int64)v7, 1u, 1u);
      if ( v4 )
      {
        v9 = (char *)a1[13];
        v10 = a1[14];
        if ( v10 + 1 > (unsigned __int64)a1[15] )
        {
          v9 = (char *)sub_491288((__int64)(a1 + 13), (void *)a1[13], v10 + 1, 0x78u);
          a1[13] = (__int64)v9;
          v10 = a1[14];
        }
        v11 = &v9[120 * v10];
        *(_QWORD *)v11 = 0;
        *((_QWORD *)v11 + 1) = 0;
        *((_QWORD *)v11 + 2) = 0;
        *((_QWORD *)v11 + 3) = 0;
        *((_QWORD *)v11 + 4) = 0;
        *((_QWORD *)v11 + 5) = 0;
        *((_QWORD *)v11 + 6) = 0;
        *((_QWORD *)v11 + 7) = 0;
        *((_QWORD *)v11 + 8) = 0;
        *((_QWORD *)v11 + 9) = 0;
        *((_QWORD *)v11 + 10) = 0;
        *((_QWORD *)v11 + 11) = 0;
        *((_QWORD *)v11 + 12) = 0;
        *((_QWORD *)v11 + 13) = 0;
        *((_QWORD *)v11 + 14) = 0;
        v12 = v31;
        v13 = a1[14];
        v19 = nullptr;
        v20 = 0;
        v21 = 0;
        a1[14] = v13 + 1;
        if ( v12 )
          sub_4674D8((__int64)&v19, (__int64)v8, (unsigned int)(18 * v32) + (unsigned __int64)v12, 0);
        v22[0] = off_51AEF0;
        v22[1] = a1;
        v22[2] = &v19;
        v23 = 0;
        if ( v28 == 23126 )
          v14 = (int)v35 + 40;
        else
          v14 = v33 + (int)v35 + 24;
        sub_463CE0((__int64)&v24, (__int64)v8, v14, v30, (__int64)v22);
        v15 = v19;
        v16 = v29 == 512 || v29 == 34404;
        v4 = v23;
        v17 = v16 || v29 == 43620;
        *((_BYTE *)a1 + 169) = v34 >> 15;
        v18 = v17;
        *((_BYTE *)a1 + 168) = v18;
        if ( v15 )
        {
          v20 = 0;
          j__free(v15);
        }
      }
      else
      {
        sub_40A690((int)"Failed to read PE header from: %s\n", v6);
      }
      v24 = off_51ACC0;
      if ( ptr )
      {
        v26 = 0;
        j__free(ptr);
      }
      sub_48C0F8(v8);
    }
    else
    {
      v4 = 0;
      sub_40A690((int)"Cannot open file: %s.\n", v6);
    }
  }
  else
  {
    v4 = 0;
    sub_40A690((int)"Input source is not local file.\n", v2, 0);
  }
  return v4;
}
// 467620: could not find valid save-restore pair for x22
// 467620: could not find valid save-restore pair for x24
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 51ACC0: using guessed type __int64 (__fastcall *off_51ACC0[3])();
// 51AEF0: using guessed type __int64 (__fastcall *off_51AEF0[4])();
