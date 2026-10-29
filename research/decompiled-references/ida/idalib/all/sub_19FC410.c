__int16 __fastcall sub_19FC410(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 i; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 v42; // al
  unsigned __int64 v43; // rdi
  __int64 *v44; // rax
  unsigned __int64 *v45; // rax
  unsigned __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rcx

  v7 = *(unsigned __int8 *)(a2 + 96);
  v9 = *(_BYTE *)(a2 + 96) & 7;
  if ( (_BYTE)v9 )
  {
    if ( (unsigned __int8)v9 != 5 )
      goto LABEL_34;
    v42 = *(_BYTE *)(a2 + 28) & 0x7F;
    v9 = v42;
    if ( v42 != 40 && v42 != 46 )
      goto LABEL_61;
    v43 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v9 = *(_QWORD *)(a2 + 16) & 4LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v43 = *(_QWORD *)(v43 + 8);
    if ( !v43 )
    {
LABEL_61:
      if ( v42 == 43 )
        return sub_19F7030(a1, a2, v9, v7, a5, a6);
      goto LABEL_13;
    }
    v7 = *(_BYTE *)(sub_B8EAA0(v43) + 8) & 0x7F;
    if ( (unsigned __int8)v7 > 0x12u )
    {
      v7 = ((_BYTE)v7 + 94) & 0x7F;
      if ( (unsigned __int8)v7 > 5u )
      {
LABEL_59:
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
          goto LABEL_13;
      }
    }
    else if ( ((1LL << v7) & 0x40182) == 0 )
    {
      goto LABEL_59;
    }
    v9 = *(_BYTE *)(a2 + 96) & 7;
LABEL_34:
    if ( (unsigned __int8)v9 > 3u )
      return sub_19F7030(a1, a2, v9, v7, a5, a6);
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v11 & 8) != 0 )
  {
    v9 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_DWORD *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v11 & 7)) >> 9 == 3 )
      goto LABEL_14;
  }
  if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) == 0 )
    goto LABEL_12;
  v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v13 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(v12 + 8)) + 8) & 0x7F;
    if ( !v13 )
      goto LABEL_13;
  }
  else
  {
    v13 = *(_BYTE *)(sub_B8EAA0(v12) + 8) & 0x7F;
    if ( !v13 )
      goto LABEL_13;
  }
  if ( v13 != 24 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
      goto LABEL_11;
    v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v9 = *(_QWORD *)v9;
    if ( ((*(_BYTE *)(v9 + 8) + 70) & 0x7Fu) > 3 )
    {
LABEL_11:
      LOBYTE(v7) = *(_BYTE *)(a2 + 96);
LABEL_12:
      v7 &= 0x18u;
      if ( !(_DWORD)v7 )
        return sub_19F7030(a1, a2, v9, v7, a5, a6);
    }
  }
LABEL_13:
  v10 = *(_QWORD *)(a2 + 48);
LABEL_14:
  v14 = *(_QWORD *)a1;
  v15 = sub_A71450(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v10);
  if ( !(unsigned __int8)sub_1E63CF0(v14, *(unsigned int *)(a2 + 24), v15, 1, 5261) )
  {
    v19 = *(_QWORD *)(a2 + 48);
    v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v20 = *(_QWORD *)v20;
      if ( (*(_BYTE *)(v20 + 8) & 0x7F) != 0 )
        goto LABEL_25;
    }
    else if ( (*(_BYTE *)(v20 + 8) & 0x7F) != 0 )
    {
      goto LABEL_25;
    }
    v21 = *(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v21 & 8) == 0
      || (v20 = v21 & 0xFFFFFFFFFFFFFFF0LL,
          !((*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
           | *(_DWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 7u) >> 9)) )
    {
      if ( (*(_BYTE *)(a2 + 96) & 7) != 2 )
      {
        if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        {
          v45 = sub_B8C3D0(a2, v19, v20, v16, v17, v18);
          v20 = *v45;
          v16 = *v45 + 8LL * *((unsigned int *)v45 + 2);
          if ( *v45 >= v16 )
          {
            if ( v20 != v16 )
            {
              if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 228 )
              {
LABEL_24:
                v19 = *(_QWORD *)(a2 + 48);
                goto LABEL_25;
              }
              v47 = (__int64 *)(v16 + 8);
              while ( 1 )
              {
                v16 = (unsigned __int64)v47;
                if ( v47 == (__int64 *)v20 )
                  break;
                v48 = *v47++;
                if ( *(_WORD *)(v48 + 36) == 228 )
                  goto LABEL_24;
              }
            }
          }
          else
          {
            v46 = (unsigned __int64 *)*v45;
            while ( 1 )
            {
              v20 = *v46;
              if ( *(_WORD *)(*v46 + 36) == 228 )
                break;
              if ( (unsigned __int64 *)v16 == ++v46 )
                goto LABEL_20;
            }
            if ( (unsigned __int64 *)v16 != v46 )
              goto LABEL_24;
          }
        }
LABEL_20:
        if ( !sub_19F7E80(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), v19, v20, v16) )
        {
          v22 = sub_168B6C0(a1);
          *(_QWORD *)(a2 + 48) = sub_A70E70(v22, *(_QWORD *)(a2 + 48), 20);
          v23 = *(unsigned int *)(a1 + 176);
          if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 180) )
          {
            sub_2237220(a1 + 168, a1 + 184, v23 + 1, 8);
            v23 = *(unsigned int *)(a1 + 176);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v23) = a2;
          ++*(_DWORD *)(a1 + 176);
        }
        goto LABEL_24;
      }
    }
LABEL_25:
    v24 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    if ( sub_F64A40(*v24, (__int64)v24) )
    {
      v24 = (__int64 *)a2;
      sub_19FB060(a1, a2, v25, v26, v27, v28);
    }
    for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u;
          i = sub_F649E0(i) )
    {
      ;
    }
    if ( !sub_F67910(i, (__int64)v24) )
    {
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      {
LABEL_31:
        sub_19FC180(a1, a2, v30, v31, v32, v33);
        return sub_19F7030(a1, a2, v9, v7, a5, a6);
      }
      v35 = sub_B8C3D0(a2, (__int64)v24, v30, v31, v32, v33);
      v30 = *v35;
      v31 = *v35 + 8LL * *((unsigned int *)v35 + 2);
      if ( *v35 < v31 )
      {
        v44 = (__int64 *)*v35;
        while ( 1 )
        {
          v30 = *v44;
          if ( *(_WORD *)(*v44 + 36) == 228 )
            break;
          if ( (__int64 *)v31 == ++v44 )
            goto LABEL_31;
        }
        if ( (__int64 *)v31 == v44 )
          goto LABEL_31;
      }
      else
      {
        if ( v30 == v31 )
          goto LABEL_31;
        if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 228 )
        {
          v36 = (__int64 *)(v31 + 8);
          do
          {
            v31 = (unsigned __int64)v36;
            if ( (__int64 *)v30 == v36 )
              goto LABEL_31;
            v37 = *v36++;
          }
          while ( *(_WORD *)(v37 + 36) != 228 );
        }
      }
    }
    sub_B73350(a2, 2);
    goto LABEL_31;
  }
  sub_B88650(a2, 1);
  return sub_19F7030(a1, a2, v38, v39, v40, v41);
}
