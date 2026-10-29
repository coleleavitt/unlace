/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4241B0
// Address: 0x004241B0

//----- (004241B0) --------------------------------------------------------
int __userpurge sub_4241B0@<eax>(
        int a1@<ebx>,
        __m128i a2@<xmm0>,
        __int128 *a3,
        char *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  char *v7; // esi
  unsigned int v9; // edi
  __int128 *v10; // esi
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int *v14; // edi
  int v15; // esi
  __m128i *v16; // edi
  int v17; // eax
  int v18; // esi
  _BYTE *v19; // ecx
  unsigned int v20; // kr00_4
  char *v21; // eax
  __int128 *v22; // eax
  __int128 v23; // xmm1
  __int64 v24; // xmm2_8
  char *v25; // [esp+Ch] [ebp-78h]
  unsigned int v26; // [esp+14h] [ebp-70h] BYREF
  _BYTE v27[24]; // [esp+18h] [ebp-6Ch] BYREF
  void *v28; // [esp+30h] [ebp-54h] BYREF
  int v29; // [esp+34h] [ebp-50h]
  int v30; // [esp+38h] [ebp-4Ch]
  int *v31; // [esp+3Ch] [ebp-48h]
  __int128 *v32; // [esp+40h] [ebp-44h]
  _BYTE *v33; // [esp+44h] [ebp-40h] BYREF
  int v34; // [esp+48h] [ebp-3Ch]
  int v35; // [esp+4Ch] [ebp-38h]
  unsigned int v36; // [esp+50h] [ebp-34h] BYREF
  _DWORD v37[8]; // [esp+54h] [ebp-30h] BYREF
  int v38; // [esp+80h] [ebp-4h]

  v7 = a4;
  v32 = a3;
  v36 = a5;
  if ( !a3 || !a4 )
    return sub_45CC20(1568);
  while ( *v7 != 5 )
  {
    if ( *v7 == 7 )
    {
      v9 = *((_DWORD *)v7 + 3) != 0 ? *((_DWORD *)v7 + 3) - 1 : 0;
      sub_41D110((int *)&v36, v9);
      if ( (a7 & 1) != 0 )
        a6 = v36 + 1;
      sub_41D140((int *)&v36, (int *)&a6, v9);
      sub_41BB70(&v28, v36 + *((_DWORD *)v7 + 2), a6 - v36);
      v10 = v32;
      v38 = 0;
      sub_423B70((int)v32);
      *((_DWORD *)v10 + 2) = v28;
      *((_DWORD *)v10 + 3) = v29;
      v11 = v30;
      *(_BYTE *)v10 = 7;
      *((_DWORD *)v10 + 4) = v11;
      v28 = nullptr;
      v29 = 0;
      v30 = 0;
      sub_401400(&v28);
      return 0;
    }
    if ( *v7 != 10 )
      return sub_45CC20(1568);
    v7 = sub_4239C0(v7, 0);
    if ( !v7 )
      return sub_45C9E0();
  }
  if ( (a7 & 1) != 0 )
  {
    sub_453D50(a2, v37, 32, "%u", a5);
    return sub_423CF0(a2, v32, (int *)v7, (const char *)v37, 0);
  }
  else
  {
    v27[0] = 2;
    *(_OWORD *)&v27[8] = 0;
    *(_DWORD *)&v27[8] = 0;
    v38 = 1;
    sub_423B70((int)v27);
    v27[0] = 5;
    v12 = (int *)sub_4627C2(0x10u);
    v31 = v12;
    LOBYTE(v38) = 2;
    if ( v12 )
      v13 = sub_426170(v12, 0);
    else
      v13 = nullptr;
    v14 = *((int **)v7 + 2);
    *(_DWORD *)&v27[8] = v13;
    v31 = v14;
    v33 = nullptr;
    v34 = 0;
    v35 = 0;
    LOBYTE(v38) = 4;
    v33 = sub_453B00((int)&v33, nullptr, 3u, 1u);
    v34 = 3;
    *(_WORD *)v33 = -209;
    v33[2] = 0;
    v15 = sub_41C640(v14, &v28, (int)&v33)[2];
    v36 = v15;
    LOBYTE(v38) = 5;
    if ( v33 )
    {
      v34 = 0;
      sub_453A20(v33);
    }
    LOBYTE(v38) = 1;
    if ( v15 != *v14 )
    {
      do
      {
        v16 = (__m128i *)MultiByteStr;
        if ( *(_DWORD *)(v15 + 20) )
          v16 = *(__m128i **)(v15 + 16);
        v17 = strcmp(v16->m128i_i8, ":");
        if ( v17 )
          v17 = v17 < 0 ? -1 : 1;
        if ( v17 >= 0 )
          break;
        if ( sub_420BF0(a1, v16->m128i_i8) )
        {
          sub_453D70(a1, v16, "%u", &v26);
          if ( v26 >= a5 && (a6 == 0x7FFFFFFF || v26 < a6) )
          {
            sub_453D50((__m128i)0LL, v37, 32, "%u", v26 - a5);
            v25 = (char *)(v15 + 32);
            if ( v27[0] == 5 )
            {
              v19 = nullptr;
              v33 = nullptr;
              v34 = 0;
              v35 = 0;
              LOBYTE(v38) = 6;
              v20 = strlen((const char *)v37);
              if ( v20 != -1 )
              {
                v19 = sub_453B00((int)&v33, nullptr, v20 + 1, 1u);
                v33 = v19;
              }
              v34 = v20 + 1;
              sub_464310((unsigned int)v19, (unsigned int)v37, v20);
              v33[v20] = 0;
              LOBYTE(v38) = 7;
              v21 = (char *)sub_41CF00(*(int **)&v27[8], (unsigned int *)&v33);
              sub_423670(v21, v25);
              LOBYTE(v38) = 8;
              if ( v33 )
              {
                v34 = 0;
                sub_453A20(v33);
                v33 = nullptr;
                v35 = 0;
              }
              LOBYTE(v38) = 1;
            }
            else
            {
              v18 = sub_45CC20(1532);
              if ( v18 )
              {
                v38 = 12;
                sub_423B70((int)v27);
                return v18;
              }
            }
          }
        }
        sub_40B5E0((int *)&v36);
        v15 = v36;
      }
      while ( v36 != *v31 );
    }
    v22 = v32;
    v23 = *v32;
    v24 = *((_QWORD *)v32 + 2);
    *v32 = *(_OWORD *)v27;
    *((_QWORD *)v22 + 2) = *(_QWORD *)&v27[16];
    *(_OWORD *)v27 = v23;
    *(_QWORD *)&v27[16] = v24;
    v38 = 13;
    sub_423B70((int)v27);
    return 0;
  }
}
