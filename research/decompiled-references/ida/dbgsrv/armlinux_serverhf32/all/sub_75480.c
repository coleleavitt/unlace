/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75480
// Address: 0x00075480

//----- (00075480) --------------------------------------------------------
int __fastcall sub_75480(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int v4; // r9
  int v6; // r0
  unsigned __int8 *v7; // r6
  int v8; // r7
  unsigned int v10; // r6
  unsigned int v11; // r4
  unsigned int v12; // r3
  int v13; // r0
  char *v14; // r1
  unsigned int v15; // r4
  unsigned int v16; // r7
  unsigned int v17; // r3
  unsigned int v18; // r2
  char v19; // r3
  char *v20; // r1
  int v21; // r2
  int v22; // r11
  unsigned int v23; // r0
  int v24; // r3
  unsigned int v25; // r2
  char *v26; // r1
  char v27; // r7
  int v28; // r2
  unsigned int v29; // r0
  int v30; // r3
  unsigned int v31; // r2
  char *v32; // r1
  int v33; // r2
  unsigned int v34; // r0
  int v35; // r3
  unsigned int v36; // r2
  char *v37; // r0
  char v38; // r2
  char *v39; // r1
  int v40; // r2
  int v41; // r7
  unsigned int v42; // r0
  int v43; // r3
  unsigned int v44; // r2
  char *v45; // r1
  char v46; // r4
  int v47; // r2
  unsigned int v48; // r0
  int v49; // r3
  unsigned int v50; // r2
  int v51; // r7
  unsigned int v52; // r11
  char *v53; // r0
  int v54; // r2
  char *v55; // r0
  char *v56; // r0
  char *v57; // r0
  char *v58; // r0
  char *v59; // r0
  char *v60; // r0
  char *v61; // r0
  char *v62; // r0
  char *v63; // r0
  char *v64; // r0
  int v65; // r2
  char v67; // [sp+17h] [bp-Dh] BYREF
  unsigned __int8 *v68; // [sp+18h] [bp-Ch] BYREF

  v3 = a2;
  v4 = (unsigned int)&a2[a3];
  v68 = a2;
LABEL_2:
  while ( v4 > (unsigned int)v3 )
  {
    while ( 1 )
    {
      v6 = sub_70124(&v68);
      if ( v6 == -1 )
      {
        v8 = -1;
        *_errno_location() = 84;
        return v8;
      }
      if ( !v6 )
        break;
      v7 = (unsigned __int8 *)(v68 - v3);
      if ( (unsigned int)(v68 - v3) > 3 )
      {
        v12 = v6 - 0x10000;
        v13 = *(_DWORD *)(a1 + 4);
        v14 = *(char **)a1;
        v67 = -19;
        v15 = (unsigned __int16)((v12 & 0x3FF) - 9216);
        v16 = (unsigned __int16)(((v12 >> 10) & 0x3FF) - 10240);
        v17 = *(_DWORD *)(a1 + 8);
        v18 = v13 + 1;
        if ( v14 > &v67 || &v67 >= &v14[v17] )
        {
          if ( v17 < v18 )
          {
            v14 = (char *)sub_77EB0(a1, v14, v18, 1u);
            v19 = v67;
            v13 = *(_DWORD *)(a1 + 4);
            *(_DWORD *)a1 = v14;
          }
          else
          {
            v19 = -19;
          }
          v14[v13] = v19;
        }
        else
        {
          if ( v17 < v18 )
          {
            v14 = (char *)sub_77EB0(a1, v14, v18, 1u);
            v13 = *(_DWORD *)(a1 + 4);
            *(_DWORD *)a1 = v14;
          }
          v14[v13] = -19;
        }
        v20 = *(char **)a1;
        v21 = *(_DWORD *)(a1 + 4);
        v22 = (v16 >> 6) & 0x3F | 0x80;
        v67 = (v16 >> 6) & 0x3F | 0x80;
        v23 = *(_DWORD *)(a1 + 8);
        v24 = v21 + 1;
        v25 = v21 + 2;
        *(_DWORD *)(a1 + 4) = v24;
        if ( v20 <= &v67 && &v67 < &v20[v23] )
        {
          if ( v23 < v25 )
          {
            v58 = (char *)sub_77EB0(a1, v20, v25, 1u);
            v24 = *(_DWORD *)(a1 + 4);
            v20 = v58;
            *(_DWORD *)a1 = v58;
          }
        }
        else if ( v23 < v25 )
        {
          v60 = (char *)sub_77EB0(a1, v20, v25, 1u);
          LOBYTE(v22) = v67;
          v20 = v60;
          v24 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v60;
        }
        v20[v24] = v22;
        v26 = *(char **)a1;
        v27 = v16 & 0x3F | 0x80;
        v28 = *(_DWORD *)(a1 + 4);
        v67 = v27;
        v29 = *(_DWORD *)(a1 + 8);
        v30 = v28 + 1;
        v31 = v28 + 2;
        *(_DWORD *)(a1 + 4) = v30;
        if ( v26 <= &v67 && &v67 < &v26[v29] )
        {
          if ( v29 < v31 )
          {
            v57 = (char *)sub_77EB0(a1, v26, v31, 1u);
            v30 = *(_DWORD *)(a1 + 4);
            v26 = v57;
            *(_DWORD *)a1 = v57;
          }
        }
        else if ( v29 < v31 )
        {
          v61 = (char *)sub_77EB0(a1, v26, v31, 1u);
          v27 = v67;
          v26 = v61;
          v30 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v61;
        }
        v26[v30] = v27;
        v32 = *(char **)a1;
        v33 = *(_DWORD *)(a1 + 4);
        v67 = -19;
        v34 = *(_DWORD *)(a1 + 8);
        v35 = v33 + 1;
        v36 = v33 + 2;
        *(_DWORD *)(a1 + 4) = v35;
        if ( v32 > &v67 || &v67 >= &v32[v34] )
        {
          if ( v34 < v36 )
          {
            v59 = (char *)sub_77EB0(a1, v32, v36, 1u);
            v38 = v67;
            v32 = v59;
            v35 = *(_DWORD *)(a1 + 4);
            *(_DWORD *)a1 = v59;
          }
          else
          {
            v38 = -19;
          }
          v32[v35] = v38;
        }
        else
        {
          if ( v34 < v36 )
          {
            v37 = (char *)sub_77EB0(a1, v32, v36, 1u);
            v35 = *(_DWORD *)(a1 + 4);
            v32 = v37;
            *(_DWORD *)a1 = v37;
          }
          v32[v35] = -19;
        }
        v39 = *(char **)a1;
        v40 = *(_DWORD *)(a1 + 4);
        v41 = (v15 >> 6) & 0x3F | 0x80;
        v67 = (v15 >> 6) & 0x3F | 0x80;
        v42 = *(_DWORD *)(a1 + 8);
        v43 = v40 + 1;
        v44 = v40 + 2;
        *(_DWORD *)(a1 + 4) = v43;
        if ( v39 <= &v67 && &v67 < &v39[v42] )
        {
          if ( v42 < v44 )
          {
            v56 = (char *)sub_77EB0(a1, v39, v44, 1u);
            v43 = *(_DWORD *)(a1 + 4);
            v39 = v56;
            *(_DWORD *)a1 = v56;
          }
        }
        else if ( v42 < v44 )
        {
          v62 = (char *)sub_77EB0(a1, v39, v44, 1u);
          LOBYTE(v41) = v67;
          v39 = v62;
          v43 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v62;
        }
        v39[v43] = v41;
        v45 = *(char **)a1;
        v46 = v15 & 0x3F | 0x80;
        v47 = *(_DWORD *)(a1 + 4);
        v67 = v46;
        v48 = *(_DWORD *)(a1 + 8);
        v49 = v47 + 1;
        v50 = v47 + 2;
        *(_DWORD *)(a1 + 4) = v49;
        if ( v45 <= &v67 && &v67 < &v45[v48] )
        {
          if ( v48 < v50 )
          {
            v55 = (char *)sub_77EB0(a1, v45, v50, 1u);
            v49 = *(_DWORD *)(a1 + 4);
            v45 = v55;
            *(_DWORD *)a1 = v55;
          }
        }
        else if ( v48 < v50 )
        {
          v63 = (char *)sub_77EB0(a1, v45, v50, 1u);
          v46 = v67;
          v45 = v63;
          v49 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v63;
        }
        v45[v49] = v46;
        v3 = v68;
        ++*(_DWORD *)(a1 + 4);
        goto LABEL_2;
      }
      if ( v7 )
      {
        v51 = *(_DWORD *)(a1 + 4);
        v52 = (unsigned int)&v7[v51];
        if ( __CFADD__(v7, v51) )
        {
          if ( (unsigned int)v51 > 0x7FFFFFFE )
          {
            if ( v51 < 0 )
              *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
            goto LABEL_59;
          }
          v52 = 0x7FFFFFFF;
        }
        else if ( v51 >= v52 )
        {
LABEL_59:
          memcpy((void *)(*(_DWORD *)a1 + v51), v3, (size_t)v7);
          v3 = v68;
          goto LABEL_2;
        }
        v64 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v52 )
        {
          v64 = (char *)sub_77EB0(a1, *(void **)a1, v52, 1u);
          v65 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v64;
        }
        else
        {
          v65 = *(_DWORD *)(a1 + 4);
        }
        memset(&v64[v65], 0, v52 - v65);
        *(_DWORD *)(a1 + 4) = v52;
        goto LABEL_59;
      }
      v3 = v68;
      if ( v4 <= (unsigned int)v68 )
        return v3 - a2;
    }
    v10 = *(_DWORD *)(a1 + 4);
    v11 = v10 + 2;
    if ( v10 >= 0xFFFFFFFE )
    {
      *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
    }
    else if ( v10 < v11 )
    {
      v53 = *(char **)a1;
      if ( v11 > *(_DWORD *)(a1 + 8) )
      {
        v53 = (char *)sub_77EB0(a1, *(void **)a1, v10 + 2, 1u);
        v54 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v53;
      }
      else
      {
        v54 = *(_DWORD *)(a1 + 4);
      }
      memset(&v53[v54], 0, v11 - v54);
      *(_DWORD *)(a1 + 4) = v11;
    }
    *(_WORD *)(*(_DWORD *)a1 + v10) = -32576;
    v3 = v68;
  }
  return v3 - a2;
}
