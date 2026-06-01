/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C6D0
// Address: 0x0007C6D0

//----- (0007C6D0) --------------------------------------------------------
int __cdecl sub_7C6D0(int a1)
{
  _BYTE *v1; // eax
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  int v4; // edi
  _BYTE *v5; // esi
  char *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ebx
  char v10; // al
  const char *v11; // eax
  char *v12; // edx
  const char *v14; // esi
  signed int v15; // edi
  signed int v16; // eax
  int v17; // ecx
  int i; // esi
  _BYTE *v19; // edi
  char v20; // si
  char v21; // al
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // edx
  _BYTE *v25; // eax
  void *v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  const char *v32; // [esp+Ch] [ebp-60h]
  int v33; // [esp+Ch] [ebp-60h]
  bool v34; // [esp+14h] [ebp-58h]
  unsigned __int8 v35; // [esp+14h] [ebp-58h]
  char v36; // [esp+18h] [ebp-54h]
  const char *v37; // [esp+1Ch] [ebp-50h]
  char *v38; // [esp+20h] [ebp-4Ch]
  char *v39; // [esp+28h] [ebp-44h] BYREF
  unsigned int v40; // [esp+2Ch] [ebp-40h]
  int v41; // [esp+30h] [ebp-3Ch]
  int v42; // [esp+38h] [ebp-34h] BYREF
  unsigned int v43; // [esp+3Ch] [ebp-30h]
  int v44; // [esp+40h] [ebp-2Ch]
  char *src; // [esp+48h] [ebp-24h] BYREF
  unsigned int v46; // [esp+4Ch] [ebp-20h] BYREF
  int v47; // [esp+50h] [ebp-1Ch]
  unsigned int v48; // [esp+58h] [ebp-14h]

  v48 = __readgsdword(0x14u);
  sub_96B40((int)&v42, 3);
  v1 = pack_dd(&src, (unsigned int)&v46 + 1, 0x1Fu);
  sub_3A950(&v42, &src, v1 - (_BYTE *)&src);
  v2 = pack_dd(&src, (unsigned int)&v46 + 1, 1u);
  sub_3A950(&v42, &src, v2 - (_BYTE *)&src);
  v3 = pack_dd(&src, (unsigned int)&v46 + 1, 4u);
  sub_3A950(&v42, &src, v3 - (_BYTE *)&src);
  v4 = a1;
  v5 = (_BYTE *)(a1 + 100);
  v6 = (char *)sub_8FA30(a1 + 100, 3u, &v42, 0);
  if ( v6 )
  {
    v38 = v6;
    v7 = (unsigned int)&v6[*(_DWORD *)v6 + 5];
    src = v6 + 5;
    v46 = v7;
    v8 = unpack_dd((unsigned int *)&src, v7);
    if ( v8 )
    {
      v9 = *(_DWORD *)(a1 + 248);
      v36 = 1;
      if ( *(_DWORD *)(v9 + 64) >= 2u )
      {
        v34 = v8 != 0;
        v11 = src;
        v12 = src;
        while ( (unsigned int)v12 < v46 )
        {
          if ( *v12++ == 0 )
          {
            src = v12;
            goto LABEL_12;
          }
        }
        v11 = nullptr;
LABEL_12:
        if ( !v11 )
          goto LABEL_18;
        v32 = v11;
        v14 = *(const char **)(v9 + 60);
        v15 = strlen(v11);
        v37 = v14;
        v16 = strlen(v14);
        v17 = v15 ^ v16;
        if ( v15 > 0 && v16 )
        {
          for ( i = 0; i != v15; ++i )
            v17 |= (char)(v37[i % v16] ^ v32[i]);
        }
        v4 = a1;
        v5 = (_BYTE *)(a1 + 100);
        if ( !v17 )
        {
          v10 = v34;
        }
        else
        {
LABEL_18:
          sub_7CD60(v4, "[%d] Bad password\n", *(_DWORD *)(v4 + 84));
          v10 = 0;
        }
      }
      else
      {
        v10 = 1;
      }
    }
    else
    {
      sub_7CD60(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 84));
      v10 = 0;
      v36 = 0;
    }
    *(_BYTE *)(v4 + 137) = v10;
    v19 = v5;
    v20 = v10;
    qfree(v38);
    v21 = v20;
    v5 = v19;
    v4 = a1;
    v35 = v21;
    if ( v36 )
    {
      sub_96B40((int)&v39, 0);
      v22 = (int)v39;
      v23 = v40;
      src = v39;
      v39 = nullptr;
      v46 = v40;
      v40 = 0;
      v24 = v41;
      v47 = v41;
      v41 = 0;
      if ( v42 )
      {
        v43 = 0;
        qfree((void *)v42);
        v42 = (int)src;
        v43 = v46;
        v44 = v47;
        if ( v39 )
        {
          v40 = 0;
          qfree(v39);
          v39 = nullptr;
          v41 = 0;
        }
      }
      else
      {
        v42 = v22;
        v43 = v23;
        v44 = v24;
      }
      v25 = pack_dd(&src, (unsigned int)&v46 + 1, v35);
      sub_3A950(&v42, &src, v25 - (_BYTE *)&src);
      sub_96020((int)v5, &v42);
      *(_DWORD *)(a1 + 132) = -1;
      *(_BYTE *)(a1 + 137) = 1;
      if ( v35 )
      {
        src = nullptr;
        v46 = 0;
        v47 = 0;
        v26 = (void *)(*(int (__cdecl **)(_BYTE *, int, char **))(*(_DWORD *)v5 + 8))(v5, 3, &src);
        if ( v26 )
          qfree(v26);
        if ( src )
        {
          v46 = 0;
          qfree(src);
          src = nullptr;
          v47 = 0;
        }
      }
    }
  }
  else
  {
    sub_7CD60(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 84));
  }
  *(_BYTE *)(v4 + 104) = 0;
  if ( !(*(unsigned __int8 (__cdecl **)(int))(*(_DWORD *)v4 + 28))(v4) )
    goto LABEL_40;
  sub_7CD60(v4, "[%d] Broken connection (mode=%d)\n", *(_DWORD *)(v4 + 84), *(_DWORD *)(*(_DWORD *)(v4 + 248) + 76));
  v27 = *(_DWORD *)(*(_DWORD *)(v4 + 248) + 76);
  if ( v27 == 2 )
  {
    v28 = *(_DWORD *)(*(_DWORD *)(v4 + 244) + 272);
    sub_7CD60(v4, "[%d] Debugged process PID: %d\n", *(_DWORD *)(v4 + 84), v28);
    if ( v28 > 0 )
    {
      sub_7CD60(
        v4,
        "[%d] Killing debugged process %d\n",
        *(_DWORD *)(v4 + 84),
        *(_DWORD *)(*(_DWORD *)(v4 + 244) + 272));
      v29 = sub_7CDC0(v4);
      if ( v29 )
        sub_7CD60(v4, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(v4 + 84), v29);
    }
    goto LABEL_40;
  }
  if ( v27 != 1 )
  {
LABEL_40:
    v30 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v4 + 244) + 56))(*(_DWORD *)(v4 + 244));
    LOBYTE(v30) = 1;
    v33 = v30;
    sub_92EA0(v4);
    goto LABEL_41;
  }
  sub_92EA0(v4);
  sub_7CD60(v4, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(v4 + 84));
  if ( (_BYTE)dword_13BE2C
    && !(*(unsigned __int8 (__cdecl **)(_DWORD))(**(_DWORD **)(v4 + 244) + 252))(*(_DWORD *)(v4 + 244)) )
  {
    sub_7C0C0(v5, "Error preparing debugger server to handle a broken connection\n");
  }
  v33 = 0;
LABEL_41:
  if ( v42 )
  {
    v43 = 0;
    qfree((void *)v42);
    v42 = 0;
    v44 = 0;
  }
  return v33;
}
// 7C85A: conditional instruction was optimized away because ecx.4>=2u
// 13BE2C: using guessed type int dword_13BE2C;
