void __fastcall sub_189ED00(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __m128 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  __int64 *v13; // r14
  size_t v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 *v27; // [rsp+8h] [rbp-F0h]
  __int64 *v28; // [rsp+10h] [rbp-E8h]
  __int64 v29; // [rsp+18h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v31[25]; // [rsp+30h] [rbp-C8h] BYREF

  v29 = sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(a3 + 59) & 3) == 2 )
    return;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_3;
  v17 = sub_B8C3D0(a3, a2, v8, v9, v10, v11);
  v20 = *v17;
  v21 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v21 )
  {
    if ( v20 != v21 )
    {
      while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 386 )
      {
        v21 += 8LL;
        if ( v20 == v21 )
          goto LABEL_19;
      }
      return;
    }
  }
  else
  {
    v22 = (__int64 *)*v17;
    while ( 1 )
    {
      v20 = *v22;
      if ( *(_WORD *)(*v22 + 36) == 386 )
        break;
      if ( (__int64 *)v21 == ++v22 )
        goto LABEL_19;
    }
    if ( (__int64 *)v21 != v22 )
      return;
  }
LABEL_19:
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
LABEL_3:
    if ( (unsigned __int8)sub_189E290(*a1, (__int64 *)a2, a3, a4, 0, 0) )
    {
      v12 = *(__int64 **)(a2 + 96);
      v13 = *(__int64 **)(a3 + 96);
      v27 = &v12[*(unsigned int *)(a2 + 104)];
      v28 = &v13[*(unsigned int *)(a3 + 104)];
      if ( v28 == v13 || &v12[*(unsigned int *)(a2 + 104)] == v12 )
      {
LABEL_11:
        if ( ((*(_QWORD *)(a3 + 56) & 0x40000LL) != 0) == ((*(_QWORD *)(a2 + 56) & 0x40000LL) != 0) )
        {
          if ( (*(_BYTE *)(a3 + 58) & 2) != 0
            || (v14 = j__strlen("load"),
                v15 = sub_6F3470(*(_QWORD *)(v29 + 17504), "load", v14),
                v16 = *(_QWORD **)(v29 + 17512),
                v31[0] = v15,
                *(_QWORD *)(a3 + 40) != sub_FE3230(v16, 0, v31)) )
          {
            sub_168B9F0((__int64)v31, a1, *(_DWORD *)(a2 + 24), 0x1A07u, 0);
            sub_15F7200(v31);
            sub_168B9F0((__int64)v31, a1, *(_DWORD *)(a3 + 24), 0x17CAu, 0);
            v30 = *(_QWORD *)(a3 + 40);
            sub_15894B0((__int64)v31, &v30);
            sub_15F7200(v31);
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_189E7F0(*a1, (__int64 *)a2, *v12, *v13, a4, 0, a5, 0) )
        {
          ++v12;
          ++v13;
          if ( v12 == v27 || v13 == v28 )
            goto LABEL_11;
        }
      }
    }
    return;
  }
  v23 = sub_B8C3D0(a3, a2, v20, v21, v18, v19);
  v24 = *v23;
  v25 = *v23 + 8LL * *((unsigned int *)v23 + 2);
  if ( *v23 >= v25 )
  {
    if ( v24 != v25 )
    {
      while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 199 )
      {
        v25 += 8LL;
        if ( v24 == v25 )
          goto LABEL_3;
      }
      return;
    }
    goto LABEL_3;
  }
  v26 = *v23;
  while ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 199 )
  {
    v26 += 8LL;
    if ( v25 == v26 )
      goto LABEL_3;
  }
  if ( v25 == v26 )
    goto LABEL_3;
}
