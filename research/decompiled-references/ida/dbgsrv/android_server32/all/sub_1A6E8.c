/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A6E8
// Address: 0x0001A6E8

//----- (0001A6E8) --------------------------------------------------------
void *__fastcall sub_1A6E8(int a1, void **a2)
{
  int v3; // r0
  __pid_t v4; // r5
  bool v5; // zf
  void **v6; // r0
  int v7; // r0
  const char *v8; // r6
  unsigned int v9; // r4
  int v10; // r0
  size_t v11; // r4
  void *v12; // r2
  int v13; // r0
  const void *v14; // r6
  size_t v15; // r4
  void *v16; // r1
  FILE *v17; // r0
  FILE *v18; // r6
  size_t v19; // r0
  int v20; // r4
  int v21; // r0
  size_t v23; // r4
  int v24; // r6
  void *v25; // r1
  size_t v26; // r6
  int v27; // r5
  int v28; // r4
  void *v29; // r1
  signed int v30; // r4
  size_t v31; // r4
  int v32; // r7
  void *v33; // r1
  unsigned int v34; // r5
  size_t v35; // r4
  int v36; // r7
  int v37; // r5
  void *v38; // r1
  void *v39; // r4
  _BYTE v41[4]; // [sp+4h] [bp-54ACh] BYREF
  int p_ptr; // [sp+8h] [bp-54A8h]
  int *v43; // [sp+Ch] [bp-54A4h]
  int *v44; // [sp+10h] [bp-54A0h]
  size_t n; // [sp+14h] [bp-549Ch]
  void **v46; // [sp+18h] [bp-5498h]
  const char *v47; // [sp+1Ch] [bp-5494h]
  __pid_t v48; // [sp+20h] [bp-5490h]
  int v49; // [sp+24h] [bp-548Ch]
  int v50; // [sp+28h] [bp-5488h]
  int v51; // [sp+2Ch] [bp-5484h]
  int v52; // [sp+30h] [bp-5480h]
  unsigned int v53; // [sp+34h] [bp-547Ch]
  signed int v54; // [sp+38h] [bp-5478h]
  char *s; // [sp+3Ch] [bp-5474h]
  signed int v56; // [sp+40h] [bp-5470h]
  int v57; // [sp+44h] [bp-546Ch] BYREF
  int v58; // [sp+48h] [bp-5468h] BYREF
  void *ptr; // [sp+4Ch] [bp-5464h] BYREF
  unsigned int v60; // [sp+50h] [bp-5460h]
  unsigned int v61; // [sp+54h] [bp-545Ch]
  int v62; // [sp+58h] [bp-5458h]
  void *v63; // [sp+5Ch] [bp-5454h] BYREF
  int v64; // [sp+60h] [bp-5450h]
  unsigned int v65; // [sp+64h] [bp-544Ch]
  void *v66; // [sp+68h] [bp-5448h] BYREF
  unsigned int v67; // [sp+6Ch] [bp-5444h]
  int v68; // [sp+70h] [bp-5440h]
  _BYTE v69[908]; // [sp+74h] [bp-543Ch] BYREF
  int v70; // [sp+474h] [bp-503Ch] BYREF
  _BYTE v71[20536]; // [sp+478h] [bp-5038h] BYREF

  v49 = a1;
  v43 = *(int **)(loc_1AAF0 + 108284);
  v3 = *v43;
  v44 = &v57;
  v57 = v3;
  v4 = getpid();
  v5 = *a2 == nullptr;
  v46 = a2;
  if ( !v5 )
  {
    sub_1B6B6((int *)a2, 0);
    qfree(*v46);
    v6 = v46;
    v46[2] = nullptr;
    *v6 = nullptr;
  }
  *(_DWORD *)&v71[loc_1AAF8 - 4] = 0;
  *(_DWORD *)&v71[loc_1AAFC - 4] = 0;
  v7 = qfindfirst(loc_1AB08 + 108356, (int)&v70, 0x4000);
  p_ptr = (int)&ptr;
  v52 = (int)&v63;
  v8 = v71;
  v50 = 1024;
  n = 4096;
  v48 = v4;
  v47 = v71;
  while ( !v7 )
  {
    if ( v71[0] >= 0 && (unsigned int)v71[0] - 48 <= 9 )
    {
      v9 = 0;
      v60 = 0;
      ptr = nullptr;
      v61 = 0;
      v63 = nullptr;
      v64 = 0;
      v65 = 0;
      v10 = atoi(v8);
      v58 = v10;
      if ( v10 != v4 )
      {
        v51 = 0;
        if ( (*(int (__fastcall **)(int, int, _BYTE *, int))(*(_DWORD *)v49 + 328))(v49, v10, v69, v50) )
        {
          v11 = _strlen_chk(v69, v50);
          if ( v11 )
          {
            v12 = ptr;
            if ( v61 < v11 + 1 )
            {
              v12 = qvector_reserve(p_ptr, ptr, v11 + 1, 1u);
              ptr = v12;
            }
            v60 = v11 + 1;
            memmove(v12, v69, v11);
            *((_BYTE *)ptr + v11) = 0;
          }
          else
          {
            v60 = 0;
          }
          v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v49 + 332))(v49, v58);
          v62 = v13;
          if ( v13 == 4 )
          {
            v14 = (const void *)(loc_1AB0C + 108572);
          }
          else
          {
            v14 = (const void *)(loc_1AB10 + 108562);
            if ( v13 == 8 )
              v14 = (const void *)(loc_1AB14 + 108580);
          }
          v15 = _strlen_chk(v14, 5);
          if ( v15 )
          {
            v16 = v63;
            if ( v65 < v15 + 1 )
            {
              v16 = qvector_reserve(v52, v63, v15 + 1, 1u);
              v63 = v16;
            }
            v64 = v15 + 1;
            memmove(v16, v14, v15);
            *((_BYTE *)v63 + v15) = 0;
          }
          else
          {
            v64 = 0;
          }
          qsnprintf(&v41[loc_1AB04], n, (const char *)(loc_1AB18 + 108652));
          v17 = qfopen(&v41[loc_1AB04], (unsigned __int8 *)(loc_1AB1C + 108666));
          v18 = v17;
          if ( v17 && (v19 = qfread(v17, &v41[loc_1AB04], n), (v20 = v19) != 0) )
          {
            v41[loc_1AB04 + v19] = v51;
            qfclose(v18);
            if ( v20 >= 0 )
            {
              while ( !v41[loc_1AB04 + v20] )
              {
                v21 = v20 - 1;
                if ( v20-- <= 0 )
                  goto LABEL_43;
              }
            }
            v21 = v20;
LABEL_43:
            v54 = v21 + 1;
            if ( v21 + 1 >= 1 )
            {
              v30 = 0;
              do
              {
                v56 = v30;
                s = &v41[loc_1AB04 + v30];
                sub_1B09C((int)&v66, s);
                quote_cmdline_arg((int)&v66);
                v31 = _strlen_chk(" ", 2);
                v32 = v64 - 1;
                if ( !v64 )
                  v32 = 0;
                v33 = v63;
                if ( v65 < v32 + v31 + 1 )
                {
                  v33 = qvector_reserve(v52, v63, v32 + v31 + 1, 1u);
                  v63 = v33;
                }
                v64 = v32 + v31 + 1;
                v34 = 0;
                *((_BYTE *)v33 + v32 + v31) = 0;
                memmove((char *)v63 + v32, " ", v31);
                v35 = v67 - 1;
                if ( v67 >= 2 )
                {
                  v53 = 0;
                  v36 = v64 - 1;
                  if ( !v64 )
                    v36 = 0;
                  v37 = v36 + v67;
                  v38 = v63;
                  if ( v65 < v36 + v67 )
                  {
                    v38 = qvector_reserve(v52, v63, v36 + v67, 1u);
                    v63 = v38;
                  }
                  v64 = v37;
                  v34 = v53;
                  *((_BYTE *)v38 + v36 + v35) = v53;
                  qmemcpy((char *)v63 + v36, v66, v35);
                }
                v30 = v56 + strlen(s) + 1;
                if ( v66 )
                {
                  v67 = v34;
                  qfree(v66);
                  v68 = 0;
                  v66 = nullptr;
                }
              }
              while ( v30 < v54 );
            }
          }
          else
          {
            v23 = _strlen_chk(" ", 2);
            v24 = v64 - 1;
            if ( !v64 )
              v24 = 0;
            v25 = v63;
            if ( v65 < v24 + v23 + 1 )
            {
              v25 = qvector_reserve(v52, v63, v24 + v23 + 1, 1u);
              v63 = v25;
            }
            v64 = v24 + v23 + 1;
            *((_BYTE *)v25 + v24 + v23) = v51;
            memmove((char *)v63 + v24, " ", v23);
            v26 = v60 - 1;
            if ( v60 > 1 )
            {
              v27 = v64 - 1;
              if ( !v64 )
                v27 = 0;
              v28 = v27 + v60;
              v29 = v63;
              if ( v65 < v27 + v60 )
              {
                v29 = qvector_reserve(v52, v63, v27 + v60, 1u);
                v63 = v29;
              }
              v64 = v28;
              *((_BYTE *)v29 + v27 + v26) = v51;
              qmemcpy((char *)v63 + v27, ptr, v26);
            }
          }
          sub_1AB30(v46, &v58);
        }
        v4 = v48;
        v9 = v51;
        v8 = v47;
        if ( v63 )
        {
          v64 = v51;
          qfree(v63);
          v65 = 0;
          v63 = nullptr;
        }
      }
      if ( ptr )
      {
        v60 = v9;
        qfree(ptr);
        v61 = 0;
        ptr = nullptr;
      }
    }
    v7 = qfindnext(&v70);
  }
  v39 = v46[1];
  qfindclose((int)&v70);
  return v39;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
