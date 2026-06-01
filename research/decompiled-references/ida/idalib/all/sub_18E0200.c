void __fastcall sub_18E0200(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, signed int a4, char a5, double a6)
{
  unsigned int v6; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r15
  bool v27; // zf
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  size_t v40; // r12
  int v41; // eax
  int v42; // eax
  __int64 v43; // [rsp+0h] [rbp-180h]
  __int64 v44; // [rsp+0h] [rbp-180h]
  __int64 v45; // [rsp+0h] [rbp-180h]
  __int64 v46; // [rsp+0h] [rbp-180h]
  __int64 v47; // [rsp+10h] [rbp-170h] BYREF
  __int64 v48; // [rsp+18h] [rbp-168h] BYREF
  unsigned __int64 v49; // [rsp+20h] [rbp-160h] BYREF
  __int64 v50; // [rsp+28h] [rbp-158h] BYREF
  int v51; // [rsp+30h] [rbp-150h]
  int v52; // [rsp+34h] [rbp-14Ch]
  __int64 v53; // [rsp+38h] [rbp-148h]
  char v54; // [rsp+40h] [rbp-140h]
  char v55[72]; // [rsp+48h] [rbp-138h] BYREF
  __int64 v56; // [rsp+90h] [rbp-F0h]
  int v57; // [rsp+98h] [rbp-E8h]
  char v58; // [rsp+A0h] [rbp-E0h]
  __int64 v59; // [rsp+A8h] [rbp-D8h]
  int v60[6]; // [rsp+B8h] [rbp-C8h] BYREF
  void *v61; // [rsp+D0h] [rbp-B0h]
  __int64 v62; // [rsp+E0h] [rbp-A0h] BYREF

  if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    if ( v6 != 3 && a4 > 0 && v6 > 1 )
    {
      v11 = sub_BFBAE0(a2);
      if ( (*(_WORD *)v11 & 0x1FF) == 0x47 )
      {
        v12 = sub_BFBAE0(a3);
        if ( (*(_WORD *)v12 & 0x1FF) == 0x47 && *(int *)(v11 + 4) >= 0 && *(int *)(v12 + 4) >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 32LL))(*(_QWORD *)(v11 + 16));
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 16) + 32LL))(*(_QWORD *)(v12 + 16));
          v18 = v14;
          if ( v14 == v13 )
          {
            v19 = *(_QWORD *)(v14 + 48);
            if ( (v19 & 4) == 0 && (byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
            {
              if ( (v20 = *(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL),
                    (unsigned int)*(unsigned __int8 *)(v20 + 16) - 43 > 1)
                && (v46 = v18, v37 = sub_18BBE30(v20, a2, v15, v16), v18 = v46, (v20 = v37) == 0)
                || (v43 = v18, v21 = sub_9B4870(v20, a2, v15, v16, v17), (v21 & 4) == 0)
                && (v18 = v43, (byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0) )
              {
                v44 = v18;
                sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), a4, (a5 == 0) + 7354, 0);
                v47 = *(_QWORD *)(v11 + 8);
                v22 = sub_162B6D0((__int64)v60, &v47);
                v48 = sub_EEC8C0(v11, (__int64)&v47, a6);
                v23 = sub_1587DB0(v22, &v48);
                v49 = sub_EEC8C0(v12, (__int64)&v48, a6);
                v24 = sub_1587DB0(v23, (__int64 *)&v49);
                v25 = v44;
                v26 = v24;
                v50 = *(_QWORD *)v24;
                v51 = *(_DWORD *)(v24 + 8);
                v52 = *(_DWORD *)(v24 + 12);
                v53 = *(_QWORD *)(v24 + 16);
                LOBYTE(v24) = *(_BYTE *)(v24 + 24);
                v58 = 0;
                v27 = *(_BYTE *)(v26 + 120) == 0;
                v54 = v24;
                if ( !v27 )
                {
                  sub_FC70F0((__int64)v55, v26 + 32);
                  v25 = v44;
                  v56 = *(_QWORD *)(v26 + 104);
                  v42 = *(_DWORD *)(v26 + 112);
                  v58 = 1;
                  v57 = v42;
                }
                v45 = v25;
                v59 = *(_QWORD *)(v26 + 128);
                sub_15F7200(v60);
                if ( (*(_BYTE *)(v45 + 28) & 0x7F) == 0x2B )
                {
                  v28 = sub_15F1640(a1, 1);
                  if ( v28 )
                  {
                    if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 35 <= 3 )
                    {
                      v29 = *(_QWORD *)(sub_B8C1B0(v28 + 72) + 16);
                      if ( (v29 & 4) != 0 )
                        v32 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
                      else
                        v32 = v29 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( !v32 )
                        BUG();
                      v33 = *(_QWORD *)(v32 + 64);
                      if ( !v33 || (*(_BYTE *)(v33 + 10) & 0x20) == 0 )
                      {
                        v34 = *(_QWORD *)(v45 + 40);
                        v35 = sub_B7E900(v32 - 64, 1, v33, v30, v31, v45);
                        if ( v35 )
                        {
                          do
                          {
LABEL_26:
                            if ( v34 == *(_QWORD *)(v35 + 40) )
                            {
                              v49 = v35;
                              LODWORD(v48) = 1;
                              v38 = sub_1587D10((__int64)&v50, (int *)&v48);
                              v39 = sub_18DFF20(v38, (__int64 *)&v49);
                              v40 = j__strlen("this->");
                              v41 = sub_16C50A0(v11);
                              sub_9EC740((__int64)v60, v41, "this->", v40, 0);
                              sub_1589170(v39, v60);
                              if ( v61 != &v62 )
                                operator delete(v61);
                              goto LABEL_33;
                            }
                            v35 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                            if ( !v35 )
                              goto LABEL_32;
                          }
                          while ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 49 <= 2 );
                          while ( 1 )
                          {
                            v36 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                            v35 = v36;
                            if ( !v36 )
                              break;
                            if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 49 <= 2 )
                              goto LABEL_26;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_32:
                v49 = 0;
                v60[0] = 0;
                sub_1587D10((__int64)&v50, v60);
LABEL_33:
                sub_15F7200(&v50);
              }
            }
          }
        }
      }
    }
  }
}
