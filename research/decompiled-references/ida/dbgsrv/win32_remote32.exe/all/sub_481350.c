/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481350
// Address: 0x00481350

//----- (00481350) --------------------------------------------------------
void __cdecl sub_481350(_BYTE *a1, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int, _BYTE *))
{
  int (__cdecl *v4)(unsigned int, _BYTE *); // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  _BYTE *v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edx
  _BYTE *v10; // eax
  unsigned int v11; // esi
  _BYTE *v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  char v15; // cl
  _BYTE *v16; // edi
  int v17; // eax
  int v18; // esi
  bool v19; // cc
  _BYTE *v20; // eax
  int v21; // ebx
  _BYTE *v22; // esi
  char v23; // cl
  int v24; // eax
  _BYTE *v25; // edx
  char *v26; // esi
  int v27; // ebx
  int v28; // edx
  char v29; // al
  char v30; // cl
  int v31; // eax
  _BYTE *v32; // edx
  int v33; // eax
  int v34; // ebx
  char *v35; // esi
  int v36; // edx
  char v37; // al
  char v38; // cl
  _BYTE *v39; // ebx
  int v40; // eax
  _BYTE *v41; // ecx
  char *v42; // edx
  int v43; // esi
  int v44; // ebx
  char v45; // al
  char v46; // cl
  int v47; // eax
  bool v48; // zf
  _BYTE *v49; // ecx
  int v50; // eax
  int v51; // eax
  int v52; // [esp+Ch] [ebp-118h]
  _BYTE *v53; // [esp+10h] [ebp-114h]
  int v54; // [esp+10h] [ebp-114h]
  unsigned int v55; // [esp+14h] [ebp-110h]
  _BYTE *v56; // [esp+18h] [ebp-10Ch]
  _BYTE *v57; // [esp+20h] [ebp-104h]
  _BYTE *v58; // [esp+28h] [ebp-FCh]
  int v59; // [esp+28h] [ebp-FCh]
  int v60; // [esp+28h] [ebp-FCh]
  _BYTE *v61; // [esp+28h] [ebp-FCh]
  _BYTE *v62; // [esp+28h] [ebp-FCh]
  _BYTE *v63; // [esp+28h] [ebp-FCh]
  _BYTE *v64; // [esp+2Ch] [ebp-F8h]
  _DWORD v65[60]; // [esp+30h] [ebp-F4h]

  v4 = a4;
  v5 = (unsigned int)a1;
  v57 = a1;
  v6 = a3;
  if ( (a1 || !a2) && a3 && a4 )
  {
    v52 = 0;
    if ( a2 >= 2 )
    {
      v7 = &a1[a3 * (a2 - 1)];
      while ( 2 )
      {
        while ( 2 )
        {
          v64 = v7;
          while ( 1 )
          {
            v8 = (unsigned int)&v7[-v5] / v6 + 1;
            if ( v8 <= 8 )
            {
              if ( (unsigned int)v7 > v5 )
              {
                v9 = v6 + v5;
                v55 = v6 + v5;
                do
                {
                  v10 = (_BYTE *)v5;
                  v11 = v9;
                  v58 = v10;
                  if ( v9 <= (unsigned int)v7 )
                  {
                    do
                    {
                      if ( v4(v11, v10) <= 0 )
                      {
                        v10 = v58;
                      }
                      else
                      {
                        v10 = (_BYTE *)v11;
                        v58 = (_BYTE *)v11;
                      }
                      v7 = v64;
                      v11 += v6;
                    }
                    while ( v11 <= (unsigned int)v64 );
                  }
                  v12 = v7;
                  if ( v10 != v7 )
                  {
                    v13 = v10 - v7;
                    v14 = v6;
                    v59 = v13;
                    do
                    {
                      v15 = (v12++)[v13];
                      v12[v59 - 1] = *(v12 - 1);
                      v13 = v59;
                      *(v12 - 1) = v15;
                      --v14;
                    }
                    while ( v14 );
                    v4 = a4;
                    v7 = v64;
                  }
                  v5 = (unsigned int)v57;
                  v7 -= v6;
                  v9 = v55;
                  v64 = v7;
                }
                while ( v7 > v57 );
              }
              goto LABEL_77;
            }
            v60 = v6 * (v8 >> 1);
            v16 = (_BYTE *)(v60 + v5);
            v53 = (_BYTE *)(v60 + v5);
            v17 = v4(v5, (_BYTE *)(v60 + v5));
            v18 = a3;
            v19 = v17 <= 0;
            v20 = v57;
            if ( !v19 && v57 != v16 )
            {
              v21 = a3;
              v22 = v16;
              do
              {
                v23 = v22[-v60];
                v22[-v60] = *v22;
                *v22++ = v23;
                --v21;
              }
              while ( v21 );
              v16 = v53;
              v4 = a4;
              v18 = a3;
              v20 = v57;
            }
            v24 = v4((unsigned int)v20, v64);
            v25 = v64;
            if ( v24 > 0 )
            {
              v54 = v18;
              v26 = v64;
              if ( v57 != v64 )
              {
                v27 = v54;
                v28 = v57 - v64;
                do
                {
                  v29 = *v26++;
                  v30 = v26[v28 - 1];
                  v26[v28 - 1] = v29;
                  *(v26 - 1) = v30;
                  --v27;
                }
                while ( v27 );
                v4 = a4;
                v25 = v64;
              }
            }
            v31 = v4((unsigned int)v16, v25);
            v32 = v64;
            v19 = v31 <= 0;
            v33 = a3;
            if ( !v19 )
            {
              v34 = a3;
              v35 = v64;
              if ( v16 != v64 )
              {
                v36 = v16 - v64;
                do
                {
                  v37 = *v35++;
                  v38 = v35[v36 - 1];
                  v35[v36 - 1] = v37;
                  *(v35 - 1) = v38;
                  --v34;
                }
                while ( v34 );
                v33 = a3;
                v32 = v64;
              }
            }
            v5 = (unsigned int)v57;
            v39 = v32;
            v61 = v32;
            while ( 1 )
            {
              if ( (unsigned int)v16 > v5 )
              {
                while ( 1 )
                {
                  v5 += v33;
                  v56 = (_BYTE *)v5;
                  if ( v5 >= (unsigned int)v16 )
                    break;
                  v19 = a4(v5, v16) <= 0;
                  v33 = a3;
                  if ( !v19 )
                    goto LABEL_48;
                }
                v32 = v64;
              }
              do
              {
                v5 += v33;
                if ( v5 > (unsigned int)v32 )
                  break;
                v40 = a4(v5, v16);
                v32 = v64;
                v19 = v40 <= 0;
                v33 = a3;
              }
              while ( v19 );
              v39 = v61;
              v56 = (_BYTE *)v5;
LABEL_48:
              while ( 1 )
              {
                v33 = a3;
                v41 = v39;
                v39 -= a3;
                v62 = v41;
                if ( v39 <= v16 )
                  break;
                if ( a4((unsigned int)v39, v16) <= 0 )
                {
                  v33 = a3;
                  v41 = v62;
                  break;
                }
              }
              v5 = (unsigned int)v56;
              v61 = v39;
              if ( v39 < v56 )
                break;
              v42 = v39;
              if ( v39 != v56 )
              {
                v43 = v56 - v39;
                v44 = v33;
                do
                {
                  v45 = *v42++;
                  v46 = v42[v43 - 1];
                  v42[v43 - 1] = v45;
                  *(v42 - 1) = v46;
                  --v44;
                }
                while ( v44 );
                v5 = (unsigned int)v56;
                v39 = v61;
                v33 = a3;
              }
              v32 = v64;
              if ( v16 == v39 )
                v16 = (_BYTE *)v5;
            }
            if ( v16 < v41 )
            {
              v4 = a4;
              while ( 1 )
              {
                v41 -= v33;
                v63 = v41;
                if ( v41 <= v16 )
                  break;
                v47 = a4((unsigned int)v41, v16);
                v41 = v63;
                v48 = v47 == 0;
                v33 = a3;
                if ( !v48 )
                  goto LABEL_67;
              }
            }
            v4 = a4;
            do
            {
              v49 = &v41[-v33];
              v63 = v49;
              if ( v49 <= v57 )
                break;
              v50 = a4((unsigned int)v49, v16);
              v41 = v63;
              v48 = v50 == 0;
              v33 = a3;
            }
            while ( v48 );
            v5 = (unsigned int)v56;
LABEL_67:
            if ( v63 - v57 < (int)&v64[-v5] )
              break;
            if ( v57 < v63 )
            {
              v65[v52 + 30] = v57;
              v65[v52++] = v63;
            }
            v7 = v64;
            v6 = a3;
            if ( v5 >= (unsigned int)v64 )
              goto LABEL_77;
            v57 = (_BYTE *)v5;
          }
          if ( v5 < (unsigned int)v64 )
          {
            v65[v52 + 30] = v5;
            v65[v52++] = v64;
          }
          v5 = (unsigned int)v57;
          if ( v57 < v63 )
          {
            v7 = v63;
            v6 = a3;
            continue;
          }
          break;
        }
        v6 = a3;
LABEL_77:
        v51 = --v52;
        if ( v52 >= 0 )
        {
          v5 = v65[v51 + 30];
          v7 = (_BYTE *)v65[v51];
          v57 = (_BYTE *)v5;
          continue;
        }
        break;
      }
    }
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4((int)a4, a3);
  }
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
