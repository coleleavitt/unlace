/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DCA4
// Address: 0x0008DCA4

//----- (0008DCA4) --------------------------------------------------------
int __fastcall sub_8DCA4(int a1, const char *a2, unsigned int a3)
{
  int v4; // r4
  unsigned int v6; // r3
  int v7; // r6
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r5
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r7
  _DWORD *v15; // r0
  _DWORD *v16; // r1
  int v17; // r0
  char *v18; // r0
  char *v19; // r1
  unsigned __int8 v20; // r3
  int v21; // r4
  int v22; // r0
  __int64 v23; // r0
  int v24; // r2
  bool v25; // cf
  int v26; // r0
  int v28; // [sp+1Ch] [bp-1B4h]
  int v29; // [sp+20h] [bp-1B0h]
  int v30; // [sp+24h] [bp-1ACh]
  int v31; // [sp+2Ch] [bp-1A4h]
  int v32; // [sp+30h] [bp-1A0h]
  int v33; // [sp+34h] [bp-19Ch]
  _DWORD *v34; // [sp+48h] [bp-188h]
  _QWORD *v35; // [sp+50h] [bp-180h]
  char *s2; // [sp+54h] [bp-17Ch]
  unsigned int v37; // [sp+58h] [bp-178h]
  int *v38; // [sp+60h] [bp-170h]
  _QWORD *v39; // [sp+64h] [bp-16Ch]
  char v41[88]; // [sp+6Ch] [bp-164h] BYREF
  char s1[260]; // [sp+C8h] [bp-108h] BYREF

  v4 = -102;
  if ( a1 && strlen(a2) <= 0xFF )
  {
    v6 = a3;
    v7 = a1;
    if ( *(_QWORD *)(a1 + 96) )
    {
      s2 = (char *)a2;
      v37 = v6;
      v33 = *(_DWORD *)(a1 + 80);
      v32 = *(_DWORD *)(a1 + 84);
      v31 = *(_DWORD *)(a1 + 88);
      v30 = *(_DWORD *)(a1 + 92);
      v39 = (_QWORD *)(a1 + 96);
      qmemcpy(v41, (const void *)(a1 + 128), sizeof(v41));
      v8 = *(_DWORD *)(a1 + 120);
      v9 = *(_DWORD *)(a1 + 124);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 88) = v8;
      *(_DWORD *)(a1 + 92) = v9;
      v29 = *(_DWORD *)(a1 + 220);
      v28 = *(_DWORD *)(a1 + 216);
      v10 = (_DWORD *)(a1 + 216);
      v38 = (int *)(a1 + 128);
      sub_8D2D0(a1, (int *)(a1 + 128), (int *)(a1 + 216), 0, 0, 0, 0, 0, 0);
      v11 = v32;
      v12 = v33;
      v4 = v13;
      *(_DWORD *)(a1 + 100) = 0;
      v14 = v31;
      *(_DWORD *)(a1 + 96) = v13 == 0;
      v15 = (_DWORD *)(a1 + 88);
      v16 = (_DWORD *)(a1 + 80);
      if ( !v4 )
      {
        v34 = (_DWORD *)(a1 + 88);
        v35 = (_QWORD *)(a1 + 80);
        while ( 1 )
        {
          sub_8D2D0(v7, nullptr, nullptr, (int)s1, 0x100u, 0, 0, 0, 0);
          if ( v17 )
            break;
          if ( v37 >= 2 )
          {
            v18 = s1;
            v19 = s2;
            while ( 1 )
            {
              v20 = *v19 - 32;
              if ( (unsigned __int8)(*v19 - 97) >= 0x1Au )
                v20 = *v19;
              v21 = (unsigned __int8)*v18 - 32;
              if ( (unsigned __int8)(*v18 - 97) >= 0x1Au )
                v21 = (unsigned __int8)*v18;
              if ( !(v21 << 24) )
                break;
              ++v18;
              ++v19;
              if ( (unsigned __int8)v21 > (unsigned int)v20
                || (unsigned __int8)(v20 - 1) >= (unsigned int)(unsigned __int8)v21 )
              {
                goto LABEL_23;
              }
            }
            v22 = -1;
            if ( !v20 )
              v22 = 0;
            if ( !v22 )
              return 0;
          }
          else if ( !strcmp(s1, s2) )
          {
            return 0;
          }
LABEL_23:
          if ( !*v39
            || (LODWORD(v23) = (unsigned __int64)(*v35 + 1LL) >> 32,
                HIDWORD(v23) = *(_DWORD *)v35 + 1,
                *(_QWORD *)(a1 + 56) != 0xFFFF)
            && v23 == __PAIR64__(*(_DWORD *)(a1 + 56), *(_DWORD *)(a1 + 60)) )
          {
            v4 = -100;
LABEL_30:
            v15 = (_DWORD *)(a1 + 88);
            v12 = v33;
            v11 = v32;
            v14 = v31;
            v10 = (_DWORD *)(a1 + 216);
            v16 = (_DWORD *)(a1 + 80);
            goto LABEL_31;
          }
          v24 = *(_DWORD *)(a1 + 168) + *(_DWORD *)(a1 + 172) + *(_DWORD *)(a1 + 176) + 46;
          v25 = __CFADD__(*v34, v24);
          *v34 += v24;
          *(_DWORD *)(a1 + 92) += v25;
          *(_DWORD *)v35 = HIDWORD(v23);
          *(_DWORD *)(a1 + 84) = v23;
          v7 = a1;
          sub_8D2D0(a1, v38, (int *)(a1 + 216), 0, 0, 0, 0, 0, 0);
          v4 = v26;
          *(_DWORD *)(a1 + 100) = 0;
          *(_DWORD *)v39 = v26 == 0;
          if ( v26 )
          {
            v12 = v33;
            v11 = v32;
            v14 = v31;
            v16 = (_DWORD *)(a1 + 80);
            v10 = (_DWORD *)(a1 + 216);
            v15 = (_DWORD *)(a1 + 88);
            goto LABEL_31;
          }
        }
        v4 = v17;
        goto LABEL_30;
      }
LABEL_31:
      *v16 = v12;
      v16[1] = v11;
      *v15 = v14;
      v15[1] = v30;
      qmemcpy(v38, v41, 0x58u);
      *v10 = v28;
      v10[1] = v29;
    }
    else
    {
      return -100;
    }
  }
  return v4;
}
// 8DD4C: variable 'v13' is possibly undefined
// 8DDA2: variable 'v17' is possibly undefined
// 8DE78: variable 'v26' is possibly undefined
