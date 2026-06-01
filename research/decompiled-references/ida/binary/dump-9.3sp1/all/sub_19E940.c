__int64 __fastcall sub_19E940(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r13
  __int64 v6; // r15
  int *v7; // rdi
  int v8; // r12d
  unsigned __int64 i; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  _DWORD *v18; // r10
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rsi
  _DWORD *v29; // r10
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int32 v34; // eax
  const char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  _DWORD *v41; // [rsp+8h] [rbp-98h]
  char v42; // [rsp+13h] [rbp-8Dh]
  unsigned int v43; // [rsp+14h] [rbp-8Ch]
  __int64 v44; // [rsp+18h] [rbp-88h]
  _DWORD *v45; // [rsp+18h] [rbp-88h]
  int v46; // [rsp+18h] [rbp-88h]
  _DWORD *v47; // [rsp+20h] [rbp-80h]
  _DWORD *v48; // [rsp+20h] [rbp-80h]
  _DWORD *v49; // [rsp+20h] [rbp-80h]
  _DWORD *v50; // [rsp+20h] [rbp-80h]
  __int64 v51; // [rsp+20h] [rbp-80h]
  __int64 v52; // [rsp+28h] [rbp-78h]
  __int64 v53; // [rsp+28h] [rbp-78h]
  unsigned int v54; // [rsp+28h] [rbp-78h]
  __int64 v55; // [rsp+28h] [rbp-78h]
  __m128i *v56; // [rsp+30h] [rbp-70h]
  __int64 v57; // [rsp+38h] [rbp-68h]
  unsigned __int8 v58; // [rsp+40h] [rbp-60h]
  _DWORD *v59; // [rsp+40h] [rbp-60h]
  __int64 v60; // [rsp+40h] [rbp-60h]
  __int64 v61; // [rsp+48h] [rbp-58h]

  v5 = (_QWORD *)a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v7 = (int *)v6;
  v57 = *(_QWORD *)(v6 + 1504);
  v56 = sub_D21A0(v6, a2, a3, a4);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v58 = 0;
    v8 = 0;
    i = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*v5 + 8 * i);
      v61 = v10;
      if ( !v10 )
        goto LABEL_3;
      if ( *(_DWORD *)v10 != 4 )
        goto LABEL_3;
      if ( *(_BYTE *)(v10 + 32) != 4 )
        goto LABEL_3;
      v11 = *(_QWORD *)(v10 + 40);
      if ( *(_BYTE *)(v11 + 64) != 8 || *(_DWORD *)(*(_QWORD *)(v11 + 72) + 284LL) != 23 || *(_BYTE *)(v61 + 64) != 9 )
        goto LABEL_3;
      v12 = *(__int64 **)(v61 + 72);
      v13 = *v12;
      v14 = *((int *)v12 + 4);
      if ( *(_QWORD *)(v13 + 440) < v14 )
        sub_1953E0(v7, a2);
      v15 = 13 * v14;
      v16 = *(_QWORD *)(v13 + 432);
      v17 = v16 + 8 * v15;
      if ( *(_DWORD *)v17 != 1 )
        goto LABEL_3;
      v7 = *(int **)(v17 + 80);
      a2 = 2;
      v52 = v16 + 8 * v15;
      if ( (get_tinfo_property() & 0xF) == 0xB )
        goto LABEL_3;
      v18 = (_DWORD *)v52;
      v19 = *(_QWORD *)(v61 + 72);
      if ( *(_QWORD *)(v19 + 8) )
        break;
      a2 = v61;
      v7 = (int *)*(unsigned int *)(v52 + 88);
      if ( *(_DWORD *)(v61 + 68) < (int)v7 )
      {
        if ( *(_DWORD *)v52 != 1 )
        {
          if ( v8 >= 0 )
          {
LABEL_60:
            if ( !under_debugger )
              sub_383060(51615);
LABEL_66:
            BUG();
          }
          goto LABEL_3;
        }
        if ( v8 >= 0 )
        {
          v53 = *(_QWORD *)(v52 + 8);
          v43 = *(_DWORD *)(v19 + 16);
LABEL_34:
          v7 = *(int **)(a1 + 8);
          a2 = (__int64)v18;
          v48 = v18;
          ++v8;
          v42 = sub_D67C0(v7, v18, (_DWORD **)v18 + 10, 0xFFFFFFFFLL, *(_DWORD *)(v6 + 72));
          v26 = v48;
          for ( i = v8; (unsigned __int64)v8 < v5[1]; i = ++v8 )
          {
            v27 = *(_QWORD *)(*v5 + 8 * i);
            if ( v27 )
            {
              if ( v61 == v27 )
              {
                if ( !under_debugger )
                  sub_383060(51616);
                goto LABEL_66;
              }
              if ( *(_DWORD *)v27 != 4 )
                break;
              if ( *(_BYTE *)(v27 + 32) != 4 )
                break;
              v36 = *(_QWORD *)(v27 + 40);
              if ( *(_BYTE *)(v36 + 64) != 8 )
                break;
              if ( *(_DWORD *)(*(_QWORD *)(v36 + 72) + 284LL) != 23 )
                break;
              v7 = (int *)v57;
              v45 = v26;
              v51 = *(_QWORD *)(*v5 + 8 * i);
              v37 = sub_195FF0(v57, v27 + 64);
              a2 = v53;
              v26 = v45;
              if ( v53 >= v37 || v53 + (int)v45[22] <= v37 )
                break;
              if ( *(_BYTE *)(v51 + 64) == 9 && *(_DWORD *)(*(_QWORD *)(v51 + 72) + 16LL) == v43 )
              {
                if ( v42 )
                {
                  v7 = (int *)v56;
                  sub_A3480((__int64)v56, v51);
                  v26 = v45;
                }
                a2 = 8 * i;
                *(_QWORD *)(*v5 + 8 * i) = 0;
              }
              else
              {
                v38 = *(unsigned int *)(v51 + 36);
                *(_BYTE *)(v51 + 32) = 9;
                v7 = (int *)&qword_18;
                v41 = v45;
                v46 = v38;
                v39 = (int)v37 - (int)v53;
                v40 = j__qalloc_or_throw(24, (unsigned int)v53, v51, v38);
                a2 = v43;
                *(_QWORD *)v40 = v6;
                *(_QWORD *)(v40 + 8) = v39;
                *(_DWORD *)(v40 + 16) = v43;
                v26 = v41;
                *(_QWORD *)(v51 + 40) = v40;
                *(_DWORD *)(v51 + 36) = v46;
              }
            }
          }
          if ( v42 )
          {
            v59 = v26;
            v28 = 0;
            print_tinfo();
            v29 = v59;
            if ( *(_BYTE *)(v61 + 64) != 9 || (v28 = v43, *(_DWORD *)(*(_QWORD *)(v61 + 72) + 16LL) != v43) )
            {
              v49 = v59;
              v60 = j__qalloc_or_throw(80, v28, 0, 0);
              v30 = *(_QWORD *)(v61 + 24);
              *(_QWORD *)(v60 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v60 + 40) = 0;
              *(_QWORD *)(v60 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v60 + 56) = 0;
              *(_QWORD *)(v60 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v60 + 72) = 0;
              sub_330970(v60, v30);
              *(_DWORD *)v60 = 4;
              sub_125180(v60 + 64, (unsigned __int8 *)(v61 + 64));
              *(_BYTE *)(v60 + 32) = 9;
              v54 = *(_DWORD *)(v60 + 68);
              v32 = j__qalloc_or_throw(24, v61 + 64, v54, v31);
              *(_QWORD *)v32 = v6;
              *(_QWORD *)(v32 + 8) = 0;
              *(_DWORD *)(v32 + 16) = v43;
              *(_DWORD *)(v60 + 36) = v54;
              *(_QWORD *)(v60 + 40) = v32;
              sub_A3160((__int64)v56, (_QWORD *)v60, v61);
              v29 = v49;
            }
            v50 = v29;
            v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 40) + 72LL) + 24LL);
            qfree(*(_QWORD *)(v55 + 88));
            *(_QWORD *)(v55 + 88) = qstrdup();
            copy_tinfo_t();
            v33 = v50[22];
            *(_DWORD *)(*(_QWORD *)(v61 + 40) + 68LL) = v33;
            *(_DWORD *)(v61 + 36) = v33;
            *(_DWORD *)(v61 + 68) = v33;
            *(_QWORD *)(*(_QWORD *)(v61 + 72) + 8LL) = 0;
            *(_DWORD *)(*(_QWORD *)(v61 + 72) + 16LL) = v43;
            if ( (get_tinfo_property() & 0x2F) == 0xD )
            {
              *(_BYTE *)(*(_QWORD *)(v61 + 40) + 65LL) |= 2u;
              *(_BYTE *)(v61 + 33) |= 2u;
              *(_BYTE *)(v61 + 65) |= 2u;
            }
            v34 = v56[1].m128i_i32[2];
            BYTE1(v34) &= ~2u;
            LOBYTE(v34) = v34 | 0x80;
            v56[1].m128i_i32[2] = v34;
            v35 = (const char *)sub_1B5B40(v61, v56);
            v7 = (int *)v56;
            a2 = (__int64)"combine va_args: %s";
            sub_A2520((__int64)v56, (__int64)"combine va_args: %s", v35);
            v58 = v42;
            goto LABEL_4;
          }
        }
      }
LABEL_3:
      i = ++v8;
LABEL_4:
      if ( i >= v5[1] )
        return v58;
    }
    if ( *(_DWORD *)v52 == 1 )
    {
      a2 = *(_QWORD *)(v52 + 8);
      v53 = a2;
    }
    else
    {
      v53 = -1;
    }
    v20 = v8 - 1;
    if ( v8 - 1 < 0 )
      goto LABEL_3;
    v21 = 8LL * v20;
    v43 = *(_DWORD *)(v19 + 16);
    while ( 1 )
    {
      v22 = *(_QWORD *)(*v5 + v21);
      v61 = v22;
      if ( !v22 )
        goto LABEL_3;
      if ( *(_DWORD *)v22 == 4 && *(_BYTE *)(v22 + 32) == 4 )
      {
        v23 = *(_QWORD *)(v22 + 40);
        if ( *(_BYTE *)(v23 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v23 + 72) + 284LL) == 23 )
        {
          v7 = (int *)v57;
          v44 = v21;
          v47 = v18;
          v24 = sub_195FF0(v57, v61 + 64);
          a2 = v53;
          v18 = v47;
          v21 = v44;
          if ( v24 == v53 )
            break;
        }
      }
      --v20;
      v21 -= 8;
      if ( v20 == -1 )
        goto LABEL_3;
    }
    a2 = (unsigned int)v47[22];
    if ( *(_DWORD *)(v61 + 68) >= (int)a2 )
      goto LABEL_3;
    if ( *v47 != 1 )
      goto LABEL_60;
    v8 = v20;
    goto LABEL_34;
  }
  return 0;
}
