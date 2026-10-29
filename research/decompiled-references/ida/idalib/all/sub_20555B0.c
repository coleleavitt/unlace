__int64 __fastcall sub_20555B0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // esi
  __int64 v15; // rcx
  bool v16; // zf
  bool v17; // cc
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbp
  unsigned int v26; // edx
  __int64 v27; // rbp
  void *v28; // rdi
  __int64 v29; // [rsp+0h] [rbp-98h]
  __int64 v31; // [rsp+10h] [rbp-88h] BYREF
  __int64 v32; // [rsp+18h] [rbp-80h] BYREF
  __int64 v33; // [rsp+20h] [rbp-78h] BYREF
  void *v34; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+40h] [rbp-58h]
  char v37; // [rsp+44h] [rbp-54h]
  __int64 v38; // [rsp+48h] [rbp-50h] BYREF
  int v39; // [rsp+50h] [rbp-48h]

  v5 = *a1;
  v6 = *(_DWORD *)(a3 + 8);
  v33 = a2;
  v35 = v6;
  if ( v6 > 0x40 )
    sub_2205510(&v34);
  else
    v34 = *(void **)a3;
  if ( sub_2052960((__int64 *)(v5 + 256), (int *)&v33, &v31) )
  {
    v9 = (__int64 *)(v31 + 24);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    result = *v9;
    if ( *v9 )
      return result;
LABEL_17:
    v20 = sub_20C3F60(a1, *(unsigned int *)(a3 + 8));
    v25 = sub_20C5270(v20, a2, v21, v22, v23, v24);
    v29 = sub_20C9AC0(40, unk_2673580);
    sub_20CA190(v29, v25, 5);
    result = v29;
    v26 = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v29 + 4) &= 0x38000000u;
    *(_DWORD *)(v29 + 32) = v26;
    if ( v26 > 0x40 )
    {
      sub_2205510(v29 + 24);
      result = v29;
    }
    else
    {
      *(_QWORD *)(v29 + 24) = *(_QWORD *)a3;
    }
    v27 = *v9;
    *v9 = result;
    if ( v27 )
    {
      if ( *(_DWORD *)(v27 + 32) > 0x40u )
      {
        v28 = *(void **)(v27 + 24);
        if ( v28 )
          operator delete[](v28);
      }
      sub_20CC0C0(v27);
      sub_20C9BF0(v27);
      return *v9;
    }
    return result;
  }
  v11 = *(unsigned int *)(v5 + 272);
  v12 = v31;
  v13 = *(_DWORD *)(v5 + 264) + 1;
  v14 = 2 * v11;
  v15 = (unsigned int)(3 * v11);
  v32 = v31;
  if ( 4 * v13 >= (unsigned int)v15 )
    goto LABEL_29;
  v15 = (unsigned int)(v11 - *(_DWORD *)(v5 + 268) - v13);
  if ( (unsigned int)v15 <= (unsigned int)v11 >> 3 )
  {
    v14 = v11;
LABEL_29:
    sub_2055310(v5 + 256, v14, v11, v15, v7, v8);
    sub_2052960((__int64 *)(v5 + 256), (int *)&v33, &v32);
    v12 = v32;
    v13 = *(_DWORD *)(v5 + 264) + 1;
  }
  *(_DWORD *)(v5 + 264) = v13;
  v16 = *(_DWORD *)v12 == -1;
  v36 = -1;
  v37 = 1;
  v39 = 0;
  v38 = -1;
  if ( !v16 || !*(_BYTE *)(v12 + 4) || !sub_2050E70(v12 + 8, (__int64)&v38) )
    --*(_DWORD *)(v5 + 268);
  v17 = *(_DWORD *)(v12 + 16) <= 0x40u;
  *(_DWORD *)v12 = v33;
  *(_BYTE *)(v12 + 4) = BYTE4(v33);
  if ( !v17 )
  {
    v18 = *(void **)(v12 + 8);
    if ( v18 )
      operator delete[](v18);
  }
  v19 = v34;
  *(_QWORD *)(v12 + 24) = 0;
  v9 = (__int64 *)(v12 + 24);
  *(v9 - 2) = (__int64)v19;
  *((_DWORD *)v9 - 2) = v35;
  result = *v9;
  if ( !*v9 )
    goto LABEL_17;
  return result;
}
