/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A618
// Address: 0x0005A618

//----- (0005A618) --------------------------------------------------------
int __fastcall sub_5A618(int a1)
{
  int v2; // r10
  int *v3; // r0
  int *v4; // r6
  int v5; // r2
  int v6; // r0
  const char *v7; // r8
  char *v8; // r3
  unsigned int v10; // r8
  int v11; // r2
  int (__fastcall *v12)(int); // r2
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r4
  int v17; // r3
  int v18; // r5
  int v19; // r0
  size_t v20; // r9
  signed int v21; // r0
  size_t v22; // r1
  int v23; // r3
  int v24; // r9
  char *v25; // r6
  size_t v26; // r10
  int v27; // r5
  const char *v28; // r4
  int v29; // r1
  int v30; // t1
  char *v31; // r2
  unsigned int v32; // r3
  int v33; // r9
  int v34; // r1
  void *(__fastcall *v35)(int, int, int *); // r5
  void *v36; // r0
  char *s; // [sp+8h] [bp-34h]
  char *sa; // [sp+8h] [bp-34h]
  char *sb; // [sp+8h] [bp-34h]
  int v40; // [sp+Ch] [bp-30h]
  unsigned int v41; // [sp+Ch] [bp-30h]
  int *v42; // [sp+10h] [bp-2Ch]
  void *ptr; // [sp+1Ch] [bp-20h] BYREF
  unsigned int v44; // [sp+20h] [bp-1Ch]
  int v45; // [sp+24h] [bp-18h]
  void *v46; // [sp+28h] [bp-14h] BYREF
  char *v47; // [sp+2Ch] [bp-10h]
  int v48; // [sp+30h] [bp-Ch]

  sub_67AA8((int *)&ptr, 3);
  sub_57FBC((int)&ptr, 0x1Fu);
  sub_57FBC((int)&ptr, 0xBu);
  sub_57FBC((int)&ptr, 4u);
  v2 = a1 + 100;
  v3 = (int *)sub_60B0C(a1 + 100, 3, (int *)&ptr, 0);
  v4 = v3;
  if ( !v3 )
  {
    sub_5819C(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 84));
    goto LABEL_11;
  }
  v5 = *v3;
  v46 = (char *)v3 + 5;
  v47 = (char *)v3 + v5 + 5;
  if ( !sub_7617C((unsigned __int8 **)&v46, (unsigned int)v47) )
  {
    sub_5819C(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 84));
    *(_BYTE *)(a1 + 137) = 0;
    sub_77E08(v4);
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(a1 + 248);
  if ( *(_DWORD *)(v6 + 64) <= 1u )
    goto LABEL_31;
  v7 = (const char *)v46;
  if ( v47 > v46 )
  {
    v8 = (char *)v46 + 1;
    if ( *(_BYTE *)v46 )
    {
      while ( v47 != v8 )
      {
        if ( !*v8++ )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      v46 = v8;
      s = *(char **)(v6 + 60);
      if ( v7 )
      {
        v20 = strlen(v7);
        v21 = strlen(s);
        v22 = v20;
        v23 = v20 ^ v21;
        if ( v21 && v20 )
        {
          v40 = a1 + 100;
          v42 = v4;
          v24 = 0;
          v25 = s;
          v26 = v22;
          sa = (char *)a1;
          v27 = v23;
          v28 = v7 - 1;
          do
          {
            v29 = v24 % v21;
            v30 = *(unsigned __int8 *)++v28;
            ++v24;
            v27 |= (unsigned __int8)v25[v29] ^ v30;
          }
          while ( v26 != v24 );
          v23 = v27;
          v2 = v40;
          v4 = v42;
          a1 = (int)sa;
        }
        if ( !v23 )
        {
LABEL_31:
          *(_BYTE *)(a1 + 137) = 1;
          sub_77E08(v4);
          v10 = 1;
          goto LABEL_32;
        }
      }
    }
  }
  sub_5819C(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 84));
  *(_BYTE *)(a1 + 137) = 0;
  sub_77E08(v4);
  v10 = 0;
LABEL_32:
  sub_67AA8((int *)&v46, 0);
  v31 = (char *)v46;
  v32 = (unsigned int)v47;
  v33 = v48;
  v46 = nullptr;
  v47 = nullptr;
  v48 = 0;
  if ( ptr )
  {
    sb = v31;
    v41 = v32;
    v44 = 0;
    sub_77E08(ptr);
    ptr = sb;
    v44 = v41;
    v45 = v33;
    if ( v46 )
    {
      v47 = nullptr;
      sub_77E08(v46);
    }
  }
  else
  {
    ptr = v31;
    v44 = v32;
    v45 = v33;
  }
  sub_57FBC((int)&ptr, v10);
  sub_66E2C(v2, (int *)&ptr);
  *(_DWORD *)(a1 + 132) = -1;
  *(_BYTE *)(a1 + 137) = 1;
  if ( v10 )
  {
    v34 = *(_DWORD *)(a1 + 100);
    v48 = 0;
    v46 = nullptr;
    v47 = nullptr;
    v35 = *(void *(__fastcall **)(int, int, int *))(v34 + 8);
    if ( v35 == sub_579AC )
      v36 = sub_60B0C(v2, 3, (int *)&v46, 0);
    else
      v36 = v35(v2, 3, (int *)&v46);
    if ( v36 )
      sub_77E08(v36);
    if ( v46 )
    {
      v47 = nullptr;
      sub_77E08(v46);
    }
  }
LABEL_11:
  v11 = *(_DWORD *)a1;
  *(_BYTE *)(a1 + 104) = 0;
  v12 = *(int (__fastcall **)(int))(v11 + 28);
  if ( v12 == sub_5780C )
    v13 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 244) + 452);
  else
    v13 = v12(a1);
  if ( !v13 )
    goto LABEL_14;
  sub_5819C(a1, "[%d] Broken connection (mode=%d)\n", *(_DWORD *)(a1 + 84), *(_DWORD *)(*(_DWORD *)(a1 + 248) + 76));
  v17 = *(_DWORD *)(*(_DWORD *)(a1 + 248) + 76);
  if ( v17 != 1 )
  {
    v14 = *(_DWORD **)(a1 + 244);
    if ( v17 != 2 )
      goto LABEL_15;
    v18 = v14[84];
    sub_5819C(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 84), v18);
    v14 = *(_DWORD **)(a1 + 244);
    if ( v18 <= 0 )
      goto LABEL_15;
    sub_5819C(a1, "[%d] Killing debugged process %d\n", *(_DWORD *)(a1 + 84), v14[84]);
    v19 = sub_5A5B4(a1);
    if ( v19 )
      sub_5819C(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 84), v19);
LABEL_14:
    v14 = *(_DWORD **)(a1 + 244);
LABEL_15:
    (*(void (__fastcall **)(_DWORD *))(*v14 + 56))(v14);
    sub_65688(a1);
    v15 = 1;
    goto LABEL_16;
  }
  sub_65688(a1);
  sub_5819C(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 84));
  if ( byte_D3AB4 )
    sub_58218(a1);
  v15 = 0;
LABEL_16:
  if ( ptr )
  {
    v44 = 0;
    sub_77E08(ptr);
  }
  return v15;
}
// D3AB4: using guessed type char byte_D3AB4;
