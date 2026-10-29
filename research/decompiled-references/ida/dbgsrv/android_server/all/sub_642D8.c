/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_642D8
// Address: 0x00000000000642D8

//----- (00000000000642D8) ----------------------------------------------------
__int64 __fastcall sub_642D8(pthread_mutex_t *a1, int *a2, char a3, signed int a4)
{
  __int64 v7; // x19
  __int64 v8; // x1
  __int64 v9; // x8
  char *v10; // x1
  unsigned int v11; // w0
  unsigned int v12; // w20
  __int64 v13; // x9
  const char *v14; // x1
  size_t v15; // x2
  char v16; // w8
  __int64 v17; // x21
  char v18; // w9
  char v19; // w22
  __int64 v20; // x8
  char *v21; // x1
  __int64 align; // x20
  __int64 v23; // x8
  _BYTE *v24; // x0
  pthread_mutex_t *v25; // x0
  __int64 v26; // x8
  size_t v27; // x20
  __int64 v28; // x22
  __int64 v29; // x8
  char *v30; // x1
  __int64 v32; // x9
  const char *v33; // x1
  size_t v34; // x2
  __int64 v35; // x8
  _BYTE *v36; // x0
  char v37; // w9
  unsigned int v38; // w0
  __int64 v39; // x8
  size_t v40; // x23
  int v41; // w8
  char v42; // w9
  char v43; // w10
  __int64 v44; // x8
  _BYTE *v45; // x0
  __int64 v46; // x8

  v7 = (__int64)a1;
  switch ( *a2 )
  {
    case 1:
      v20 = *((_QWORD *)a2 + 2);
      if ( *(_QWORD *)(v20 + 8) )
        v21 = *(char **)v20;
      else
        v21 = &byte_F154B;
      return sub_63A14((__int64)a1, v21, a3 & 1, a4);
    case 2:
      align = a1[5].__align;
      a1[5].__size[12] = -86;
      v23 = *(_QWORD *)(align + 8);
      if ( *(_QWORD *)(align + 16) >= (unsigned __int64)(v23 + 1) )
      {
        v24 = *(_BYTE **)align;
      }
      else
      {
        v24 = qvector_reserve((pthread_mutex_t *)align, *(void **)align, v23 + 1, 1u);
        v23 = *(_QWORD *)(align + 8);
        *(_QWORD *)align = v24;
      }
      v24[v23] = -86;
      ++*(_QWORD *)(align + 8);
      v25 = *(pthread_mutex_t **)(v7 + 200);
      ++*(_DWORD *)(v7 + 208);
      v26 = *((_QWORD *)a2 + 1);
      v27 = *(_QWORD *)(v26 + 8);
      sub_68D00(v25, *(const void **)v26, v27);
      *(_DWORD *)(v7 + 208) += v27;
      v28 = *((_QWORD *)a2 + 2);
      if ( *(_DWORD *)v28 == 5 )
      {
        v12 = sub_642D8(v7);
        v32 = *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL);
        if ( v32 )
          v33 = **(const char ***)(v28 + 8);
        else
          v33 = &byte_F154B;
        if ( v32 )
          v34 = v32 - 1;
        else
          v34 = 0;
        sub_5EC14(v7, v33, v34);
        v17 = *(_QWORD *)(v7 + 200);
        *(_BYTE *)(v7 + 212) = -9;
        v35 = *(_QWORD *)(v17 + 8);
        if ( *(_QWORD *)(v17 + 16) >= (unsigned __int64)(v35 + 1) )
        {
          v36 = *(_BYTE **)v17;
        }
        else
        {
          v36 = qvector_reserve((pthread_mutex_t *)v17, *(void **)v17, v35 + 1, 1u);
          v35 = *(_QWORD *)(v17 + 8);
          *(_QWORD *)v17 = v36;
        }
        v37 = -9;
        goto LABEL_61;
      }
      if ( *(_DWORD *)v28 != 1 )
      {
        v38 = sub_642D8(v7);
        v17 = *(_QWORD *)(v7 + 200);
        *(_BYTE *)(v7 + 212) = -92;
        v12 = v38;
        v35 = *(_QWORD *)(v17 + 8);
        if ( *(_QWORD *)(v17 + 16) >= (unsigned __int64)(v35 + 1) )
        {
          v36 = *(_BYTE **)v17;
        }
        else
        {
          v36 = qvector_reserve((pthread_mutex_t *)v17, *(void **)v17, v35 + 1, 1u);
          v35 = *(_QWORD *)(v17 + 8);
          *(_QWORD *)v17 = v36;
        }
        v37 = -92;
LABEL_61:
        v36[v35] = v37;
        goto LABEL_62;
      }
      v29 = *(_QWORD *)(v28 + 16);
      if ( *(_QWORD *)(v29 + 8) )
        v30 = *(char **)v29;
      else
        v30 = &byte_F154B;
      return sub_63E78(v7, v30, a2[6]);
    case 3:
    case 4:
      v8 = *((_QWORD *)a2 + 2);
      if ( (a3 & 1) != 0 && *(_DWORD *)v8 == 1 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( *(_QWORD *)(v9 + 8) )
          v10 = *(char **)v9;
        else
          v10 = &byte_F154B;
        v11 = sub_6467C((__int64)a1, v10);
      }
      else
      {
        v11 = sub_642D8(a1);
      }
      v39 = *((_QWORD *)a2 + 1);
      v12 = v11;
      v40 = *(_QWORD *)(v39 + 8);
      sub_68D00(*(pthread_mutex_t **)(v7 + 200), *(const void **)v39, v40);
      *(_DWORD *)(v7 + 208) += v40;
      v41 = *a2;
      v17 = *(_QWORD *)(v7 + 200);
      if ( (a3 & 1) != 0 )
        v42 = -5;
      else
        v42 = -4;
      if ( (a3 & 1) != 0 )
        v43 = -1;
      else
        v43 = -2;
      if ( v41 == 3 )
        v19 = v42;
      else
        v19 = v43;
      goto LABEL_55;
    case 5:
      v12 = sub_642D8(a1);
      v13 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
      if ( v13 )
        v14 = **((const char ***)a2 + 1);
      else
        v14 = &byte_F154B;
      if ( v13 )
        v15 = v13 - 1;
      else
        v15 = 0;
      sub_5EC14(v7, v14, v15);
      if ( (a3 & 1) != 0 )
        v16 = -13;
      else
        v16 = -14;
      v17 = *(_QWORD *)(v7 + 200);
      if ( a4 > 0 )
        v18 = -11;
      else
        v18 = -10;
      if ( a4 )
        v19 = v18;
      else
        v19 = v16;
LABEL_55:
      *(_BYTE *)(v7 + 212) = v19;
      v44 = *(_QWORD *)(v17 + 8);
      if ( *(_QWORD *)(v17 + 16) >= (unsigned __int64)(v44 + 1) )
      {
        *(_BYTE *)(*(_QWORD *)v17 + v44) = v19;
      }
      else
      {
        v45 = qvector_reserve((pthread_mutex_t *)v17, *(void **)v17, v44 + 1, 1u);
        v46 = *(_QWORD *)(v17 + 8);
        *(_QWORD *)v17 = v45;
        v45[v46] = v19;
      }
LABEL_62:
      ++*(_QWORD *)(v17 + 8);
      ++*(_DWORD *)(v7 + 208);
      return v12;
    default:
      if ( !under_debugger )
        a1 = interr(273);
      __break(1u);
      return sub_6467C((__int64)a1, (char *)a2);
  }
}
// 64679: variable 'a2' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
