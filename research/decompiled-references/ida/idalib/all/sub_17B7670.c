void __fastcall sub_17B7670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  char i; // r12
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  unsigned __int8 v18; // al
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 *v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  __int64 *v28; // rdx
  __int64 *v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r9
  _QWORD *v34; // rdi
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rsi
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  __int64 v54[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = a3;
  for ( i = a4; *(char *)(v6 + 8) >= 0; v6 = *(_QWORD *)v6 )
  {
    v10 = *(_QWORD *)(v6 + 360);
    if ( !v10 )
      break;
    if ( !sub_B8E490(v10) )
      break;
  }
  if ( i )
    sub_B94AD0(*(__m128i **)(a1 + 544), a2, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2)
    && !*(_QWORD *)(v6 + 24) )
  {
    return;
  }
  v11 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v11 - 34 <= 5 )
  {
    if ( (unsigned __int8)sub_B77A80(a2) )
      return;
    v11 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  v12 = *(_QWORD *)(a2 + 40);
  if ( v11 == 80 && !v12 )
  {
    sub_17A1F20(v6, a2);
    return;
  }
  v13 = sub_15C1650(a1 + 2608, v12);
  v54[0] = v13;
  if ( !v13 )
    goto LABEL_26;
  while ( 1 )
  {
    v14 = v13;
    v15 = v13 & 1;
    if ( (v13 & 1) != 0 )
      v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
    if ( !*(_BYTE *)(v6 + 100) )
    {
      if ( sub_2236570(v6 + 80, v14) )
      {
        v13 = v54[0];
        v15 = v54[0] & 1;
        goto LABEL_20;
      }
LABEL_23:
      v15 = v54[0] & 1;
      goto LABEL_24;
    }
    v16 = *(_QWORD **)(v6 + 80);
    v17 = &v16[*(unsigned int *)(v6 + 92)];
    if ( v16 != v17 )
      break;
LABEL_24:
    if ( !v15 )
    {
      v54[0] = 0;
      goto LABEL_26;
    }
    sub_15C20B0(v54);
    v13 = v54[0];
    if ( !v54[0] )
      goto LABEL_26;
  }
  while ( v14 != *v16 )
  {
    if ( v17 == ++v16 )
      goto LABEL_24;
  }
LABEL_20:
  if ( v15 )
    v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  if ( !sub_B72D20(a2, v13) )
    goto LABEL_23;
  v31 = v54[0];
  v32 = v54[0];
  v33 = v54[0] & 1;
  if ( (v54[0] & 1) != 0 )
    v32 = *(_QWORD *)(v54[0] & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)(v6 + 100) )
  {
    v34 = *(_QWORD **)(v6 + 80);
    v35 = &v34[*(unsigned int *)(v6 + 92)];
    if ( v34 != v35 )
    {
      v36 = *(_QWORD **)(v6 + 80);
      if ( v32 == *v34 )
      {
LABEL_89:
        v39 = *(_DWORD *)(v6 + 92) - 1;
        v40 = v34[v39];
        *(_DWORD *)(v6 + 92) = v39;
        *v36 = v40;
      }
      else
      {
        while ( v35 != ++v36 )
        {
          if ( v32 == *v36 )
            goto LABEL_89;
        }
      }
    }
  }
  else
  {
    v37 = (_QWORD *)sub_2236570(v6 + 80, v32);
    if ( v37 )
    {
      *v37 = -2;
      ++*(_DWORD *)(v6 + 96);
    }
    v31 = v54[0];
    v33 = v54[0] & 1;
  }
  v38 = v31;
  if ( v33 )
    v38 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL);
  sub_15C14A0(a1 + 2608, v38);
LABEL_26:
  v18 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v18 - 40 <= 6 && v18 != 43 )
  {
    if ( *(_BYTE *)(v6 + 452) )
    {
      v19 = *(__int64 **)(v6 + 432);
      v20 = *(unsigned int *)(v6 + 444);
      v21 = &v19[v20];
      if ( v19 != v21 )
      {
        v22 = *(__int64 **)(v6 + 432);
        if ( a2 == *v19 )
        {
LABEL_88:
          v23 = &v19[*(unsigned int *)(v6 + 444)];
          goto LABEL_37;
        }
        while ( v21 != ++v22 )
        {
          if ( a2 == *v22 )
            goto LABEL_88;
        }
      }
      if ( (unsigned int)v20 < *(_DWORD *)(v6 + 440) )
      {
        *(_DWORD *)(v6 + 444) = v20 + 1;
        *v21 = a2;
        v19 = *(__int64 **)(v6 + 432);
        v22 = &v19[v20];
        goto LABEL_88;
      }
    }
    v22 = (__int64 *)sub_2236760(v6 + 432, a2);
    v19 = *(__int64 **)(v6 + 432);
    if ( *(_BYTE *)(v6 + 452) )
      goto LABEL_88;
    v23 = &v19[*(unsigned int *)(v6 + 440)];
LABEL_37:
    if ( v23 != v22 && (unsigned __int64)*v22 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v24 = v22 + 1;
      do
      {
        v25 = v24;
        if ( v23 == v24 )
          break;
        ++v24;
      }
      while ( (unsigned __int64)*v25 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  if ( *(_BYTE *)(v6 + 100) )
  {
    v26 = *(__int64 **)(v6 + 80);
    v27 = *(unsigned int *)(v6 + 92);
    v28 = &v26[v27];
    if ( v26 != v28 )
    {
      v29 = *(__int64 **)(v6 + 80);
      if ( a2 == *v26 )
      {
LABEL_68:
        v30 = &v26[*(unsigned int *)(v6 + 92)];
        goto LABEL_51;
      }
      while ( v28 != ++v29 )
      {
        if ( a2 == *v29 )
          goto LABEL_68;
      }
    }
    if ( (unsigned int)v27 < *(_DWORD *)(v6 + 88) )
    {
      *(_DWORD *)(v6 + 92) = v27 + 1;
      *v28 = a2;
      v26 = *(__int64 **)(v6 + 80);
      v29 = &v26[v27];
      goto LABEL_68;
    }
  }
  v29 = (__int64 *)sub_2236760(v6 + 80, a2);
  v26 = *(__int64 **)(v6 + 80);
  if ( *(_BYTE *)(v6 + 100) )
    goto LABEL_68;
  v30 = &v26[*(unsigned int *)(v6 + 88)];
LABEL_51:
  if ( v30 != v29 && (unsigned __int64)(*v29 + 2) <= 1 )
  {
    do
      ++v29;
    while ( v30 != v29 && (unsigned __int64)*v29 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x4E || *(_DWORD *)(a2 + 24) != *(_DWORD *)(a2 + 76) )
  {
    sub_15C17C0(a1 + 2608, a2);
    goto LABEL_59;
  }
  v41 = sub_15C1650(a1 + 2608, *(_QWORD *)(a2 + 40));
  v54[0] = v41;
  if ( !v41 )
    goto LABEL_100;
  while ( 2 )
  {
    v42 = v41;
    if ( (v41 & 1) != 0 )
      v42 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFELL);
    v43 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v42 + 16) & 4) != 0 )
      v43 = *(_QWORD *)(v43 + 8);
    v44 = sub_B8EAA0(v43);
    v49 = *(_QWORD *)(a1 + 544);
    if ( v49 != v44 )
    {
      if ( (unsigned __int8)sub_B91990(v44, v49, v45, v46, v47, v48) )
        goto LABEL_100;
      v50 = v54[0] & 1;
      goto LABEL_98;
    }
    v51 = v54[0];
    v50 = v54[0] & 1;
    if ( (v54[0] & 1) != 0 )
      v51 = *(_QWORD *)(v54[0] & 0xFFFFFFFFFFFFFFFELL);
    if ( !*(_BYTE *)(v6 + 100) )
    {
      sub_2236570(v6 + 80, v51);
      v50 = v54[0] & 1;
LABEL_98:
      if ( !v50 )
        goto LABEL_99;
LABEL_109:
      sub_15C20B0(v54);
      v41 = v54[0];
      if ( !v54[0] )
        goto LABEL_100;
      continue;
    }
    break;
  }
  v52 = *(_QWORD **)(v6 + 80);
  v53 = &v52[*(unsigned int *)(v6 + 92)];
  if ( v52 == v53 )
    goto LABEL_98;
  while ( v51 != *v52 )
  {
    if ( v53 == ++v52 )
      goto LABEL_98;
  }
  if ( (v54[0] & 1) != 0 )
    goto LABEL_109;
LABEL_99:
  v54[0] = 0;
LABEL_100:
  sub_15C1990(a1 + 2608, v54[0], a2);
LABEL_59:
  sub_17B7510(a1, a2);
}
