/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79094
// Address: 0x00079094

//----- (00079094) --------------------------------------------------------
bool __fastcall sub_79094(int a1)
{
  unsigned int v2; // r0
  size_t v4; // r0
  size_t v5; // r5
  int v6; // r0
  size_t v7; // r4
  unsigned int v8; // r8
  int v9; // r5
  __uid_t v10; // r0
  int v11; // r0
  size_t v12; // r2
  char *v13; // r0
  char *pw_name; // r4
  size_t v15; // r0
  size_t v16; // r5
  unsigned int v17; // r8
  void *v18; // r0
  unsigned int v19; // r8
  void *v20; // r0
  struct passwd *v21; // [sp+Ch] [bp-3Ch] BYREF
  char *buffer; // [sp+10h] [bp-38h] BYREF
  size_t v23; // [sp+14h] [bp-34h]
  size_t v24; // [sp+18h] [bp-30h]
  struct passwd v25; // [sp+1Ch] [bp-2Ch] BYREF
  char name[12]; // [sp+38h] [bp-10h] BYREF

  if ( getlogin_r(name, 9u) )
    goto LABEL_2;
  v4 = strlen(name);
  v5 = v4;
  if ( v4 )
  {
    v17 = v4 + 1;
    v18 = *(void **)a1;
    if ( v17 > *(_DWORD *)(a1 + 8) )
    {
      v18 = sub_77EB0(a1, *(void **)a1, v17, 1u);
      *(_DWORD *)a1 = v18;
    }
    *(_DWORD *)(a1 + 4) = v17;
    memmove(v18, name, v5);
    *(_BYTE *)(*(_DWORD *)a1 + v5) = 0;
LABEL_2:
    v2 = *(_DWORD *)(a1 + 4);
    if ( v2 > 1 )
      return v2 > 1;
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 4) = 0;
LABEL_6:
  v6 = sysconf(70);
  v7 = v6;
  if ( v6 <= 0 )
  {
    v8 = 0x4000;
    v7 = 0x4000;
  }
  else
  {
    v8 = v6;
  }
  buffer = nullptr;
  v23 = 0;
  v24 = 0;
  buffer = (char *)sub_77EB0((int)&buffer, nullptr, v8, 1u);
  v9 = 10;
  memset(&buffer[v23], 0, v8 - v23);
  v23 = v8;
  while ( 1 )
  {
    v10 = getuid();
    v11 = getpwuid_r(v10, &v25, buffer, v7, &v21);
    if ( v11 != 34 )
      break;
    v12 = v23;
    v7 *= 2;
    if ( v7 <= v23 )
    {
      if ( v7 < v23 )
        v23 = v7;
      if ( !--v9 )
        goto LABEL_18;
    }
    else
    {
      v13 = buffer;
      if ( v7 > v24 )
      {
        v13 = (char *)sub_77EB0((int)&buffer, buffer, v7, 1u);
        v12 = v23;
        buffer = v13;
      }
      memset(&v13[v12], 0, v7 - v12);
      --v9;
      v23 = v7;
      if ( !v9 )
        goto LABEL_18;
    }
  }
  if ( !v11 )
  {
    if ( v21 )
    {
      pw_name = v21->pw_name;
      if ( v21->pw_name )
      {
        v15 = strlen(v21->pw_name);
        v16 = v15;
        if ( v15 )
        {
          v19 = v15 + 1;
          v20 = *(void **)a1;
          if ( v19 > *(_DWORD *)(a1 + 8) )
          {
            v20 = sub_77EB0(a1, *(void **)a1, v19, 1u);
            *(_DWORD *)a1 = v20;
          }
          *(_DWORD *)(a1 + 4) = v19;
          memmove(v20, pw_name, v16);
          *(_BYTE *)(*(_DWORD *)a1 + v16) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
      }
    }
  }
LABEL_18:
  if ( buffer )
  {
    v23 = 0;
    sub_77E08(buffer);
  }
  v2 = *(_DWORD *)(a1 + 4);
  return v2 > 1;
}
