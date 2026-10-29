/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_588BC
// Address: 0x000588BC

//----- (000588BC) --------------------------------------------------------
int __fastcall sub_588BC(int a1, int a2, int a3, signed int a4, _DWORD **a5)
{
  __int64 v6; // r6
  unsigned int v8; // r12
  int v9; // r11
  _BOOL4 v10; // r3
  bool v11; // zf
  __int64 v12; // r8
  bool v13; // cc
  int v14; // r8
  __int64 v15; // r0
  int v16; // r7
  char *v17; // r6
  _BOOL4 v18; // r1
  int v19; // r3
  char *v20; // r1
  int v21; // r0
  char *v22; // r0
  int v23; // r2
  int v24; // r9
  int v25; // r10
  unsigned int v26; // r11
  int v27; // r12
  int v28; // r0
  unsigned int v29; // r3
  unsigned int v30; // r1
  int v31; // r3
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r7
  int v36; // r2
  int v37; // r3
  char *v38; // r1
  _DWORD *v39; // r6
  unsigned int v40; // r2
  int v41; // r7
  char *v42; // r2
  int v43; // r3
  int v44; // r0
  int (*v45)(); // r2
  int v47; // r1
  char *v48; // r0
  unsigned __int8 v49; // r3
  int v50; // r7
  int v51; // r6
  int v52; // r3
  int v53; // r2
  int v54; // r3
  int v55; // r3
  _DWORD *v56; // r5
  signed int v57; // [sp+0h] [bp-4Ch]
  int v58; // [sp+4h] [bp-48h]
  __int64 v59; // [sp+8h] [bp-44h]
  const char *v60; // [sp+10h] [bp-3Ch]
  _BOOL4 v61; // [sp+1Ch] [bp-30h]
  int v63; // [sp+28h] [bp-24h]
  void *ptr; // [sp+38h] [bp-14h] BYREF
  int v65; // [sp+3Ch] [bp-10h]
  unsigned int v66; // [sp+40h] [bp-Ch]

  v6 = a3;
  v8 = *(_DWORD *)(a1 + 112);
  v9 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 8) = 0;
  v10 = v9 == v8;
  ptr = nullptr;
  v65 = 0;
  if ( v8 >= 0x1000 )
    v10 = 0;
  v66 = 0;
  v61 = v10;
  sub_74D98(a2, a3, 0);
  v11 = HIDWORD(v6) == -1;
  if ( HIDWORD(v6) == -1 )
    v11 = (_DWORD)v6 == -1;
  if ( v11 )
  {
    LODWORD(v6) = sub_74D98(a2, 0, 1);
    HIDWORD(v6) = v47;
  }
  v12 = sub_74D78(a2) - v6;
  v13 = v6 < 0;
  if ( v6 >= 0 )
    v13 = v12 < 0;
  if ( v13 )
  {
    v14 = 0;
    v15 = 0;
  }
  else
  {
    if ( (!a4 || is_mul_ok(0x28u, a4)) && v12 >= (unsigned int)(40 * a4) )
    {
      v14 = a4;
      goto LABEL_16;
    }
    v14 = v12 / 40;
    v15 = v14;
  }
  v59 = v15;
  v60 = ". Do you want to continue with the new value?";
  v57 = a4;
  v58 = a4 >> 31;
  if ( sub_23570(
         1,
         (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
         (int)"Number of sections",
         a4 >> 31) != 1 )
    sub_2A028(0);
LABEL_16:
  if ( v14 <= 0 )
  {
LABEL_27:
    if ( v61 )
    {
      v45 = (int (*)())(*a5)[1];
      if ( v45 == sub_5797C )
        goto LABEL_58;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 56) != 23126 )
        goto LABEL_29;
      v45 = (int (*)())(*a5)[1];
      if ( v45 == sub_5797C )
        goto LABEL_29;
    }
    v35 = ((int (__fastcall *)(_DWORD **))v45)(a5);
    if ( v35 )
      goto LABEL_62;
    if ( !v61 )
    {
LABEL_29:
      v23 = 512;
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 148) - 10 > 3 )
        goto LABEL_30;
      goto LABEL_59;
    }
LABEL_58:
    v23 = *(_DWORD *)(a1 + 116);
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 148) - 10 > 3 )
    {
LABEL_30:
      if ( *(_DWORD *)(a1 + 56) != 23126 )
      {
        if ( v14 > 0 )
        {
          v63 = -v23;
LABEL_33:
          v24 = 0;
          v25 = 0;
          v26 = 0;
          while ( 1 )
          {
            v37 = *(_DWORD *)(a1 + 8);
            v38 = *(char **)(a1 + 4);
            v39 = (char *)ptr + v24;
            v40 = v37 + 1;
            v41 = *(_DWORD *)((_BYTE *)ptr + v24 + 20) & v63;
            if ( (unsigned int)(v37 + 1) > *(_DWORD *)(a1 + 12) )
            {
              v48 = (char *)sub_78018(a1 + 4, v38, v40, 0x10u);
              v37 = *(_DWORD *)(a1 + 8);
              v38 = v48;
              *(_DWORD *)(a1 + 4) = v48;
              v40 = v37 + 1;
            }
            *(_DWORD *)(a1 + 8) = v40;
            v42 = &v38[16 * v37];
            *(_DWORD *)v42 = v39[3];
            v43 = v39[2];
            v30 = v39[4];
            v44 = *(_DWORD *)(a1 + 112);
            if ( v43 )
            {
              if ( !v44 )
              {
                v27 = 0;
                v28 = -1;
                goto LABEL_36;
              }
            }
            else
            {
              if ( !v44 )
                goto LABEL_38;
              v43 = v39[4];
            }
            v27 = v44 - 1;
            v28 = -v44;
LABEL_36:
            v29 = (v43 + v27) & v28;
            if ( v30 >= v29 )
              v30 = v29;
LABEL_38:
            *((_DWORD *)v42 + 3) = v30;
            v31 = v39[3] + v30;
            if ( (unsigned int)*(unsigned __int16 *)(a1 + 148) - 10 > 3 )
            {
              if ( *(_DWORD *)(a1 + 112) == 4096 || (v32 = *(_DWORD *)(a1 + 116)) == 0 )
              {
                v34 = -512;
                v33 = 511;
              }
              else
              {
                v33 = v32 - 1;
                v34 = -v32;
              }
              v31 = (v31 + v33) & v34;
            }
            *((_DWORD *)v42 + 1) = v31;
            *((_DWORD *)v42 + 2) = v41;
            if ( *(_DWORD *)(a1 + 56) == 23126 )
              *((_DWORD *)v42 + 2) = 40 - *(unsigned __int16 *)(a1 + 22) + v41;
            v35 = ((int (__fastcall *)(_DWORD **, _DWORD *, int, _DWORD, signed int, int, _DWORD, _DWORD, const char *))**a5)(
                    a5,
                    v39,
                    v41,
                    **a5,
                    v57,
                    v58,
                    v59,
                    HIDWORD(v59),
                    v60);
            if ( v35 )
              goto LABEL_62;
            ++v25;
            v24 += 40;
            v36 = v26;
            if ( v26 < v39[3] + v39[2] )
              v36 = v39[3] + v39[2];
            v26 = v36;
            if ( v25 >= v14 )
              goto LABEL_71;
          }
        }
LABEL_73:
        v49 = v61;
        if ( !v14 )
          v49 = v61 | 1;
        v35 = v49;
        if ( v49 )
        {
          v50 = sub_74D78(a2);
          v51 = *(_DWORD *)(a1 + 136);
          if ( (unsigned int)*(unsigned __int16 *)(a1 + 148) - 10 > 3 )
          {
            if ( *(_DWORD *)(a1 + 112) == 4096 || (v52 = *(_DWORD *)(a1 + 116)) == 0 )
            {
              v54 = -512;
              v53 = 511;
            }
            else
            {
              v53 = v52 - 1;
              v54 = -v52;
            }
            v51 = (v51 + v53) & v54;
          }
          v55 = *(_DWORD *)(a1 + 8);
          v56 = *(_DWORD **)(a1 + 4);
          if ( (unsigned int)(v55 + 1) > *(_DWORD *)(a1 + 12) )
          {
            v56 = sub_78018(a1 + 4, *(void **)(a1 + 4), v55 + 1, 0x10u);
            v55 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 4) = v56;
          }
          memmove(v56 + 4, v56, 16 * v55);
          v56[3] = v50;
          v56[1] = v51;
          v35 = 0;
          *v56 = 0;
          v56[2] = 0;
          ++*(_DWORD *)(a1 + 8);
        }
        goto LABEL_62;
      }
      if ( v14 <= 0 )
      {
        v26 = 0;
LABEL_72:
        *(_DWORD *)(a1 + 136) = v26;
        goto LABEL_73;
      }
      goto LABEL_60;
    }
LABEL_59:
    if ( v14 <= 0 )
    {
      v26 = 0;
LABEL_71:
      if ( *(_DWORD *)(a1 + 56) != 23126 )
        goto LABEL_73;
      goto LABEL_72;
    }
LABEL_60:
    v63 = -1;
    goto LABEL_33;
  }
  v16 = 0;
  while ( 1 )
  {
    v19 = v65;
    v20 = (char *)ptr;
    v21 = v65 + 1;
    if ( v65 + 1 > v66 )
    {
      v22 = (char *)sub_78018((int)&ptr, ptr, v65 + 1, 0x28u);
      v19 = v65;
      v20 = v22;
      ptr = v22;
      v21 = v65 + 1;
    }
    v65 = v21;
    v17 = &v20[40 * v19];
    if ( sub_74B94(a2, v17, 40) != 40 )
      break;
    if ( *((_DWORD *)v17 + 3) == *((_DWORD *)v17 + 5) )
    {
      v18 = v61;
      if ( *((_DWORD *)v17 + 2) > *((_DWORD *)v17 + 4) )
        v18 = 0;
      v61 = v18;
    }
    else
    {
      v61 = 0;
    }
    if ( ++v16 == v14 )
      goto LABEL_27;
  }
  v35 = -1;
LABEL_62:
  if ( ptr )
  {
    v65 = 0;
    sub_77F70(ptr);
  }
  return v35;
}
// 58B90: variable 'v47' is possibly undefined
// 58AC2: variable 'v57' is possibly undefined
// 58AC2: variable 'v58' is possibly undefined
// 58AC2: variable 'v59' is possibly undefined
// 58AC2: variable 'v60' is possibly undefined
