void __fastcall sub_1DC3470(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edi
  unsigned int v27; // esi
  __int64 v28; // r8
  int v29; // ecx
  __int64 *v30; // r12
  unsigned int i; // edx
  __int64 *v32; // r9
  __int64 v33; // r14
  unsigned int v34; // edx
  bool v35; // zf
  _QWORD *v36; // r12
  _QWORD *v37; // rbx
  __int64 *v39; // [rsp+28h] [rbp-90h] BYREF
  __int64 v40; // [rsp+30h] [rbp-88h] BYREF
  int v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h] BYREF
  __int64 v43; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h]
  __int64 v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  __int64 v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+70h] [rbp-48h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]

  *(_QWORD *)a1 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 264) + 194LL) && (unsigned __int8)sub_15F7970(a2) )
  {
    *(_BYTE *)(a1 + 8) = 1;
    return;
  }
  v19 = sub_1DBB6C0(a1, a4, a5);
  *(_BYTE *)(a1 + 8) = v19;
  if ( v19 )
    return;
  BYTE4(v42) = 0;
  LOBYTE(v15) = a3 == 16;
  LODWORD(v42) = a3;
  v44 = a6;
  LODWORD(v43) = a4;
  v45 = a7;
  v49 = a5;
  v46 = a8;
  BYTE5(v42) = a3 == 16;
  LODWORD(v47) = a9;
  v48 = a10;
  v20 = *(unsigned int *)(a2 + 11320);
  if ( (_DWORD)v20 )
  {
    LOBYTE(v15) = *(_BYTE *)(*(_QWORD *)(a2 + 11312) + (v20 << 6) - 59) | v15;
    BYTE5(v42) = v15;
  }
  sub_1DBA9B0(a2, a4, v15, v16, v17, v18, v42, v43);
  if ( !v44 )
    goto LABEL_24;
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
  v26 = v42;
  v27 = *(_DWORD *)(a2 + 12368);
  v40 = v21;
  v41 = v42;
  if ( !v27 )
  {
    v39 = nullptr;
    goto LABEL_19;
  }
  v28 = *(_QWORD *)(a2 + 12352);
  v29 = 1;
  v30 = nullptr;
  for ( i = (v27 - 1)
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * v42)
              | ((unsigned __int64)(((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4)) << 32))) >> 31)
           ^ (756364221 * v42)); ; i = (v27 - 1) & v34 )
  {
    v32 = (__int64 *)(v28 + 16LL * i);
    v33 = *v32;
    if ( v21 == *v32 && (_DWORD)v42 == *((_DWORD *)v32 + 2) )
    {
      v19 = 1;
      goto LABEL_24;
    }
    if ( v33 == -4096 )
      break;
    if ( v33 == -8192 && *((_DWORD *)v32 + 2) == -2 && !v30 )
      v30 = (__int64 *)(v28 + 16LL * i);
LABEL_15:
    v34 = v29 + i;
    ++v29;
  }
  if ( *((_DWORD *)v32 + 2) != -1 )
    goto LABEL_15;
  v23 = *(unsigned int *)(a2 + 12360);
  v22 = 3 * v27;
  if ( !v30 )
    v30 = v32;
  v24 = (unsigned int)(v23 + 1);
  v25 = (unsigned int)(4 * v24);
  v39 = v30;
  if ( (unsigned int)v25 >= (unsigned int)v22 )
  {
LABEL_19:
    v27 *= 2;
    goto LABEL_20;
  }
  v22 = v27 - *(_DWORD *)(a2 + 12364) - (unsigned int)v24;
  v25 = v27 >> 3;
  if ( (unsigned int)v22 <= (unsigned int)v25 )
  {
LABEL_20:
    sub_1DC31E0((__int64 *)(a2 + 12352), v27, v22, v23, v24, v25);
    sub_1DBE290((__int64 *)(a2 + 12352), &v40, &v39);
    v21 = v40;
    v26 = v41;
    v30 = v39;
    LODWORD(v24) = *(_DWORD *)(a2 + 12360) + 1;
  }
  v35 = *v30 == -4096;
  *(_DWORD *)(a2 + 12360) = v24;
  if ( !v35 || *((_DWORD *)v30 + 2) != -1 )
    --*(_DWORD *)(a2 + 12364);
  *v30 = v21;
  *((_DWORD *)v30 + 2) = v26;
LABEL_24:
  v36 = *(_QWORD **)(a2 + 12616);
  v37 = *(_QWORD **)(a2 + 12608);
  for ( *(_BYTE *)(a1 + 9) = v19; v36 != v37; ++v37 )
  {
    if ( *v37 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*v37 + 32LL))(*v37, a2, &v42);
  }
}
