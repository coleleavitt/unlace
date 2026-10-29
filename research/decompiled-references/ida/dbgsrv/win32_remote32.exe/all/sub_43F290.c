/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F290
// Address: 0x0043F290

//----- (0043F290) --------------------------------------------------------
int __stdcall sub_43F290(int a1, int a2)
{
  _DWORD *v2; // esi
  const CHAR *v3; // eax
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // esi
  char *v12; // edi
  int v13; // ecx
  int v14; // esi
  void *v15; // eax
  char *v17; // edi
  int v18; // ecx
  int v19; // esi
  void *v20; // eax
  int v21; // [esp+Ch] [ebp-3Ch] BYREF
  __int64 v22; // [esp+14h] [ebp-34h]
  __int64 v23; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v24; // [esp+24h] [ebp-24h] BYREF
  int v25; // [esp+28h] [ebp-20h]
  int v26; // [esp+2Ch] [ebp-1Ch]
  int v27; // [esp+30h] [ebp-18h]
  _DWORD *v28; // [esp+34h] [ebp-14h]
  int v29; // [esp+38h] [ebp-10h] BYREF
  int v30; // [esp+44h] [ebp-4h]
  int (__stdcall *v31)(_DWORD *, int, int, _DWORD *, _DWORD); // [esp+50h] [ebp+8h]
  int v32; // [esp+50h] [ebp+8h]
  int v33; // [esp+54h] [ebp+Ch]
  int v34; // [esp+54h] [ebp+Ch]

  v2 = (_DWORD *)sub_439DB0();
  v28 = v2;
  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(const CHAR **)(a1 + 8);
  else
    v3 = MultiByteStr;
  v4 = (*(int (__thiscall **)(_DWORD *, const CHAR *, int *))(*v2 + 240))(v2, v3, &v29);
  v27 = v4;
  if ( v4 < 0 )
    goto LABEL_36;
  v5 = v2[67];
  if ( !v5 )
    v5 = v2[79];
  if ( v4 >= v5 )
  {
LABEL_36:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30056);
  }
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v6 = v2[67];
  v30 = 0;
  if ( v6 || (v6 = v2[79]) != 0 )
  {
    v21 = -2;
    v23 = 0;
    v22 = -1;
    LOBYTE(v30) = 7;
    sub_43D9E0((int)&v24, v6, &v21);
    LOBYTE(v30) = 0;
    if ( v21 >= -1 )
    {
      LOBYTE(v30) = 9;
      if ( (_DWORD)v22 )
      {
        HIDWORD(v22) = 0;
        sub_453A20((void *)v22);
      }
      LOBYTE(v30) = 0;
    }
  }
  v7 = *v2;
  v8 = v24;
  v9 = v29;
  v31 = *(int (__stdcall **)(_DWORD *, int, int, _DWORD *, _DWORD))(v7 + 108);
  v10 = sub_439DC0();
  if ( v31(v28, v10, v9, v8, 0) > 0 )
  {
    v17 = (char *)v24;
    *(_DWORD *)(a2 + 8) = v24[6 * v27 + 2];
    v30 = 14;
    if ( v17 )
    {
      v18 = v25;
      v34 = v25;
      if ( v25 )
      {
        v19 = 0;
        do
        {
          if ( *(int *)&v17[v19] >= -1 )
          {
            v20 = *(void **)&v17[v19 + 8];
            LOBYTE(v30) = 15;
            if ( v20 )
            {
              *(_DWORD *)&v17[v19 + 12] = 0;
              sub_453A20(v20);
              v18 = v34;
              *(_DWORD *)&v17[v19 + 8] = 0;
              *(_DWORD *)&v17[v19 + 16] = 0;
            }
            *(_DWORD *)&v17[v19] = -2;
            v17 = (char *)v24;
            LOBYTE(v30) = 14;
          }
          v19 += 24;
          v34 = --v18;
        }
        while ( v18 );
      }
      v25 = 0;
      sub_453A20(v17);
    }
    return 0;
  }
  else
  {
    v11 = sub_41BD30(a2, "failed to read register value");
    v32 = v11;
    v12 = (char *)v24;
    v30 = 11;
    if ( v24 )
    {
      v13 = v25;
      v33 = v25;
      if ( v25 )
      {
        v14 = 0;
        do
        {
          if ( *(int *)&v12[v14] >= -1 )
          {
            v15 = *(void **)&v12[v14 + 8];
            LOBYTE(v30) = 12;
            if ( v15 )
            {
              *(_DWORD *)&v12[v14 + 12] = 0;
              sub_453A20(v15);
              v13 = v33;
              *(_DWORD *)&v12[v14 + 8] = 0;
              *(_DWORD *)&v12[v14 + 16] = 0;
            }
            *(_DWORD *)&v12[v14] = -2;
            v12 = (char *)v24;
            LOBYTE(v30) = 11;
          }
          v14 += 24;
          v33 = --v13;
        }
        while ( v13 );
        v11 = v32;
      }
      v25 = 0;
      sub_453A20(v12);
    }
    return v11;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
