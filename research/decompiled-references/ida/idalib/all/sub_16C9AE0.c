void __fastcall sub_16C9AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v8; // r13d
  int v9; // ebx
  __m128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r13
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  int *v29; // r14
  int *v30; // r15
  int v31; // edx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 *v35; // rdx
  int v36; // edx
  int *v37; // r14
  int *v38; // r15
  int v39; // edx
  __int64 v40; // rdx
  int v41; // eax
  __int64 *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 *v45; // [rsp+8h] [rbp-B0h] BYREF
  __int64 *v46; // [rsp+10h] [rbp-A8h]
  __int64 *v47; // [rsp+18h] [rbp-A0h]
  __int64 v48; // [rsp+20h] [rbp-98h] BYREF
  __int64 v49; // [rsp+28h] [rbp-90h]
  __int64 v50; // [rsp+30h] [rbp-88h] BYREF
  char v51; // [rsp+3Ch] [rbp-7Ch]
  __int64 v52; // [rsp+48h] [rbp-70h] BYREF
  __int64 v53; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-60h]
  __m128 v55; // [rsp+60h] [rbp-58h]
  __int64 *v56; // [rsp+70h] [rbp-48h]

  v50 = a4;
  v48 = a5;
  v49 = a6;
  v51 = a3;
  if ( a2 && v49 )
  {
    v6 = a2;
    v8 = 0;
    v9 = (unsigned __int8)a3;
    v45 = &v50;
    v56 = &v48;
    LODWORD(v47) = a3;
    v10 = _mm_loadh_ps((const double *)&v45);
    v46 = &v53;
    v55 = v10;
    if ( (unsigned int)sub_B76070(a2, a2, a3, a4) )
    {
      do
      {
        v14 = *(_QWORD *)(v6 + 120);
        v15 = *(_QWORD *)(v14 + 8LL * v8);
        if ( (*(_BYTE *)(v15 + 29) & 1) != 0 )
        {
          v16 = sub_B8C3D0(v15, a2, v14, v11, v12, v13);
          v14 = *v16;
          v19 = *v16 + 8LL * *((unsigned int *)v16 + 2);
          if ( v14 >= v19 )
          {
            if ( v14 != v19 )
            {
              if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 68 )
              {
                v42 = (__int64 *)(v19 + 8);
                while ( 1 )
                {
                  v11 = (__int64)v42;
                  if ( (__int64 *)v14 == v42 )
                    break;
                  v43 = *v42++;
                  if ( *(_WORD *)(v43 + 36) == 68 )
                    goto LABEL_32;
                }
                ++v8;
                ++v9;
                continue;
              }
LABEL_32:
              v34 = *(_QWORD *)v14;
              if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 68 )
              {
                v35 = (__int64 *)(v14 + 8);
                do
                  v34 = *v35++;
                while ( *(_WORD *)(v34 + 36) != 68 );
              }
              v14 = (unsigned int)(v9 + 3);
              if ( (unsigned int)v14 <= 1 )
              {
                v45 = nullptr;
              }
              else
              {
                v36 = *(unsigned __int8 *)v55.m128_u64[0];
                if ( !v9 && (_BYTE)v36 )
                {
                  v14 = v55.m128_u64[1];
                  a2 = *(_QWORD *)v55.m128_u64[1];
                  v45 = *(__int64 **)v55.m128_u64[1];
                }
                else
                {
                  v14 = v9 - v36;
                  v45 = *(__int64 **)(*v56 + 8 * v14);
                }
              }
              v11 = *(_QWORD *)(v34 + 48);
              v37 = (int *)(v11 + 4LL * *(unsigned int *)(v34 + 40));
              if ( (int *)v11 != v37 )
              {
                v38 = *(int **)(v34 + 48);
                while ( 1 )
                {
                  v41 = *v38;
                  if ( *v38 )
                    break;
                  v14 = *(_BYTE *)(v6 + 28) & 0x7F;
                  if ( (_BYTE)v14 != 38 )
                  {
                    v39 = *(unsigned __int8 *)v55.m128_u64[0];
                    if ( !(_BYTE)v39 )
                      goto LABEL_43;
                    v40 = *(_QWORD *)v55.m128_u64[1];
                    goto LABEL_44;
                  }
LABEL_45:
                  if ( v37 == ++v38 )
                    goto LABEL_9;
                }
                v40 = 0;
                if ( (unsigned int)(v41 + 3) > 1 )
                {
                  v39 = *(unsigned __int8 *)v55.m128_u64[0];
LABEL_43:
                  v40 = *(_QWORD *)(*v56 + 8LL * (v41 - v39));
                }
LABEL_44:
                v53 = v40;
                a2 = (__int64)v46;
                sub_15A17E0(a1, (__int64)v46, (__int64)v45, v11, v17, v18);
                goto LABEL_45;
              }
            }
          }
          else
          {
            v11 = v14;
            while ( 1 )
            {
              a2 = *(_QWORD *)v11;
              if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 68 )
                break;
              v11 += 8;
              if ( v19 == v11 )
                goto LABEL_9;
            }
            if ( v19 != v11 )
              goto LABEL_32;
          }
        }
LABEL_9:
        ++v8;
        ++v9;
      }
      while ( (unsigned int)sub_B76070(v6, a2, v14, v11) > v8 );
    }
    if ( (_BYTE)v47 )
    {
      v20 = (__int64 *)(*(_QWORD *)(v6 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v6 + 56) & 4) != 0 )
        v20 = (__int64 *)v20[4];
      if ( v20 )
      {
        v21 = *v20;
        v54 = (unsigned __int64)(v20 + 1);
        v47 = &v53;
        v53 = v21;
        v46 = &v52;
        while ( 1 )
        {
          v25 = sub_15991B0(v47);
          v26 = v22;
          if ( !v25 )
            return;
          v27 = *v22;
          if ( *v22 && *(_WORD *)(v27 + 36) == 68 )
          {
            v45 = *(_BYTE *)v55.m128_u64[0] ? *(__int64 **)v55.m128_u64[1] : *(__int64 **)*v56;
            v28 = *(_QWORD *)(v27 + 48);
            v29 = (int *)(v28 + 4LL * *(unsigned int *)(v27 + 40));
            if ( (int *)v28 != v29 )
              break;
          }
LABEL_58:
          v44 = sub_F6C520(*(_QWORD *)(v25 + 40));
          v53 = *(_QWORD *)(v25 + 40);
          v54 = v44 * ((v26 + 1 != nullptr) + ((unsigned __int64)v26 - (v26 + 1 != nullptr) + 8) / v44);
        }
        v30 = *(int **)(v27 + 48);
        while ( 1 )
        {
          v33 = *v30;
          if ( *v30 )
            break;
          if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0x26 )
          {
            v31 = *(unsigned __int8 *)v55.m128_u64[0];
            if ( !(_BYTE)v31 )
              goto LABEL_25;
            v32 = *(_QWORD *)v55.m128_u64[1];
            goto LABEL_26;
          }
LABEL_27:
          if ( v29 == ++v30 )
            goto LABEL_58;
        }
        v32 = 0;
        if ( (unsigned int)(v33 + 3) > 1 )
        {
          v31 = *(unsigned __int8 *)v55.m128_u64[0];
LABEL_25:
          v32 = *(_QWORD *)(*v56 + 8LL * (v33 - v31));
        }
LABEL_26:
        v52 = v32;
        sub_15A17E0(a1, (__int64)v46, (__int64)v45, v28, v23, v24);
        goto LABEL_27;
      }
    }
  }
}
