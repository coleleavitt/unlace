/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AEA0
// Address: 0x0005AEA0

//----- (0005AEA0) --------------------------------------------------------
int __fastcall sub_5AEA0(int a1)
{
  _BYTE *v2; // r0
  _BYTE *v3; // r0
  _BYTE *v4; // r0
  char *v5; // r3
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r6
  int v9; // r5
  char *v10; // r5
  char *v11; // r3
  char *v12; // r4
  bool v13; // zf
  _BYTE *v14; // r7
  const char *v15; // r4
  signed int v16; // r7
  signed int v17; // r0
  int v18; // r6
  int i; // r5
  char *v20; // r1
  unsigned int v21; // r2
  int v22; // r3
  _BYTE *v23; // r0
  void *v24; // r0
  int v25; // r0
  int v26; // r4
  char *v28; // [sp+Ch] [bp-44h]
  void **v29; // [sp+10h] [bp-40h]
  char *v30; // [sp+18h] [bp-38h]
  int v31; // [sp+20h] [bp-30h]
  int v32; // [sp+24h] [bp-2Ch]
  char *v33; // [sp+28h] [bp-28h] BYREF
  unsigned int v34; // [sp+2Ch] [bp-24h]
  int v35; // [sp+30h] [bp-20h]
  char *v36; // [sp+34h] [bp-1Ch] BYREF
  unsigned int v37; // [sp+38h] [bp-18h]
  int v38; // [sp+3Ch] [bp-14h]
  char *s; // [sp+40h] [bp-10h] BYREF
  unsigned __int8 *v40; // [sp+44h] [bp-Ch] BYREF
  int v41; // [sp+48h] [bp-8h]

  sub_6DA58((int)&v36, 3);
  v2 = pack_dd(&s, (unsigned int)&v40 + 1, 0x1Fu);
  ((void (__fastcall *)(char **, char **, int))loc_30B84)(&v36, &s, v2 - (_BYTE *)&s);
  v3 = pack_dd(&s, (unsigned int)&v40 + 1, 0xBu);
  ((void (__fastcall *)(char **, char **, int))loc_30B84)(&v36, &s, v3 - (_BYTE *)&s);
  v4 = pack_dd(&s, (unsigned int)&v40 + 1, 4u);
  ((void (__fastcall *)(char **, char **, int))loc_30B84)(&v36, &s, v4 - (_BYTE *)&s);
  v32 = a1;
  v29 = (void **)(a1 + 100);
  v5 = (char *)sub_67F00(a1 + 100, 3, (int *)&v36, 0);
  v31 = 1;
  if ( v5 )
  {
    v6 = ((((unsigned __int8)v5[3] << 8) + (unsigned __int8)v5[2]) << 16)
       + ((unsigned __int8)v5[1] << 8)
       + (unsigned __int8)*v5;
    v28 = v5;
    s = v5 + 5;
    v40 = (unsigned __int8 *)&v5[v6 + 5];
    if ( unpack_dd((unsigned int *)&s, (unsigned int)v40) )
    {
      v7 = *(_DWORD *)(a1 + 248);
      v8 = 1;
      v9 = 1;
      if ( *(_DWORD *)(v7 + 64) >= 2u )
      {
        v10 = s;
        v11 = s;
        while ( v11 < (char *)v40 )
        {
          v12 = v11 + 1;
          v13 = *v11++ == 0;
          if ( v13 )
          {
            s = v12;
            goto LABEL_12;
          }
        }
        v10 = nullptr;
LABEL_12:
        v15 = *(const char **)(v7 + 60);
        if ( !v10 )
          goto LABEL_18;
        v16 = strlen(v10);
        v17 = strlen(v15);
        v18 = v17 ^ v16;
        if ( v16 >= 1 && v17 )
        {
          v30 = v10;
          for ( i = 0; i != v16; ++i )
            v18 |= (unsigned __int8)v15[i % v17] ^ (unsigned __int8)v30[i];
        }
        v13 = v18 == 0;
        v8 = 1;
        v9 = 1;
        if ( !v13 )
        {
LABEL_18:
          v8 = 0;
          sub_5B24C(v32, "[%d] Bad password\n");
          v9 = 1;
        }
      }
    }
    else
    {
      v8 = 0;
      sub_5B24C(a1, "[%d] Incompatible IDA version\n");
      v9 = 0;
    }
    *(_BYTE *)(v32 + 137) = v8;
    qfree(v28);
    v14 = (_BYTE *)v32;
    if ( v9 )
    {
      sub_6DA58((int)&v33, 0);
      v20 = v33;
      s = v33;
      v33 = nullptr;
      v21 = v34;
      v34 = 0;
      v40 = (unsigned __int8 *)v21;
      v22 = v35;
      v35 = 0;
      v41 = v22;
      if ( v36 )
      {
        v37 = 0;
        qfree(v36);
        v36 = s;
        v37 = (unsigned int)v40;
        v38 = v41;
        if ( v33 )
        {
          v34 = 0;
          qfree(v33);
          v35 = 0;
          v33 = nullptr;
        }
      }
      else
      {
        v36 = v20;
        v37 = v21;
        v38 = v22;
      }
      v23 = pack_dd(&s, (unsigned int)&v40 + 1, v8);
      ((void (__fastcall *)(char **, char **, int))loc_30B84)(&v36, &s, v23 - (_BYTE *)&s);
      sub_6D398(v29, (int *)&v36);
      *(_DWORD *)(v32 + 132) = -1;
      *(_BYTE *)(v32 + 137) = 1;
      if ( v8 )
      {
        v40 = nullptr;
        s = nullptr;
        v41 = 0;
        v24 = (void *)(*((int (__fastcall **)(void **, int, char **))*v29 + 2))(v29, 3, &s);
        if ( v24 )
          qfree(v24);
        if ( s )
        {
          v40 = nullptr;
          qfree(s);
          v41 = 0;
          s = nullptr;
        }
      }
    }
  }
  else
  {
    v14 = (_BYTE *)a1;
    sub_5B24C(a1, "[%d] Could not establish the connection\n");
  }
  v14[104] = 0;
  if ( !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v14 + 28))(v14) )
    goto LABEL_38;
  sub_5B24C(v32, "[%d] Broken connection (mode=%d)\n");
  v25 = *(_DWORD *)(*(_DWORD *)(v32 + 248) + 76);
  if ( v25 == 2 )
  {
    v26 = *(_DWORD *)(*(_DWORD *)(v32 + 244) + 272);
    sub_5B24C(v32, "[%d] Debugged process PID: %d\n");
    if ( v26 >= 1 )
    {
      sub_5B24C(v32, "[%d] Killing debugged process %d\n");
      if ( sub_5B284(v32) )
        sub_5B24C(v32, "[%d] Failed to kill process after %d seconds. Giving up\n");
    }
    goto LABEL_38;
  }
  if ( v25 != 1 )
  {
LABEL_38:
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v32 + 244) + 56))(*(_DWORD *)(v32 + 244));
    sub_6B71C(v32);
    goto LABEL_39;
  }
  sub_6B71C(v32);
  sub_5B24C(v32, "[%d] Debugged session entered into sleeping mode\n");
  v31 = 0;
  if ( byte_DE440 )
  {
    v31 = 0;
    if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v32 + 244) + 252))(*(_DWORD *)(v32 + 244)) )
    {
      sub_5AB84(v29, "Error preparing debugger server to handle a broken connection\n");
      v31 = 0;
    }
  }
LABEL_39:
  if ( v36 )
  {
    v37 = 0;
    qfree(v36);
    v38 = 0;
    v36 = nullptr;
  }
  return v31;
}
// 5AF76: conditional instruction was optimized away because r1.4>=2u
// 5AFA8: conditional instruction was optimized away because r1.4>=2u
// DE440: using guessed type char byte_DE440;
