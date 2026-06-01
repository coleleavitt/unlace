__int64 __fastcall sub_19E940(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v4; // r15
  int *v5; // rdi
  int v6; // r12d
  unsigned __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r10
  _DWORD *v16; // r10
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v24; // r10
  __int64 v25; // rdx
  _DWORD *v26; // r10
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // eax
  __int32 v30; // eax
  const char *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // rax
  _DWORD *v37; // [rsp+8h] [rbp-98h]
  char v38; // [rsp+13h] [rbp-8Dh]
  unsigned int v39; // [rsp+14h] [rbp-8Ch]
  __int64 v40; // [rsp+18h] [rbp-88h]
  _DWORD *v41; // [rsp+18h] [rbp-88h]
  int v42; // [rsp+18h] [rbp-88h]
  _DWORD *v43; // [rsp+20h] [rbp-80h]
  _DWORD *v44; // [rsp+20h] [rbp-80h]
  _DWORD *v45; // [rsp+20h] [rbp-80h]
  _DWORD *v46; // [rsp+20h] [rbp-80h]
  __int64 v47; // [rsp+20h] [rbp-80h]
  __int64 v48; // [rsp+28h] [rbp-78h]
  __int64 v49; // [rsp+28h] [rbp-78h]
  int v50; // [rsp+28h] [rbp-78h]
  __int64 v51; // [rsp+28h] [rbp-78h]
  __m128i *v52; // [rsp+30h] [rbp-70h]
  __int64 v53; // [rsp+38h] [rbp-68h]
  unsigned __int8 v54; // [rsp+40h] [rbp-60h]
  _DWORD *v55; // [rsp+40h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-60h]
  __int64 v57; // [rsp+48h] [rbp-58h]

  v3 = (_QWORD *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v5 = (int *)v4;
  v53 = *(_QWORD *)(v4 + 1504);
  v52 = sub_D21A0(v4);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v54 = 0;
    v6 = 0;
    i = 0;
    while ( 1 )
    {
      v8 = *(_QWORD *)(*v3 + 8 * i);
      v57 = v8;
      if ( !v8 )
        goto LABEL_3;
      if ( *(_DWORD *)v8 != 4 )
        goto LABEL_3;
      if ( *(_BYTE *)(v8 + 32) != 4 )
        goto LABEL_3;
      v9 = *(_QWORD *)(v8 + 40);
      if ( *(_BYTE *)(v9 + 64) != 8 || *(_DWORD *)(*(_QWORD *)(v9 + 72) + 284LL) != 23 || *(_BYTE *)(v57 + 64) != 9 )
        goto LABEL_3;
      v10 = *(__int64 **)(v57 + 72);
      v11 = *v10;
      v12 = *((int *)v10 + 4);
      if ( *(_QWORD *)(v11 + 440) < v12 )
        sub_1953E0(v5, a2);
      v13 = 13 * v12;
      v14 = *(_QWORD *)(v11 + 432);
      v15 = v14 + 8 * v13;
      if ( *(_DWORD *)v15 != 1 )
        goto LABEL_3;
      v5 = *(int **)(v15 + 80);
      a2 = 2;
      v48 = v14 + 8 * v13;
      if ( (get_tinfo_property() & 0xF) == 0xB )
        goto LABEL_3;
      v16 = (_DWORD *)v48;
      v17 = *(_QWORD *)(v57 + 72);
      if ( *(_QWORD *)(v17 + 8) )
        break;
      a2 = v57;
      v5 = (int *)*(unsigned int *)(v48 + 88);
      if ( *(_DWORD *)(v57 + 68) < (int)v5 )
      {
        if ( *(_DWORD *)v48 != 1 )
        {
          if ( v6 >= 0 )
          {
LABEL_60:
            if ( !under_debugger )
              sub_383060(51615);
LABEL_66:
            BUG();
          }
          goto LABEL_3;
        }
        if ( v6 >= 0 )
        {
          v49 = *(_QWORD *)(v48 + 8);
          v39 = *(_DWORD *)(v17 + 16);
LABEL_34:
          v5 = *(int **)(a1 + 8);
          a2 = (__int64)v16;
          v44 = v16;
          ++v6;
          v38 = sub_D67C0(v5, v16, (_DWORD **)v16 + 10, 0xFFFFFFFFLL, *(_DWORD *)(v4 + 72));
          v24 = v44;
          for ( i = v6; (unsigned __int64)v6 < v3[1]; i = ++v6 )
          {
            v25 = *(_QWORD *)(*v3 + 8 * i);
            if ( v25 )
            {
              if ( v57 == v25 )
              {
                if ( !under_debugger )
                  sub_383060(51616);
                goto LABEL_66;
              }
              if ( *(_DWORD *)v25 != 4 )
                break;
              if ( *(_BYTE *)(v25 + 32) != 4 )
                break;
              v32 = *(_QWORD *)(v25 + 40);
              if ( *(_BYTE *)(v32 + 64) != 8 )
                break;
              if ( *(_DWORD *)(*(_QWORD *)(v32 + 72) + 284LL) != 23 )
                break;
              v5 = (int *)v53;
              v41 = v24;
              v47 = *(_QWORD *)(*v3 + 8 * i);
              v33 = sub_195FF0(v53, v25 + 64);
              a2 = v49;
              v24 = v41;
              if ( v49 >= v33 || v49 + (int)v41[22] <= v33 )
                break;
              if ( *(_BYTE *)(v47 + 64) == 9 && *(_DWORD *)(*(_QWORD *)(v47 + 72) + 16LL) == v39 )
              {
                if ( v38 )
                {
                  v5 = (int *)v52;
                  sub_A3480((__int64)v52, v47);
                  v24 = v41;
                }
                a2 = 8 * i;
                *(_QWORD *)(*v3 + 8 * i) = 0;
              }
              else
              {
                v34 = *(_DWORD *)(v47 + 36);
                *(_BYTE *)(v47 + 32) = 9;
                v5 = (int *)&qword_18;
                v37 = v41;
                v42 = v34;
                v35 = (int)v33 - (int)v49;
                v36 = j__qalloc_or_throw();
                a2 = v39;
                *(_QWORD *)v36 = v4;
                *(_QWORD *)(v36 + 8) = v35;
                *(_DWORD *)(v36 + 16) = v39;
                v24 = v37;
                *(_QWORD *)(v47 + 40) = v36;
                *(_DWORD *)(v47 + 36) = v42;
              }
            }
          }
          if ( v38 )
          {
            v55 = v24;
            print_tinfo();
            v26 = v55;
            if ( *(_BYTE *)(v57 + 64) != 9 || *(_DWORD *)(*(_QWORD *)(v57 + 72) + 16LL) != v39 )
            {
              v45 = v55;
              v56 = j__qalloc_or_throw();
              v27 = *(_QWORD *)(v57 + 24);
              *(_QWORD *)(v56 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v56 + 40) = 0;
              *(_QWORD *)(v56 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v56 + 56) = 0;
              *(_QWORD *)(v56 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v56 + 72) = 0;
              sub_330970(v56, v27);
              *(_DWORD *)v56 = 4;
              sub_125180(v56 + 64, (unsigned __int8 *)(v57 + 64));
              *(_BYTE *)(v56 + 32) = 9;
              v50 = *(_DWORD *)(v56 + 68);
              v28 = j__qalloc_or_throw();
              *(_QWORD *)v28 = v4;
              *(_QWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 16) = v39;
              *(_DWORD *)(v56 + 36) = v50;
              *(_QWORD *)(v56 + 40) = v28;
              sub_A3160((__int64)v52, (_QWORD *)v56, v57);
              v26 = v45;
            }
            v46 = v26;
            v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 40) + 72LL) + 24LL);
            qfree();
            *(_QWORD *)(v51 + 88) = qstrdup();
            copy_tinfo_t();
            v29 = v46[22];
            *(_DWORD *)(*(_QWORD *)(v57 + 40) + 68LL) = v29;
            *(_DWORD *)(v57 + 36) = v29;
            *(_DWORD *)(v57 + 68) = v29;
            *(_QWORD *)(*(_QWORD *)(v57 + 72) + 8LL) = 0;
            *(_DWORD *)(*(_QWORD *)(v57 + 72) + 16LL) = v39;
            if ( (get_tinfo_property() & 0x2F) == 0xD )
            {
              *(_BYTE *)(*(_QWORD *)(v57 + 40) + 65LL) |= 2u;
              *(_BYTE *)(v57 + 33) |= 2u;
              *(_BYTE *)(v57 + 65) |= 2u;
            }
            v30 = v52[1].m128i_i32[2];
            BYTE1(v30) &= ~2u;
            LOBYTE(v30) = v30 | 0x80;
            v52[1].m128i_i32[2] = v30;
            v31 = (const char *)sub_1B5B40(v57, v52);
            v5 = (int *)v52;
            a2 = (__int64)"combine va_args: %s";
            sub_A2520((__int64)v52, (__int64)"combine va_args: %s", v31);
            v54 = v38;
            goto LABEL_4;
          }
        }
      }
LABEL_3:
      i = ++v6;
LABEL_4:
      if ( i >= v3[1] )
        return v54;
    }
    if ( *(_DWORD *)v48 == 1 )
    {
      a2 = *(_QWORD *)(v48 + 8);
      v49 = a2;
    }
    else
    {
      v49 = -1;
    }
    v18 = v6 - 1;
    if ( v6 - 1 < 0 )
      goto LABEL_3;
    v19 = 8LL * v18;
    v39 = *(_DWORD *)(v17 + 16);
    while ( 1 )
    {
      v20 = *(_QWORD *)(*v3 + v19);
      v57 = v20;
      if ( !v20 )
        goto LABEL_3;
      if ( *(_DWORD *)v20 == 4 && *(_BYTE *)(v20 + 32) == 4 )
      {
        v21 = *(_QWORD *)(v20 + 40);
        if ( *(_BYTE *)(v21 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v21 + 72) + 284LL) == 23 )
        {
          v5 = (int *)v53;
          v40 = v19;
          v43 = v16;
          v22 = sub_195FF0(v53, v57 + 64);
          a2 = v49;
          v16 = v43;
          v19 = v40;
          if ( v22 == v49 )
            break;
        }
      }
      --v18;
      v19 -= 8;
      if ( v18 == -1 )
        goto LABEL_3;
    }
    a2 = (unsigned int)v43[22];
    if ( *(_DWORD *)(v57 + 68) >= (int)a2 )
      goto LABEL_3;
    if ( *v43 != 1 )
      goto LABEL_60;
    v6 = v18;
    goto LABEL_34;
  }
  return 0;
}
