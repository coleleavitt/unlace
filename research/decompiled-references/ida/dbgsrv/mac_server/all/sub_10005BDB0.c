/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BDB0
// Address: 0x000000010005BDB0

//----- (000000010005BDB0) ----------------------------------------------------
__int64 __fastcall sub_10005BDB0(__int64 *a1)
{
  __int64 v1; // rax
  const char *v2; // r14
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // al
  int v10; // ecx
  __int128 v12; // [rsp+0h] [rbp-2D0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-2C0h]
  void **p_p; // [rsp+20h] [rbp-2B0h]
  void *__p; // [rsp+28h] [rbp-2A8h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-2A0h] BYREF
  unsigned __int8 v17; // [rsp+48h] [rbp-288h]
  __int64 (__fastcall **v18)(); // [rsp+50h] [rbp-280h] BYREF
  __int128 v19; // [rsp+58h] [rbp-278h]
  __int64 v20; // [rsp+68h] [rbp-268h]
  int v21; // [rsp+98h] [rbp-238h]
  unsigned __int16 v22; // [rsp+9Ch] [rbp-234h]
  unsigned __int16 v23; // [rsp+9Eh] [rbp-232h]
  unsigned int v24; // [rsp+A4h] [rbp-22Ch]
  int v25; // [rsp+A8h] [rbp-228h]
  unsigned __int16 v26; // [rsp+ACh] [rbp-224h]
  unsigned __int16 v27; // [rsp+AEh] [rbp-222h]
  int v28; // [rsp+2A0h] [rbp-30h]

  v1 = *a1;
  if ( *a1 && *(_DWORD *)(v1 + 8) == 1 )
  {
    if ( *(_QWORD *)(v1 + 24) )
      v2 = *(const char **)(v1 + 16);
    else
      v2 = _s1;
    v4 = open_linput(v2, 0);
    __p = v4;
    if ( v4 )
    {
      p_p = &__p;
      v18 = off_1000A9718;
      v19 = 0;
      v20 = 0;
      if ( (unsigned __int8)sub_100052E40((__int64)&v18, (__int64)v4, 1u, 1) )
      {
        v5 = (char *)a1[13];
        v6 = a1[14];
        if ( a1[15] < (unsigned __int64)(v6 + 1) )
        {
          v5 = (char *)qvector_reserve((__int64)(a1 + 13), v5, v6 + 1, 0x78u);
          a1[13] = (__int64)v5;
          v6 = a1[14];
        }
        v7 = 120 * v6;
        *(_OWORD *)&v5[v7 + 96] = 0;
        *(_OWORD *)&v5[v7 + 80] = 0;
        *(_OWORD *)&v5[v7 + 64] = 0;
        *(_OWORD *)&v5[v7 + 48] = 0;
        *(_OWORD *)&v5[v7 + 32] = 0;
        *(_OWORD *)&v5[v7 + 16] = 0;
        *(_OWORD *)&v5[v7] = 0;
        *(_QWORD *)&v5[v7 + 112] = 0;
        ++a1[14];
        v12 = 0;
        v13 = 0;
        if ( v24 )
          sub_10005D380((__int64)&v12, (__int64)__p, v24 + (unsigned __int64)(unsigned int)(18 * v25), 0);
        v16[0] = off_1000A9740;
        v16[1] = a1;
        v16[2] = &v12;
        v17 = 0;
        v8 = v28 + v26 + 24;
        if ( v21 == 23126 )
          v8 = v28 + 40;
        sub_10005D7E0((__int64)&v18, (__int64)__p, v8, v23, (__int64)v16);
        v9 = 1;
        if ( v22 != 512 && v22 != 34404 )
          v9 = v22 == 43620;
        v10 = v27 >> 15;
        *((_BYTE *)a1 + 168) = v9;
        *((_BYTE *)a1 + 169) = v10;
        v3 = v17;
        if ( (_QWORD)v12 )
        {
          *((_QWORD *)&v12 + 1) = 0;
          qfree((void *)v12);
        }
      }
      else
      {
        v3 = 0;
        sub_100000AE0((int)"Failed to read PE header from: %s\n", v2);
      }
      v18 = off_1000A9718;
      if ( (_QWORD)v19 )
      {
        *((_QWORD *)&v19 + 1) = 0;
        qfree((void *)v19);
      }
      close_linput(__p);
    }
    else
    {
      v3 = 0;
      sub_100000AE0((int)"Cannot open file: %s.\n", v2);
    }
  }
  else
  {
    v3 = 0;
    sub_100000AE0((int)"Input source is not local file.\n");
  }
  return v3;
}
// 1000A9718: using guessed type __int64 (__fastcall *off_1000A9718[2])();
// 1000A9740: using guessed type __int64 (__fastcall *off_1000A9740[4])();
