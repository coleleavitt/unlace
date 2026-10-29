/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95368
// Address: 0x0000000000095368

//----- (0000000000095368) ----------------------------------------------------
bool __fastcall sub_95368(__int64 *a1)
{
  __int64 v1; // x8
  const char *v3; // x21
  _BOOL4 v4; // w20
  _QWORD *v5; // x0
  void *v6; // x19
  __int64 v7; // x8
  pthread_mutex_t *v8; // x0
  char *align; // x0
  char *v10; // x8
  int v11; // w8
  bool v12; // w8
  unsigned int v13; // w9
  void *ptr; // [xsp+0h] [xbp-2E0h] BYREF
  __int64 v16; // [xsp+8h] [xbp-2D8h]
  __int64 v17; // [xsp+10h] [xbp-2D0h]
  _QWORD v18[3]; // [xsp+18h] [xbp-2C8h] BYREF
  char v19; // [xsp+30h] [xbp-2B0h]
  _UNKNOWN **v20; // [xsp+38h] [xbp-2A8h] BYREF
  void *v21; // [xsp+40h] [xbp-2A0h]
  __int64 v22; // [xsp+48h] [xbp-298h]
  __int64 v23; // [xsp+50h] [xbp-290h]
  int v24; // [xsp+80h] [xbp-260h]
  unsigned __int16 v25; // [xsp+84h] [xbp-25Ch]
  unsigned __int16 v26; // [xsp+86h] [xbp-25Ah]
  unsigned int v27; // [xsp+8Ch] [xbp-254h]
  int v28; // [xsp+90h] [xbp-250h]
  unsigned __int16 v29; // [xsp+94h] [xbp-24Ch]
  unsigned __int16 v30; // [xsp+96h] [xbp-24Ah]
  __int64 v31; // [xsp+288h] [xbp-58h]
  __int64 v32; // [xsp+298h] [xbp-48h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = *a1;
  if ( *a1 && *(_DWORD *)(v1 + 8) == 1 )
  {
    if ( *(_QWORD *)(v1 + 24) )
      v3 = *(const char **)(v1 + 16);
    else
      v3 = &byte_F154B;
    v5 = open_linput(v3, 0);
    if ( v5 )
    {
      v6 = v5;
      v20 = &off_15DF48;
      v21 = nullptr;
      v22 = 0;
      v23 = 0;
      if ( (sub_8B428((__int64)&v20, (__int64)v5, 1, 1) & 1) != 0 )
      {
        v7 = a1[14];
        v8 = (pthread_mutex_t *)(a1 + 13);
        if ( a1[15] >= (unsigned __int64)(v7 + 1) )
        {
          align = (char *)v8->__align;
        }
        else
        {
          align = (char *)qvector_reserve(v8, (void *)v8->__align, v7 + 1, 0x78u);
          v7 = a1[14];
          a1[13] = (__int64)align;
        }
        v10 = &align[120 * v7];
        *((_QWORD *)v10 + 4) = 0;
        *((_QWORD *)v10 + 5) = 0;
        *((_QWORD *)v10 + 2) = 0;
        *((_QWORD *)v10 + 3) = 0;
        *((_QWORD *)v10 + 13) = 0;
        *((_QWORD *)v10 + 14) = 0;
        *((_QWORD *)v10 + 11) = 0;
        *((_QWORD *)v10 + 12) = 0;
        *((_QWORD *)v10 + 9) = 0;
        *((_QWORD *)v10 + 10) = 0;
        *((_QWORD *)v10 + 7) = 0;
        *((_QWORD *)v10 + 8) = 0;
        *((_QWORD *)v10 + 6) = 0;
        *(_QWORD *)v10 = 0;
        *((_QWORD *)v10 + 1) = 0;
        ++a1[14];
        ptr = nullptr;
        v16 = 0;
        v17 = 0;
        if ( v27 )
          sub_965AC((__int64)&ptr, (__int64)v6, (unsigned int)(18 * v28) + (unsigned __int64)v27, 0);
        v18[0] = off_15DF70;
        v18[1] = a1;
        v18[2] = &ptr;
        v19 = 0;
        if ( v24 == 23126 )
          v11 = v31 + 40;
        else
          v11 = v31 + v29 + 24;
        sub_969F8((__int64)&v20, (__int64)v6, v11, v26, (__int64)v18);
        v12 = 1;
        if ( v25 != 512 && v25 != 34404 )
          v12 = v25 == 43620;
        v13 = v30;
        *((_BYTE *)a1 + 168) = v12;
        *((_BYTE *)a1 + 169) = v13 >> 15;
        v4 = v19 != 0;
        if ( ptr )
        {
          v16 = 0;
          qfree(ptr);
          ptr = nullptr;
          v17 = 0;
        }
      }
      else
      {
        sub_39FA0((__int64)"Failed to read PE header from: %s\n", v3);
        v4 = 0;
      }
      v20 = &off_15DF48;
      if ( v21 )
      {
        v22 = 0;
        qfree(v21);
        v21 = nullptr;
        v23 = 0;
      }
      close_linput(v6);
    }
    else
    {
      sub_39FA0((__int64)"Cannot open file: %s.\n", v3);
      return 0;
    }
  }
  else
  {
    sub_39FA0((__int64)"Input source is not local file.\n");
    return 0;
  }
  return v4;
}
// F154B: using guessed type char byte_F154B;
// 15DF48: using guessed type _UNKNOWN *off_15DF48;
// 15DF70: using guessed type __int64 (__fastcall *off_15DF70[3])();
