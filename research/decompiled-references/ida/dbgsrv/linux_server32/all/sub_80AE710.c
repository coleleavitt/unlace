/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AE710
// Address: 0x080AE710

//----- (080AE710) --------------------------------------------------------
int __cdecl sub_80AE710(int a1, int *a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  size_t v5; // edx
  void *v6; // eax
  bool v7; // zf
  __int64 v9; // rax
  void *v10; // eax
  size_t v11; // eax
  void *v12; // edx
  int v13; // eax
  __m128i v14; // xmm0
  void *v15; // [esp+0h] [ebp-2B8h]
  int v16; // [esp+4h] [ebp-2B4h]
  __int64 v17; // [esp+8h] [ebp-2B0h]
  size_t v18; // [esp+10h] [ebp-2A8h]
  unsigned __int8 v19; // [esp+1Bh] [ebp-29Dh]
  char v20; // [esp+1Ch] [ebp-29Ch]
  void *v21; // [esp+20h] [ebp-298h] BYREF
  unsigned __int64 v22; // [esp+24h] [ebp-294h]
  unsigned int v23[3]; // [esp+30h] [ebp-288h] BYREF
  char v24; // [esp+3Ch] [ebp-27Ch]
  void *src; // [esp+40h] [ebp-278h]
  size_t n; // [esp+44h] [ebp-274h]
  int v27; // [esp+48h] [ebp-270h]
  void *ptr; // [esp+4Ch] [ebp-26Ch]
  unsigned int v29; // [esp+50h] [ebp-268h]
  int v30; // [esp+54h] [ebp-264h]
  int (__cdecl **v31)(int, int, int); // [esp+58h] [ebp-260h] BYREF
  void *v32; // [esp+5Ch] [ebp-25Ch]
  int v33; // [esp+60h] [ebp-258h]
  int v34; // [esp+64h] [ebp-254h]
  int v35; // [esp+90h] [ebp-228h]
  unsigned __int16 v36; // [esp+94h] [ebp-224h]
  unsigned __int16 v37; // [esp+96h] [ebp-222h]
  unsigned int v38; // [esp+9Ch] [ebp-21Ch]
  int v39; // [esp+A0h] [ebp-218h]
  unsigned __int16 v40; // [esp+A4h] [ebp-214h]
  int v41; // [esp+294h] [ebp-24h]
  unsigned int v42; // [esp+29Ch] [ebp-1Ch]

  v42 = __readgsdword(0x14u);
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v31 = &off_811C184;
  v19 = sub_80A7C10((int)&v31, (int)a2, 1, 1);
  if ( !v19 )
    goto LABEL_31;
  v2 = v36;
  if ( v36 == 512 )
  {
    v16 = 31;
    goto LABEL_16;
  }
  if ( v36 <= 0x200u )
  {
    if ( v36 > 0x1C4u )
    {
      v16 = (unsigned __int16)(v36 - 496) < 3u ? 15 : -1;
      goto LABEL_16;
    }
    if ( v36 <= 0x1A5u )
    {
      if ( v36 > 0x184u )
      {
        v16 = (unsigned __int16)(v36 - 418) < 3u ? 18 : -1;
      }
      else if ( v36 <= 0x14Bu )
      {
LABEL_39:
        v16 = -1;
      }
      else
      {
        LOWORD(v2) = v36 - 332;
        switch ( v2 )
        {
          case 0:
          case 1:
          case 2:
            goto LABEL_60;
          case 22:
          case 23:
          case 26:
          case 28:
          case 29:
            goto LABEL_59;
          case 56:
            v16 = 24;
            break;
          default:
            goto LABEL_39;
        }
      }
      goto LABEL_16;
    }
    if ( ((1 << (v36 + 90)) & 0x54000000) == 0 )
    {
      v16 = ((1 << (v36 + 90)) & 5) == 0 ? -1 : 0x12;
      goto LABEL_16;
    }
    goto LABEL_58;
  }
  if ( v36 == 2560 )
  {
LABEL_58:
    v16 = 13;
    goto LABEL_16;
  }
  if ( v36 > 0xA00u )
  {
    if ( v36 == 0x8664 )
    {
LABEL_60:
      v16 = 0;
    }
    else
    {
      v16 = 37;
      if ( v36 != 0x9041 )
      {
        v3 = 57;
        if ( v36 != 3772 )
          v3 = -1;
        v16 = v3;
      }
    }
    goto LABEL_16;
  }
  if ( v36 != 870 )
  {
    if ( v36 > 0x366u )
    {
      if ( v36 != 1126 )
      {
        v13 = 27;
        if ( v36 != 1312 )
          v13 = -1;
        v16 = v13;
        goto LABEL_16;
      }
    }
    else if ( v36 != 614 )
    {
      v16 = 8 * (v36 == 616) - 1;
      goto LABEL_16;
    }
  }
LABEL_59:
  v16 = 12;
LABEL_16:
  v21 = nullptr;
  v22 = 0;
  if ( v38 )
  {
    v17 = (unsigned int)(18 * v39) + (unsigned __int64)v38;
    LODWORD(v9) = sub_80CD730((int)a2, v17, 0);
    if ( v17 == v9 && sub_80CD690((int)a2, v23, 4) == 4 && v23[0] > 4 )
    {
      sub_80CD730((int)a2, -4, 1);
      if ( (unsigned __int8)sub_80AD760(a2, v23, 1u, -1, 0xFFFFFFFF, -1) )
      {
        v10 = sub_80CF710(v23[0] + 1);
        if ( v10 )
        {
          v15 = v10;
          v11 = sub_80CD690((int)a2, v10, v23[0]);
          v12 = v15;
          if ( v11 == v23[0] )
          {
            *((_BYTE *)v15 + v11) = 0;
            if ( v21 )
            {
              LODWORD(v22) = 0;
              sub_80CF780(v21);
              v12 = v15;
            }
            v21 = v12;
            v14 = _mm_cvtsi32_si128(v23[0] + 1);
            v22 = _mm_unpacklo_epi32(v14, v14).m128i_u64[0];
          }
          else
          {
            sub_80CF780(v15);
          }
        }
      }
    }
  }
  v24 = 0;
  v23[0] = (unsigned int)&off_811C1DC;
  src = nullptr;
  v23[1] = (unsigned int)a2;
  v23[2] = (unsigned int)&v21;
  n = 0;
  v27 = 0;
  ptr = nullptr;
  v29 = 0;
  v30 = 0;
  if ( v35 == 23126 )
    v4 = v41 + 40;
  else
    v4 = v41 + v40 + 24;
  sub_80A6CF0((int)&v31, a2, v4, v37, (int)v23);
  v20 = v24;
  if ( v29 > 1 )
    sub_80D0740(a1 + 1034, (char *)ptr, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v5 = n;
  v6 = src;
  if ( n > 0x400 )
  {
    *(_DWORD *)(a1 + 4) = v16;
    *(_WORD *)(a1 + 8) = 1024;
    memmove((void *)(a1 + 10), v6, 0x400u);
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 1) = v20;
  }
  else
  {
    *(_WORD *)(a1 + 8) = n;
    *(_DWORD *)(a1 + 4) = v16;
    v18 = v5;
    memmove((void *)(a1 + 10), v6, v5);
    *(_BYTE *)a1 = 0;
    v7 = v24 == 0;
    *(_BYTE *)(a1 + 1) = v20;
    if ( v7 && !v18 )
      v19 = v29 > 1;
  }
  v23[0] = (unsigned int)&off_811C1DC;
  if ( ptr )
  {
    v29 = 0;
    sub_80CF780(ptr);
  }
  if ( src )
  {
    n = 0;
    sub_80CF780(src);
  }
  if ( v21 )
  {
    LODWORD(v22) = 0;
    sub_80CF780(v21);
  }
LABEL_31:
  v31 = &off_811C184;
  if ( v32 )
  {
    v33 = 0;
    sub_80CF780(v32);
  }
  if ( v42 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v19;
}
// 80AEB82: variable 'v9' is possibly undefined
// 811C184: using guessed type int (__cdecl *off_811C184)(int, int, int);
// 811C1DC: using guessed type int (__cdecl *off_811C1DC)(int, int);
