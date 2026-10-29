void __fastcall sub_1A86950(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // r13d
  unsigned __int64 v9; // rbp
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 *v20; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h]
  int v27; // [rsp+18h] [rbp-40h]
  int v28; // [rsp+1Ch] [rbp-3Ch]
  __int16 v29; // [rsp+20h] [rbp-38h]
  char v30; // [rsp+22h] [rbp-36h]
  char v31; // [rsp+23h] [rbp-35h]

  v6 = sub_168B6C0(a1);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
  v8 = *(_DWORD *)(v7 + 944);
  if ( !v8 )
    return;
  v9 = *(_QWORD *)(v7 + 952);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_3:
    v25 = (__m128i)v9;
    v26 = 0;
    v27 = v8;
    v28 = v8;
    v29 = sub_F963B0(v9, 0, 7);
    v30 = -9;
    v31 &= 0xFCu;
    v10 = sub_B23A10(v6, &v25);
    sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
    return;
  }
  v15 = sub_B8C3D0(a2, a2, v2, v3, v4, v5);
  v18 = *v15;
  v19 = *v15 + 8LL * *((unsigned int *)v15 + 2);
  if ( *v15 >= v19 )
  {
    if ( v18 != v19 )
    {
      while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 151 )
      {
        v19 += 8LL;
        if ( v18 == v19 )
          goto LABEL_9;
      }
      return;
    }
  }
  else
  {
    v20 = (__int64 *)*v15;
    while ( 1 )
    {
      v18 = *v20;
      if ( *(_WORD *)(*v20 + 36) == 151 )
        break;
      if ( (__int64 *)v19 == ++v20 )
        goto LABEL_9;
    }
    if ( (__int64 *)v19 != v20 )
      return;
  }
LABEL_9:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_3;
  v21 = sub_B8C3D0(a2, a2, v18, v19, v16, v17);
  v22 = *v21;
  v23 = *v21 + 8LL * *((unsigned int *)v21 + 2);
  if ( *v21 >= v23 )
  {
    if ( v22 == v23 )
      goto LABEL_3;
    while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 156 )
    {
      v23 += 8LL;
      if ( v22 == v23 )
        goto LABEL_3;
    }
  }
  else
  {
    v24 = *v21;
    while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 156 )
    {
      v24 += 8LL;
      if ( v23 == v24 )
        goto LABEL_3;
    }
    if ( v23 == v24 )
      goto LABEL_3;
  }
}
