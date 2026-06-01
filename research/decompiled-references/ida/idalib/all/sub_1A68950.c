void __fastcall sub_1A68950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbp
  unsigned int *v19; // rax
  unsigned int *v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rbp
  __int64 *v46; // rsi
  __int64 v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // r14
  unsigned __int64 v55; // rax
  __int64 *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdi
  _QWORD *v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdi
  __int64 v83; // rax
  unsigned __int64 v84; // rdx
  __int64 v85; // [rsp+0h] [rbp-170h]
  __int64 v86; // [rsp+8h] [rbp-168h]
  _QWORD *v87; // [rsp+20h] [rbp-150h] BYREF
  void *ptr; // [rsp+28h] [rbp-148h] BYREF
  unsigned int v89; // [rsp+30h] [rbp-140h]
  unsigned int v90; // [rsp+34h] [rbp-13Ch]
  _QWORD v91[39]; // [rsp+38h] [rbp-138h] BYREF

  if ( *(_QWORD *)(a2 + 40) != *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v6 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 59 <= 2 )
    {
      ptr = (void *)(v6 - 64);
      if ( v6 != 64 )
        sub_1A66720(*(_QWORD *)(a1 + 16), (__int64 *)&ptr, a3, a4, a5, a6);
    }
    sub_1A675A0(*(_QWORD *)(a1 + 8), v6);
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60 <= 1 )
    {
      v15 = *(_QWORD *)(sub_BBF290(a2) + 16);
      if ( (v15 & 4) != 0 )
        v18 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v18 + 8) & 0x7Fu) - 59 <= 2 )
      {
        ptr = (void *)(v18 - 64);
        if ( v18 != 64 )
          sub_1A66720(*(_QWORD *)(a1 + 16), (__int64 *)&ptr, v13, v14, v16, v17);
      }
      sub_1A675A0(*(_QWORD *)(a1 + 8), v18);
      v19 = *(unsigned int **)(a2 + 168);
      v9 = *v19;
      if ( (_DWORD)v9 )
      {
        v20 = v19 + 2;
        v9 = 3LL * (unsigned int)(v9 - 1);
        v21 = (__int64)&v19[2 * v9 + 8];
        do
        {
          v22 = (__int64)v20;
          v20 += 6;
          sub_1A68860((__int64 *)a1, v22, v9, v10, v11, v12);
        }
        while ( v20 != (unsigned int *)v21 );
      }
    }
    v23 = *(_QWORD *)(a1 + 16);
    ptr = (void *)a2;
    sub_1A66720(v23, (__int64 *)&ptr, v9, v10, (__int64)v11, v12);
    if ( (unsigned __int8)sub_1A66720(a1 + 32, (__int64 *)&ptr, v24, v25, v26, v27) )
    {
      v32 = *(_QWORD *)a1;
      v33 = sub_A7A9D0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), a2, v28, v29, v30, v31);
      if ( !(unsigned __int8)sub_1E63330(v32, *(unsigned int *)(a1 + 24), v33, 1, 0) )
      {
        v90 = 32;
        v91[0] = a2;
        v37 = v91;
        v38 = 1;
        ptr = v91;
        do
        {
          v39 = v37[v38 - 1];
          v89 = v38 - 1;
          sub_7052B0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104), v38, v34, v35, v36);
          v44 = *(_QWORD *)(v39 + 128);
          if ( (*(_BYTE *)(v44 + 24) & 1) != 0 )
            v45 = sub_B96980(v44);
          else
            v45 = *(_QWORD *)(v44 + 24);
          sub_7052B0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104), v40, v41, v42, v43);
          v46 = *(__int64 **)(v39 + 104);
          v47 = v45 + 24LL * *(unsigned int *)(*(_QWORD *)(v39 + 128) + 16LL);
          sub_7052B0(v46 + 12, (__int64)v46, v48, v49, v50, v51);
          v53 = *(_QWORD *)(v39 + 128);
          if ( (*(_BYTE *)(v53 + 24) & 1) != 0 )
            v54 = sub_B96980(v53);
          else
            v54 = *(_QWORD *)(v53 + 24);
          for ( ; v54 != v47; v54 += 24 )
          {
            v55 = *(_QWORD *)(**(_QWORD **)(v54 + 16) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v55 + 8) & 0xF) != 0 )
              v55 = sub_F64F00(**(_QWORD **)(v54 + 16), (__int64)v46, (__int64)v52, v34, v35);
            v56 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v56 + 16) == 48 )
            {
              v57 = sub_F60F10(*v56, (__int64)v46, (__int64)v52, v34, v35, v36);
              v58 = *(_QWORD *)(a1 + 16);
              v59 = v57;
              v87 = v57;
              sub_1A66720(v58, (__int64 *)&v87, v60, v61, v62, v63);
              v46 = (__int64 *)&v87;
              if ( (unsigned __int8)sub_1A66720(a1 + 32, (__int64 *)&v87, v64, v65, v66, v67) )
              {
                v68 = (_QWORD *)(v59[2] & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v59[2] & 4) != 0 )
                  v68 = (_QWORD *)*v68;
                sub_1A675A0(*(_QWORD *)(a1 + 8), (__int64)v68);
                sub_7052B0((__int64 *)(v59[13] + 96LL), v59[13], v69, v70, v71, v72);
                v77 = v59[16];
                if ( (*(_BYTE *)(v77 + 24) & 1) != 0 )
                  v85 = sub_B96980(v77);
                else
                  v85 = *(_QWORD *)(v77 + 24);
                sub_7052B0((__int64 *)(v59[13] + 96LL), v59[13], v73, v74, v75, v76);
                v82 = v59[16];
                if ( (*(_BYTE *)(v82 + 24) & 1) != 0 )
                  v86 = sub_B96980(v82);
                else
                  v86 = *(_QWORD *)(v82 + 24);
                v46 = (__int64 *)v59[13];
                sub_7052B0(v46 + 12, (__int64)v46, v78, v79, v80, v81);
                v34 = v86;
                if ( v85 != v86 + 24LL * *(unsigned int *)(v59[16] + 16LL) )
                {
                  v83 = v89;
                  v34 = v90;
                  v84 = v89 + 1LL;
                  if ( v84 > v90 )
                  {
                    v46 = v91;
                    sub_2237220(&ptr, v91, v84, 8);
                    v83 = v89;
                  }
                  v52 = ptr;
                  *((_QWORD *)ptr + v83) = v59;
                  ++v89;
                }
              }
            }
          }
          v38 = v89;
          v37 = ptr;
        }
        while ( v89 );
        if ( ptr != v91 )
          free(ptr);
      }
    }
  }
}
