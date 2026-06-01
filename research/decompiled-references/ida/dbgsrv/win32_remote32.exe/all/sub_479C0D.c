/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479C0D
// Address: 0x00479C0D

//----- (00479C0D) --------------------------------------------------------
int __usercall sub_479C0D@<eax>(
        int a1@<ebx>,
        __m128i a2@<xmm0>,
        int a3,
        _BYTE *a4,
        unsigned int a5,
        _BYTE *a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        _DWORD *a11,
        int a12)
{
  int v12; // edi
  _BYTE *v13; // esi
  int v14; // edi
  int v15; // ebx
  int v16; // ecx
  __m128i *v17; // eax
  _BYTE *v18; // edx
  __m128i *v19; // esi
  char v20; // al
  unsigned int v21; // edx
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __m128i *i; // eax
  __int8 v28; // cl
  __int8 v29; // cl
  __int16 v30; // ax
  unsigned int v31; // ecx
  int v32; // esi
  __m128i *v33; // edx
  __m128i *v34; // edi
  char v35; // al
  int v36; // edx
  char v37; // al
  int v38; // edx
  char v39; // al
  __m128i *v40; // edx
  _DWORD v42[3]; // [esp+4h] [ebp-38h] BYREF
  char v43; // [esp+10h] [ebp-2Ch]
  __m128i *v44; // [esp+18h] [ebp-24h]
  int v45; // [esp+20h] [ebp-1Ch]
  int v46; // [esp+28h] [ebp-14h]
  unsigned int v47; // [esp+2Ch] [ebp-10h]
  int v48; // [esp+30h] [ebp-Ch]
  int v49; // [esp+34h] [ebp-8h]
  char v50; // [esp+3Bh] [ebp-1h]

  v12 = a8;
  if ( a8 < 0 )
    v12 = 0;
  v13 = a4;
  *a4 = 0;
  sub_467FF8((int)v42, a11);
  if ( a5 > v12 + 11 )
  {
    v15 = a3;
    v16 = *(_DWORD *)(a3 + 4);
    if ( (((unsigned int)v16 >> 20) & 0x7FF) == 0x7FF )
    {
      v14 = sub_479F1C(a3, a2, (double *)a3, a4, a5, a6, a7, v12, 0, a10, nullptr, a12);
      if ( v14 )
      {
        *a4 = 0;
      }
      else
      {
        v17 = sub_465040((unsigned int)a4, 0x65u);
        if ( v17 )
        {
          v17->m128i_i8[0] = 32 * (a9 ^ 1) + 80;
          v17->m128i_i8[3] = 0;
        }
        v14 = 0;
      }
    }
    else
    {
      if ( v16 < 0 )
      {
        *a4 = 45;
        v13 = a4 + 1;
        v16 = *(_DWORD *)(a3 + 4);
      }
      v18 = v13 + 1;
      v48 = 1023;
      v50 = a9 ^ 1;
      v44 = (__m128i *)(v13 + 1);
      v45 = 32 * (a9 ^ 1) + 7;
      if ( (v16 & 0x7FF00000) != 0 )
      {
        *v13 = 49;
      }
      else
      {
        *v13 = 48;
        if ( *(_DWORD *)(a3 + 4) & 0xFFFFF | *(_DWORD *)a3 )
          v48 = 1022;
        else
          v48 = 0;
      }
      v19 = (__m128i *)(v13 + 2);
      v49 = (int)(v18 + 1);
      if ( v12 )
        v20 = ***(_BYTE ***)(v42[1] + 136);
      else
        v20 = 0;
      *v18 = v20;
      v46 = *(_DWORD *)(a3 + 4) & 0xFFFFF;
      if ( v46 || *(_DWORD *)a3 )
      {
        v21 = 0;
        v22 = 983040;
        LOWORD(v23) = 48;
        v49 = 48;
        v47 = 0;
        v46 = 983040;
        do
        {
          if ( v12 <= 0 )
            break;
          LODWORD(v24) = v21 & *(_DWORD *)a3;
          HIDWORD(v24) = v22 & *(_DWORD *)(a3 + 4) & 0xFFFFF;
          v25 = (unsigned __int16)(sub_463600(v24, v49) + 48);
          if ( v25 > 0x39 )
            LOBYTE(v25) = v45 + v25;
          v26 = v46;
          v21 = __PAIR64__(v46, v47) >> 4;
          v19->m128i_i8[0] = v25;
          v19 = (__m128i *)((char *)v19 + 1);
          v22 = v26 >> 4;
          v23 = v49 - 4;
          --v12;
          v47 = v21;
          v46 = v22;
          v49 = v23;
        }
        while ( (v23 & 0x8000u) == 0 );
        v49 = (int)v19;
        if ( (v23 & 0x8000u) == 0 && sub_47A425(a3, __SPAIR64__(v22, v21), v23, a12) )
        {
          for ( i = (__m128i *)((char *)v19 - 1); ; i = (__m128i *)((char *)i - 1) )
          {
            v28 = i->m128i_i8[0];
            if ( i->m128i_i8[0] != 102 && v28 != 70 )
              break;
            i->m128i_i8[0] = 48;
          }
          v15 = a3;
          if ( i == v44 )
          {
            ++i[-1].m128i_i8[15];
          }
          else
          {
            if ( v28 == 57 )
              v29 = v45 + 58;
            else
              v29 = v28 + 1;
            i->m128i_i8[0] = v29;
          }
        }
      }
      if ( v12 > 0 )
      {
        sub_464890(v19, 0x30u, v12);
        v19 = (__m128i *)((char *)v19 + v12);
        v49 = (int)v19;
      }
      if ( !v44->m128i_i8[0] )
      {
        v19 = v44;
        v49 = (int)v44;
      }
      v19->m128i_i8[0] = 32 * v50 + 80;
      v30 = sub_463600(*(_QWORD *)v15, 0x34u);
      v32 = ((v30 & 0x7FF) - (unsigned __int64)(unsigned int)v48) >> 32;
      v31 = (v30 & 0x7FF) - v48;
      v33 = (__m128i *)(v49 + 2);
      v44 = (__m128i *)(v49 + 2);
      if ( v32 < 0 )
      {
        v31 = v48 - (v30 & 0x7FF);
        v32 = (unsigned __int64)-__SPAIR64__(v32, v31) >> 32;
        v15 = 45;
      }
      else
      {
        LOBYTE(v15) = 43;
      }
      *(_BYTE *)(v49 + 1) = v15;
      v34 = v33;
      v33->m128i_i8[0] = 48;
      if ( v32 >= 0 )
      {
        v15 = 1000;
        if ( v32 > 0 || v31 >= 0x3E8 )
        {
          v35 = sub_482940(__PAIR64__(v32, v31), 1000);
          v32 = 1000;
          v15 = 1000;
          v45 = v36;
          v33 = v44;
          v44->m128i_i8[0] = v35 + 48;
          v34 = (__m128i *)&v33->m128i_i8[1];
        }
      }
      if ( v34 != v33 || v32 >= 0 && (v32 > 0 || v31 >= 0x64) )
      {
        v37 = sub_482940(__PAIR64__(v32, v31), 100);
        v32 = v15;
        v45 = v38;
        v33 = v44;
        v34->m128i_i8[0] = v37 + 48;
        v34 = (__m128i *)((char *)v34 + 1);
      }
      if ( v34 != v33 || v32 >= 0 && (v32 > 0 || v31 >= 0xA) )
      {
        v39 = sub_482940(__PAIR64__(v32, v31), 10);
        v44 = v40;
        v34->m128i_i8[0] = v39 + 48;
        v34 = (__m128i *)((char *)v34 + 1);
      }
      v34->m128i_i8[0] = v31 + 48;
      v34->m128i_i8[1] = 0;
      v14 = 0;
    }
  }
  else
  {
    v14 = 34;
    *sub_46B984() = 34;
    sub_467EF4(a1, 34);
  }
  if ( v43 )
    *(_DWORD *)(v42[0] + 848) &= ~2u;
  return v14;
}
// 479E9B: variable 'v36' is possibly undefined
// 479EB7: variable 'v31' is possibly undefined
// 479ECA: variable 'v38' is possibly undefined
// 479EF3: variable 'v40' is possibly undefined
