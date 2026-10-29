/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C6F4
// Address: 0x0003C6F4

//----- (0003C6F4) --------------------------------------------------------
int __fastcall sub_3C6F4(int a1, char *a2, signed int a3)
{
  int v6; // r7
  int v7; // r5
  int v8; // r1
  _BYTE *v9; // r0
  int v10; // r0
  _DWORD *v11; // r7
  int v12; // r3
  int v13; // r5
  int v14; // r1
  _BYTE *v15; // r0
  char **v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r1
  signed int v21; // r4
  int v22; // r1
  signed int v23; // r0
  char *v24; // r5
  int v25; // r7
  _DWORD *v26; // r0
  int v27; // r1
  signed int v28; // r0
  char *v29; // r5
  unsigned int v30; // r0
  char **v31; // r0
  int (__fastcall ***v32)(_DWORD, char *); // r0
  unsigned int v33; // r5
  int *v34; // r3
  _BYTE *v35; // r6
  int v36; // r5
  int v37; // r1
  _BYTE *v38; // r0
  char **v39; // r0
  int v41; // r5
  int v42; // r1
  _BYTE *v43; // r0
  __int16 v44; // [sp+4h] [bp-24h]
  int v45; // [sp+8h] [bp-20h]
  signed int v46; // [sp+Ch] [bp-1Ch]
  signed int v47; // [sp+Ch] [bp-1Ch]
  const char *v48; // [sp+10h] [bp-18h]
  int v49; // [sp+18h] [bp-10h] BYREF
  char v50[4]; // [sp+1Ch] [bp-Ch] BYREF
  char v51[4]; // [sp+20h] [bp-8h] BYREF

  sub_3B468((_DWORD *)a1, a2, &v49);
  if ( (unsigned int)(v49 - 1) < 3 )
  {
    v6 = sub_3C3E4(a1, a2, 0, 0);
    if ( !v6 )
    {
      *(_BYTE *)(a1 + 120) = -92;
      v7 = *(_DWORD *)(a1 + 112);
      v8 = *(_DWORD *)(v7 + 4);
      if ( *(_DWORD *)(v7 + 8) >= (unsigned int)(v8 + 1) )
      {
        v9 = *(_BYTE **)v7;
      }
      else
      {
        v9 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v7, v8 + 1, 1u);
        *(_DWORD *)v7 = v9;
        v8 = *(_DWORD *)(v7 + 4);
      }
      v9[v8] = -92;
      ++*(_DWORD *)(v7 + 4);
      ++*(_DWORD *)(a1 + 116);
      return 0;
    }
    return v6;
  }
  if ( v49 != 5 )
  {
    v16 = sub_40BBC(a2);
    if ( v16 )
    {
      if ( *(_BYTE *)(a1 + 248) || ((_BYTE)v16[5] & 4) != 0 )
      {
        v6 = 0;
        sub_39282(a1, 0, (unsigned __int16)(-21845 * ((unsigned int)((char *)v16 - (char *)off_DD610) >> 3)));
        return v6;
      }
      set_error_string(0, *v16);
      v17 = 143;
      return set_qerrno(v17);
    }
    v47 = a3;
    v48 = a2;
    v25 = sub_40994(*(_DWORD **)(a1 + 64), a2);
    if ( v25 == -1 )
    {
      v32 = *(int (__fastcall ****)(_DWORD, char *))(a1 + 228);
      if ( v32 && (v33 = (**v32)(v32, a2), v33 != -1) && (get_aflags() & 0x800) != 0 )
      {
        sub_3936C(a1, v33);
        v34 = (int *)(a1 + 112);
        v35 = (_BYTE *)(a1 + 120);
      }
      else
      {
        sub_39160(a1, v48, 0);
        *(_BYTE *)(a1 + 120) = -82;
        v34 = (int *)(a1 + 112);
        v35 = (_BYTE *)(a1 + 120);
        v36 = *(_DWORD *)(a1 + 112);
        v37 = *(_DWORD *)(v36 + 4);
        if ( *(_DWORD *)(v36 + 8) >= (unsigned int)(v37 + 1) )
        {
          v38 = *(_BYTE **)v36;
        }
        else
        {
          v38 = qvector_reserve(v36, *(void **)v36, v37 + 1, 1u);
          v34 = (int *)(a1 + 112);
          *(_DWORD *)v36 = v38;
          v37 = *(_DWORD *)(v36 + 4);
        }
        v38[v37] = -82;
        ++*(_DWORD *)(v36 + 4);
        ++*(_DWORD *)(a1 + 116);
      }
      *v35 = -92;
      v41 = *v34;
      v42 = *(_DWORD *)(*v34 + 4);
      if ( *(_DWORD *)(*v34 + 8) >= (unsigned int)(v42 + 1) )
      {
        v43 = *(_BYTE **)v41;
      }
      else
      {
        v43 = qvector_reserve(v41, *(void **)v41, v42 + 1, 1u);
        *(_DWORD *)v41 = v43;
        v42 = *(_DWORD *)(v41 + 4);
      }
      v43[v42] = -92;
      ++*(_DWORD *)(v41 + 4);
      ++*(_DWORD *)(a1 + 116);
    }
    else
    {
      v26 = *(_DWORD **)(a1 + 64);
      v51[0] = 0;
      if ( v25 < 0 )
      {
        if ( dword_DD60C <= (unsigned int)-v25 )
          goto LABEL_47;
        v39 = &off_DD610[-6 * v25];
        v29 = v39[4];
        v28 = sub_41A04(v39[2], v51);
      }
      else
      {
        if ( v25 == 0x7FFFFFFF || v26[1] <= (unsigned int)v25 )
          goto LABEL_47;
        v27 = *(_DWORD *)(*v26 + 4 * v25);
        v28 = *(_DWORD *)(v27 + 12);
        v29 = *(char **)(v27 + 36);
      }
      if ( (int)&v29[v47] < v28 || v28 < v47 && !v51[0] )
        goto LABEL_47;
      sub_39282(a1, 0x10u, (unsigned __int16)v25);
    }
    return 0;
  }
  v46 = a3;
  v48 = a2;
  v10 = sub_41100(*(_DWORD *)(a1 + 64), a2);
  if ( !v10 )
  {
    if ( !under_debugger )
      interr(272);
    __debugbreak();
  }
  v45 = v10;
  v11 = (_DWORD *)v10;
  v12 = *(_DWORD *)(v10 + 16);
  *(_BYTE *)(a1 + 120) = -16;
  v13 = *(_DWORD *)(a1 + 112);
  v14 = *(_DWORD *)(v13 + 4);
  if ( *(_DWORD *)(v13 + 8) >= (unsigned int)(v14 + 1) )
  {
    v15 = *(_BYTE **)v13;
  }
  else
  {
    v44 = v12;
    v15 = qvector_reserve(v13, *(void **)v13, v14 + 1, 1u);
    LOWORD(v12) = v44;
    *(_DWORD *)v13 = v15;
    v14 = *(_DWORD *)(v13 + 4);
  }
  v15[v14] = -16;
  ++*(_DWORD *)(v13 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_390C4(a1, (unsigned __int16)v12);
  v18 = sub_463A8(v11, v45 + 20);
  if ( v18 != -1 )
  {
LABEL_20:
    v20 = *(_DWORD **)(a1 + 64);
    v6 = 0;
    v50[0] = 0;
    v21 = v46 + 1;
    if ( v18 < 0 )
    {
      v30 = -v18;
      if ( dword_DD60C > v30 )
      {
        v31 = &off_DD610[6 * v30];
        v24 = v31[4];
        v23 = sub_41A04(v31[2], v50);
        goto LABEL_31;
      }
    }
    else if ( v18 != 0x7FFFFFFF && v20[1] > (unsigned int)v18 )
    {
      v22 = *(_DWORD *)(*v20 + 4 * v18);
      v23 = *(_DWORD *)(v22 + 12);
      v24 = *(char **)(v22 + 36);
LABEL_31:
      if ( (int)&v24[v21] >= v23 && (v23 >= v21 || v50[0]) )
        return v6;
    }
LABEL_47:
    set_error_string(0, v48);
    v17 = 56;
    return set_qerrno(v17);
  }
  while ( 1 )
  {
    v19 = v11[3];
    if ( !v19 )
      break;
    v11 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 64) + 40) + 4 * v19);
    v18 = sub_463A8(v11, (int)(v11 + 5));
    if ( v18 != -1 )
      goto LABEL_20;
  }
  v6 = 0;
  if ( v46 )
    goto LABEL_47;
  return v6;
}
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// E0550: using guessed type char under_debugger;
