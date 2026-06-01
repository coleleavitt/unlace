/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454520
// Address: 0x00454520

//----- (00454520) --------------------------------------------------------
void __usercall sub_454520(__m128i a1@<xmm0>, int *a2, __m128i *a3)
{
  __m128i *i; // ebx
  __m128i *v4; // esi
  unsigned __int16 *v5; // eax
  int v6; // esi
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  void *v12; // eax
  int v13; // edi
  unsigned __int16 *v14; // ecx
  unsigned __int16 *v15; // eax
  void *v16; // esi
  int v17; // edi
  int v18; // esi
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // edi
  unsigned int v22; // esi
  const __m128i *v23; // eax
  unsigned __int16 *v24; // esi
  __int32 v25; // eax
  unsigned __int16 *v26; // ecx
  unsigned __int16 *v27; // eax
  void *v28; // eax
  int v29; // esi
  _DWORD *v30; // eax
  int v31; // ecx
  int v32; // edx
  unsigned int v33; // eax
  LPVOID v34; // ecx
  unsigned int v35; // eax
  unsigned __int16 *v36; // [esp+10h] [ebp-68h] BYREF
  int v37; // [esp+14h] [ebp-64h]
  int v38; // [esp+18h] [ebp-60h]
  LPVOID v39; // [esp+1Ch] [ebp-5Ch]
  unsigned int v40; // [esp+20h] [ebp-58h]
  unsigned int v41; // [esp+24h] [ebp-54h]
  int v42[3]; // [esp+28h] [ebp-50h] BYREF
  int v43; // [esp+34h] [ebp-44h] BYREF
  int v44; // [esp+3Ch] [ebp-3Ch]
  __int64 v45; // [esp+40h] [ebp-38h]
  unsigned __int16 *v46; // [esp+4Ch] [ebp-2Ch] BYREF
  int v47; // [esp+50h] [ebp-28h]
  int v48; // [esp+54h] [ebp-24h]
  void *v49; // [esp+58h] [ebp-20h] BYREF
  unsigned int v50; // [esp+5Ch] [ebp-1Ch]
  unsigned int v51; // [esp+60h] [ebp-18h]
  int *v52; // [esp+64h] [ebp-14h]
  int v53; // [esp+68h] [ebp-10h]
  int v54; // [esp+74h] [ebp-4h]
  int v55; // [esp+84h] [ebp+Ch]
  unsigned int v56; // [esp+84h] [ebp+Ch]
  int v57; // [esp+84h] [ebp+Ch]
  unsigned __int16 *v58; // [esp+84h] [ebp+Ch]

  for ( i = a3; i->m128i_i16[0]; i = (__m128i *)((char *)i + 2 * wcslen((const unsigned __int16 *)i) + 2) )
  {
    v4 = sub_46669D(i, 0x3Du);
    if ( v4 )
    {
      v5 = nullptr;
      v6 = ((char *)v4 - (char *)i) >> 1;
      v46 = nullptr;
      v47 = 0;
      v48 = 0;
      v54 = 0;
      if ( v6 )
      {
        v7 = v6 + 1;
        if ( v6 != -1 )
        {
          v5 = (unsigned __int16 *)sub_453B00((int)&v46, nullptr, v6 + 1, 2u);
          v46 = v5;
        }
        v8 = v6;
        v47 = v7;
        sub_464310((unsigned int)v5, (unsigned int)i, v8 * 2);
        v46[v8] = 0;
      }
      else
      {
        v8 = 0;
      }
      v54 = 2;
      v49 = nullptr;
      v50 = 0;
      v51 = 0;
      v9 = (unsigned int)i->m128i_u32 + v8 * 2 + 2;
      if ( v9 )
      {
        v10 = sub_45A360(&i->m128i_i16[v8 + 1]);
        v55 = v10;
        v11 = v10 + 1;
        if ( v10 + 1 <= v51 )
        {
          v12 = v49;
        }
        else
        {
          v12 = sub_453B00((int)&v49, v49, v10 + 1, 2u);
          v49 = v12;
        }
        v50 = v11;
        sub_464310((unsigned int)v12, v9, 2 * v55);
        *((_WORD *)v49 + v55) = 0;
      }
      LOBYTE(v54) = 3;
      sub_454370(a2, a1, &v43, &v46);
      v13 = v44;
      if ( *(_BYTE *)(v44 + 13) )
        goto LABEL_28;
      v14 = (unsigned __int16 *)&dword_48A0F4;
      if ( *(_DWORD *)(v44 + 20) )
        v14 = *(unsigned __int16 **)(v44 + 16);
      v15 = (unsigned __int16 *)&dword_48A0F4;
      if ( v47 )
        v15 = v46;
      if ( sub_47213D((int)i, v44, a1, v15, v14) < 0 || v13 == *a2 )
      {
LABEL_28:
        v21 = v50;
        if ( v50 > 1 )
        {
          v36 = nullptr;
          v37 = 0;
          v38 = 0;
          v57 = v47;
          if ( v47 )
          {
            v22 = 2 * v47;
            v36 = (unsigned __int16 *)sub_4539E0(2 * v47);
            v38 = v57;
            sub_464310((unsigned int)v36, (unsigned int)v46, v22);
            v37 = v57;
            v21 = v50;
          }
          LOBYTE(v54) = 6;
          v39 = nullptr;
          v40 = 0;
          v41 = 0;
          if ( v21 )
          {
            v39 = sub_4539E0(2 * v21);
            v41 = v21;
            sub_464310((unsigned int)v39, (unsigned int)v49, 2 * v21);
            v40 = v21;
          }
          LOBYTE(v54) = 7;
          v23 = (const __m128i *)sub_454370(a2, a1, v42, &v36);
          v24 = v36;
          v58 = v36;
          a1 = _mm_loadl_epi64(v23);
          v25 = v23->m128i_i32[2];
          v45 = a1.m128i_i64[0];
          if ( *(_BYTE *)(v25 + 13) )
            goto LABEL_40;
          v26 = (unsigned __int16 *)&dword_48A0F4;
          if ( *(_DWORD *)(v25 + 20) )
            v26 = *(unsigned __int16 **)(v25 + 16);
          v27 = (unsigned __int16 *)&dword_48A0F4;
          if ( v37 )
            v27 = v36;
          if ( sub_47213D((int)i, (int)a2, a1, v27, v26) < 0 )
          {
LABEL_40:
            if ( a2[1] == 107374182 )
              sub_403E20();
            v29 = *a2;
            v52 = a2;
            LOBYTE(v54) = 8;
            v53 = 0;
            v30 = sub_4627C2(0x28u);
            v31 = v38;
            v32 = (int)v30;
            v53 = 0;
            v30[4] = v58;
            v30[5] = v37;
            v33 = v40;
            *(_DWORD *)(v32 + 24) = v31;
            v34 = v39;
            *(_DWORD *)(v32 + 32) = v33;
            v35 = v41;
            *(_DWORD *)(v32 + 28) = v34;
            *(_DWORD *)(v32 + 36) = v35;
            *(_DWORD *)v32 = v29;
            *(_DWORD *)(v32 + 4) = v29;
            *(_DWORD *)(v32 + 8) = v29;
            *(_WORD *)(v32 + 12) = 0;
            sub_403C10(a2, (_DWORD *)v45, SHIDWORD(v45), v32);
            v24 = nullptr;
            v28 = nullptr;
          }
          else
          {
            v28 = v39;
          }
          LOBYTE(v54) = 11;
          if ( v28 )
            sub_453A20(v28);
          LOBYTE(v54) = 12;
          if ( v24 )
            sub_453A20(v24);
        }
      }
      else if ( v50 > 1 )
      {
        v17 = v13 + 28;
        if ( (void **)v17 != &v49 )
        {
          v18 = v50 != 0 ? v50 - 1 : 0;
          if ( v18 )
          {
            v56 = (unsigned int)v49;
            v19 = v18 + 1;
            if ( (unsigned int)(v18 + 1) > *(_DWORD *)(v17 + 8) )
            {
              *(_DWORD *)v17 = sub_453B00(v17, *(void **)v17, v18 + 1, 2u);
              v19 = v18 + 1;
            }
            v20 = 2 * v18;
            *(_DWORD *)(v17 + 4) = v19;
            sub_464310(*(_DWORD *)v17, v56, v20);
            *(_WORD *)(v20 + *(_DWORD *)v17) = 0;
          }
          else
          {
            *(_DWORD *)(v17 + 4) = 0;
          }
        }
      }
      else
      {
        v16 = (void *)sub_40BA90((int ***)a2, v13);
        LOBYTE(v54) = 4;
        sub_43FCA0((int)a2, (int)v16 + 16);
        sub_4627F2(v16);
      }
      LOBYTE(v54) = 13;
      if ( v49 )
      {
        v50 = 0;
        sub_453A20(v49);
        v49 = nullptr;
        v51 = 0;
      }
      v54 = 14;
      if ( v46 )
      {
        v47 = 0;
        sub_453A20(v46);
        v46 = nullptr;
        v48 = 0;
      }
      v54 = -1;
    }
  }
}
// 48A0F4: using guessed type int dword_48A0F4;
