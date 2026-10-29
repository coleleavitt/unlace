void __fastcall sub_8B2760(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  __int64 i; // rax
  unsigned int v8; // ebx
  unsigned int *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  int *v23; // rax
  int v24; // edx
  __int64 v25; // [rsp+8h] [rbp-B0h]
  __int64 v26; // [rsp+8h] [rbp-B0h]
  __int64 v27; // [rsp+8h] [rbp-B0h]
  __int64 v28; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+8h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-A8h]
  __int64 v31; // [rsp+10h] [rbp-A8h]
  __int64 v32; // [rsp+18h] [rbp-A0h]
  unsigned int v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+24h] [rbp-94h]
  __int64 v35; // [rsp+28h] [rbp-90h]
  _QWORD *v36; // [rsp+30h] [rbp-88h]
  _QWORD v37[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v39[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v40[10]; // [rsp+68h] [rbp-50h] BYREF

  if ( *(_DWORD *)a3 || *(_DWORD *)(a3 + 32) )
  {
    sub_8B1420((__int64)a1, a2, a3);
    v4 = a1[187] + 24LL * a2;
    v5 = *(_DWORD *)(v4 + 16);
    v6 = *(_QWORD *)v4;
    v32 = v4;
    *(_DWORD *)(v4 + 16) = v5 + 1;
    if ( v6 )
    {
      for ( i = 0; *(_DWORD *)(v6 - 4) != i && *(_DWORD *)(v6 + 8 * i) == -1; ++i )
        ;
      v8 = i;
      *(_DWORD *)(v32 + 16) = v5 + 2;
      v34 = *(_DWORD *)(v6 - 4);
      if ( v34 != (_DWORD)i )
      {
        v35 = a3 + 32;
        while ( 1 )
        {
          v9 = (unsigned int *)(v6 + 8LL * v8);
          v10 = *v9;
          v11 = *(unsigned int *)(a1[200] + 4 * v10);
          v12 = a1[199];
          v37[0] = 0;
          v38[0] = 1;
          v13 = (__int64 *)(a1[185] + 16 * v10);
          v33 = v11;
          v14 = 232 * v11;
          v39[0] = 0;
          v40[0] = 1;
          v15 = v9[1];
          v16 = *v13;
          v36 = a1 + 92;
          v25 = v14 + v12;
          v37[1] = 0;
          v17 = v16 + 40 * v15;
          v38[1] = 0;
          v39[1] = 0;
          v40[1] = 0;
          if ( (*(_BYTE *)(a3 + 20) & 1) != 0
            || *(_DWORD *)(a3 + 16) != 1
            || (*(_BYTE *)(v17 + 20) & 1) != 0
            || *(_DWORD *)(v17 + 16) != 1 )
          {
            v30 = v17;
            sub_184C880(a1 + 92, a3, v17, v37);
            v18 = v30;
          }
          else
          {
            v31 = v17;
            sub_1839230(a1 + 92, a3, v17, v37);
            sub_182EF00(a1 + 92, v38);
            BYTE4(v38[0]) &= ~1u;
            v18 = v31;
            LODWORD(v38[0]) = 1;
          }
          if ( (*(_BYTE *)(a3 + 52) & 1) != 0
            || *(_DWORD *)(a3 + 48) != 1
            || (*(_BYTE *)(v18 + 20) & 1) != 0
            || *(_DWORD *)(v18 + 16) != 1 )
          {
            sub_184C880(a1 + 92, v35, v18, v39);
          }
          else
          {
            sub_1839230(a1 + 92, v35, v18, v39);
            sub_182EF00(a1 + 92, v40);
            BYTE4(v40[0]) &= ~1u;
            LODWORD(v40[0]) = 1;
          }
          v26 = v25 + 200;
          sub_8AE7F0((__int64)(a1 + 92), (int *)v37, v26, (__int64)v37);
          sub_8AE7F0((__int64)(a1 + 92), (int *)v39, v26, (__int64)v39);
          sub_1839100(v36, v37);
          sub_1839100(v36, v39);
          v19 = v14 + a1[199];
          v20 = v19 + 8;
          if ( LODWORD(v37[0]) )
          {
            if ( *(_DWORD *)(v19 + 8) )
            {
              if ( (*(_BYTE *)(v19 + 28) & 1) == 0
                && *(_DWORD *)(v19 + 24) == 1
                && (v38[0] & 0x100000000LL) == 0
                && LODWORD(v38[0]) == 1 )
              {
                v29 = v14 + a1[199];
                sub_1839610(a1 + 92, v20, v37);
                sub_182EF00(a1 + 92, v29 + 24);
                v21 = v29;
                *(_BYTE *)(v29 + 28) &= ~1u;
                *(_DWORD *)(v29 + 24) = 1;
                goto LABEL_22;
              }
              v27 = v14 + a1[199];
              sub_18540F0(a1 + 92, v20, v37, v19 + 8);
            }
            else
            {
              v27 = v14 + a1[199];
              sub_8ADE80((__int64)(a1 + 92), v20, (int *)v37);
            }
          }
          else
          {
            v27 = v14 + a1[199];
            sub_8ADE80((__int64)(a1 + 92), v20, (int *)(v19 + 8));
          }
          v21 = v27;
LABEL_22:
          v22 = v21 + 40;
          if ( LODWORD(v39[0]) )
          {
            if ( *(_DWORD *)(v21 + 40) )
            {
              if ( (*(_BYTE *)(v21 + 60) & 1) != 0
                || *(_DWORD *)(v21 + 56) != 1
                || (v40[0] & 0x100000000LL) != 0
                || LODWORD(v40[0]) != 1 )
              {
                sub_18540F0(a1 + 92, v22, v39, v21 + 40);
              }
              else
              {
                v28 = v21;
                sub_1839610(a1 + 92, v22, v39);
                sub_182EF00(a1 + 92, v28 + 56);
                *(_BYTE *)(v28 + 60) &= ~1u;
                *(_DWORD *)(v28 + 56) = 1;
              }
            }
            else
            {
              sub_8ADE80((__int64)(a1 + 92), v22, (int *)v39);
            }
          }
          else
          {
            sub_8ADE80((__int64)(a1 + 92), v22, (int *)(v21 + 40));
          }
          if ( (*(_BYTE *)(a1[199] + v14 + 3) & 0x20) != 0 )
            sub_8B12A0((__int64)a1, v33);
          ++v8;
          sub_182EF00(v36, v37);
          sub_182EF00(v36, v38);
          sub_182EF00(v36, v39);
          sub_182EF00(v36, v40);
          v6 = *(_QWORD *)v32;
          if ( *(_QWORD *)v32 )
          {
            v23 = (int *)(v6 + 8LL * v8);
            while ( v8 < *(_DWORD *)(v6 - 4) )
            {
              v24 = *v23;
              v23 += 2;
              if ( v24 != -1 )
                break;
              ++v8;
            }
          }
          if ( v34 == v8 )
          {
            v5 = *(_DWORD *)(v32 + 16) - 2;
            break;
          }
        }
      }
    }
    *(_DWORD *)(v32 + 16) = v5;
  }
}

