__int64 __fastcall sub_E2EAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // rbx
  _BOOL4 v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 v17; // rsi
  unsigned __int64 *v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // r15d
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  __int64 i; // r13
  __int64 v41; // rdi
  _BYTE *v42; // rax
  __int64 v43; // rdi
  _BYTE *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  _BYTE *v47; // rax
  __int64 v48; // [rsp+8h] [rbp-40h]

  v8 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v19 = sub_B68690(a2, a2, a3, a4, a5, a6);
  v20 = (__int64 *)*v19;
  v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( *v19 >= v21 )
  {
    if ( v20 == (__int64 *)v21 )
      goto LABEL_2;
    if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 206 )
    {
      v22 = (__int64 *)(v21 + 8);
      while ( v20 != v22 )
      {
        v23 = *v22++;
        if ( *(_WORD *)(v23 + 36) == 206 )
          goto LABEL_23;
      }
      goto LABEL_2;
    }
LABEL_23:
    v25 = *(_DWORD *)(a1 + 44);
    v26 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 44) = (*(_DWORD *)(a1 + 44) & 0xFFFFFFFE) + 2;
    sub_971800(v26, "Ua9enable_ifI");
    v31 = (__int64 *)*sub_B68690(a2, (__int64)"Ua9enable_ifI", v27, v28, v29, v30);
    v36 = sub_B68690(a2, (__int64)"Ua9enable_ifI", v32, v33, v34, v35);
    for ( i = *v36 + 8LL * *((unsigned int *)v36 + 2); (__int64 *)i != v31; ++v31 )
    {
      v45 = *v31;
      if ( *(_WORD *)(*v31 + 36) == 206 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) <= 0x5Fu )
        {
          v41 = *(_QWORD *)(a1 + 8);
          v42 = *(_BYTE **)(v41 + 32);
          if ( (unsigned __int64)v42 >= *(_QWORD *)(v41 + 24) )
          {
            v48 = *v31;
            sub_2257CD0(v41, 88);
            v45 = v48;
          }
          else
          {
            *(_QWORD *)(v41 + 32) = v42 + 1;
            *v42 = 88;
          }
          sub_E24970(a1, *(unsigned __int16 **)(v45 + 40), (unsigned __int16 *)0xFFFFFFFFLL, 0, v38, v39);
          v43 = *(_QWORD *)(a1 + 8);
          v44 = *(_BYTE **)(v43 + 32);
          if ( (unsigned __int64)v44 >= *(_QWORD *)(v43 + 24) )
          {
            sub_2257CD0(v43, 69);
          }
          else
          {
            *(_QWORD *)(v43 + 32) = v44 + 1;
            *v44 = 69;
          }
        }
        else
        {
          sub_E2E9D0((_QWORD *)a1, *(unsigned __int16 **)(v45 + 40), a7, v45, v37, v38, v39);
        }
      }
    }
    v46 = *(_QWORD *)(a1 + 8);
    v47 = *(_BYTE **)(v46 + 32);
    if ( (unsigned __int64)v47 >= *(_QWORD *)(v46 + 24) )
    {
      sub_2257CD0(v46, 69);
    }
    else
    {
      *(_QWORD *)(v46 + 32) = v47 + 1;
      *v47 = 69;
    }
    *(_DWORD *)(a1 + 44) = v25;
    goto LABEL_2;
  }
  v24 = *v19;
  while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 206 )
  {
    v24 += 8LL;
    if ( v21 == v24 )
      goto LABEL_2;
  }
  if ( v21 != v24 )
    goto LABEL_23;
LABEL_2:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 && (*(_BYTE *)(a2 + 87) & 0x20) != 0 && *(_QWORD *)(a2 + 176) )
    v8 = *(_QWORD *)(a2 + 184);
  v9 = 0;
  v10 = sub_B53DB0(v8);
  if ( v10 )
  {
    v15 = *(_BYTE *)(v8 + 28);
    v8 = *(_QWORD *)(v10 + 48);
    v11 = (v15 + 92) & 0x7F;
    v9 = (unsigned __int8)v11 > 2u;
  }
  v16 = (__int64 *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *v16;
  if ( *(_BYTE *)(*v16 + 16) != 26 )
    v17 = sub_F3F310(*v16, v17, v11, v12);
  return sub_E280E0(a1, v17, v9, v8, v13, v14);
}

