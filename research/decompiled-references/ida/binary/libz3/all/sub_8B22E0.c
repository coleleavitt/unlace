__int64 __fastcall sub_8B22E0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // r13d
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // ecx
  __int64 i; // rax
  unsigned int v15; // r15d
  unsigned int *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r14
  int v20; // edx
  int v21; // edx
  __int64 v22; // r8
  int *v23; // rbx
  int *v24; // rdx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v28; // [rsp+0h] [rbp-D8h]
  int v29; // [rsp+14h] [rbp-C4h]
  __int64 v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+28h] [rbp-B0h]
  __int64 v33; // [rsp+28h] [rbp-B0h]
  unsigned int v34; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v35; // [rsp+40h] [rbp-98h]
  _QWORD v36[2]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v37[3]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v38; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v40[10]; // [rsp+88h] [rbp-50h] BYREF

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 1592);
  ++*(_DWORD *)(a1 + 1648);
  v7 = v6 + 232LL * a2;
  v8 = 232LL * a3 + v6;
  v9 = *(_DWORD *)v7 & 0x1FFFFFFF;
  *(_DWORD *)(*(_QWORD *)(a1 + 1600) + 4LL * v9) = a3;
  *(_DWORD *)v8 = v9 | *(_DWORD *)v8 & 0xE0000000;
  v28 = a1 + 8;
  sub_8ADE80(a1 + 8, v8 + 200, (int *)a4);
  *(_BYTE *)(v8 + 3) |= 0x20u;
  *(_BYTE *)(v7 + 3) &= ~0x20u;
  sub_8B12A0(a1, v4);
  v10 = *(_QWORD *)(a1 + 1496) + 24 * v4;
  v11 = *(_DWORD *)(v10 + 16);
  v12 = *(_QWORD *)v10;
  v31 = v10;
  v13 = v11 + 2;
  *(_DWORD *)(v10 + 16) = v11 + 1;
  if ( v12 )
  {
    for ( i = 0; *(_DWORD *)(v12 - 4) != i && *(_DWORD *)(v12 + 8 * i) == -1; ++i )
      ;
    v15 = i;
    *(_DWORD *)(v10 + 16) = v13;
    v29 = *(_DWORD *)(v12 - 4);
  }
  else
  {
    *(_DWORD *)(v10 + 16) = v13;
    v15 = 0;
    v29 = 0;
  }
  v36[0] = 0;
  v36[1] = 0;
  v35 = a1 + 8;
  v37[0] = 1;
  v37[1] = 0;
  v38 = a1 + 8;
  v39[0] = 0;
  v39[1] = 0;
  v40[0] = 1;
  v40[1] = 0;
  if ( v29 != v15 )
  {
    do
    {
      v16 = (unsigned int *)(v12 + 8LL * v15);
      v17 = *v16;
      v34 = v17;
      if ( v9 != (_DWORD)v17 )
      {
        v18 = v35;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 16 * v17) + 40LL * v16[1];
        if ( (*(_BYTE *)(v19 + 4) & 1) != 0 )
        {
          v32 = v35;
          sub_182EA00(v35, v36, v19);
          v18 = v32;
        }
        else
        {
          v20 = *(_DWORD *)v19;
          BYTE4(v36[0]) &= ~1u;
          LODWORD(v36[0]) = v20;
        }
        if ( (*(_BYTE *)(v19 + 20) & 1) != 0 )
        {
          sub_182EA00(v18, v37, v19 + 16);
        }
        else
        {
          v21 = *(_DWORD *)(v19 + 16);
          BYTE4(v37[0]) &= ~1u;
          LODWORD(v37[0]) = v21;
        }
        sub_1839100(v35, v36);
        sub_899320((__int64 *)(a1 + 1472), v34, a4);
        sub_48EFC0(a1 + 1472, v34, (__int64)v36, v9);
        v22 = *(_QWORD *)(a1 + 1592) + 232LL * *(unsigned int *)(*(_QWORD *)(a1 + 1600) + 4 * v17);
        v23 = (int *)(v22 + 200);
        if ( (*(_BYTE *)(v22 + 220) & 1) != 0
          || *(_DWORD *)(v22 + 216) != 1
          || (*(_BYTE *)(a4 + 20) & 1) != 0
          || *(_DWORD *)(a4 + 16) != 1 )
        {
          sub_184C880(v28, v22 + 200, a4, v22 + 200);
        }
        else
        {
          v33 = v22;
          sub_1839230(v28, v22 + 200, a4, v22 + 200);
          sub_182EF00(v28, v33 + 216);
          *(_BYTE *)(v33 + 220) &= ~1u;
          *(_DWORD *)(v33 + 216) = 1;
        }
        sub_8AE9A0((__int64 *)(a1 + 1472), &v34, &v38);
        if ( (v39[0] & 0x100000000LL) != 0
          || LODWORD(v39[0]) != 1
          || (v40[0] & 0x100000000LL) != 0
          || LODWORD(v40[0]) != 1 )
        {
          sub_8AE7F0(v28, v23, (__int64)v39, (__int64)v23);
        }
        v12 = *(_QWORD *)v31;
      }
      ++v15;
      if ( v12 )
      {
        v24 = (int *)(v12 + 8LL * v15);
        while ( v15 < *(_DWORD *)(v12 - 4) )
        {
          v25 = *v24;
          v24 += 2;
          if ( v25 != -1 )
            break;
          ++v15;
        }
      }
    }
    while ( v15 != v29 );
    v28 = v38;
  }
  sub_182EF00(v28, v39);
  sub_182EF00(v28, v40);
  v26 = v35;
  sub_182EF00(v35, v36);
  sub_182EF00(v26, v37);
  *(_DWORD *)(v31 + 16) -= 2;
  return v31;
}

