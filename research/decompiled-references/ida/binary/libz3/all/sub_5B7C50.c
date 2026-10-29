__int64 __fastcall sub_5B7C50(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, double a5)
{
  __int64 v5; // rax
  unsigned int v6; // r13d
  _QWORD *v8; // r9
  __int64 v11; // rdi
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  int v18; // edx
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r15
  __int64 v25; // rdx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r13
  __int64 v31; // r12
  _QWORD *v32; // r15
  float v33; // xmm1_4
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rdx
  int *v41; // rax
  int *v42; // rcx
  int v43; // esi
  unsigned int v45; // [rsp+Ch] [rbp-64h]
  __int64 v46; // [rsp+10h] [rbp-60h]
  _QWORD *v47; // [rsp+20h] [rbp-50h]
  __int64 v48; // [rsp+28h] [rbp-48h]
  float v49; // [rsp+30h] [rbp-40h]
  int v50; // [rsp+34h] [rbp-3Ch]

  v5 = *a2;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v6 = *(_DWORD *)(v5 - 4);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v50 = *(_DWORD *)(v5 - 4);
  v8 = a2;
  v11 = v6;
  v12 = 0xFFFFFFFFLL;
  v13 = 0;
  while ( 2 )
  {
    v14 = *(_QWORD *)(a3 + 8LL * *(unsigned int *)(v5 + 4 * v13) + 80) & 0xFFFFFFFFFFFFFFF8LL;
    v15 = *(unsigned int *)(v14 + 24);
    v16 = v14;
    if ( !(_DWORD)v15 )
      goto LABEL_26;
    v17 = 8 * v15;
    v18 = 0;
    v19 = v14 + v17;
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v14 + 32);
        if ( *(_WORD *)(v20 + 4) == 1 )
        {
          v21 = *(_DWORD *)(v20 + 16);
          v22 = *a4;
          v23 = v21 >> 5;
          if ( !*a4 || (unsigned int)v23 >= *(_DWORD *)(v22 - 4) )
            goto LABEL_7;
          if ( (*(_DWORD *)(v22 + 4 * v23) & (1 << v21)) == 0 )
            break;
        }
        ++v18;
LABEL_7:
        v14 += 8LL;
        if ( v14 == v19 )
          goto LABEL_13;
      }
      v14 += 8LL;
    }
    while ( v14 != v19 );
LABEL_13:
    if ( v18 )
    {
      v24 = *(_QWORD *)(v16 + 16);
      v25 = v17;
      v26 = a4;
      v27 = v16;
      v28 = a1;
      v45 = v12;
      v29 = 0;
      v30 = v25;
      v31 = v24;
      v46 = v13;
      v32 = v26;
      v33 = 1.0;
      v47 = v8;
      v48 = a3;
      do
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(v27 + v29 + 32);
          if ( *(_WORD *)(v34 + 4) == 1 )
          {
            v35 = *(_DWORD *)(v34 + 16);
            v36 = *v32;
            v37 = v35 >> 5;
            if ( !*v32 || (unsigned int)v37 >= *(_DWORD *)(v36 - 4) || (*(_DWORD *)(v36 + 4 * v37) & (1 << v35)) == 0 )
              break;
          }
          v29 += 8;
          if ( v29 == v30 )
            goto LABEL_23;
        }
        v38 = sub_64BCA0(*(_QWORD *)(v28 + 24), *(_QWORD *)(v31 + v29 + 48), a5);
        HIDWORD(a5) = 0;
        if ( v38 < 0 )
          *(float *)&a5 = (float)(v38 & 1 | (unsigned int)((unsigned __int64)v38 >> 1))
                        + (float)(v38 & 1 | (unsigned int)((unsigned __int64)v38 >> 1));
        else
          *(float *)&a5 = (float)(int)v38;
        v33 = v33 * *(float *)&a5;
        v29 += 8;
      }
      while ( v29 != v30 );
LABEL_23:
      v12 = v45;
      a1 = v28;
      v13 = v46;
      a4 = v32;
      v8 = v47;
      a3 = v48;
      if ( v45 == -1 || v49 > v33 )
      {
        v12 = (unsigned int)v46;
        v49 = v33;
      }
    }
LABEL_26:
    if ( ++v13 != v11 )
    {
      v5 = *v8;
      continue;
    }
    break;
  }
  if ( (_DWORD)v12 == -1 )
    return 0xFFFFFFFFLL;
  v39 = (unsigned int)(v50 - 1);
  v40 = *v8;
  if ( (_DWORD)v39 != (_DWORD)v12 )
  {
    v41 = (int *)(v40 + 4 * v39);
    v42 = (int *)(v40 + 4 * v12);
    v43 = *v42;
    *v42 = *v41;
    *v41 = v43;
  }
  return *(unsigned int *)(v40 + 4LL * (unsigned int)--*(_DWORD *)(v40 - 4));
}

