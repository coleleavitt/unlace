/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442410
// Address: 0x00442410

//----- (00442410) --------------------------------------------------------
char __usercall sub_442410@<al>(int a1@<ecx>, _BYTE *a2@<ebx>, __m128i a3@<xmm0>)
{
  int v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // eax
  bool v10; // bl
  int v11; // ebx
  unsigned __int8 *v12; // ecx
  const char *v13; // edx
  const char *v15; // ecx
  int v16; // edi
  signed int v17; // ebx
  int v18; // eax
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int *v22; // eax
  int v23; // edi
  _BYTE *v24; // ecx
  int v25; // edx
  _BYTE *v26; // eax
  int v27; // eax
  void *v28; // eax
  int v29; // eax
  int v30; // eax
  char v31; // bl
  int v32; // edi
  int v33; // eax
  int v34; // edx
  int v35; // edi
  int v36; // ebx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  void *v40; // [esp-4h] [ebp-58h]
  int v41; // [esp+10h] [ebp-44h]
  unsigned __int8 *v42; // [esp+14h] [ebp-40h]
  int v44; // [esp+18h] [ebp-3Ch]
  void *v45; // [esp+1Ch] [ebp-38h] BYREF
  int v46; // [esp+20h] [ebp-34h]
  const char *v47; // [esp+24h] [ebp-30h]
  void *v48; // [esp+28h] [ebp-2Ch] BYREF
  unsigned __int8 *v49; // [esp+2Ch] [ebp-28h] BYREF
  unsigned __int8 *v50; // [esp+30h] [ebp-24h]
  const char *v51; // [esp+34h] [ebp-20h]
  char v52; // [esp+3Ah] [ebp-1Ah]
  bool v53; // [esp+3Bh] [ebp-19h]
  _BYTE *v54; // [esp+3Ch] [ebp-18h] BYREF
  _BYTE v55[3]; // [esp+41h] [ebp-13h] BYREF
  int v56; // [esp+50h] [ebp-4h]

  v3 = a1;
  sub_44DD50((int *)&v45, 3);
  v56 = 0;
  v4 = sub_4540B0(&v54, (unsigned int)v55, 0x1Fu);
  sub_401600((int)&v45, (unsigned int)&v54, v4 - (_BYTE *)&v54);
  v5 = sub_4540B0(&v54, (unsigned int)v55, 0);
  sub_401600((int)&v45, (unsigned int)&v54, v5 - (_BYTE *)&v54);
  v6 = sub_4540B0(&v54, (unsigned int)v55, 4u);
  sub_401600((int)&v45, (unsigned int)&v54, v6 - (_BYTE *)&v54);
  v7 = (_BYTE *)(v3 + 112);
  v8 = sub_44AD40(v3 + 112, a2, a3, 3, (int *)&v45, 0);
  v54 = v8;
  if ( !v8 )
  {
    sub_442A00(a3, v3, "[%d] Could not establish the connection\n", *(_DWORD *)(v3 + 88));
    goto LABEL_34;
  }
  v52 = 1;
  v49 = v8 + 5;
  v50 = &v8[*(_DWORD *)v8 + 5];
  v9 = sub_4541E0(&v49, (unsigned int)v50);
  v10 = v9 != 0;
  v53 = v9 != 0;
  if ( !v9 )
  {
    sub_442A00(a3, v3, "[%d] Incompatible IDA version\n", *(_DWORD *)(v3 + 88));
    v52 = 0;
    goto LABEL_22;
  }
  v11 = *(_DWORD *)(v3 + 260);
  if ( *(_DWORD *)(v11 + 76) > 1u )
  {
    v12 = v49;
    v13 = (const char *)v49;
    v42 = v49;
    while ( v12 < v50 )
    {
      if ( !*v12++ )
      {
        v49 = v12;
        goto LABEL_10;
      }
    }
    v13 = nullptr;
    v42 = nullptr;
LABEL_10:
    v15 = MultiByteStr;
    if ( *(_DWORD *)(v11 + 76) )
      v15 = *(const char **)(v11 + 72);
    v51 = v15;
    if ( !v13 )
      goto LABEL_19;
    v16 = strlen(v13);
    v17 = strlen(v15);
    v18 = v16 ^ v17;
    v41 = v16 ^ v17;
    if ( v17 && v16 > 0 )
    {
      v19 = 0;
      do
      {
        v20 = v19 % v17;
        v21 = (char)v42[v19++];
        v18 = v21 ^ v15[v20] | v41;
        v15 = v51;
        v41 = v18;
      }
      while ( v19 < v16 );
      v3 = a1;
    }
    if ( v18 )
    {
LABEL_19:
      sub_442A00(a3, v3, "[%d] Bad password\n", *(_DWORD *)(v3 + 88));
      v7 = (_BYTE *)(v3 + 112);
      v10 = 0;
      goto LABEL_22;
    }
    v7 = (_BYTE *)(v3 + 112);
  }
  v10 = v53;
LABEL_22:
  v40 = v54;
  *(_BYTE *)(v3 + 149) = v10;
  sub_453A20(v40);
  if ( v52 )
  {
    v22 = sub_44DD50((int *)&v48, 0);
    v23 = v22[2];
    v24 = (_BYTE *)*v22;
    v25 = v22[1];
    *v22 = 0;
    v22[1] = 0;
    v22[2] = 0;
    v51 = (const char *)v23;
    v7 = (_BYTE *)(v3 + 112);
    LOBYTE(v56) = 1;
    v54 = v24;
    v44 = v25;
    if ( v45 )
    {
      v46 = 0;
      sub_453A20(v45);
      v24 = v54;
      v25 = v44;
    }
    v45 = v24;
    v46 = v25;
    v47 = v51;
    LOBYTE(v56) = 3;
    if ( v48 )
    {
      v49 = nullptr;
      sub_453A20(v48);
    }
    LOBYTE(v56) = 0;
    v26 = sub_4540B0(&v54, (unsigned int)v55, v10);
    sub_401600((int)&v45, (unsigned int)&v54, v26 - (_BYTE *)&v54);
    sub_44BD70((_BYTE *)(v3 + 112), (int *)&v45);
    *(_DWORD *)(v3 + 144) = -1;
    *(_BYTE *)(v3 + 149) = 1;
    if ( v10 )
    {
      v48 = nullptr;
      v49 = nullptr;
      v50 = nullptr;
      v27 = *(_DWORD *)v7;
      LOBYTE(v56) = 4;
      v28 = (void *)(*(int (__thiscall **)(int, int, void **))(v27 + 4))(v3 + 112, 3, &v48);
      if ( v28 )
        sub_453A20(v28);
      LOBYTE(v56) = 5;
      if ( v48 )
      {
        v49 = nullptr;
        sub_453A20(v48);
      }
      LOBYTE(v56) = 0;
    }
  }
LABEL_34:
  v29 = *(_DWORD *)v7;
  *(_BYTE *)(v3 + 116) = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(v29 + 16))(v7) )
  {
LABEL_47:
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 256) + 52))(*(_DWORD *)(v3 + 256));
    sub_44DC20((_DWORD *)v3);
    v31 = 1;
    goto LABEL_48;
  }
  sub_442A00(
    a3,
    v3,
    "[%d] Broken connection (mode=%d)\n",
    *(_DWORD *)(v3 + 88),
    *(_DWORD *)(*(_DWORD *)(v3 + 260) + 88));
  v30 = *(_DWORD *)(*(_DWORD *)(v3 + 260) + 88);
  if ( v30 != 1 )
  {
    if ( v30 == 2 )
    {
      v32 = *(_DWORD *)(*(_DWORD *)(v3 + 256) + 256);
      sub_442A00(a3, v3, "[%d] Debugged process PID: %d\n", *(_DWORD *)(v3 + 88), v32);
      if ( v32 > 0 )
      {
        sub_442A00(
          a3,
          v3,
          "[%d] Killing debugged process %d\n",
          *(_DWORD *)(v3 + 88),
          *(_DWORD *)(*(_DWORD *)(v3 + 256) + 256));
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 256) + 76))(*(_DWORD *)(v3 + 256), 0);
        v33 = sub_453720();
        v35 = (v33 >> 31) | (v34 + 5);
        v36 = v33;
        v54 = (_BYTE *)v35;
        LODWORD(v37) = sub_453720();
        if ( v37 >= __PAIR64__(v35, v36) )
        {
LABEL_46:
          sub_442A00(a3, v3, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(v3 + 88), 5);
        }
        else
        {
          while ( 1 )
          {
            if ( (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 256) + 64))(
                   *(_DWORD *)(v3 + 256),
                   v3 + 168,
                   100) >= 1 )
            {
              (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(v3 + 256) + 80))(*(_DWORD *)(v3 + 256), v3 + 168);
              if ( (*(_DWORD *)(v3 + 184) & 0xFFFFFFF) == 2 )
                break;
            }
            LODWORD(v38) = sub_453720();
            if ( v38 >= __PAIR64__((unsigned int)v54, v36) )
              goto LABEL_46;
          }
        }
      }
    }
    goto LABEL_47;
  }
  sub_44DC20((_DWORD *)v3);
  sub_442A00(a3, v3, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(v3 + 88));
  if ( byte_4B6C78 && !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 256) + 248))(*(_DWORD *)(v3 + 256)) )
    sub_441A40(v7, (int)"Error preparing debugger server to handle a broken connection\n");
  v31 = 0;
LABEL_48:
  v56 = 6;
  if ( v45 )
  {
    v46 = 0;
    sub_453A20(v45);
  }
  return v31;
}
// 4427F3: variable 'v34' is possibly undefined
// 44280B: variable 'v37' is possibly undefined
// 442852: variable 'v38' is possibly undefined
// 4B6C78: using guessed type char byte_4B6C78;
