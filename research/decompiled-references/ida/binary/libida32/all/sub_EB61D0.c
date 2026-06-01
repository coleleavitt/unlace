_QWORD *__fastcall sub_EB61D0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *v7; // r10
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // r8
  unsigned int v18; // r11d
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // esi
  __int64 *v24; // r13
  unsigned int v25; // r11d
  unsigned int v26; // edi
  __int64 v27; // rax
  int v29; // edi
  int v30; // edi
  bool v31; // zf
  int v32; // ecx
  __int64 *v33; // rsi
  __int64 *v34; // rcx
  __int64 *v35; // rsi
  __int64 *v36; // rdi
  __int64 *v37; // [rsp+0h] [rbp-78h]
  __int64 v38; // [rsp+8h] [rbp-70h]
  _QWORD *v39; // [rsp+8h] [rbp-70h]
  __int64 v40; // [rsp+8h] [rbp-70h]
  __int64 *v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+8h] [rbp-70h]
  int v43; // [rsp+8h] [rbp-70h]
  int v44; // [rsp+8h] [rbp-70h]
  _QWORD *v45; // [rsp+10h] [rbp-68h]
  _QWORD *v46; // [rsp+10h] [rbp-68h]
  _QWORD *v47; // [rsp+10h] [rbp-68h]
  _QWORD *v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v50[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = v6 >> 3;
  v37 = a3;
  if ( v6 > 0 )
  {
    v9 = a4;
    while ( 1 )
    {
      v10 = v8 >> 1;
      v11 = &v7[v8 >> 1];
      v12 = *v37;
      v13 = *v11;
      v49 = v13;
      v14 = *(_QWORD *)(v13 + 128);
      if ( v14
        || (v39 = v7,
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), (__int64)a3, a4, a5, a6),
            v14 = *(_QWORD *)(v13 + 128),
            v7 = v39,
            v14) )
      {
        v14 = *(_QWORD *)(v14 + 88);
      }
      v15 = *(_QWORD *)(v9 + 72);
      v49 = v14;
      v16 = *(_DWORD *)(v15 + 80);
      v17 = v15 + 64;
      if ( !v16 )
        break;
      v18 = v16 - 1;
      a6 = *(_QWORD *)(v15 + 64);
      v19 = (v16 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      a3 = (__int64 *)(a6 + 16LL * v19);
      v20 = *a3;
      if ( v14 == *a3 )
        goto LABEL_7;
      if ( v20 != -4096 )
      {
        v43 = 1;
        v33 = nullptr;
        while ( 1 )
        {
          if ( v20 == -8192 && !v33 )
            v33 = a3;
          v19 = v18 & (v43 + v19);
          v17 = (unsigned int)(v43 + 1);
          a3 = (__int64 *)(a6 + 16LL * v19);
          v20 = *a3;
          if ( v14 == *a3 )
            break;
          if ( v20 == -4096 )
          {
            v34 = v33;
            v17 = v15 + 64;
            v16 = *(_DWORD *)(v15 + 80);
            if ( v34 )
              a3 = v34;
            goto LABEL_30;
          }
          ++v43;
        }
LABEL_7:
        a4 = a3[1];
        goto LABEL_8;
      }
LABEL_30:
      v32 = *(_DWORD *)(v15 + 72);
      v50[0] = a3;
      a4 = (unsigned int)(v32 + 1);
      a6 = (unsigned int)(4 * a4);
      if ( (unsigned int)a6 >= 3 * v16 )
        goto LABEL_38;
      a6 = v16 >> 3;
      if ( v16 - *(_DWORD *)(v15 + 76) - (unsigned int)a4 <= (unsigned int)a6 )
      {
        v47 = v7;
        goto LABEL_39;
      }
LABEL_32:
      v31 = *a3 == -4096;
      *(_DWORD *)(v15 + 72) = a4;
      if ( !v31 )
        --*(_DWORD *)(v15 + 76);
      *a3 = v14;
      a4 = 0;
      a3[1] = 0;
LABEL_8:
      v49 = v12;
      v21 = *(_QWORD *)(v12 + 128);
      if ( v21
        || (v45 = v7,
            v38 = a4,
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), (__int64)a3, a4, v17, a6),
            a4 = v38,
            v7 = v45,
            (v21 = *(_QWORD *)(v12 + 128)) != 0) )
      {
        v21 = *(_QWORD *)(v21 + 88);
      }
      v22 = *(_QWORD *)(v9 + 72);
      v49 = v21;
      v23 = *(_DWORD *)(v22 + 80);
      v24 = (__int64 *)(v22 + 64);
      if ( !v23 )
      {
        v50[0] = 0;
LABEL_36:
        v46 = v7;
        v40 = a4;
        sub_6E50A0((__int64)v24, 2 * v23, (__int64)a3, a4, v17, a6);
        sub_A49FE0(v24, &v49, v50);
        v21 = v49;
        a3 = (__int64 *)v50[0];
        a4 = v40;
        v30 = *(_DWORD *)(v22 + 72) + 1;
        v7 = v46;
LABEL_26:
        v31 = *a3 == -4096;
        *(_DWORD *)(v22 + 72) = v30;
        if ( !v31 )
          --*(_DWORD *)(v22 + 76);
        *a3 = v21;
        v27 = 0;
        a3[1] = 0;
        goto LABEL_13;
      }
      v25 = v23 - 1;
      a6 = *(_QWORD *)(v22 + 64);
      v26 = (v23 - 1) & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
      a3 = (__int64 *)(a6 + 16LL * v26);
      a5 = *a3;
      if ( v21 != *a3 )
      {
        if ( a5 == -4096 )
        {
LABEL_23:
          v29 = *(_DWORD *)(v22 + 72);
          v17 = 3 * v23;
          v50[0] = a3;
          v30 = v29 + 1;
          a6 = (unsigned int)(4 * v30);
          if ( (unsigned int)a6 >= (unsigned int)v17 )
            goto LABEL_36;
          a5 = v23 - *(_DWORD *)(v22 + 76) - v30;
          a6 = v23 >> 3;
          if ( (unsigned int)a5 <= (unsigned int)a6 )
          {
            v48 = v7;
            v42 = a4;
            sub_6E50A0((__int64)v24, v23, (__int64)a3, a4, a5, a6);
            sub_A49FE0(v24, &v49, v50);
            v21 = v49;
            a3 = (__int64 *)v50[0];
            v7 = v48;
            v30 = *(_DWORD *)(v22 + 72) + 1;
            a4 = v42;
          }
          goto LABEL_26;
        }
        v44 = 1;
        v35 = nullptr;
        while ( 1 )
        {
          if ( a5 == -8192 && !v35 )
            v35 = a3;
          v26 = v25 & (v44 + v26);
          a3 = (__int64 *)(a6 + 16LL * v26);
          a5 = *a3;
          if ( v21 == *a3 )
            break;
          if ( a5 == -4096 )
          {
            v36 = v35;
            v23 = *(_DWORD *)(v22 + 80);
            if ( v36 )
              a3 = v36;
            goto LABEL_23;
          }
          ++v44;
        }
      }
      v27 = a3[1];
LABEL_13:
      if ( a4 > v27 )
      {
        if ( !v10 )
          return v7;
        v8 >>= 1;
      }
      else
      {
        v7 = v11 + 1;
        v8 = v8 - v10 - 1;
        if ( v8 <= 0 )
          return v7;
      }
    }
    v50[0] = 0;
LABEL_38:
    v47 = v7;
    v16 *= 2;
LABEL_39:
    v41 = (__int64 *)v17;
    sub_6E50A0(v17, v16, (__int64)a3, a4, v17, a6);
    sub_A49FE0(v41, &v49, v50);
    v14 = v49;
    a3 = (__int64 *)v50[0];
    v7 = v47;
    LODWORD(a4) = *(_DWORD *)(v15 + 72) + 1;
    goto LABEL_32;
  }
  return v7;
}

