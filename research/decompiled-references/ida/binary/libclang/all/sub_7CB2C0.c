void __fastcall sub_7CB2C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  _BYTE *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  char v24; // dl
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdi
  _WORD *v32; // rdx
  int v33; // r14d
  int v34; // ecx
  __int64 v35; // rdi
  _WORD *v36; // rdx
  __int64 v37; // rdi
  int v38; // eax
  int v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+8h] [rbp-50h]
  _BYTE *v41; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
  {
LABEL_13:
    if ( !v4 )
      goto LABEL_8;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(v4 + 29) & 1) != 0 )
  {
    sub_7C2700(a1, *(_QWORD *)(a2 + 48));
    v4 = *(_QWORD *)(a2 + 48);
    goto LABEL_13;
  }
LABEL_3:
  v5 = *(_QWORD *)(v4 + 56);
  if ( (v5 & 4) != 0 )
  {
    v6 = *(unsigned int *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( (_DWORD)v6 )
    {
      v7 = 8 * v6;
      v8 = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 24) + v8);
        v8 += 8;
        sub_7C8480((__int64 *)a1, v9, 0);
        if ( v7 == v8 )
          break;
        v5 = *(_QWORD *)(v4 + 56);
      }
    }
  }
LABEL_8:
  sub_7C8100((__int64 *)a1, a2);
  v10 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    goto LABEL_9;
  v25 = sub_79A2B0(v10);
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( v26 < v27 )
  {
    while ( *(_WORD *)(*(_QWORD *)v26 + 32LL) != 287 )
    {
      v26 += 8LL;
      if ( v27 == v26 )
        goto LABEL_9;
    }
  }
  else
  {
    if ( v26 == v27 )
      goto LABEL_9;
    while ( *(_WORD *)(*(_QWORD *)v27 + 32LL) != 287 )
    {
      v27 += 8LL;
      if ( v26 == v27 )
        goto LABEL_9;
    }
  }
  if ( v26 != v27 )
  {
    v28 = *(_QWORD *)a1;
    v29 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v29) <= 0x1E )
    {
      sub_26240F0(v28, "#pragma omp end declare target\n", 31);
    }
    else
    {
      *(__m128i *)v29 = _mm_load_si128((const __m128i *)&xmmword_3C7E960);
      *(__m128i *)(v29 + 15) = _mm_load_si128((const __m128i *)&xmmword_3C7E970);
      *(_QWORD *)(v28 + 32) += 31LL;
    }
  }
LABEL_9:
  if ( *(_BYTE *)(a1 + 36) )
  {
    v11 = *(_BYTE **)(a2 + 48);
    if ( (v11[28] & 0x7F) != 0x25
      && (!(unsigned __int8)sub_788920(*(_QWORD **)(a2 + 48), (__int64)&v41, 0) || v41 == v11) )
    {
      v12 = sub_7D31C0(a2);
      v13 = *(_QWORD *)(v12 + 16) + 8LL * *(unsigned int *)(v12 + 24);
      v14 = *(_QWORD *)(sub_7D31C0(a2) + 16);
      if ( v13 != v14 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
          v18 = *(_QWORD *)(v17 + 104);
          v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v18 & 1) != 0 )
            goto LABEL_19;
          if ( v19 <= 3 )
          {
            v16 = 0;
            goto LABEL_22;
          }
          v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
          v16 = (__int64)v20;
          if ( (v19 & 2) != 0 )
            break;
LABEL_22:
          if ( (unsigned int)sub_781200(v16) == 1 )
          {
            if ( (v11[82] & 0x40) == 0 )
            {
              v30 = v11[83];
              if ( (v30 & 2) == 0
                && ((v30 & 8) != 0 || (v11[128] & 1) == 0 && !*((_QWORD *)v11 + 16))
                && (v30 & 0x40) == 0
                && (v11[84] & 0x60) == 0
                && !(unsigned __int8)sub_799100((__int64)v11) )
              {
                v31 = *(_QWORD *)a1;
                v32 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
                if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v32 <= 1u )
                {
                  sub_26240F0(v31, ";\n", 2);
                }
                else
                {
                  *v32 = 2619;
                  *(_QWORD *)(v31 + 32) += 2LL;
                }
              }
            }
            v33 = *(_DWORD *)(a1 + 32);
            v34 = 0;
            if ( v33 )
            {
              do
              {
                v35 = *(_QWORD *)a1;
                v36 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
                if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v36 > 1u )
                {
                  *v36 = 8224;
                  *(_QWORD *)(v35 + 32) += 2LL;
                }
                else
                {
                  v39 = v34;
                  sub_26240F0(v35, "  ", 2);
                  v34 = v39;
                }
                ++v34;
              }
              while ( v33 != v34 );
            }
            if ( (*(_BYTE *)(a1 + 12) & 1) == 0 && (*(_BYTE *)(v16 + 29) & 1) != 0 )
              sub_7C2700(a1, v16);
            sub_7C5C80(a1, v16);
          }
          v14 += 8;
          if ( v13 == v14 )
            return;
        }
        v21 = v20[2275];
        if ( v21 )
        {
          v22 = v20[274];
          v20[284] += 24LL;
          v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v16 + 2200) >= v23 + 24 && v22 )
          {
            *(_QWORD *)(v16 + 2192) = v23 + 24;
          }
          else
          {
            v40 = v21;
            v23 = sub_7C2590(v16 + 2192, 24, 3);
            v21 = v40;
          }
          *(_QWORD *)v23 = v21;
          *(_DWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = v17;
          *(_QWORD *)(v17 + 104) = v23 | 5;
          v24 = v23;
          v15 = v23 & 0xFFFFFFFFFFFFFFF8LL;
          v16 = v15;
          LOBYTE(v19) = v24 & 0xFA | 4;
LABEL_20:
          if ( (v19 & 4) != 0 && v15 )
          {
            v37 = *(_QWORD *)v16;
            v38 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
            if ( *(_DWORD *)(v16 + 8) != v38 )
            {
              *(_DWORD *)(v16 + 8) = v38;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 144LL))(v37, v17);
            }
            v16 = *(_QWORD *)(v16 + 16);
          }
          goto LABEL_22;
        }
        v19 = v17 & 0xFFFFFFFFFFFFFFFALL;
        v18 = v17 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v17 + 104) = v18;
LABEL_19:
        v15 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = v15;
        if ( v19 )
          goto LABEL_20;
        goto LABEL_22;
      }
    }
  }
}

