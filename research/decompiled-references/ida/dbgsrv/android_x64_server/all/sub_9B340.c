/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B340
// Address: 0x000000000009B340

//----- (000000000009B340) ----------------------------------------------------
__int64 __fastcall sub_9B340(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  const char *v3; // r15
  _QWORD *v4; // rax
  void *v5; // r14
  char **v6; // rdi
  __int64 v7; // rcx
  char *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // al
  int v12; // ecx
  void *ptr[2]; // [rsp+0h] [rbp-2C8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-2B8h]
  _QWORD v16[3]; // [rsp+20h] [rbp-2A8h] BYREF
  char v17; // [rsp+38h] [rbp-290h]
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-288h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-280h]
  __int64 v20; // [rsp+58h] [rbp-270h]
  int v21; // [rsp+88h] [rbp-240h]
  unsigned __int16 v22; // [rsp+8Ch] [rbp-23Ch]
  unsigned __int16 v23; // [rsp+8Eh] [rbp-23Ah]
  unsigned int v24; // [rsp+94h] [rbp-234h]
  int v25; // [rsp+98h] [rbp-230h]
  unsigned __int16 v26; // [rsp+9Ch] [rbp-22Ch]
  unsigned __int16 v27; // [rsp+9Eh] [rbp-22Ah]
  __int64 v28; // [rsp+290h] [rbp-38h]
  unsigned __int64 v29; // [rsp+2A0h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  v1 = *a1;
  if ( *a1 && *(_DWORD *)(v1 + 8) == 1 )
  {
    v2 = a1;
    if ( *(_QWORD *)(v1 + 24) )
      v3 = *(const char **)(v1 + 16);
    else
      v3 = s1;
    v4 = open_linput(v3, 0);
    if ( v4 )
    {
      v5 = v4;
      v18 = off_14E6F0;
      *(_OWORD *)v19 = 0;
      v20 = 0;
      if ( (unsigned __int8)sub_90FA0((__int64)&v18, (__int64)v4, 1, 1) )
      {
        v6 = (char **)(a1 + 13);
        v7 = v2[14];
        if ( v2[15] >= (unsigned __int64)(v7 + 1) )
        {
          v8 = *v6;
        }
        else
        {
          v8 = (char *)qvector_reserve((__int64)v6, *v6, v7 + 1, 0x78u);
          v2[13] = v8;
          v7 = v2[14];
        }
        v9 = 120 * v7;
        *(_OWORD *)&v8[v9 + 16] = 0;
        *(_QWORD *)&v8[v9 + 32] = 0;
        *(_OWORD *)&v8[v9] = 0;
        *(_OWORD *)&v8[v9 + 96] = 0;
        *(_OWORD *)&v8[v9 + 80] = 0;
        *(_OWORD *)&v8[v9 + 64] = 0;
        *(_OWORD *)&v8[v9 + 48] = 0;
        *(_OWORD *)&v8[v9 + 32] = 0;
        *(_QWORD *)&v8[v9 + 112] = 0;
        ++v2[14];
        *(_OWORD *)ptr = 0;
        v15 = 0;
        if ( v24 )
          sub_9BC80((__int64)ptr, (__int64)v5, v24 + (unsigned __int64)(unsigned int)(18 * v25), 0);
        v16[0] = off_14E718;
        v16[1] = v2;
        v16[2] = ptr;
        v17 = 0;
        if ( v21 == 23126 )
          v10 = v28 + 40;
        else
          v10 = v26 + (_DWORD)v28 + 24;
        sub_9C160((__int64)&v18, (__int64)v5, v10, v23, (__int64)v16);
        v11 = 1;
        if ( v22 != 34404 && v22 != 43620 )
          v11 = v22 == 512;
        v12 = v27 >> 15;
        *((_BYTE *)v2 + 168) = v11;
        *((_BYTE *)v2 + 169) = v12;
        LOBYTE(v2) = v17 != 0;
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v15 = 0;
        }
      }
      else
      {
        LODWORD(v2) = 0;
        sub_390A0((int)"Failed to read PE header from: %s\n", v3);
      }
      v18 = off_14E6F0;
      if ( v19[0] )
      {
        v19[1] = nullptr;
        qfree(v19[0]);
        v19[0] = nullptr;
        v20 = 0;
      }
      close_linput(v5);
    }
    else
    {
      LODWORD(v2) = 0;
      sub_390A0((int)"Cannot open file: %s.\n", v3);
    }
  }
  else
  {
    LODWORD(v2) = 0;
    sub_390A0((int)"Input source is not local file.\n");
  }
  return (unsigned int)v2;
}
// 14E6F0: using guessed type __int64 (__fastcall *off_14E6F0[2])();
// 14E718: using guessed type __int64 (__fastcall *off_14E718[3])();
