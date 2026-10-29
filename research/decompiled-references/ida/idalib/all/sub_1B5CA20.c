unsigned __int64 __fastcall sub_1B5CA20(__int64 *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  unsigned __int64 *v7; // rbp
  _BYTE *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  void **v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r14
  __int64 v25; // r12
  unsigned __int64 *v26; // r15
  unsigned __int64 v27; // r12
  __int64 v28; // rdi
  _BYTE *v29; // rbx
  char v30; // dl
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // r14
  __int64 v37; // r15
  unsigned int *v38; // rbp
  char *v39; // r12
  __int64 v40; // rax
  void **v41; // r12
  void **v42; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 *v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  void **v50; // r15
  void **v51; // rbp
  __int64 v52; // r15
  void **v53; // rbx
  int v54; // ecx
  __int64 v55; // rdx
  void **v56; // rbx
  int v57; // eax
  char **v58; // [rsp+0h] [rbp-708h]
  __int64 v59; // [rsp+0h] [rbp-708h]
  void **v60; // [rsp+0h] [rbp-708h]
  __int64 v61; // [rsp+0h] [rbp-708h]
  unsigned __int64 *v62; // [rsp+8h] [rbp-700h]
  unsigned __int64 *v64; // [rsp+50h] [rbp-6B8h]
  int v65; // [rsp+50h] [rbp-6B8h]
  _BYTE *v66; // [rsp+58h] [rbp-6B0h]
  unsigned int v67; // [rsp+64h] [rbp-6A4h] BYREF
  _QWORD *v68; // [rsp+68h] [rbp-6A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-698h] BYREF
  __int64 v70[3]; // [rsp+78h] [rbp-690h] BYREF
  void *v71; // [rsp+90h] [rbp-678h] BYREF
  __int64 v72; // [rsp+98h] [rbp-670h]
  _BYTE v73[128]; // [rsp+A0h] [rbp-668h] BYREF
  void **v74; // [rsp+120h] [rbp-5E8h] BYREF
  __int64 v75; // [rsp+128h] [rbp-5E0h]
  _BYTE v76[1152]; // [rsp+130h] [rbp-5D8h] BYREF
  void *v77; // [rsp+5B0h] [rbp-158h] BYREF
  __int64 v78; // [rsp+5B8h] [rbp-150h]
  _BYTE v79[128]; // [rsp+5C0h] [rbp-148h] BYREF
  void *ptr; // [rsp+640h] [rbp-C8h]
  __int64 v81; // [rsp+648h] [rbp-C0h]
  _BYTE v82[184]; // [rsp+650h] [rbp-B8h] BYREF

  v7 = (unsigned __int64 *)a2;
  v70[2] = a3;
  v70[1] = a2;
  v71 = v73;
  v74 = (void **)v76;
  v72 = 0x1000000000LL;
  v75 = 0x800000000LL;
  v77 = v79;
  v78 = 0x1000000000LL;
  ptr = v82;
  v81 = 0x1000000000LL;
  if ( a3 > 8 )
  {
    sub_1B5B6F0((__int64)&v74, a3);
    if ( a3 > HIDWORD(v78) )
      sub_2237220(&v77, v79, a3, 8);
  }
  v62 = (unsigned __int64 *)(a2 + 8 * a3);
  if ( v62 != (unsigned __int64 *)a2 )
  {
    do
    {
      v27 = *v7;
      v67 = 0;
      v28 = *a1;
      v68 = (_QWORD *)v27;
      v70[0] = 0;
      v29 = (_BYTE *)sub_1B06DD0(
                       v28,
                       (unsigned __int64 *)&v68,
                       &v67,
                       v70,
                       (__int64)&byte_22F0C30,
                       0,
                       *(double *)a5.m128_u64);
      if ( v30 )
      {
        v31 = (unsigned int)v72;
        v32 = (unsigned int)v72 + 1LL;
        if ( v32 > HIDWORD(v72) )
        {
          sub_2237220(&v71, v73, v32, 8);
          v31 = (unsigned int)v72;
        }
        *((_QWORD *)v71 + v31) = v27;
        LODWORD(v72) = v72 + 1;
      }
      if ( v29 )
      {
        if ( (v29[28] & 0x7Fu) - 40 > 6 )
        {
          v9 = nullptr;
          v11 = sub_1B22DF0(*a1, (__int64)v29, (unsigned __int64)v68, 1, a5, a6);
          v10 = v11;
        }
        else
        {
          v9 = v29;
          v10 = 0;
          v11 = sub_BFB9F0(v27);
        }
        v12 = (unsigned int)v72;
        v13 = (unsigned int)v72 + 1LL;
        if ( v13 > HIDWORD(v72) )
        {
          v59 = v11;
          sub_2237220(&v71, v73, v13, 8);
          v12 = (unsigned int)v72;
          v11 = v59;
        }
        *((_QWORD *)v71 + v12) = v11;
        LODWORD(v72) = v72 + 1;
        v14 = sub_BFB9F0(v27);
        sub_1AEFBB0(a1[1], (__int64)v29, v14, v10);
        v15 = (unsigned int)v78;
        v16 = (unsigned int)v78 + 1LL;
        if ( v16 > HIDWORD(v78) )
        {
          sub_2237220(&v77, v79, v16, 8);
          v15 = (unsigned int)v78;
        }
        *((_QWORD *)v77 + v15) = v29;
        LODWORD(v78) = v78 + 1;
        if ( HIDWORD(v75) <= (unsigned int)v75 )
        {
          v47 = sub_2237400(&v74, v76, 0, 144, &v69);
          v60 = (void **)v47;
          v48 = (_QWORD *)(v47 + 144LL * (unsigned int)v75);
          v48[1] = 0x800000000LL;
          *v48 = v48 + 2;
          v49 = 18LL * (unsigned int)v75;
          v50 = &v74[v49];
          if ( v74 != &v74[v49] )
          {
            v64 = v7;
            v51 = &v74[v49];
            v52 = v47;
            v66 = v29;
            v53 = v74;
            do
            {
              *(_DWORD *)(v52 + 8) = 0;
              *(_DWORD *)(v52 + 12) = 8;
              v54 = *((_DWORD *)v53 + 2);
              *(_QWORD *)v52 = v52 + 16;
              if ( v54 )
                sub_1B5B5A0((char ***)v52, (char ***)v53);
              v53 += 18;
              v52 += 144;
            }
            while ( v51 != v53 );
            v7 = v64;
            v29 = v66;
            v55 = 18LL * (unsigned int)v75;
            v50 = &v74[v55];
            if ( v74 != &v74[v55] )
            {
              v56 = v74;
              do
              {
                while ( 1 )
                {
                  v50 -= 18;
                  if ( *v50 == v50 + 2 )
                    break;
                  free(*v50);
                  if ( v50 == v56 )
                  {
                    v29 = v66;
                    v50 = v74;
                    goto LABEL_55;
                  }
                }
              }
              while ( v50 != v56 );
              v29 = v66;
              v50 = v74;
            }
          }
LABEL_55:
          v57 = v69;
          if ( v50 != (void **)v76 )
          {
            v65 = v69;
            free(v50);
            v57 = v65;
          }
          HIDWORD(v75) = v57;
          v18 = (unsigned int)(v75 + 1);
          v74 = v60;
          LODWORD(v75) = v75 + 1;
        }
        else
        {
          v17 = &v74[18 * (unsigned int)v75];
          v17[1] = (void *)0x800000000LL;
          *v17 = v17 + 2;
          v18 = (unsigned int)(v75 + 1);
          LODWORD(v75) = v75 + 1;
        }
        v19 = v68;
        if ( v9 && (v19 = v68, ((*(_WORD *)sub_BFBAE0(v27) + 389) & 0x1FFu) <= 1) )
        {
          v33 = sub_19179A0(*a1, v19, 1u, v20, v21, v22, a5, a6);
          v18 = (unsigned int)v75;
          v23 = v33 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v23 = (unsigned __int64)v19;
        }
        v24 = v23 & 0xFFFFFFFFFFFFFFFDLL;
        v25 = (__int64)&v74[18 * v18 - 18];
        if ( *(_DWORD *)(v25 + 12) <= *(_DWORD *)(v25 + 8) )
        {
          v44 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v29 + 32LL))(v29);
          v45 = *(unsigned int *)(v25 + 8);
          if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(v25 + 12) )
          {
            v61 = v44;
            sub_2237220(v25, v25 + 16, v45 + 1, 16);
            v45 = *(unsigned int *)(v25 + 8);
            v44 = v61;
          }
          v46 = (unsigned __int64 *)(*(_QWORD *)v25 + 16 * v45);
          *v46 = v24;
          v46[1] = v44;
          ++*(_DWORD *)(v25 + 8);
        }
        else
        {
          v26 = (unsigned __int64 *)(*(_QWORD *)v25 + 16LL * *(unsigned int *)(v25 + 8));
          *v26 = v24;
          v26[1] = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v29 + 32LL))(v29);
          ++*(_DWORD *)(v25 + 8);
        }
      }
      ++v7;
    }
    while ( v62 != v7 );
  }
  v34 = (__int64 *)(unsigned int)v72;
  v35 = 0;
  if ( (_DWORD)v72 )
  {
    v36 = (__int64)v74;
    v37 = (unsigned int)v75;
    v38 = (unsigned int *)v71;
    v58 = (char **)v77;
    v39 = (char *)(unsigned int)v78;
    v40 = sub_168B6C0((__int64)a1);
    v35 = sub_EC3C90(v40, a4, v38, v34, v58, v39, v36, v37);
  }
  if ( ptr != v82 )
    free(ptr);
  if ( v77 != v79 )
    free(v77);
  v41 = v74;
  v42 = &v74[18 * (unsigned int)v75];
  if ( v74 != v42 )
  {
    do
    {
      while ( 1 )
      {
        v42 -= 18;
        if ( *v42 == v42 + 2 )
          break;
        free(*v42);
        if ( v41 == v42 )
          goto LABEL_34;
      }
    }
    while ( v41 != v42 );
LABEL_34:
    v42 = v74;
  }
  if ( v42 != (void **)v76 )
    free(v42);
  if ( v71 != v73 )
    free(v71);
  return v35;
}
