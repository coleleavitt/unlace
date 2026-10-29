__int64 __fastcall sub_409D10(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        _DWORD *a5,
        _BYTE *a6,
        __int64 *a7,
        _QWORD *a8,
        _DWORD *a9,
        char a10)
{
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rcx
  unsigned int v14; // eax
  bool v15; // al
  unsigned int v16; // r15d
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // ebx
  _QWORD *v26; // rbx
  __int64 v27; // r11
  _QWORD *v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  char v41; // [rsp+1Fh] [rbp-B1h]
  __int64 v44; // [rsp+48h] [rbp-88h]
  _BYTE v45[8]; // [rsp+58h] [rbp-78h] BYREF
  __int64 v46; // [rsp+60h] [rbp-70h] BYREF
  __int64 v47; // [rsp+68h] [rbp-68h] BYREF
  __int64 v48; // [rsp+70h] [rbp-60h] BYREF
  _QWORD *v49; // [rsp+78h] [rbp-58h]
  __int64 v50; // [rsp+80h] [rbp-50h] BYREF
  unsigned int *v51; // [rsp+88h] [rbp-48h] BYREF
  __int64 v52; // [rsp+90h] [rbp-40h] BYREF
  __int64 v53; // [rsp+98h] [rbp-38h]

  v11 = sub_180B150(a1, a2);
  sub_1841000(v45, 0, "spacer::pred_transformer::is_reachable", v11);
  v12 = *(unsigned __int16 *)(a2 + 72);
  if ( v12 == 0xFFFF )
  {
    v38 = *(_QWORD *)(a1 + 120);
    v44 = v38;
  }
  else
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 120);
      v14 = *(_DWORD *)(a1 + 208);
      v44 = v13;
      if ( v12 < v14 )
        break;
      *(_DWORD *)(a1 + 208) = v14 + 1;
      sub_428A80(v13);
    }
    v12 = *(unsigned __int16 *)(a2 + 72);
    v38 = *(_QWORD *)(a1 + 120);
  }
  *(_BYTE *)(v38 + 145) = 1;
  *(_DWORD *)(v38 + 148) = v12;
  v15 = 1;
  if ( a10 )
    v15 = (*(_BYTE *)(a2 + 78) & 2) == 0;
  v16 = -1;
  v17 = *(_BYTE *)(v44 + 136);
  *(_BYTE *)(v44 + 136) = v15;
  v41 = v17;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 643LL) )
    v16 = *(_DWORD *)(a2 + 80);
  v18 = v44;
  v19 = *(_QWORD *)(v44 + 16);
  if ( v19 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 120LL))(*(_QWORD *)(v44 + 16));
    v52 = 0;
    sub_1862300(&v52, "arith.ignore_int", v16 == 0);
    sub_1862300(&v52, "array.weak", v16 <= 1);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 88LL))(v19, &v52);
    sub_18572D0(&v52);
    v18 = *(_QWORD *)(a1 + 120);
  }
  v49 = nullptr;
  v20 = *(_QWORD *)(a2 + 24);
  v51 = nullptr;
  *(_QWORD *)(v18 + 120) = a3;
  *(_QWORD *)(v18 + 128) = a4;
  v48 = *(_QWORD *)(a1 + 8);
  v50 = v48;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = (_QWORD *)sub_186B270(0x18u);
  v21[1] = v20;
  v49 = v21 + 1;
  *v21 = 0x100000002LL;
  sub_15EE300(&v48);
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 661LL) )
    sub_3D6250(*(_QWORD *)(a1 + 8), (__int64)&v48);
  if ( *(_WORD *)(a2 + 72) )
  {
    if ( !*(_BYTE *)(a1 + 312) )
    {
      v26 = *(_QWORD **)(a1 + 64);
      v27 = 2LL * *(unsigned int *)(a1 + 72);
      v28 = &v26[v27];
      if ( v26 != &v26[v27] )
      {
        v29 = v44;
        while ( *v26 <= 1u )
        {
          v26 += 2;
          if ( v28 == v26 )
          {
LABEL_44:
            v44 = v29;
            goto LABEL_18;
          }
        }
        if ( v28 != v26 )
        {
          do
          {
            sub_403090(*(_QWORD *)v26[1], (_QWORD *)(a1 + 320));
            v30 = *(_QWORD *)(a1 + 320);
            if ( v30 && *(_DWORD *)(v30 - 4) )
            {
              v31 = 0;
              while ( 1 )
              {
                v32 = *(_QWORD *)(sub_3FCD00(
                                    *(_QWORD **)(*(_QWORD *)(a1 + 16) + 264LL),
                                    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 272LL),
                                    *(_QWORD *)(v30 + 8LL * v31))[1]
                                + 216LL);
                if ( !v32 )
                  break;
                v33 = *(_DWORD *)(v32 - 4);
                if ( !v33 )
                  break;
                ++v31;
                v53 = *(_QWORD *)(a1 + 8);
                v34 = *(_QWORD *)(v32 + 8LL * (unsigned int)(v33 - 1));
                v52 = 0;
                sub_43D1D0(*(_QWORD *)a1 + 8LL, *(_QWORD *)(v34 + 48), 0, v31, &v52, 1);
                v35 = sub_15E1A70(*(_QWORD *)(a1 + 8));
                v47 = v35;
                if ( v35 )
                  ++*(_DWORD *)(v35 + 8);
                sub_407600(&v51, &v47);
                sub_3FCDF0(v52, v53);
                v30 = *(_QWORD *)(a1 + 320);
                if ( !v30 || v31 >= *(_DWORD *)(v30 - 4) )
                  goto LABEL_38;
              }
              v37 = sub_15E1A70(*(_QWORD *)(a1 + 8));
              v52 = v37;
              if ( v37 )
                ++*(_DWORD *)(v37 + 8);
              sub_407600(&v51, &v52);
            }
LABEL_38:
            v36 = v26 + 2;
            if ( v28 == v26 + 2 )
              break;
            v29 = v44;
            while ( 1 )
            {
              v26 = v36;
              if ( *v36 > 1u )
                break;
              v36 += 2;
              if ( v28 == v36 )
                goto LABEL_44;
            }
          }
          while ( v28 != v36 );
        }
      }
    }
  }
LABEL_18:
  v22 = *(_QWORD *)(a1 + 120);
  v46 = *(_QWORD *)(a1 + 296);
  v23 = sub_42BF90(v22, (unsigned int)&v48, (unsigned int)&v50, (int)a1 + 232, 1, (unsigned int)&v46, 0);
  v24 = v23;
  if ( v23 <= 1 )
  {
    if ( a3 )
      sub_2FCDE0(a3);
    if ( a4 && *a4 )
      *a7 = sub_4025E0(a1, *a4, a6, a8, a9);
  }
  else
  {
    if ( v23 != -1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1442);
    }
    *a5 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 140LL);
  }
  sub_2334C0(&v50);
  sub_2334C0(&v48);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 128LL))(v19);
  *(_BYTE *)(v44 + 136) = v41;
  *(_BYTE *)(v44 + 145) = 0;
  sub_18410E0(v45);
  return v24;
}

