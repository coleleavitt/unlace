/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63E5C
// Address: 0x00063E5C

//----- (00063E5C) --------------------------------------------------------
int __fastcall sub_63E5C(int a1, int a2, int a3, int a4, int a5, int (__fastcall ***a6)(int a1, int a2, int a3))
{
  int v10; // r1
  int (*v11)(); // r3
  int (*v12)(); // r2
  char v13; // r0
  int v14; // r4
  int v15; // r1
  int *v16; // r1
  int v17; // r0
  int *v18; // r1
  int (__fastcall **v19)(int, int, int); // r2
  unsigned int v20; // r0
  int (__fastcall *v21)(int, unsigned int); // r7
  int v22; // r3
  int (__fastcall *v23)(int, int); // r2
  int (__fastcall **v24)(int, int, int); // r0
  unsigned int v25; // r1
  int (__fastcall *v26)(int, unsigned int); // r4
  int v27; // r0
  int v29; // r0
  int *v30; // r1
  int (__fastcall *v31)(int, int, int); // r7
  int v32; // r0
  int (__fastcall **v33)(int, int, int); // r2
  int v34; // r3
  int v35; // r1
  int v36; // r1
  int v37; // r0
  int v38; // r1
  int *v39; // r1
  unsigned int v40; // r1
  int (__fastcall **v41)(int, int, int); // r0
  int (__fastcall *v42)(int, int); // r3
  int (__fastcall **v43)(int, int, int); // r0
  int v44; // r0
  int *v45; // r0
  int v46; // r7
  int v47; // r3
  size_t v48; // r8
  void *v49; // r9
  void *v50; // r0
  unsigned int v51; // r1
  int (__fastcall *v52)(int, unsigned int); // r2
  void *v53; // r0
  size_t v54; // r8
  void *v55; // r0
  int v56; // [sp+14h] [bp-10h]
  int v57; // [sp+18h] [bp-Ch] BYREF

  v10 = _stack_chk_guard;
  v11 = (int (*)())(*a6)[5];
  v12 = sub_63B60;
  if ( v11 == sub_63B60 )
    v13 = 0;
  else
    v13 = ((int (__fastcall *)(_DWORD, int, int))v11)(a6, a1, a2);
  *(_BYTE *)a4 = v13;
  v14 = a1 + 24 * a2;
  v56 = a1 + 24 * (a2 + 1);
  switch ( *(_BYTE *)(v14 + 25) )
  {
    case 1:
      v29 = *(unsigned __int16 *)(v14 + 30);
      if ( (unsigned int)(v29 - 61) > 0x1F && (unsigned int)(v29 - 163) > 0x1F )
      {
        if ( v29 == 160 )
        {
          v18 = *(int **)(a4 + 4);
          v17 = 0;
        }
        else
        {
          v17 = (int)sub_63D50(a3, *(unsigned __int16 *)(v14 + 30), a5, (int)a6);
          v18 = *(int **)(a4 + 4);
        }
        goto LABEL_9;
      }
      v30 = sub_63D10(v29, v10, (int)v12);
      if ( v30 )
      {
        v31 = **a6;
        if ( v31 == sub_63CC0 )
        {
          v32 = (*((int (__fastcall **)(_DWORD *, int *, _DWORD))*a6[1] + 61))(a6[1], v30, 0);
          if ( v32 < 0 )
            goto LABEL_31;
          v33 = a6[1];
          v34 = (int)v33[87];
          if ( !v34 )
            v34 = (int)v33[99];
          if ( v32 >= v34 )
          {
LABEL_31:
            if ( under_debugger )
              __und(0xFFu);
            sub_78C64(30182);
          }
          v46 = a5 + 24 * v32;
        }
        else
        {
          v46 = v31((int)a6, (int)v30, a5);
        }
        *(_DWORD *)(a4 + 32) = -1431655765 * ((v46 - a5) >> 3);
        v47 = *(_DWORD *)(a4 + 8);
        if ( v46 != a4 + 8 )
        {
          if ( *(int *)v46 < -1 )
          {
            if ( v47 >= -1 )
            {
              v53 = *(void **)(a4 + 16);
              if ( v53 )
              {
                *(_DWORD *)(a4 + 20) = 0;
                sub_77F70(v53);
              }
            }
            *(_QWORD *)(a4 + 16) = *(_QWORD *)(v46 + 8);
          }
          else if ( v47 < -1 )
          {
            *(_DWORD *)(a4 + 24) = 0;
            *(_DWORD *)(a4 + 16) = 0;
            *(_DWORD *)(a4 + 20) = 0;
            v54 = *(_DWORD *)(v46 + 12);
            if ( v54 )
            {
              v55 = sub_77FEC(*(_DWORD *)(v46 + 12));
              *(_DWORD *)(a4 + 24) = v54;
              *(_DWORD *)(a4 + 16) = v55;
              memcpy(v55, *(const void **)(v46 + 8), v54);
              *(_DWORD *)(a4 + 20) = v54;
            }
          }
          else
          {
            v48 = *(_DWORD *)(v46 + 12);
            v49 = (void *)v48;
            if ( v48 )
            {
              v49 = sub_77FEC(*(_DWORD *)(v46 + 12));
              memcpy(v49, *(const void **)(v46 + 8), v48);
            }
            v50 = *(void **)(a4 + 16);
            if ( v50 )
            {
              *(_DWORD *)(a4 + 20) = 0;
              sub_77F70(v50);
            }
            *(_DWORD *)(a4 + 16) = v49;
            *(_DWORD *)(a4 + 20) = v48;
            *(_DWORD *)(a4 + 24) = v48;
          }
          v47 = *(_DWORD *)v46;
          *(_DWORD *)(a4 + 8) = *(_DWORD *)v46;
        }
        if ( v47 >= 0 )
        {
          v51 = *(unsigned __int8 *)(v14 + 29);
          v52 = (int (__fastcall *)(int, unsigned int))(*a6)[4];
          if ( v52 == sub_63C54 )
          {
            if ( v51 <= 0x12 )
              v27 = dword_9F57C[v51];
            else
              v27 = 0;
          }
          else
          {
            v27 = v52((int)a6, v51);
          }
          goto LABEL_21;
        }
      }
      return 0;
    case 2:
    case 7:
      v17 = 0;
      v18 = *(int **)(a1 + 24 * a2 + 36);
      *(_DWORD *)(a4 + 4) = v18;
      goto LABEL_9;
    case 3:
      v36 = *(unsigned __int16 *)(v14 + 30);
      if ( v36 == 160 )
      {
        v18 = nullptr;
        *(_DWORD *)(a4 + 4) = 0;
        v37 = *(_DWORD *)(a1 + 16);
        if ( (v37 & 0x80) != 0 )
          goto LABEL_10;
      }
      else
      {
        v18 = sub_63D50(a3, v36, a5, (int)a6);
        *(_DWORD *)(a4 + 4) = v18;
        v37 = *(_DWORD *)(a1 + 16);
        if ( (v37 & 0x80) != 0 )
          goto LABEL_55;
      }
      v38 = *(unsigned __int8 *)(a1 + 24 * a2 + 44);
      if ( v38 == 160 )
      {
        v39 = nullptr;
      }
      else
      {
        v39 = sub_63D50(a3, v38, a5, (int)a6);
        v37 = *(_DWORD *)(a1 + 16);
      }
      v40 = sub_63DDC(v37, (int)v39, a3, v56, a5, (int)a6);
      if ( (*(_DWORD *)(a1 + 16) & 0x10) != 0 )
        v40 = -v40;
      v17 = 0;
      v18 = (int *)(v40 + *(_DWORD *)(a4 + 4));
      *(_DWORD *)(a4 + 4) = v18;
      goto LABEL_9;
    case 4:
      v35 = *(unsigned __int16 *)(v14 + 30);
      if ( v35 == 160 )
      {
        *(_DWORD *)(a4 + 4) = 0;
        v18 = (int *)(*(_DWORD *)(a1 + 16) & 0x80);
        if ( v18 )
        {
          v18 = nullptr;
          goto LABEL_10;
        }
        goto LABEL_37;
      }
      v45 = sub_63D50(a3, v35, a5, (int)a6);
      *(_DWORD *)(a4 + 4) = v45;
      v18 = v45;
      if ( (*(_DWORD *)(a1 + 16) & 0x80) == 0 )
      {
LABEL_37:
        v17 = 0;
        v18 = (int *)((char *)v18 + *(_DWORD *)(a1 + 24 * a2 + 36));
        *(_DWORD *)(a4 + 4) = v18;
        goto LABEL_9;
      }
LABEL_55:
      v17 = 0;
LABEL_9:
      if ( v18 == (int *)-1 )
        goto LABEL_17;
LABEL_10:
      v19 = *a6;
      v20 = *(unsigned __int8 *)(v14 + 29);
      v21 = (int (__fastcall *)(int, unsigned int))(*a6)[4];
      if ( v21 == sub_63C54 )
      {
        if ( v20 > 0x12 )
          goto LABEL_51;
        v22 = dword_9F57C[v20];
      }
      else
      {
        v44 = v21((int)a6, *(unsigned __int8 *)(v14 + 29));
        v19 = *a6;
        v22 = v44;
        v18 = *(int **)(a4 + 4);
      }
      if ( v22 == 1 )
      {
        v23 = (int (__fastcall *)(int, int))v19[1];
        if ( v23 == sub_63B7C )
        {
          v41 = a6[1];
          LOBYTE(v57) = -1;
          (*((void (__fastcall **)(int (__fastcall **)(int, int, int), int *, int *))*v41 + 36))(v41, v18, &v57);
          v17 = (unsigned __int8)v57;
          goto LABEL_17;
        }
        goto LABEL_58;
      }
      if ( v22 == 2 )
      {
        v23 = (int (__fastcall *)(int, int))v19[2];
        if ( v23 == sub_63BC4 )
        {
          v24 = a6[1];
          LOWORD(v57) = -1;
          (*((void (__fastcall **)(int (__fastcall **)(int, int, int)))*v24 + 36))(v24);
          v17 = 0xFFFF;
          goto LABEL_17;
        }
LABEL_58:
        v17 = v23((int)a6, (int)v18);
        goto LABEL_17;
      }
LABEL_51:
      v42 = (int (__fastcall *)(int, int))v19[3];
      if ( v42 == sub_63C0C )
      {
        v43 = a6[1];
        v57 = -1;
        (*((void (__fastcall **)(int (__fastcall **)(int, int, int), int *, int *, int, _DWORD))*v43 + 36))(
          v43,
          v18,
          &v57,
          4,
          0);
        v17 = v57;
      }
      else
      {
        v17 = v42((int)a6, (int)v18);
      }
LABEL_17:
      *(_DWORD *)(a4 + 16) = v17;
      *(_DWORD *)(a4 + 20) = 0;
      v25 = *(unsigned __int8 *)(v14 + 29);
      v26 = (int (__fastcall *)(int, unsigned int))(*a6)[4];
      if ( v26 == sub_63C54 )
      {
        if ( v25 <= 0x12 )
          v27 = dword_9F57C[v25];
        else
          v27 = 0;
      }
      else
      {
        v27 = v26((int)a6, v25);
      }
LABEL_21:
      *(_DWORD *)(a4 + 36) = v27;
      return 1;
    case 5:
      v18 = *(int **)(a4 + 4);
      v17 = *(_DWORD *)(a1 + 24 * a2 + 32);
      goto LABEL_9;
    case 8:
      v15 = *(unsigned __int16 *)(v14 + 30);
      if ( v15 == 160 )
        v16 = nullptr;
      else
        v16 = sub_63D50(a3, v15, a5, (int)a6);
      v17 = sub_63DDC(*(_DWORD *)(a1 + 16), (int)v16, a3, v56, a5, (int)a6);
      v18 = *(int **)(a4 + 4);
      goto LABEL_9;
    default:
      return 0;
  }
}
// 63FAA: variable 'v10' is possibly undefined
// 63FAA: variable 'v12' is possibly undefined
// 9F57C: using guessed type int dword_9F57C[7];
// D6C20: using guessed type char under_debugger;
