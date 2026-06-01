/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C5A0
// Address: 0x0004C5A0

//----- (0004C5A0) --------------------------------------------------------
int __cdecl sub_4C5A0(int a1, char *s2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // ecx
  _BYTE *v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  _BYTE *v12; // eax
  char **v13; // eax
  int i; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // ecx
  char *v20; // esi
  int v21; // eax
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // eax
  char *v26; // edi
  unsigned int v27; // eax
  int v28; // eax
  int (__cdecl ***v29)(_DWORD, char *); // eax
  int v30; // eax
  unsigned int v31; // esi
  int v32; // esi
  int v33; // ecx
  _BYTE *v34; // eax
  _BYTE *v35; // edx
  int *v36; // eax
  __int16 v37; // [esp+Ch] [ebp-20h]
  int v38; // [esp+10h] [ebp-1Ch] BYREF
  char v39[22]; // [esp+16h] [ebp-16h] BYREF

  *(_DWORD *)&v39[2] = __readgsdword(0x14u);
  sub_4A890((_DWORD *)a1, s2, &v38);
  if ( (unsigned int)(v38 - 1) >= 3 )
  {
    if ( v38 == 5 )
    {
      v7 = sub_53AE0(*(_DWORD *)(a1 + 60), s2);
      if ( !v7 )
      {
        if ( !(_BYTE)under_debugger )
          interr(272);
        BUG();
      }
      v8 = (_DWORD *)v7;
      v9 = *(_DWORD *)(v7 + 16);
      *(_BYTE *)(a1 + 116) = -16;
      v10 = *(_DWORD *)(a1 + 108);
      v11 = *(_DWORD *)(v10 + 4);
      if ( *(_DWORD *)(v10 + 8) >= (unsigned int)(v11 + 1) )
      {
        v12 = *(_BYTE **)v10;
      }
      else
      {
        v37 = v9;
        v12 = qvector_reserve(v10, *(void **)v10, v11 + 1, 1u);
        LOWORD(v9) = v37;
        *(_DWORD *)v10 = v12;
        v11 = *(_DWORD *)(v10 + 4);
      }
      v12[v11] = -16;
      ++*(_DWORD *)(v10 + 4);
      ++*(_DWORD *)(a1 + 112);
      sub_46F00(a1, v9);
      for ( i = (int)(v8 + 5); ; i = (int)(v8 + 5) )
      {
        v15 = sub_5C350(v8, i);
        if ( v15 != -1 )
          break;
        v16 = v8[3];
        if ( !v16 )
        {
          if ( a3 )
            goto LABEL_50;
          return 0;
        }
        v8 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 60) + 36) + 4 * v16);
      }
      v17 = *(_DWORD **)(a1 + 60);
      v39[0] = 0;
      if ( v15 < 0 )
      {
        v27 = -v15;
        if ( (unsigned int)off_13B614 <= v27 )
          goto LABEL_50;
        v28 = 3 * v27;
        v20 = off_13B618[2 * v28 + 4];
        v19 = sub_549D0(off_13B618[2 * v28 + 2], v39);
      }
      else
      {
        if ( v15 == 0x7FFFFFFF || v17[1] <= (unsigned int)v15 )
          goto LABEL_50;
        v18 = *(_DWORD *)(*v17 + 4 * v15);
        v19 = *(_DWORD *)(v18 + 12);
        v20 = *(char **)(v18 + 36);
      }
      if ( (int)&v20[a3 + 1] < v19 )
        goto LABEL_50;
      result = 0;
      if ( v19 < a3 + 1 && !v39[0] )
        goto LABEL_50;
      return result;
    }
    v13 = sub_531C0(s2);
    if ( v13 )
    {
      if ( !*(_BYTE *)(a1 + 244) && ((_BYTE)v13[5] & 4) == 0 )
      {
        set_error_string(0, *v13);
        return set_qerrno(143);
      }
      sub_471B0(a1, 0, -21845 * ((unsigned int)((char *)v13 - (char *)off_13B618) >> 3));
      return 0;
    }
    v21 = sub_52E30(*(_DWORD **)(a1 + 60), s2);
    if ( v21 == -1 )
    {
      v29 = *(int (__cdecl ****)(_DWORD, char *))(a1 + 224);
      if ( v29 && (v30 = (**v29)(v29, s2), v30 != -1) && (v31 = v30, (get_aflags() & 0x800) != 0) )
      {
        sub_472F0(a1, v31);
        v35 = (_BYTE *)(a1 + 116);
        v36 = (int *)(a1 + 108);
      }
      else
      {
        sub_47000(a1, s2, 0);
        *(_BYTE *)(a1 + 116) = -82;
        v32 = *(_DWORD *)(a1 + 108);
        v33 = *(_DWORD *)(v32 + 4);
        if ( *(_DWORD *)(v32 + 8) >= (unsigned int)(v33 + 1) )
        {
          v34 = *(_BYTE **)v32;
        }
        else
        {
          v34 = qvector_reserve(v32, *(void **)v32, v33 + 1, 1u);
          *(_DWORD *)v32 = v34;
          v33 = *(_DWORD *)(v32 + 4);
        }
        v35 = (_BYTE *)(a1 + 116);
        v34[v33] = -82;
        ++*(_DWORD *)(v32 + 4);
        ++*(_DWORD *)(a1 + 112);
        v36 = (int *)(a1 + 108);
      }
      *v35 = -92;
      v4 = *v36;
      goto LABEL_4;
    }
    v22 = v21;
    v23 = *(_DWORD **)(a1 + 60);
    v39[1] = 0;
    if ( v22 < 0 )
    {
      if ( (unsigned int)off_13B614 > -v22 )
      {
        v26 = off_13B618[-6 * v22 + 4];
        v25 = sub_549D0(off_13B618[-6 * v22 + 2], &v39[1]);
        goto LABEL_47;
      }
    }
    else if ( v22 != 0x7FFFFFFF && v23[1] > (unsigned int)v22 )
    {
      v24 = *(_DWORD *)(*v23 + 4 * v22);
      v25 = *(_DWORD *)(v24 + 12);
      v26 = *(char **)(v24 + 36);
LABEL_47:
      if ( (int)&v26[a3] >= v25 && (v25 >= a3 || v39[1]) )
      {
        sub_471B0(a1, 0x10u, v22);
        return 0;
      }
    }
LABEL_50:
    set_error_string(0, s2);
    return set_qerrno(56);
  }
  result = sub_4C1F0(a1, s2, 0, 0);
  if ( !result )
  {
    *(_BYTE *)(a1 + 116) = -92;
    v4 = *(_DWORD *)(a1 + 108);
LABEL_4:
    v5 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
    {
      v6 = *(_BYTE **)v4;
    }
    else
    {
      v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
      *(_DWORD *)v4 = v6;
      v5 = *(_DWORD *)(v4 + 4);
    }
    v6[v5] = -92;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 112);
    return 0;
  }
  return result;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13E34C: using guessed type int under_debugger;
