/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_447D00
// Address: 0x00447D00

//----- (00447D00) --------------------------------------------------------
void __thiscall sub_447D00(_BYTE *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  signed int v5; // esi
  char *v6; // esi
  int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edx
  const char *v10; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int8 *v15; // ecx
  unsigned __int8 v16; // dl
  unsigned __int8 *v17; // eax
  unsigned int v18; // ebx
  bool v19; // cf
  unsigned __int8 *v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  _BYTE *v24; // ebx
  unsigned int v25; // esi
  _BYTE *v26; // eax
  int v27; // ebx
  _BYTE *v28; // eax
  char *v29; // eax
  int v30; // edi
  int v31; // esi
  int v32; // [esp-14h] [ebp-78h]
  unsigned int v33; // [esp-8h] [ebp-6Ch]
  unsigned int v34; // [esp-4h] [ebp-68h]
  unsigned int v35; // [esp+10h] [ebp-54h] BYREF
  void *v36; // [esp+14h] [ebp-50h] BYREF
  int v37; // [esp+18h] [ebp-4Ch]
  int v38; // [esp+1Ch] [ebp-48h]
  _BYTE *v39; // [esp+20h] [ebp-44h]
  signed int v40; // [esp+24h] [ebp-40h]
  signed int v41; // [esp+28h] [ebp-3Ch]
  int v42; // [esp+2Ch] [ebp-38h]
  int v43; // [esp+30h] [ebp-34h]
  char *v44; // [esp+34h] [ebp-30h] BYREF
  int v45; // [esp+38h] [ebp-2Ch]
  int v46; // [esp+3Ch] [ebp-28h]
  char v47; // [esp+43h] [ebp-21h]
  int v48; // [esp+44h] [ebp-20h] BYREF
  char v49[3]; // [esp+49h] [ebp-1Bh] BYREF
  unsigned __int8 *v50; // [esp+4Ch] [ebp-18h] BYREF
  char v51[3]; // [esp+51h] [ebp-13h] BYREF
  int v52; // [esp+60h] [ebp-4h]

  v39 = this;
  v3 = 0;
  v4 = a3;
  v48 = a2;
  v43 = a3;
  v44 = nullptr;
  v45 = 0;
  v46 = 0;
  v34 = *(_DWORD *)(a3 + 4);
  v52 = 0;
  v5 = sub_4541E0((unsigned __int8 **)a3, v34);
  v40 = v5;
  sub_446E10((unsigned int *)&v44, v5);
  if ( v5 > 0 )
  {
    v6 = v44 + 24;
    v41 = v40;
    while ( 1 )
    {
      v6[224] = 0;
      v7 = sub_4542B0((unsigned __int8 **)v4, *(_DWORD *)(v4 + 4)) + v3 - 1;
      *((_DWORD *)v6 - 6) = v7;
      v8 = *(unsigned __int8 **)v4;
      v9 = *(_DWORD *)(v4 + 4);
      v42 = v7;
      v10 = (const char *)v8;
      v50 = v8;
      do
      {
        if ( (unsigned int)v8 >= v9 )
          goto LABEL_11;
      }
      while ( *v8++ );
      *(_DWORD *)v4 = v8;
      if ( !v10 || (v12 = strlen(v10)) == 0 )
      {
LABEL_11:
        *((_DWORD *)v6 - 4) = 0;
        goto LABEL_12;
      }
      v13 = v12 + 1;
      if ( v12 + 1 > *((_DWORD *)v6 - 3) )
      {
        *((_DWORD *)v6 - 5) = sub_453B00((int)(v6 - 20), *((void **)v6 - 5), v12 + 1, 1u);
        v13 = v12 + 1;
        v4 = v43;
      }
      v33 = (unsigned int)v50;
      *((_DWORD *)v6 - 4) = v13;
      sub_464310(*((_DWORD *)v6 - 5), v33, v12);
      *(_BYTE *)(v12 + *((_DWORD *)v6 - 5)) = 0;
LABEL_12:
      if ( *((_DWORD *)v6 - 4) <= 1u )
        goto LABEL_32;
      *((_DWORD *)v6 + 57) = 0;
      v14 = sub_4541E0((unsigned __int8 **)v4, *(_DWORD *)(v4 + 4));
      *((_DWORD *)v6 - 2) = v14;
      if ( v14 != 4 )
        *((_DWORD *)v6 + 57) = sub_4541E0((unsigned __int8 **)v4, *(_DWORD *)(v4 + 4));
      v15 = *(unsigned __int8 **)v4;
      v16 = 0;
      if ( *(_DWORD *)v4 < *(_DWORD *)(v4 + 4) )
        v16 = *v15;
      v17 = v15 + 1;
      v18 = v16;
      if ( *(_DWORD *)v4 >= *(_DWORD *)(v4 + 4) )
        v17 = *(unsigned __int8 **)v4;
      *(_DWORD *)v4 = v17;
      if ( v16 )
        break;
LABEL_30:
      v23 = sub_4542B0((unsigned __int8 **)v4, *(_DWORD *)(v4 + 4)) - 1;
      *((_DWORD *)v6 + 4) = v23;
      if ( v23 != -1 )
        sub_44A840((int)(v6 + 8), v4);
LABEL_32:
      v3 = v42;
      if ( v39[104] )
        sub_402760("update_lowcnd(ea=%a cnd=%s)\n");
      v6 += 256;
      if ( !--v41 )
      {
        v5 = v40;
        goto LABEL_36;
      }
    }
    v19 = (unsigned int)v16 < *(_DWORD *)v6;
    if ( (unsigned int)v16 <= *(_DWORD *)v6 )
    {
      if ( v16 == *(_DWORD *)v6 || (v47 = 0, !v19) )
      {
LABEL_27:
        v20 = *(unsigned __int8 **)v4;
        v21 = *((_DWORD *)v6 - 1);
        v22 = *(_DWORD *)v4 + v18;
        if ( v22 >= *(_DWORD *)v4 && v22 <= *(_DWORD *)(v4 + 4) )
        {
          *(_DWORD *)v4 = v22;
          sub_464310(v21, (unsigned int)v20, v18);
        }
        goto LABEL_30;
      }
    }
    else
    {
      if ( (unsigned int)v16 > *((_DWORD *)v6 + 1) )
      {
        *((_DWORD *)v6 - 1) = sub_453B00((int)(v6 - 4), *((void **)v6 - 1), v16, 1u);
        v4 = v43;
      }
      sub_464890((__m128i *)(*(_DWORD *)v6 + *((_DWORD *)v6 - 1)), 0, v18 - *(_DWORD *)v6);
      v47 = 0;
    }
    *(_DWORD *)v6 = v18;
    goto LABEL_27;
  }
LABEL_36:
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  v24 = v39;
  v32 = *((_DWORD *)v39 + 64);
  LOBYTE(v52) = 1;
  v25 = (*(int (__stdcall **)(int, unsigned int *, char *, signed int, void **))(*(_DWORD *)v32 + 172))(
          v32,
          &v35,
          v44,
          v5,
          &v36);
  if ( v24[104] )
    sub_402760("  update_lowcnds => %d\n");
  v26 = sub_4540B0(&v50, (unsigned int)v51, v25);
  v27 = v48;
  sub_401600(v48, (unsigned int)&v50, v26 - (_BYTE *)&v50);
  v28 = sub_4540B0(&v48, (unsigned int)v49, v35);
  sub_401600(v27, (unsigned int)&v48, v28 - (_BYTE *)&v48);
  if ( v25 != 1 )
    sub_406150(v27, (int)&v36);
  LOBYTE(v52) = 2;
  if ( v36 )
  {
    v37 = 0;
    sub_453A20(v36);
    v36 = nullptr;
    v38 = 0;
  }
  v29 = v44;
  v52 = 3;
  if ( v44 )
  {
    v30 = v45;
    if ( v45 )
    {
      v31 = 0;
      do
      {
        sub_40AD70(&v29[v31]);
        v29 = v44;
        v31 += 256;
        --v30;
      }
      while ( v30 );
    }
    v45 = 0;
    sub_453A20(v29);
  }
}
