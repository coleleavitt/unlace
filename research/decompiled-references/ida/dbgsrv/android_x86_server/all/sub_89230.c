/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89230
// Address: 0x00089230

//----- (00089230) --------------------------------------------------------
int __cdecl sub_89230(int a1, char *file, int a3, char *a4, _BYTE *a5, unsigned int a6, char *s, int a8, _DWORD *a9)
{
  char *v9; // esi
  _BYTE *v10; // edi
  int v11; // eax
  size_t v12; // eax
  size_t v13; // edi
  unsigned int v14; // esi
  int v15; // ecx
  void *v16; // eax
  int v17; // esi
  int v18; // ecx
  unsigned __int8 v19; // cl
  _BYTE *v20; // eax
  int v21; // eax
  int *v22; // eax
  void *v23; // eax
  int v24; // esi
  bool v25; // zf
  unsigned int v26; // edx
  int v27; // ecx
  void *v28; // eax
  char *v29; // eax
  unsigned __int8 v31; // [esp+1Ch] [ebp-11E0h]
  int v32; // [esp+20h] [ebp-11DCh]
  char *v33; // [esp+24h] [ebp-11D8h]
  char *v34; // [esp+28h] [ebp-11D4h] BYREF
  int v35; // [esp+2Ch] [ebp-11D0h]
  int v36; // [esp+30h] [ebp-11CCh]
  int v37; // [esp+38h] [ebp-11C4h] BYREF
  unsigned int v38; // [esp+3Ch] [ebp-11C0h]
  char *v39; // [esp+40h] [ebp-11BCh]
  int v40; // [esp+44h] [ebp-11B8h]
  int v41; // [esp+48h] [ebp-11B4h]
  int v42; // [esp+4Ch] [ebp-11B0h]
  int v43; // [esp+50h] [ebp-11ACh]
  int v44; // [esp+54h] [ebp-11A8h]
  _BYTE *v45; // [esp+58h] [ebp-11A4h]
  int v46; // [esp+5Ch] [ebp-11A0h]
  int v47[1024]; // [esp+60h] [ebp-119Ch] BYREF
  struct utsname name; // [esp+1060h] [ebp-19Ch] BYREF
  unsigned int v49; // [esp+11E8h] [ebp-14h]

  v9 = s;
  v49 = __readgsdword(0x14u);
  if ( *a5 && !qisabspath(s) )
  {
    v9 = (char *)v47;
    qmake_full_path((unsigned int)v47, 4096, s);
  }
  v10 = (_BYTE *)a1;
  if ( (a6 & 1) != 0 )
  {
    v11 = a1 + 248;
    if ( !v9 )
    {
LABEL_13:
      *(_DWORD *)(v11 + 4) = 0;
      goto LABEL_16;
    }
  }
  else
  {
    if ( *v9 && !qfileexist(v9) )
    {
      sub_24410(a1, "AUTOHIDE NONE\nInput file is missing: %s", v9);
      return -3;
    }
    v11 = a1 + 248;
  }
  v32 = v11;
  v12 = strlen(v9);
  if ( !v12 )
  {
    v10 = (_BYTE *)a1;
    v11 = v32;
    goto LABEL_13;
  }
  v13 = v12;
  v33 = v9;
  v14 = v12 + 1;
  v15 = a1;
  if ( *(_DWORD *)(a1 + 256) >= v12 + 1 )
  {
    v16 = *(void **)(a1 + 248);
  }
  else
  {
    v16 = qvector_reserve(v32, *(void **)(a1 + 248), v14, 1u);
    v15 = a1;
    *(_DWORD *)(a1 + 248) = v16;
  }
  *(_DWORD *)(v15 + 252) = v14;
  v17 = v15;
  memmove(v16, v33, v13);
  *(_BYTE *)(*(_DWORD *)(v17 + 248) + v13) = 0;
  v10 = (_BYTE *)v17;
LABEL_16:
  v10[389] = a6 & 1;
  if ( qfileexist(file) )
  {
    v19 = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v10 + 24))(v10, a8);
    if ( (a6 & 8) != 0 )
    {
      sub_24410((int)v10, "Cannot debug a 64bit process with the 32bit debugger server, sorry\n");
      return -2;
    }
    else
    {
      v31 = v19;
      v37 = 40;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = 0;
      v46 = 0;
      v39 = file;
      v40 = a3;
      v20 = nullptr;
      if ( *a5 )
        v20 = a5;
      v45 = v20;
      v38 = 128;
      if ( uname(&name) )
      {
        v21 = 128;
      }
      else
      {
        v25 = strcasecmp(name.sysname, "VMkernel") == 0;
        v21 = 128;
        if ( v25 )
        {
          v38 = 0;
          v21 = 0;
        }
      }
      v26 = v21 | (a6 >> 3) & 2 | (8 * (_WORD)a6) & 0x100 | (8 * (_WORD)a6) & 0x200;
      if ( (a6 & 0xF0) != 0x10 )
        v38 = (v26 | (a6 >> 1) & 0x40) ^ 2;
      v38 = (v26 | (a6 >> 1) & 0x40) ^ 2 | 0x10;
      if ( (a6 & 4) == 0 )
        sub_1C9D0((int)v10, "Launching as %sbit process\n", "32");
      memset(&name, 0, 12);
      if ( a4 )
      {
        if ( !a4[12] )
          BYTE1(v38) |= 8u;
        sub_896C0((int)&name, a4);
        v27 = *(_DWORD *)name.sysname;
      }
      else
      {
        v27 = 0;
      }
      v44 = v27;
      v34 = nullptr;
      v35 = 0;
      v36 = 0;
      v28 = launch_process((int)&v37, &v34);
      *a9 = v28;
      if ( v28 )
      {
        v24 = 2 - v31;
      }
      else
      {
        if ( v35 )
          v29 = v34;
        else
          v29 = byte_EF875;
        v24 = -2;
        sub_1C9D0((int)v10, "launch_process: %s", v29);
      }
      if ( v34 )
      {
        v35 = 0;
        qfree(v34);
        v34 = nullptr;
        v36 = 0;
      }
      if ( *(_DWORD *)name.sysname )
      {
        *(_DWORD *)&name.sysname[4] = 0;
        qfree(*(void **)name.sysname);
        *(_DWORD *)name.sysname = 0;
        *(_DWORD *)&name.sysname[8] = 0;
      }
    }
  }
  else
  {
    v22 = (int *)__errno(v18);
    v23 = winerr(*v22);
    sub_1C9D0((int)v10, "%s: %s\n", file, v23);
    return -2;
  }
  return v24;
}
// 893FC: variable 'v18' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
