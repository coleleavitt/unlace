/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B3E0
// Address: 0x0003B3E0

//----- (0003B3E0) --------------------------------------------------------
char __cdecl sub_3B3E0(int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // kr00_8
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  _QWORD *v10; // ecx
  __int64 v11; // xmm0_8
  int v12; // edx
  char *v13; // eax
  int v14; // edx
  __int64 v15; // xmm0_8
  unsigned int v17; // [esp+4h] [ebp-78h]
  unsigned int v18; // [esp+8h] [ebp-74h]
  unsigned __int64 v19; // [esp+Ch] [ebp-70h]
  unsigned int v20; // [esp+14h] [ebp-68h]
  _DWORD v21[7]; // [esp+18h] [ebp-64h] BYREF
  void *v22; // [esp+34h] [ebp-48h]
  int v23; // [esp+38h] [ebp-44h]
  int v24; // [esp+3Ch] [ebp-40h]
  int v25; // [esp+40h] [ebp-3Ch]
  int v26; // [esp+44h] [ebp-38h]
  int v27; // [esp+48h] [ebp-34h]
  int v28; // [esp+4Ch] [ebp-30h]
  _QWORD *v29; // [esp+54h] [ebp-28h] BYREF
  __int64 v30; // [esp+58h] [ebp-24h]
  __int64 v31; // [esp+60h] [ebp-1Ch]
  unsigned int v32; // [esp+68h] [ebp-14h]

  v32 = __readgsdword(0x14u);
  v3 = a3[2];
  if ( !v3 )
    return 0;
  v20 = *a3;
  v4 = 1;
  if ( *(_DWORD *)(a1 + 308) )
    v4 = *(_DWORD *)(a1 + 308);
  v17 = v3 / v4;
  HIDWORD(v19) = 0;
  LODWORD(v5) = qlsize(*(_DWORD *)(a1 + 360));
  v6 = v5 - v20;
  if ( v6 < 0 )
  {
    LODWORD(v19) = 0;
    v18 = v4;
  }
  else
  {
    if ( (v4 > v3 || 0xFFFFFFFF / v17 >= v4) && v6 >= v4 * v17 )
    {
      v9 = 0;
      v7 = v3 / v4;
      goto LABEL_13;
    }
    v18 = v4;
    v19 = v6 / (unsigned __int64)v4;
  }
  v7 = v19;
  v8 = sub_44030();
  v9 = HIDWORD(v19);
  v4 = v18;
  if ( v8 != 1 )
    sub_43A00(0);
LABEL_13:
  if ( !(v9 | v7) )
    return 0;
  v21[0] = &off_134874;
  v21[1] = a1;
  v21[2] = v20;
  v21[3] = 0;
  v21[4] = v7;
  v21[5] = v9;
  v21[6] = v4;
  v23 = 0;
  v22 = nullptr;
  v25 = 0;
  v24 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  do
  {
    if ( !sub_3B6A0((int)v21, &v29) )
      break;
    v10 = v29;
    v11 = *v29;
    v31 = v29[1];
    v30 = v11;
    v12 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v12 + 1) )
    {
      v13 = *(char **)a2;
    }
    else
    {
      v13 = (char *)qvector_reserve(a2, *(void **)a2, v12 + 1, 0x10u);
      *(_DWORD *)a2 = v13;
      v12 = *(_DWORD *)(a2 + 4);
      v10 = v29;
    }
    v14 = 16 * v12;
    v15 = v30;
    *(_QWORD *)&v13[v14 + 8] = v31;
    *(_QWORD *)&v13[v14] = v15;
    ++*(_DWORD *)(a2 + 4);
  }
  while ( *v10 );
  v21[0] = &off_134874;
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
    v22 = nullptr;
    v24 = 0;
  }
  return 1;
}
// 3B456: variable 'v5' is possibly undefined
// 134874: using guessed type int (__cdecl *off_134874)(int);
