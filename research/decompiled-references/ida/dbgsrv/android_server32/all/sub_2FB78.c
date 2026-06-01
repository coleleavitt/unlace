/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2FB78
// Address: 0x0002FB78

//----- (0002FB78) --------------------------------------------------------
int __fastcall sub_2FB78(int *a1, int a2, int a3, int a4, int a5)
{
  int *v6; // r5
  __int64 v7; // r0
  int v8; // r3
  int v9; // r3
  int *v10; // r1
  __int64 v11; // r2
  int v12; // r7
  __int64 v13; // kr08_8
  int **v14; // r5
  int **v15; // r6
  int *v16; // r1
  int *v17; // r0
  int *v18; // r0
  _DWORD *v19; // r1
  int v20; // r4
  int **v21; // r6
  int **v22; // r5
  int *v23; // r1
  int *v24; // r0
  int *v25; // r0
  unsigned __int64 v27; // [sp+8h] [bp-84h]
  int v28; // [sp+18h] [bp-74h]
  unsigned int v29; // [sp+24h] [bp-68h]
  int *v31; // [sp+30h] [bp-5Ch]
  _DWORD *v32; // [sp+34h] [bp-58h]
  unsigned int v33; // [sp+38h] [bp-54h]
  unsigned int v34; // [sp+3Ch] [bp-50h]
  int v35; // [sp+40h] [bp-4Ch]
  int v37; // [sp+4Ch] [bp-40h]
  int v38; // [sp+4Ch] [bp-40h]
  unsigned int v39; // [sp+4Ch] [bp-40h]
  int v40; // [sp+50h] [bp-3Ch]
  char v41[4]; // [sp+54h] [bp-38h] BYREF
  unsigned int v42; // [sp+58h] [bp-34h]
  int **v43; // [sp+5Ch] [bp-30h] BYREF
  int *v44; // [sp+60h] [bp-2Ch] BYREF
  int v45; // [sp+64h] [bp-28h]
  _BYTE v46[6]; // [sp+68h] [bp-24h] BYREF
  unsigned __int16 v47; // [sp+6Eh] [bp-1Eh]
  int v48; // [sp+74h] [bp-18h]
  int v49; // [sp+78h] [bp-14h]
  int **v50; // [sp+7Ch] [bp-10h] BYREF
  int *v51; // [sp+80h] [bp-Ch] BYREF
  int v52; // [sp+84h] [bp-8h]
  int v53; // [sp+88h] [bp-4h]

  v6 = (int *)a1[1];
  v7 = qlseek(v6[91], 0, 1);
  v37 = v6[93];
  v8 = v6[92];
  v52 = 0;
  v51 = nullptr;
  v50 = &v51;
  v27 = v7 - __PAIR64__(v37, v8);
  v32 = v6 + 92;
  v31 = v6 + 91;
  v29 = a3;
  v34 = a5 + a3;
  v33 = __CFADD__(a5, a3) + a4;
  if ( __SPAIR64__(a4, a3) < __SPAIR64__(v33, a5 + a3) )
  {
    v38 = 0;
    v9 = a3;
    v40 = a4;
    while ( 1 )
    {
      v22 = &v51;
      v21 = &v51;
LABEL_37:
      if ( *v22 )
        break;
      v35 = v9;
      v10 = (int *)operator new(0x18u);
      *v10 = 0;
      v10[1] = 0;
      v10[2] = (int)v21;
      v10[4] = v35;
      v10[5] = v40;
      *v22 = v10;
      if ( *v50 )
      {
        v50 = (int **)*v50;
        v10 = *v22;
      }
      sub_261FA(v51, v10);
      ++v52;
      HIDWORD(v11) = v32[1];
      LODWORD(v11) = v35;
      if ( qlseek(*v31, __PAIR64__(v40, *v32) + v11, 0) == -1 || !sub_3740E((int)v46, a1[1]) )
        break;
      v28 = v38 + 1;
      (*(void (__fastcall **)(int *, _BYTE *, unsigned int, _DWORD, int))*a1)(
        a1,
        v46,
        v35 - v29,
        (__PAIR64__(v40, v35) - __PAIR64__(a4, v29)) >> 32,
        v38);
      v45 = 0;
      v44 = nullptr;
      v43 = &v44;
      v12 = __CFADD__(v35, v48) + v40;
      v13 = __PAIR64__(v12, v35 + v48);
      if ( __SPAIR64__(v12, v35 + v48) < __SPAIR64__(v33, v34) )
      {
        v39 = 0;
        while ( 2 )
        {
          v15 = &v44;
          v14 = &v44;
LABEL_19:
          if ( !*v15 )
          {
            v19 = operator new(0x18u);
            *v19 = 0;
            v19[1] = 0;
            v19[2] = v14;
            *((_QWORD *)v19 + 2) = v13;
            *v15 = v19;
            if ( *v43 )
            {
              v43 = (int **)*v43;
              v19 = *v15;
            }
            sub_261FA(v44, v19);
            ++v45;
            if ( v39 < v47 && qlseek(*v31, *(_QWORD *)v32 + v13, 0) != -1 && sub_37524((int)v41, a1[1]) )
            {
              (*(void (__fastcall **)(int *, char *, _DWORD, _DWORD, unsigned int))(*a1 + 4))(
                a1,
                v41,
                v13 - v29,
                (v13 - __PAIR64__(a4, v29)) >> 32,
                v39);
              v13 += v42;
              if ( v13 < __SPAIR64__(v33, v34) )
              {
                ++v39;
                if ( !v44 )
                  continue;
                v14 = (int **)v44;
                v15 = &v44;
                while ( 1 )
                {
                  v16 = v14[4];
                  v17 = v14[5];
                  if ( v13 >= __SPAIR64__((unsigned int)v17, (unsigned int)v16) )
                  {
                    if ( __SPAIR64__((unsigned int)v17, (unsigned int)v16) >= v13 )
                      goto LABEL_19;
                    v18 = v14[1];
                    v15 = v14 + 1;
                    if ( !v18 )
                      goto LABEL_19;
                    ++v14;
                  }
                  else
                  {
                    v18 = *v14;
                    if ( !*v14 )
                    {
                      v15 = v14;
                      goto LABEL_19;
                    }
                  }
                  v15 = v14;
                  v14 = (int **)v18;
                }
              }
            }
          }
          break;
        }
      }
      v20 = v49;
      sub_373EE((int)&v43, v44);
      v9 = v35 + v20;
      v40 += __CFADD__(v35, v20);
      if ( __SPAIR64__(v40, v35 + v20) >= __SPAIR64__(v33, v34) )
        break;
      v38 = v28;
      if ( v51 )
      {
        v21 = (int **)v51;
        v22 = &v51;
        while ( 1 )
        {
          v23 = v21[4];
          v24 = v21[5];
          if ( __SPAIR64__(v40, v9) >= __SPAIR64__((unsigned int)v24, (unsigned int)v23) )
          {
            if ( __SPAIR64__((unsigned int)v24, (unsigned int)v23) >= __SPAIR64__(v40, v9) )
              goto LABEL_37;
            v25 = v21[1];
            v22 = v21 + 1;
            if ( !v25 )
              goto LABEL_37;
            ++v21;
          }
          else
          {
            v25 = *v21;
            if ( !*v21 )
            {
              v22 = v21;
              goto LABEL_37;
            }
          }
          v22 = v21;
          v21 = (int **)v25;
        }
      }
    }
  }
  sub_373EE((int)&v50, v51);
  qlseek(*v31, *(_QWORD *)v32 + v27, 0);
  return _stack_chk_guard - v53;
}
// 2FC0E: conditional instruction was optimized away because %var_7C.4==0
