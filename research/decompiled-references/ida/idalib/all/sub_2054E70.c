__int64 __fastcall sub_2054E70(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  int v19; // esi
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rbp
  unsigned int v23; // edx
  __int64 v24; // rbp
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbp
  int v28; // eax
  int v29; // esi
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned int v34; // [rsp+1Ch] [rbp-3Ch] BYREF
  __int64 v35; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v36[6]; // [rsp+28h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  v4 = *a1;
  if ( v3 > 0x40 )
  {
    v5 = sub_2206780(a2);
    if ( v5 != v3 )
    {
      if ( v3 - 1 == v5 )
        goto LABEL_4;
LABEL_15:
      if ( (unsigned __int8)sub_2052700((__int64 *)(v4 + 232), a2, &v35) )
      {
        v7 = v35 + 16;
        result = *(_QWORD *)(v35 + 16);
LABEL_6:
        if ( result )
          return result;
        goto LABEL_22;
      }
      v26 = *(unsigned int *)(v4 + 248);
      v27 = v35;
      v28 = *(_DWORD *)(v4 + 240) + 1;
      v29 = 2 * v26;
      v30 = (unsigned int)(3 * v26);
      v36[0] = v35;
      if ( 4 * v28 < (unsigned int)v30 )
      {
        v30 = (unsigned int)(v26 - *(_DWORD *)(v4 + 244) - v28);
        if ( (unsigned int)v30 > (unsigned int)v26 >> 3 )
          goto LABEL_31;
        v29 = v26;
      }
      sub_2054C30(v4 + 232, v29, v26, v30, v15, v16);
      sub_2052700((__int64 *)(v4 + 232), a2, v36);
      v27 = v36[0];
      v28 = *(_DWORD *)(v4 + 240) + 1;
LABEL_31:
      *(_DWORD *)(v4 + 240) = v28;
      if ( (!*(_DWORD *)(v27 + 8) && *(_QWORD *)v27 == -1 || (--*(_DWORD *)(v4 + 244), *(_DWORD *)(v27 + 8) <= 0x40u))
        && (v31 = *(_DWORD *)(a2 + 8), v31 <= 0x40) )
      {
        v32 = *(_QWORD *)a2;
        *(_DWORD *)(v27 + 8) = v31;
        *(_QWORD *)v27 = v32;
      }
      else
      {
        sub_22056A0(v27, a2);
      }
      *(_QWORD *)(v27 + 16) = 0;
      v7 = v27 + 16;
      goto LABEL_22;
    }
LABEL_8:
    v34 = v3;
    if ( (unsigned __int8)sub_2052660((__int64 *)(v4 + 184), (int *)&v34, &v35) )
      goto LABEL_5;
    v10 = *(unsigned int *)(v4 + 200);
    v11 = v35;
    v12 = *(_DWORD *)(v4 + 192) + 1;
    v13 = 2 * v10;
    v14 = (unsigned int)(4 * v12);
    v36[0] = v35;
    if ( (unsigned int)v14 < 3 * (int)v10 )
    {
      if ( (int)v10 - *(_DWORD *)(v4 + 196) - v12 > (unsigned int)v10 >> 3 )
        goto LABEL_11;
      v13 = v10;
    }
    sub_2054A00((int **)(v4 + 184), v13, v35, v10, v14, v9);
    sub_2052660((__int64 *)(v4 + 184), (int *)&v34, v36);
    v11 = v36[0];
    v12 = *(_DWORD *)(v4 + 192) + 1;
LABEL_11:
    *(_DWORD *)(v4 + 192) = v12;
    if ( *(_DWORD *)v11 != -1 )
      --*(_DWORD *)(v4 + 196);
    goto LABEL_21;
  }
  if ( !*(_QWORD *)a2 )
    goto LABEL_8;
  if ( *(_QWORD *)a2 != 1 )
    goto LABEL_15;
LABEL_4:
  v34 = v3;
  if ( (unsigned __int8)sub_2052660((__int64 *)(v4 + 208), (int *)&v34, &v35) )
  {
LABEL_5:
    v7 = v35 + 8;
    result = *(_QWORD *)(v35 + 8);
    goto LABEL_6;
  }
  v17 = *(unsigned int *)(v4 + 224);
  v11 = v35;
  v18 = *(_DWORD *)(v4 + 216) + 1;
  v19 = 2 * v17;
  v20 = (unsigned int)(4 * v18);
  v36[0] = v35;
  if ( (unsigned int)v20 < 3 * (int)v17 )
  {
    if ( (int)v17 - *(_DWORD *)(v4 + 220) - v18 > (unsigned int)v17 >> 3 )
      goto LABEL_19;
    v19 = v17;
  }
  sub_2054A00((int **)(v4 + 208), v19, v35, v17, v20, v6);
  sub_2052660((__int64 *)(v4 + 208), (int *)&v34, v36);
  v11 = v36[0];
  v18 = *(_DWORD *)(v4 + 216) + 1;
LABEL_19:
  *(_DWORD *)(v4 + 216) = v18;
  if ( *(_DWORD *)v11 != -1 )
    --*(_DWORD *)(v4 + 220);
LABEL_21:
  v21 = v34;
  *(_QWORD *)(v11 + 8) = 0;
  v7 = v11 + 8;
  *(_DWORD *)v11 = v21;
LABEL_22:
  v22 = sub_20C3F60(a1, *(unsigned int *)(a2 + 8));
  v33 = sub_20C9AC0(40, unk_2673580);
  sub_20CA190(v33, v22, 5);
  result = v33;
  v23 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v33 + 4) &= 0x38000000u;
  *(_DWORD *)(v33 + 32) = v23;
  if ( v23 > 0x40 )
  {
    sub_2205510(v33 + 24);
    result = v33;
  }
  else
  {
    *(_QWORD *)(v33 + 24) = *(_QWORD *)a2;
  }
  v24 = *(_QWORD *)v7;
  *(_QWORD *)v7 = result;
  if ( v24 )
  {
    if ( *(_DWORD *)(v24 + 32) > 0x40u )
    {
      v25 = *(void **)(v24 + 24);
      if ( v25 )
        operator delete[](v25);
    }
    sub_20CC0C0(v24);
    sub_20C9BF0(v24);
    return *(_QWORD *)v7;
  }
  return result;
}
