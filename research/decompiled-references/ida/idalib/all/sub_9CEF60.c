void **__fastcall sub_9CEF60(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  __int64 v5; // r9
  __int64 *v6; // rax
  void **v7; // r15
  void ***v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  __int16 v14; // dx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 *v24; // rsi
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v29; // r8
  _QWORD *v30; // r14
  _QWORD *v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // esi
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  void **v44; // r12
  int v45; // esi
  int v46; // r8d
  __int64 v47; // r9
  _QWORD *v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+8h] [rbp-B0h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  void **v52; // [rsp+28h] [rbp-90h]
  unsigned __int64 v53; // [rsp+30h] [rbp-88h]
  __int64 v54; // [rsp+30h] [rbp-88h]
  unsigned __int64 v55; // [rsp+38h] [rbp-80h]
  _QWORD *v56; // [rsp+40h] [rbp-78h]
  __int64 v57; // [rsp+48h] [rbp-70h] BYREF
  __m128 v58; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v59[11]; // [rsp+60h] [rbp-58h] BYREF

  v57 = a2;
  v4 = (unsigned __int8)sub_9CA760((__int64 *)a1, &v57, &v58) == 0;
  v6 = (__int64 *)v58.m128_u64[0];
  if ( !v4 )
  {
    v7 = *(void ***)(v58.m128_u64[0] + 8);
    v8 = (void ***)(v58.m128_u64[0] + 8);
    if ( v7 )
      goto LABEL_3;
    goto LABEL_46;
  }
  v37 = *(_DWORD *)(a1 + 8);
  v38 = *(unsigned int *)(a1 + 16);
  v59[0] = v58.m128_u64[0];
  v39 = (unsigned int)(v37 + 1);
  v40 = 2 * v38;
  v41 = (unsigned int)(4 * v39);
  if ( (unsigned int)v41 >= 3 * (int)v38 )
    goto LABEL_55;
  if ( (int)v38 - *(_DWORD *)(a1 + 12) - (int)v39 <= (unsigned int)v38 >> 3 )
  {
    v40 = v38;
LABEL_55:
    sub_9CEDA0(a1, v40, v39, v38, v41, v5);
    sub_9CA760((__int64 *)a1, &v57, v59);
    LODWORD(v39) = *(_DWORD *)(a1 + 8) + 1;
    v6 = (__int64 *)v59[0];
  }
  v4 = *v6 == -4096;
  *(_DWORD *)(a1 + 8) = v39;
  if ( !v4 )
    --*(_DWORD *)(a1 + 12);
  v42 = v57;
  v6[1] = 0;
  v8 = (void ***)(v6 + 1);
  *v6 = v42;
LABEL_46:
  v43 = operator new(0x38u);
  *(_OWORD *)(v43 + 16) = 0;
  v7 = (void **)v43;
  v43 += 16;
  *(_OWORD *)(v43 + 16) = 0;
  *(_QWORD *)(v43 + 32) = 0;
  *v7 = (void *)v43;
  v44 = *v8;
  v7[1] = (void *)0x400000000LL;
  *v8 = v7;
  if ( v44 )
  {
    if ( *v44 != v44 + 2 )
      free(*v44);
    operator delete(v44, 0x38u);
    v7 = *v8;
  }
LABEL_3:
  v9 = sub_9C8850(v57);
  v51 = v10;
  v11 = v9;
  if ( v9 != v10 )
  {
    v52 = v7;
    v12 = a3 + 104;
    v56 = v7 + 2;
    while ( 1 )
    {
      v13 = *(_QWORD *)v11;
      v14 = *(_WORD *)(*(_QWORD *)v11 + 36LL);
      if ( v14 != 122 )
      {
        if ( v14 == 123 )
        {
          v15 = *(_QWORD **)(v13 + 48);
          v16 = *(unsigned int *)(v13 + 40);
          if ( v15 != &v15[v16] )
          {
            v48 = &v15[v16];
            v55 = v11;
            v17 = v15;
            while ( 1 )
            {
              sub_9E0580(v59, v12, *v17, 0);
              if ( (v59[0] & 2) != 0 )
                goto LABEL_21;
              v18 = v59[0] & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v59[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                goto LABEL_21;
              if ( *(_BYTE *)v18 == 12 )
              {
                v19 = *(_QWORD *)(v18 + 64);
              }
              else
              {
                if ( *(_BYTE *)v18 != 4 )
                  goto LABEL_21;
                v19 = *(_QWORD *)(v18 + 16);
              }
              if ( v19 )
              {
                v20 = *((unsigned int *)v52 + 2);
                if ( v20 + 1 > (unsigned __int64)*((unsigned int *)v52 + 3) )
                {
                  sub_2237220(v52, v56, v20 + 1, 8);
                  v20 = *((unsigned int *)v52 + 2);
                }
                *((_QWORD *)*v52 + v20) = v19;
                v21 = *(_QWORD *)a1;
                ++*((_DWORD *)v52 + 2);
                v22 = *(unsigned int *)(a1 + 16);
                if ( !(_DWORD)v22 )
                  goto LABEL_53;
                v23 = (v22 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
                v24 = (__int64 *)(v21 + 16LL * v23);
                v25 = *v24;
                if ( v19 == *v24 )
                  goto LABEL_18;
                v45 = 1;
                if ( v25 == -4096 )
                {
LABEL_53:
                  sub_9CAAB0(
                    &v58,
                    (_QWORD *)(v21 + 16LL * (unsigned int)v22),
                    (_QWORD *)(v21 + 16LL * (unsigned int)v22),
                    a1,
                    1);
                  v26 = v58.m128_u64[0];
                }
                else
                {
                  while ( 1 )
                  {
                    v46 = v45 + 1;
                    v23 = (v22 - 1) & (v23 + v45);
                    v24 = (__int64 *)(v21 + 16LL * v23);
                    v47 = *v24;
                    if ( v19 == *v24 )
                      break;
                    v45 = v46;
                    if ( v47 == -4096 )
                      goto LABEL_53;
                  }
LABEL_18:
                  sub_9CAAB0(&v58, v24, (_QWORD *)(16 * v22 + v21), a1, 1);
                  v26 = v58.m128_u64[0];
                }
                v53 = v26;
                v27 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
                sub_9CAAB0(&v58, v27, v27, a1, 1);
                if ( v53 == v58.m128_u64[0] )
                  sub_9CEF60(a1, v19, a3);
              }
LABEL_21:
              if ( v48 == ++v17 )
              {
                v11 = v55;
                goto LABEL_23;
              }
            }
          }
        }
        goto LABEL_23;
      }
      v29 = *(_QWORD **)(v13 + 48);
      v30 = &v29[*(unsigned int *)(v13 + 40)];
      if ( v29 != v30 )
        break;
LABEL_23:
      v11 += 8LL;
      if ( v51 == v11 )
        return v52;
    }
    v31 = *(_QWORD **)(v13 + 48);
    while ( 1 )
    {
      sub_9E0580(v59, v12, *v31, 0);
      if ( (v59[0] & 2) == 0 )
      {
        v36 = v59[0] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v59[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( *(_BYTE *)v36 == 12 )
          {
            v32 = *(_QWORD *)(v36 + 64);
            goto LABEL_31;
          }
          if ( *(_BYTE *)v36 == 4 )
          {
            v32 = *(_QWORD *)(v36 + 16);
LABEL_31:
            if ( v32 )
            {
              v33 = sub_9CF3D0(a1, v32, a3);
              v34 = v57;
              v35 = *(unsigned int *)(v33 + 8);
              if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(v33 + 12) )
              {
                v54 = v57;
                v49 = v33;
                sub_2237220(v33, v33 + 16, v35 + 1, 8);
                v33 = v49;
                v34 = v54;
                v35 = *(unsigned int *)(v49 + 8);
              }
              *(_QWORD *)(*(_QWORD *)v33 + 8 * v35) = v34;
              ++*(_DWORD *)(v33 + 8);
            }
          }
        }
      }
      if ( v30 == ++v31 )
        goto LABEL_23;
    }
  }
  return v7;
}
