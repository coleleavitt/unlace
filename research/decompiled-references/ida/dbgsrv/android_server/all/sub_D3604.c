/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3604
// Address: 0x00000000000D3604

//----- (00000000000D3604) ----------------------------------------------------
__int64 __fastcall sub_D3604(__int64 a1, _DWORD *a2, int *a3, int a4, __int64 a5)
{
  unsigned int v5; // w24
  __int64 v7; // x23
  __int64 v11; // x8
  __int64 v13; // x23
  int v14; // w24
  __int64 v15; // x23
  __int64 v16; // x23
  unsigned __int8 v17; // w26
  __int64 v18; // x23
  unsigned __int64 v19; // x8
  __int64 v20; // x23
  __int64 v21; // x23
  unsigned __int64 v22; // x8
  __int64 v23; // x23
  unsigned __int64 v24; // x8
  __int64 v25; // x23
  unsigned __int64 v26; // x8
  __int64 v27; // x23
  unsigned __int64 v28; // x26
  __int64 v29; // x23
  int v30; // w27
  __int64 v31; // x24
  char *v32; // x0
  char *v33; // x23
  void *v34; // x0
  int v35; // w8
  int v36; // w8
  __int64 v37; // x8
  __int64 v38; // x8
  __int128 v39; // q1
  __int128 v40; // q0
  __int128 v41; // q2
  __int128 v42; // q1
  __int64 v43; // x9
  unsigned int v44; // w0
  __int64 v45; // x8
  unsigned __int8 v46; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int8 v47; // [xsp+1h] [xbp-5Fh]
  unsigned __int8 v48; // [xsp+2h] [xbp-5Eh]
  unsigned __int8 v49; // [xsp+3h] [xbp-5Dh]
  unsigned __int8 v50; // [xsp+4h] [xbp-5Ch] BYREF
  unsigned __int8 v51; // [xsp+5h] [xbp-5Bh]
  __int64 v52; // [xsp+8h] [xbp-58h]

  v5 = -102;
  v52 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 && !a5 )
  {
    if ( !*(_QWORD *)(a1 + 144) )
      return (unsigned int)-102;
    v7 = *(_QWORD *)(a1 + 320);
    if ( v7 )
    {
      free(*(void **)v7);
      v11 = *(_QWORD *)(v7 + 128);
      *(_QWORD *)v7 = 0;
      if ( v11 == 8 )
        sub_CE950((_QWORD *)(v7 + 8));
      free((void *)v7);
      *(_QWORD *)(a1 + 320) = 0;
    }
    if ( sub_D4FC4(a1) )
      return (unsigned int)-103;
    v13 = *(_QWORD *)(a1 + 96);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v13,
           &v46,
           4) == 4 )
    {
      if ( (v46
          | (unsigned __int64)(unsigned __int16)(v47 << 8)
          | ((unsigned __int64)v48 << 16) & 0xFFFFFFFF00FFFFFFLL
          | ((unsigned __int64)v49 << 24)) == 0x4034B50 )
        v14 = 0;
      else
        v14 = -103;
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v13) )
    {
      v14 = -1;
    }
    else
    {
      v14 = -103;
    }
    v15 = *(_QWORD *)(a1 + 96);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v15,
           &v50,
           2) != 2
      && (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v15) )
    {
      v14 = -1;
    }
    v16 = *(_QWORD *)(a1 + 96);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v16,
           &v50,
           2) == 2 )
    {
      v17 = v50;
    }
    else
    {
      v17 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v16) )
        v14 = -1;
    }
    v18 = *(_QWORD *)(a1 + 96);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v18,
           &v50,
           2) == 2 )
    {
      v19 = v50 | ((unsigned __int64)v51 << 8);
      if ( v14 )
        goto LABEL_37;
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v18) )
      {
        v14 = -1;
        goto LABEL_37;
      }
      v19 = 0;
      if ( v14 )
        goto LABEL_37;
    }
    if ( v19 == *(_QWORD *)(a1 + 200) && v19 <= 0xC && ((1LL << v19) & 0x1101) != 0 )
      v14 = 0;
    else
      v14 = -103;
LABEL_37:
    v20 = *(_QWORD *)(a1 + 96);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v20,
           &v46,
           4) != 4
      && (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v20) )
    {
      v14 = -1;
    }
    v21 = *(_QWORD *)(a1 + 96);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v21,
           &v46,
           4) == 4 )
    {
      v22 = v46
          | (unsigned __int64)(unsigned __int16)(v47 << 8)
          | ((unsigned __int64)v48 << 16) & 0xFFFFFFFF00FFFFFFLL
          | ((unsigned __int64)v49 << 24);
      if ( v14 )
        goto LABEL_51;
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v21) )
      {
        v14 = -1;
        goto LABEL_51;
      }
      v22 = 0;
      if ( v14 )
      {
LABEL_51:
        v23 = *(_QWORD *)(a1 + 96);
        if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
               *(_QWORD *)(a1 + 56),
               v23,
               &v46,
               4) == 4 )
        {
          v24 = v46
              | (unsigned __int64)(unsigned __int16)(v47 << 8)
              | ((unsigned __int64)v48 << 16) & 0xFFFFFFFF00FFFFFFLL
              | ((unsigned __int64)v49 << 24);
          if ( v14 )
            goto LABEL_63;
        }
        else
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v23) )
          {
            v14 = -1;
            goto LABEL_63;
          }
          v24 = 0;
          if ( v14 )
          {
LABEL_63:
            v25 = *(_QWORD *)(a1 + 96);
            if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
                   *(_QWORD *)(a1 + 56),
                   v25,
                   &v46,
                   4) == 4 )
            {
              v26 = v46
                  | (unsigned __int64)(unsigned __int16)(v47 << 8)
                  | ((unsigned __int64)v48 << 16) & 0xFFFFFFFF00FFFFFFLL
                  | ((unsigned __int64)v49 << 24);
              if ( v14 )
                goto LABEL_75;
            }
            else
            {
              if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v25) )
              {
                v14 = -1;
                goto LABEL_75;
              }
              v26 = 0;
              if ( v14 )
              {
LABEL_75:
                v27 = *(_QWORD *)(a1 + 96);
                if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
                       *(_QWORD *)(a1 + 56),
                       v27,
                       &v50,
                       2) == 2 )
                {
                  v28 = v50 | ((unsigned __int64)v51 << 8);
                }
                else
                {
                  v28 = 0;
                  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v27) )
                  {
                    v14 = -1;
                    goto LABEL_83;
                  }
                }
                if ( !v14 )
                {
                  if ( v28 == *(_QWORD *)(a1 + 240) )
                    v14 = 0;
                  else
                    v14 = -103;
                }
LABEL_83:
                v29 = *(_QWORD *)(a1 + 96);
                if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int8 *, __int64))(a1 + 8))(
                       *(_QWORD *)(a1 + 56),
                       v29,
                       &v50,
                       2) == 2 )
                {
                  v30 = v50 | (v51 << 8);
                  if ( !v14 )
                    goto LABEL_88;
                }
                else if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v29) )
                {
                  v30 = 0;
                  if ( !v14 )
                  {
LABEL_88:
                    v31 = *(_QWORD *)(a1 + 312);
                    v32 = (char *)malloc(0x140u);
                    if ( !v32 )
                      return (unsigned int)-104;
                    v33 = v32;
                    v34 = malloc(0x4000u);
                    *(_QWORD *)v33 = v34;
                    *((_QWORD *)v33 + 17) = v28 + v31 + 30;
                    *((_DWORD *)v33 + 36) = v30;
                    *((_QWORD *)v33 + 19) = 0;
                    *((_DWORD *)v33 + 78) = a4;
                    if ( !v34 )
                    {
                      free(v33);
                      return (unsigned int)-104;
                    }
                    *((_QWORD *)v33 + 16) = 0;
                    if ( a2 )
                      *a2 = *(_QWORD *)(a1 + 200);
                    if ( a3 )
                    {
                      *a3 = 6;
                      v35 = *(_DWORD *)(a1 + 192) & 6;
                      switch ( v35 )
                      {
                        case 2:
                          v36 = 9;
                          goto LABEL_101;
                        case 4:
                          v36 = 2;
                          goto LABEL_101;
                        case 6:
                          v36 = 1;
LABEL_101:
                          *a3 = v36;
                          break;
                      }
                    }
                    v37 = *(_QWORD *)(a1 + 216);
                    *((_QWORD *)v33 + 20) = 0;
                    *((_QWORD *)v33 + 21) = 0;
                    *((_QWORD *)v33 + 22) = v37;
                    v38 = *(_QWORD *)(a1 + 200);
                    *((_QWORD *)v33 + 36) = *(_QWORD *)(a1 + 96);
                    *((_QWORD *)v33 + 37) = v38;
                    v39 = *(_OWORD *)a1;
                    *(_OWORD *)(v33 + 216) = *(_OWORD *)(a1 + 16);
                    *(_OWORD *)(v33 + 200) = v39;
                    v41 = *(_OWORD *)(a1 + 48);
                    v40 = *(_OWORD *)(a1 + 64);
                    v42 = *(_OWORD *)(a1 + 32);
                    *((_QWORD *)v33 + 35) = *(_QWORD *)(a1 + 80);
                    *(_OWORD *)(v33 + 264) = v40;
                    *(_OWORD *)(v33 + 248) = v41;
                    *(_OWORD *)(v33 + 232) = v42;
                    v43 = *(_QWORD *)(a1 + 120);
                    *((_QWORD *)v33 + 6) = 0;
                    *((_QWORD *)v33 + 38) = v43;
                    if ( a4 || v38 != 12 )
                    {
                      if ( !a4 && v38 == 8 )
                      {
                        *((_QWORD *)v33 + 1) = 0;
                        *((_DWORD *)v33 + 4) = 0;
                        *((_QWORD *)v33 + 10) = 0;
                        *((_QWORD *)v33 + 11) = 0;
                        *((_QWORD *)v33 + 9) = 0;
                        v44 = sub_CCC20((_QWORD *)v33 + 1, -15, "1.3.1", 112);
                        if ( v44 )
                        {
                          v5 = v44;
                          free(*(void **)v33);
                          free(v33);
                          return v5;
                        }
                        *((_QWORD *)v33 + 16) = 8;
                      }
                    }
                    else
                    {
                      *((_DWORD *)v33 + 78) = 1;
                    }
                    v5 = 0;
                    *(_OWORD *)(v33 + 184) = *(_OWORD *)(a1 + 224);
                    v45 = *(_QWORD *)(a1 + 312);
                    *((_DWORD *)v33 + 4) = 0;
                    *((_QWORD *)v33 + 15) = (unsigned int)(v30 + v28) + v45 + 30;
                    *(_QWORD *)(a1 + 320) = v33;
                    *(_DWORD *)(a1 + 328) = 0;
                    return v5;
                  }
                }
                return (unsigned int)-103;
              }
            }
            if ( v26 != 0xFFFFFFFF )
            {
              if ( v26 == *(_QWORD *)(a1 + 232) )
              {
                v14 = 0;
              }
              else if ( (v17 & 8) != 0 )
              {
                v14 = 0;
              }
              else
              {
                v14 = -103;
              }
            }
            goto LABEL_75;
          }
        }
        if ( v24 != 0xFFFFFFFF )
        {
          if ( v24 == *(_QWORD *)(a1 + 224) )
          {
            v14 = 0;
          }
          else if ( (v17 & 8) != 0 )
          {
            v14 = 0;
          }
          else
          {
            v14 = -103;
          }
        }
        goto LABEL_63;
      }
    }
    if ( v22 == *(_QWORD *)(a1 + 216) )
    {
      v14 = 0;
    }
    else if ( (v17 & 8) != 0 )
    {
      v14 = 0;
    }
    else
    {
      v14 = -103;
    }
    goto LABEL_51;
  }
  return v5;
}
