/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D6D0
// Address: 0x0040D6D0

//----- (0040D6D0) --------------------------------------------------------
char __userpurge sub_40D6D0@<al>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        const CHAR *a3,
        _BYTE *a4,
        int a5,
        _BYTE *a6,
        char a7,
        char a8,
        int a9)
{
  _BYTE *v9; // esi
  _BYTE *v10; // edi
  int *v11; // eax
  char v13; // bl
  int v14; // eax
  void *v15; // ecx
  const char *v16; // eax
  int v17; // [esp+10h] [ebp-5Ch] BYREF
  int v18; // [esp+14h] [ebp-58h]
  const CHAR *v19; // [esp+18h] [ebp-54h]
  _BYTE *v20; // [esp+1Ch] [ebp-50h]
  int v21; // [esp+20h] [ebp-4Ch]
  int v22; // [esp+24h] [ebp-48h]
  int v23; // [esp+28h] [ebp-44h]
  void *v24; // [esp+2Ch] [ebp-40h]
  _BYTE *v25; // [esp+30h] [ebp-3Ch]
  int v26; // [esp+34h] [ebp-38h]
  int v27; // [esp+38h] [ebp-34h]
  const CHAR *v28; // [esp+3Ch] [ebp-30h]
  int *v29; // [esp+40h] [ebp-2Ch]
  void *v30; // [esp+44h] [ebp-28h] BYREF
  int v31; // [esp+48h] [ebp-24h]
  int v32; // [esp+4Ch] [ebp-20h]
  int v33; // [esp+50h] [ebp-1Ch]
  char *v34; // [esp+54h] [ebp-18h] BYREF
  int v35; // [esp+58h] [ebp-14h]
  int v36; // [esp+5Ch] [ebp-10h]
  int v37; // [esp+68h] [ebp-4h]
  int (__stdcall **v38)(int, int); // [esp+6Ch] [ebp+0h] BYREF
  void *v39; // [esp+70h] [ebp+4h]
  int v40; // [esp+74h] [ebp+8h]
  int v41; // [esp+78h] [ebp+Ch]
  __int16 v42; // [esp+BCh] [ebp+50h]

  v33 = a1;
  v9 = a4;
  v10 = a6;
  v28 = a3;
  v27 = a9;
  v11 = sub_45C5A0(a5, (int)a6, a2, a3, 0);
  v29 = v11;
  if ( !v11 )
    return 0;
  v38 = &off_48A4F0;
  v39 = nullptr;
  v40 = 0;
  v41 = 0;
  v37 = 0;
  sub_415880((int)&v38, a2, (int)v11, 1, 1);
  sub_45C550(a5, (int)a6, v29);
  if ( v42 == 523 )
  {
    sub_410500(v33, (int)"AUTOHIDE NONE\nPlease use ida64 to debug 64-bit applications");
    SetLastError(0x32u);
    v13 = 0;
  }
  else
  {
    if ( a6 && !*a6 )
      v10 = nullptr;
    if ( a4 && !*a4 )
      v9 = nullptr;
    v14 = 6;
    v17 = 40;
    if ( !a7 )
      v14 = 7;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v18 = v14;
    if ( a8 )
    {
      v14 |= 0x100u;
      v18 = v14;
    }
    v19 = v28;
    v26 = v27;
    v15 = nullptr;
    v20 = v9;
    v25 = v10;
    v30 = nullptr;
    v31 = 0;
    v32 = 0;
    LOBYTE(v37) = 3;
    if ( a5 )
    {
      if ( !*(_BYTE *)(a5 + 12) )
        v18 = v14 | 0x800;
      sub_410C70((int)&v30, (__int8 **)a5);
      v15 = v30;
    }
    v24 = v15;
    v34 = nullptr;
    v35 = 0;
    v36 = 0;
    LOBYTE(v37) = 4;
    if ( sub_455170(a5, (int)&v17, (DWORD)&v34) )
    {
      v13 = 1;
    }
    else
    {
      v16 = MultiByteStr;
      if ( v35 )
        v16 = v34;
      sub_410500(v33, (int)"AUTOHIDE NONE\n%s", v16);
      v13 = 0;
    }
    LOBYTE(v37) = 8;
    if ( v34 )
    {
      v35 = 0;
      sub_453A20(v34);
      v34 = nullptr;
      v36 = 0;
    }
    LOBYTE(v37) = 9;
    if ( v30 )
    {
      v31 = 0;
      sub_453A20(v30);
      v30 = nullptr;
      v32 = 0;
    }
  }
  v38 = &off_48A4F0;
  v37 = 10;
  if ( v39 )
  {
    v40 = 0;
    sub_453A20(v39);
  }
  return v13;
}
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
