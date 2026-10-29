__int64 __fastcall sub_6FE800(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned int v10; // r8d
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r11
  __int64 **v14; // r9
  __int64 *v15; // rax
  __int64 *v16; // r8
  __int64 *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rsi
  __int64 v32; // r9
  unsigned __int64 v33; // rtt
  __int64 **v34; // r10
  unsigned __int64 v35; // r8
  __int64 *v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  unsigned int v41; // ecx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rdi
  __int64 v46; // rsi
  unsigned int v47; // eax
  int v48; // r14d
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  int v55; // eax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rdx

  v10 = 0;
  v11 = *(_QWORD **)(a1 + 16);
  if ( v11[43] )
  {
    v12 = v11[41];
    v14 = *(__int64 ***)(v11[40] + 8 * (a2 % v12));
    if ( v14 )
    {
      v15 = *v14;
      if ( (*v14)[1] != a2 )
      {
        do
        {
          v16 = (__int64 *)*v15;
          if ( !*v15 )
            return 0;
          v14 = (__int64 **)v15;
          if ( a2 % v12 != v16[1] % v12 )
            return 0;
          v15 = (__int64 *)*v15;
        }
        while ( v16[1] != a2 );
      }
      if ( !v14 )
        return 0;
      v17 = *v14;
      v10 = 0;
      if ( *v14 )
      {
        *a3 = *(_QWORD *)v17[2];
        *a4 = *(_QWORD *)(v17[2] + 8);
        v18 = *(_DWORD *)(a5 + 8);
        if ( v18 )
        {
          v41 = 4 * v18;
          v19 = *(unsigned int *)(a5 + 16);
          if ( (unsigned int)(4 * v18) < 0x40 )
            v41 = 64;
          if ( v41 < (unsigned int)v19 )
          {
            v45 = *(_QWORD **)a5;
            v46 = 16LL * (unsigned int)v19;
            v47 = v18 - 1;
            if ( v47 )
            {
              _BitScanReverse(&v47, v47);
              v48 = 1 << (v47 + 2);
              if ( v48 < 64 )
                v48 = 64;
              if ( v48 == (_DWORD)v19 )
              {
                v49 = &v45[(unsigned __int64)v46 / 8];
                *(_QWORD *)(a5 + 8) = 0;
                if ( ((16 * (_BYTE)v19) & 0x10) == 0 || (*v45 = -4096, v45 += 2, v49 != v45) )
                {
                  do
                  {
                    *v45 = -4096;
                    v45 += 4;
                    *(v45 - 2) = -4096;
                  }
                  while ( v49 != v45 );
                }
                goto LABEL_15;
              }
              operator delete(v45, v46, 8);
              v50 = (4 * v48 / 3u + 1)
                  | ((unsigned __int64)(4 * v48 / 3u + 1) >> 1)
                  | (((4 * v48 / 3u + 1) | ((unsigned __int64)(4 * v48 / 3u + 1) >> 1)) >> 2)
                  | (((4 * v48 / 3u + 1)
                    | ((unsigned __int64)(4 * v48 / 3u + 1) >> 1)
                    | (((4 * v48 / 3u + 1) | ((unsigned __int64)(4 * v48 / 3u + 1) >> 1)) >> 2)) >> 4);
              v55 = (v50 | (v50 >> 8) | ((v50 | (v50 >> 8)) >> 16)) + 1;
              v54 = 16 * ((v50 | (v50 >> 8) | ((v50 | (v50 >> 8)) >> 16)) + 1);
            }
            else
            {
              operator delete(v45, v46, 8);
              v54 = 2048;
              v55 = 128;
            }
            *(_DWORD *)(a5 + 16) = v55;
            v56 = (_QWORD *)sub_22300B0(v54, 8, v50, v51, v52, v53);
            v57 = *(unsigned int *)(a5 + 16);
            *(_QWORD *)(a5 + 8) = 0;
            *(_QWORD *)a5 = v56;
            v58 = &v56[2 * v57];
            if ( v56 != v58 )
            {
              if ( (((_BYTE)v58 - (_BYTE)v56) & 0x10) == 0 || (*v56 = -4096, v56 += 2, v58 != v56) )
              {
                do
                {
                  *v56 = -4096;
                  v56 += 4;
                  *(v56 - 2) = -4096;
                }
                while ( v58 != v56 );
              }
            }
            goto LABEL_15;
          }
        }
        else
        {
          if ( !*(_DWORD *)(a5 + 12) )
            goto LABEL_15;
          v19 = *(unsigned int *)(a5 + 16);
          if ( !(_DWORD)v19 )
          {
LABEL_14:
            *(_QWORD *)(a5 + 8) = 0;
LABEL_15:
            sub_6FE5C0((__int64 *)a6);
            sub_6FE5C0(a7);
            v20 = v17[2];
            v21 = *(_QWORD **)a5;
            *(_QWORD *)a5 = *(_QWORD *)(v20 + 16);
            v22 = *(_DWORD *)(v20 + 24);
            *(_QWORD *)(v20 + 16) = v21;
            LODWORD(v21) = *(_DWORD *)(a5 + 8);
            *(_DWORD *)(a5 + 8) = v22;
            v23 = *(_DWORD *)(v20 + 28);
            *(_DWORD *)(v20 + 24) = (_DWORD)v21;
            LODWORD(v21) = *(_DWORD *)(a5 + 12);
            *(_DWORD *)(a5 + 12) = v23;
            v24 = *(_DWORD *)(v20 + 32);
            *(_DWORD *)(v20 + 28) = (_DWORD)v21;
            LODWORD(v21) = *(_DWORD *)(a5 + 16);
            *(_DWORD *)(a5 + 16) = v24;
            *(_DWORD *)(v20 + 32) = (_DWORD)v21;
            v25 = v17[2];
            v26 = *(_QWORD *)a6;
            *(_QWORD *)a6 = *(_QWORD *)(v25 + 40);
            v27 = *(_DWORD *)(v25 + 48);
            *(_QWORD *)(v25 + 40) = v26;
            LODWORD(v26) = *(_DWORD *)(a6 + 8);
            *(_DWORD *)(a6 + 8) = v27;
            v28 = *(_DWORD *)(v25 + 52);
            *(_DWORD *)(v25 + 48) = v26;
            LODWORD(v26) = *(_DWORD *)(a6 + 12);
            *(_DWORD *)(a6 + 12) = v28;
            v29 = *(_DWORD *)(v25 + 56);
            *(_DWORD *)(v25 + 52) = v26;
            LODWORD(v26) = *(_DWORD *)(a6 + 16);
            *(_DWORD *)(a6 + 16) = v29;
            *(_DWORD *)(v25 + 56) = v26;
            v30 = *(_QWORD **)(a1 + 16);
            v31 = v30[41];
            v32 = v30[40];
            v33 = v17[1];
            v34 = (__int64 **)(v32 + 8 * (v33 % v31));
            v35 = v33 % v31;
            v36 = *v34;
            do
            {
              v37 = v36;
              v36 = (__int64 *)*v36;
            }
            while ( v17 != v36 );
            v38 = *v17;
            if ( *v34 == v37 )
            {
              if ( v38 )
              {
                v44 = *(_QWORD *)(v38 + 8) % v31;
                if ( v35 != v44 )
                {
                  *(_QWORD *)(v32 + 8 * v44) = v37;
                  *(_QWORD *)(v30[40] + 8 * v35) = 0;
                  v38 = *v17;
                }
              }
              else
              {
                *v34 = nullptr;
                v38 = *v17;
              }
            }
            else if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8) % v31;
              if ( v35 != v39 )
              {
                *(_QWORD *)(v32 + 8 * v39) = v37;
                v38 = *v17;
              }
            }
            *v37 = v38;
            sub_6F00E0(v17);
            --v30[43];
            return 1;
          }
          if ( (unsigned int)v19 > 0x40 )
          {
            operator delete(*(_QWORD *)a5, 16LL * (unsigned int)v19, 8);
            *(_DWORD *)(a5 + 16) = 0;
            *(_QWORD *)a5 = 0;
            goto LABEL_14;
          }
        }
        v42 = *(_QWORD **)a5;
        v43 = *(_QWORD *)a5 + 16 * v19;
        if ( *(_QWORD *)a5 != v43 )
        {
          if ( (((_BYTE)v43 - (_BYTE)v42) & 0x10) == 0 || (*v42 = -4096, v42 += 2, (_QWORD *)v43 != v42) )
          {
            do
            {
              *v42 = -4096;
              v42 += 4;
              *(v42 - 2) = -4096;
            }
            while ( (_QWORD *)v43 != v42 );
          }
        }
        goto LABEL_14;
      }
    }
  }
  return v10;
}
