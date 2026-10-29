/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807C120
// Address: 0x0807C120

//----- (0807C120) --------------------------------------------------------
int __cdecl sub_807C120(int a1, int a2, void **a3, char a4)
{
  _DWORD *v4; // eax
  void *v5; // edx
  _DWORD *v7; // [esp+0h] [ebp-124h]
  unsigned __int8 v8; // [esp+7h] [ebp-11Dh]
  _DWORD v9[2]; // [esp+Ch] [ebp-118h] BYREF
  unsigned __int64 v10; // [esp+14h] [ebp-110h]
  char v11; // [esp+1Ch] [ebp-108h]
  _DWORD v12[6]; // [esp+20h] [ebp-104h] BYREF
  __int128 v13; // [esp+38h] [ebp-ECh]
  int v14; // [esp+48h] [ebp-DCh]
  int v15; // [esp+4Ch] [ebp-D8h]
  int v16; // [esp+50h] [ebp-D4h]
  int v17; // [esp+54h] [ebp-D0h]
  int v18; // [esp+58h] [ebp-CCh]
  int v19; // [esp+5Ch] [ebp-C8h]
  int v20; // [esp+60h] [ebp-C4h]
  int v21; // [esp+64h] [ebp-C0h]
  int v22; // [esp+68h] [ebp-BCh]
  int v23; // [esp+6Ch] [ebp-B8h]
  int v24; // [esp+70h] [ebp-B4h]
  int v25; // [esp+74h] [ebp-B0h]
  _DWORD *v26; // [esp+78h] [ebp-ACh]
  int v27; // [esp+7Ch] [ebp-A8h]
  char v28; // [esp+80h] [ebp-A4h]
  int v29; // [esp+84h] [ebp-A0h]
  char v30; // [esp+88h] [ebp-9Ch]
  int v31; // [esp+8Ch] [ebp-98h]
  int v32; // [esp+90h] [ebp-94h]
  int v33; // [esp+94h] [ebp-90h]
  int v34; // [esp+98h] [ebp-8Ch]
  int v35; // [esp+9Ch] [ebp-88h]
  int v36; // [esp+A0h] [ebp-84h]
  int v37; // [esp+A4h] [ebp-80h]
  int v38; // [esp+A8h] [ebp-7Ch]
  int v39; // [esp+ACh] [ebp-78h]
  int v40; // [esp+B0h] [ebp-74h]
  int v41; // [esp+B4h] [ebp-70h]
  int v42; // [esp+B8h] [ebp-6Ch]
  int v43; // [esp+BCh] [ebp-68h]
  int v44; // [esp+C0h] [ebp-64h]
  int v45; // [esp+C4h] [ebp-60h]
  int v46; // [esp+C8h] [ebp-5Ch]
  int v47; // [esp+CCh] [ebp-58h]
  int v48; // [esp+D0h] [ebp-54h]
  int v49; // [esp+D4h] [ebp-50h]
  int v50; // [esp+D8h] [ebp-4Ch]
  int v51; // [esp+DCh] [ebp-48h]
  int v52; // [esp+E0h] [ebp-44h]
  int v53; // [esp+E4h] [ebp-40h]
  int v54; // [esp+E8h] [ebp-3Ch]
  int v55; // [esp+ECh] [ebp-38h]
  int v56; // [esp+F0h] [ebp-34h]
  int v57; // [esp+F4h] [ebp-30h]
  int v58; // [esp+F8h] [ebp-2Ch]
  int v59; // [esp+FCh] [ebp-28h]
  char v60; // [esp+100h] [ebp-24h]
  unsigned int v61; // [esp+108h] [ebp-1Ch]

  v61 = __readgsdword(0x14u);
  v11 = 0;
  v9[1] = 0;
  memset(v12, 0, sizeof(v12));
  v9[0] = sub_8074FF0;
  v14 = a1;
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)&off_811B900), _mm_cvtsi32_si128((unsigned int)&off_811B9C0)).m128i_u64[0];
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v13 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = nullptr;
  v27 = 0;
  v28 = -90;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = a2;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = -1;
  v60 = a4;
  sub_80937F0(*(_DWORD *)(a1 + 16), (int)v9);
  sub_80C7880(0);
  v8 = sub_809B960((int)v9, 0);
  if ( !v8 )
  {
    sub_807BE60(*(_DWORD **)(a1 + 16), (int)v12, a3);
    v4 = v26;
    if ( v26 )
    {
      v5 = (void *)*v26;
      if ( *v26 )
      {
        v26[1] = 0;
        v7 = v4;
        sub_80CF780(v5);
        *v7 = 0;
        v7[2] = 0;
      }
    }
    sub_8077B70(v9);
  }
  sub_80937F0(*(_DWORD *)(a1 + 16), 0);
  sub_807B140(v9);
  if ( v61 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
// 811B900: using guessed type int (*off_811B900)[8];
// 811B9C0: using guessed type int (__cdecl *off_811B9C0)(int);
