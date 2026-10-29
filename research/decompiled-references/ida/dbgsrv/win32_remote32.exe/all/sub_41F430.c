/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F430
// Address: 0x0041F430

//----- (0041F430) --------------------------------------------------------
char __userpurge sub_41F430@<al>(int a1@<ebx>, char *a2, int *a3, const char *a4, char *a5, int a6, int a7)
{
  int *v7; // esi
  char v8; // al
  char *v9; // esi
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  int v13; // eax
  _DWORD **v14; // edi
  _DWORD *v15; // edi
  int v16; // eax
  char **v17; // edi
  char **v18; // eax
  char *v19; // ecx
  char **v20; // eax
  const char *v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  int v24; // edi
  char *v25; // esi
  int v26; // eax
  char *v27; // esi
  char *v29; // [esp-8h] [ebp-A0h]
  char *v30; // [esp-4h] [ebp-9Ch]
  _DWORD v31[20]; // [esp+Ch] [ebp-8Ch] BYREF
  char v32[8]; // [esp+5Ch] [ebp-3Ch] BYREF
  __int128 v33; // [esp+64h] [ebp-34h]
  void *v34[2]; // [esp+74h] [ebp-24h] BYREF
  int v35; // [esp+7Ch] [ebp-1Ch]
  char **v36; // [esp+80h] [ebp-18h] BYREF
  int v37; // [esp+84h] [ebp-14h]
  unsigned int v38; // [esp+88h] [ebp-10h]
  int v39; // [esp+94h] [ebp-4h]
  unsigned int v40; // [esp+A4h] [ebp+Ch]
  int v41; // [esp+A4h] [ebp+Ch]
  char v42; // [esp+A7h] [ebp+Fh]
  _DWORD *v43; // [esp+A8h] [ebp+10h]
  int v44; // [esp+A8h] [ebp+10h]
  char *v45; // [esp+B0h] [ebp+18h]

  v32[0] = 2;
  v33 = 0;
  LODWORD(v33) = 0;
  v7 = a3;
  v39 = 0;
  if ( a4 || !a3 )
  {
    if ( sub_423CF0((__m128i)0LL, (__int128 *)v32, a3, a4, 0) )
    {
LABEL_26:
      sub_41D420(a1, (int)a2);
      if ( a7 )
      {
        v21 = sub_45D760(a1, (__m128i)0LL, -1);
        v40 = (unsigned int)v21;
        if ( v21 && (v22 = strlen(v21)) != 0 )
        {
          v23 = v22 + 1;
          if ( v22 + 1 > *(_DWORD *)(a7 + 8) )
          {
            *(_DWORD *)a7 = sub_453B00(a7, *(void **)a7, v22 + 1, 1u);
            v23 = v22 + 1;
          }
          *(_DWORD *)(a7 + 4) = v23;
          sub_464310(*(_DWORD *)a7, v40, v22);
          *(_BYTE *)(v22 + *(_DWORD *)a7) = 0;
        }
        else
        {
          *(_DWORD *)(a7 + 4) = 0;
        }
      }
      v42 = 0;
      goto LABEL_48;
    }
  }
  else
  {
    sub_423670(v32, (char *)a3);
  }
  v8 = v32[0];
  if ( v32[0] == 10 )
  {
    v9 = v32;
    v36 = nullptr;
    v37 = 0;
    v38 = 0;
    LOBYTE(v39) = 2;
    v10 = sub_428030();
    v11 = v37;
    v12 = v10;
    v43 = v10;
    while ( 1 )
    {
      v13 = *((_DWORD *)v9 + 3);
      v14 = (_DWORD **)(v9 + 8);
      v9 = nullptr;
      if ( v13 < 0 )
      {
        v16 = sub_420810(v12, ~v13);
        v11 = v37;
        v9 = (char *)v16;
      }
      else
      {
        v15 = *v14;
        if ( v15 && *v15 == 289621065 && (unsigned int)v13 < v15[4] )
          v9 = (char *)(v15[3] + 24 * v13);
      }
      if ( !v9 )
        goto LABEL_37;
      if ( *v9 != 10 )
        break;
      v17 = v36;
      v18 = v36;
      v19 = (char *)&v36[v11];
      if ( v36 != (char **)v19 )
      {
        while ( v9 != *v18 )
        {
          if ( ++v18 == (char **)v19 )
            goto LABEL_18;
        }
LABEL_37:
        sub_45CC20(1563);
        LOBYTE(v39) = 3;
LABEL_23:
        if ( v36 )
        {
          v37 = 0;
          sub_453A20(v36);
        }
        LOBYTE(v39) = 0;
        goto LABEL_26;
      }
LABEL_18:
      if ( v11 + 1 > v38 )
      {
        v20 = (char **)sub_453B00((int)&v36, v36, v11 + 1, 4u);
        v11 = v37;
        v17 = v20;
        v36 = v20;
      }
      v12 = v43;
      v17[v11] = v9;
      v11 = ++v37;
    }
    v32[0] = 2;
    if ( sub_423670(v32, v9) )
    {
      LOBYTE(v39) = 4;
      goto LABEL_23;
    }
    LOBYTE(v39) = 5;
    if ( v36 )
    {
      v37 = 0;
      sub_453A20(v36);
    }
    v8 = v32[0];
    v7 = a3;
    LOBYTE(v39) = 0;
  }
  if ( v8 != 6 )
  {
    sub_45CC20(1541);
    goto LABEL_26;
  }
  v34[0] = nullptr;
  v34[1] = nullptr;
  v35 = 0;
  v24 = a6;
  LOBYTE(v39) = 6;
  if ( v7 )
  {
    v44 = a6 + 1;
    sub_422E30((unsigned int *)v34, a6 + 1);
    v45 = (char *)v34[0];
    v25 = (char *)v34[0] + 24;
    sub_423670((char *)v34[0], (char *)a3);
    if ( v24 )
    {
      v26 = a5 - v25;
      v41 = a5 - v25;
      do
      {
        v30 = &v25[v26];
        v29 = v25;
        v25 += 24;
        sub_423670(v29, v30);
        v26 = v41;
        --v24;
      }
      while ( v24 );
    }
    v27 = v45;
    v24 = v44;
  }
  else
  {
    v27 = a5;
  }
  sub_41C8A0((char *)v31, 0, 0);
  LOBYTE(v39) = 7;
  v42 = sub_4230A0(v31, a1, nullptr, v33, v24, v27, a2, a7);
  sub_41CD20(v31);
  LOBYTE(v39) = 8;
  if ( v34[0] )
  {
    sub_422F80((unsigned int *)v34, 0);
    sub_453A20(v34[0]);
    v34[0] = nullptr;
    v35 = 0;
  }
LABEL_48:
  v39 = 9;
  sub_423B70((int)v32);
  return v42;
}
