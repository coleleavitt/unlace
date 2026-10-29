void __fastcall sub_19BCA90(
        __int64 a1,
        __int64 *a2,
        __m128i a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int16 v14; // dx
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // edi
  unsigned __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  _BYTE *v29; // rdi
  __int64 v30; // rbx
  int v31; // edx
  int v32; // edi
  bool v33; // zf
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  __m128 *v38; // rsi
  __int64 v39; // rdi
  _BYTE *v40; // rdi
  unsigned __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  int v45; // ebx
  unsigned __int64 v46; // r11
  int v47; // ebx
  __int64 v48; // r9
  unsigned __int64 v49; // r15
  __int64 v50; // rdi
  __int64 *v51; // [rsp+8h] [rbp-F0h]
  __int64 v52; // [rsp+8h] [rbp-F0h]
  _QWORD *v53; // [rsp+8h] [rbp-F0h]
  __m128 v54; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-A8h]
  _BYTE v56[40]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+80h] [rbp-78h] BYREF
  void *ptr; // [rsp+88h] [rbp-70h] BYREF
  __int64 v59; // [rsp+90h] [rbp-68h]
  _BYTE v60[32]; // [rsp+98h] [rbp-60h] BYREF
  char v61; // [rsp+B8h] [rbp-40h]
  __int16 v62; // [rsp+B9h] [rbp-3Fh]

  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), 0x1BB7u, 0, *(_QWORD *)(a1 + 264), a7, a8) != 1 )
  {
    v10 = *a2;
    v11 = a2[3];
    v62 = 0;
    ptr = v60;
    v12 = (v10 >> 20) & 1;
    v59 = 0x400000000LL;
    v57 = 0;
    v61 = v12;
    v13 = sub_BFBAE0(v11);
    v14 = *(_WORD *)v13 & 0x1FF;
    if ( v14 == 46 )
    {
      v15 = *(_QWORD *)(v13 + 24);
      if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 49 > 2 )
        return;
      v16 = sub_19A0790((__int64)&v57, v15, v12);
      if ( !v16 )
        goto LABEL_13;
      if ( v16 > 2 )
      {
        if ( v16 != 3 )
        {
LABEL_13:
          v29 = ptr;
          goto LABEL_20;
        }
        v20 = *(_DWORD *)(a1 + 9920);
        v21 = a1 + 9904;
        if ( v20 )
        {
          v17 = v57;
          v18 = *(_QWORD *)(a1 + 9904);
          v22 = (v20 - 1) & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
          v23 = v18 + 16LL * v22;
          v24 = *(_QWORD *)v23;
          if ( v57 == *(_QWORD *)v23 )
          {
LABEL_9:
            sub_19A7660(&v54, (_QWORD *)v23, (_QWORD *)(v18 + 16LL * v20), v21, 1);
            v25 = *(unsigned int *)(v54.m128_u64[0] + 8);
LABEL_10:
            v26 = *(_QWORD *)(a1 + 9928) + 56 * v25;
            v27 = *(unsigned int *)(v26 + 16);
            v28 = *((unsigned int *)a2 + 1) | ((((unsigned __int64)*a2 >> 20) & 1) << 32);
            if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v26 + 20) )
            {
              v52 = *((unsigned int *)a2 + 1) | ((((unsigned __int64)*a2 >> 20) & 1) << 32);
              sub_2237220(v26 + 8, v26 + 24, v27 + 1, 8);
              v27 = *(unsigned int *)(v26 + 16);
              v28 = v52;
            }
            *(_QWORD *)(*(_QWORD *)(v26 + 8) + 8 * v27) = v28;
            ++*(_DWORD *)(v26 + 16);
            goto LABEL_13;
          }
          v45 = 1;
          v46 = 0;
          if ( v24 != -4096 )
          {
            while ( 1 )
            {
              if ( !v46 && v24 == -8192 )
                v46 = v23;
              v22 = (v20 - 1) & (v45 + v22);
              v23 = v18 + 16LL * v22;
              v24 = *(_QWORD *)v23;
              if ( v57 == *(_QWORD *)v23 )
                goto LABEL_9;
              if ( v24 == -4096 )
              {
                if ( v46 )
                  v23 = v46;
                break;
              }
              ++v45;
            }
          }
          v47 = *(_DWORD *)(a1 + 9912);
          v19 = 3 * v20;
          v54.m128_u64[0] = v23;
          v32 = v47 + 1;
          if ( 4 * (v47 + 1) < (unsigned int)v19 )
          {
            v48 = v20 - *(_DWORD *)(a1 + 9916) - v32;
            if ( (unsigned int)v48 > v20 >> 3 )
              goto LABEL_26;
            v51 = (__int64 *)(a1 + 9904);
            sub_19BC890((__int64 *)(a1 + 9904), v20, v57, v21, v18, v48);
LABEL_25:
            sub_19A6660(v51, &v57, &v54);
            v23 = v54.m128_u64[0];
            v17 = v57;
            v18 = *(_QWORD *)(a1 + 9904);
            v21 = (__int64)v51;
            v32 = *(_DWORD *)(a1 + 9912) + 1;
LABEL_26:
            v33 = *(_QWORD *)v23 == -4096;
            *(_DWORD *)(a1 + 9912) = v32;
            if ( !v33 )
              --*(_DWORD *)(a1 + 9916);
            *(_QWORD *)v23 = v17;
            *(_DWORD *)(v23 + 8) = 0;
            sub_19A7660(&v54, (_QWORD *)v23, (_QWORD *)(v18 + 16LL * *(unsigned int *)(a1 + 9920)), v21, 1);
            v34 = v54.m128_u64[0];
            v54.m128_u64[0] = v57;
            v55 = 0x400000000LL;
            v35 = *(unsigned int *)(a1 + 9936);
            v54.m128_u64[1] = (unsigned __int64)v56;
            v36 = v35 + 1;
            if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 9940) )
            {
              v49 = *(_QWORD *)(a1 + 9928);
              v50 = a1 + 9928;
              if ( v49 > (unsigned __int64)&v54 || (unsigned __int64)&v54 >= v49 + 56 * v35 )
              {
                sub_19A7B00(v50, v36);
                v37 = *(_QWORD *)(a1 + 9928);
                v35 = *(unsigned int *)(a1 + 9936);
                v38 = &v54;
              }
              else
              {
                sub_19A7B00(v50, v36);
                v37 = *(_QWORD *)(a1 + 9928);
                v35 = *(unsigned int *)(a1 + 9936);
                v38 = (__m128 *)((char *)&v54 + v37 - v49);
              }
            }
            else
            {
              v37 = *(_QWORD *)(a1 + 9928);
              v38 = &v54;
            }
            v39 = v37 + 56 * v35;
            *(_QWORD *)v39 = v38->m128_u64[0];
            *(_QWORD *)(v39 + 8) = v39 + 24;
            *(_QWORD *)(v39 + 16) = 0x400000000LL;
            if ( v38[1].m128_i32[0] )
              sub_19A76D0((char **)(v39 + 8), (__int64)&v38->m128_i64[1]);
            v25 = *(unsigned int *)(a1 + 9936);
            v40 = (_BYTE *)v54.m128_u64[1];
            *(_DWORD *)(a1 + 9936) = v25 + 1;
            if ( v40 != v56 )
            {
              free(v40);
              v25 = (unsigned int)(*(_DWORD *)(a1 + 9936) - 1);
            }
            *(_DWORD *)(v34 + 8) = v25;
            goto LABEL_10;
          }
        }
        else
        {
          v54.m128_u64[0] = 0;
        }
        v51 = (__int64 *)(a1 + 9904);
        sub_19BC890((__int64 *)(a1 + 9904), 2 * v20, v17, v21, v18, v19);
        goto LABEL_25;
      }
LABEL_19:
      sub_19B1E00(a1, *((_DWORD *)a2 + 1), (__int64)&v57, a3, a4);
      v29 = ptr;
LABEL_20:
      if ( v29 != v60 )
        free(v29);
      return;
    }
    if ( v14 == 71 )
    {
      v30 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 40 <= 6 )
      {
        if ( sub_B735C0(v30) && (v41 = sub_B73640(v30), (v42 = (_QWORD *)sub_199F930(v41)) != nullptr) )
        {
          v31 = v59;
          if ( ((*v42 & 0x100000LL) != 0) != v61 )
          {
            v43 = (unsigned int)v59;
            v44 = (unsigned int)v59 + 1LL;
            if ( v44 > HIDWORD(v59) )
            {
              v53 = v42;
              sub_2237220(&ptr, v60, v44, 8);
              v43 = (unsigned int)v59;
              v42 = v53;
            }
            *((_QWORD *)ptr + v43) = v42;
            v31 = v59 + 1;
            LODWORD(v59) = v59 + 1;
          }
        }
        else
        {
          v31 = v59;
        }
        if ( !v31 )
          goto LABEL_13;
        goto LABEL_19;
      }
    }
  }
}
