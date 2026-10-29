__int64 __fastcall sub_19303F0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        __int64 a10)
{
  int v11; // r14d
  int v12; // r13d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  _WORD *v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // r14
  int v35; // eax
  __int64 v36; // r14
  size_t v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // r10
  _QWORD *v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-140h]
  unsigned __int64 v44; // [rsp+8h] [rbp-140h]
  __int64 v45; // [rsp+8h] [rbp-140h]
  __int64 v46; // [rsp+8h] [rbp-140h]
  __int64 v47; // [rsp+8h] [rbp-140h]
  __int64 v48; // [rsp+10h] [rbp-138h]
  _DWORD *v49; // [rsp+10h] [rbp-138h]
  __int64 v50; // [rsp+10h] [rbp-138h]
  unsigned __int64 v51; // [rsp+10h] [rbp-138h]
  unsigned __int64 v52; // [rsp+10h] [rbp-138h]
  unsigned __int64 v53; // [rsp+10h] [rbp-138h]
  int v54; // [rsp+18h] [rbp-130h]
  void *v55[2]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v56; // [rsp+30h] [rbp-118h] BYREF
  __int64 v57[3]; // [rsp+40h] [rbp-108h] BYREF
  void *v58; // [rsp+58h] [rbp-F0h]
  __int64 v59; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v60[200]; // [rsp+80h] [rbp-C8h] BYREF

  v11 = a6;
  v12 = (int)a5;
  v14 = sub_192A5E0(a1, a2, (unsigned __int16 *)a3, a4, a5, a6, a7, a8, a9, a10, 0, 1u);
  if ( v14 != 1 )
  {
    v18 = v14;
    v19 = v14;
    if ( (*(_WORD *)a3 & 0x1FF) == 0x18 && (*(_QWORD *)a3 & 0x80000LL) != 0 )
    {
      v20 = 8LL * *(unsigned int *)(a3 + 4);
      if ( *(_DWORD *)(a3 + v20 + 64) )
      {
        if ( !v20 )
        {
          v54 = v18;
          v48 = v18;
          v21 = sub_C00A40(a3, a2, v15, v16, v17);
          sub_168BB30((__int64)v60, (__int64 *)(a1 + 8), v21, 0x11u, 0);
          v57[0] = *(_QWORD *)(a3 + 16);
          sub_15894B0((__int64)v60, v57);
          sub_15F7200(v60);
          LODWORD(v18) = v54;
          v19 = v48;
        }
      }
    }
    v22 = *(_QWORD *)(a1 + 232);
    if ( *(_DWORD *)(v22 + 64) )
    {
      v19 = sub_1B67640(*(_QWORD *)(a1 + 760), v18, a2, a4, v12, v11, a9, a10);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      {
LABEL_9:
        v23 = v19 & 0xFFFFFFFFFFFFFFFELL;
        if ( ((*(_WORD *)(v19 & 0xFFFFFFFFFFFFFFFELL) + 423) & 0x1FFu) <= 4 && *(_DWORD *)(v23 + 16) == 1 )
        {
          v30 = *(_QWORD *)(v23 + 32);
          v50 = v19;
          v44 = v19 & 0xFFFFFFFFFFFFFFFELL;
          v31 = sub_BFBAE0(v30);
          v23 = v44;
          v19 = v50;
          v32 = v31;
          if ( v31 )
          {
            if ( (*(_WORD *)v31 & 0x1FF) == 0x47
              && *(_DWORD *)(v31 + 4)
              && ((*(_QWORD *)v31 & 0x80000LL) == 0 || !*(_QWORD *)(v31 + 32)) )
            {
              v51 = v44;
              v45 = v19;
              v33 = sub_BFBC70(v30);
              v19 = v45;
              v23 = v51;
              v34 = (_QWORD *)v33;
              if ( v33 )
              {
                if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 34 <= 5 )
                {
                  v35 = sub_B75A50(v33, 0);
                  v19 = v45;
                  v23 = v51;
                  if ( v35 == 965 || v35 == 637 )
                  {
                    sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(v32 + 4), 0x1D46u, 0);
                    sub_B76FC0((__int64)v55, v34);
                    v36 = sub_1682AF0((__int64)v60, (__int64)v55);
                    v37 = j__strlen("std::");
                    sub_9EC740((__int64)v57, *(_DWORD *)(v32 + 4), "std::", v37, 0);
                    sub_1589170(v36, v57);
                    v38 = v45;
                    v39 = v51;
                    if ( v58 != &v59 )
                    {
                      operator delete(v58);
                      v39 = v51;
                      v38 = v45;
                    }
                    if ( v55[0] != &v56 )
                    {
                      v52 = v39;
                      v46 = v38;
                      operator delete(v55[0]);
                      v39 = v52;
                      v38 = v46;
                    }
                    v53 = v39;
                    v47 = v38;
                    sub_15F7200(v60);
                    v23 = v53;
                    v19 = v47;
                  }
                }
              }
            }
          }
        }
        v43 = v19;
        v49 = (_DWORD *)v23;
        v24 = (_WORD *)sub_BFB9F0(a3);
        v19 = v43;
        if ( (*v24 & 0x1FF) == 0x47 && (*v49 & 0x20000) != 0 )
        {
          v25 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
          if ( *(_BYTE *)(v25 + 476) )
          {
            v26 = *(_QWORD **)(v25 + 456);
            v27 = &v26[*(unsigned int *)(v25 + 468)];
            if ( v26 != v27 )
            {
              v28 = *(_QWORD **)(v25 + 456);
              if ( v24 == (_WORD *)*v26 )
              {
LABEL_39:
                v41 = *(_DWORD *)(v25 + 468) - 1;
                v42 = v26[v41];
                *(_DWORD *)(v25 + 468) = v41;
                *v28 = v42;
              }
              else
              {
                while ( v27 != ++v28 )
                {
                  if ( v24 == (_WORD *)*v28 )
                    goto LABEL_39;
                }
              }
            }
          }
          else
          {
            v40 = (_QWORD *)sub_2236570(v25 + 456, v24);
            v19 = v43;
            if ( v40 )
            {
              *v40 = -2;
              ++*(_DWORD *)(v25 + 472);
            }
          }
        }
      }
    }
    else if ( (*(_BYTE *)(v22 + 1) & 8) != 0 )
    {
      goto LABEL_9;
    }
    return v19;
  }
  return 1;
}
