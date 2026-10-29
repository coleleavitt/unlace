void __fastcall sub_A2F470(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 *v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r10
  int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // r10
  unsigned int v15; // eax
  bool v16; // al
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int v20; // r12d
  __int64 *v21; // rdx
  char v22; // bl
  char v23; // al
  __int64 *v24; // r10
  __int64 v25; // r13
  __int64 v26; // rax
  signed int v27; // r8d
  __int64 v28; // rax
  signed int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  bool v33; // al
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-F8h]
  unsigned int v36; // [rsp+0h] [rbp-F8h]
  __int64 *v37; // [rsp+0h] [rbp-F8h]
  char v38; // [rsp+8h] [rbp-F0h]
  unsigned int v39; // [rsp+8h] [rbp-F0h]
  char v40; // [rsp+8h] [rbp-F0h]
  __int64 v41; // [rsp+10h] [rbp-E8h]
  __int64 *v42; // [rsp+18h] [rbp-E0h]
  unsigned int v43; // [rsp+18h] [rbp-E0h]
  unsigned int v44; // [rsp+18h] [rbp-E0h]
  __int64 v45; // [rsp+20h] [rbp-D8h]
  __int64 v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  unsigned int v48; // [rsp+28h] [rbp-D0h]
  unsigned int v49; // [rsp+28h] [rbp-D0h]
  unsigned int v50; // [rsp+28h] [rbp-D0h]
  unsigned int v51; // [rsp+2Ch] [rbp-CCh]
  unsigned int v52; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-C4h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v55; // [rsp+3Ch] [rbp-BCh] BYREF
  __int64 v56; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-B0h]
  _QWORD v58[4]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+70h] [rbp-88h] BYREF
  __int64 v60; // [rsp+78h] [rbp-80h]
  __int64 v61; // [rsp+80h] [rbp-78h]
  __int64 v62; // [rsp+88h] [rbp-70h]
  __int64 v63; // [rsp+90h] [rbp-68h] BYREF
  __int64 v64; // [rsp+98h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-58h]
  __int64 v66; // [rsp+A8h] [rbp-50h]
  __int64 v67; // [rsp+B0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 400);
  if ( *(_BYTE *)(v2 + 16) && *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v2 + 96) )
  {
    v58[0] = 0;
    v4 = *(_QWORD *)(a1 + 632);
    v58[1] = 0;
    v58[2] = 1;
    v41 = v4 + 24LL * a2;
    v58[3] = 0;
    if ( !(unsigned __int8)sub_9B3080(a1, v41, &v52, &v53, (__int64)v58) )
    {
LABEL_24:
      sub_25A130((char *)v58);
      return;
    }
    v5 = v53;
    if ( v53 == -1 )
    {
      v25 = v52;
      v43 = v52;
      v38 = sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v52));
      v63 = 0;
      v64 = 0;
      v65 = 1;
      v66 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v63, (int *)v58);
      LOBYTE(v67) = v38;
      v26 = sub_A2F020(a1 + 1352, (__int64)&v63);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 48);
        v28 = *(_QWORD *)(a1 + 32);
        v29 = v28 ? *(_DWORD *)(v28 - 4) : 0;
        if ( v27 < v29 )
        {
          v39 = v27;
          if ( sub_9B2ED0(a1, v27) )
          {
            v47 = v39;
            if ( sub_3ED680((__int64)qword_1C7F2C0, *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v39) + 16LL, (__int64)v58) )
            {
              v49 = v39;
              v40 = sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v25));
              if ( v40 == (unsigned __int8)sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v47))
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v25) + 8LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v47)
                                                                                               + 8LL) )
              {
                v30 = *(unsigned int *)(a1 + 1224);
                v59 = a1;
                v60 = a1 + 48 * v30 + 1080;
                sub_998560(v60);
                ++*(_DWORD *)(a1 + 1224);
                sub_9B2FA0(a1, (__int64 *)v41, (__int64)&v59);
                v31 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v47);
                (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v31 + 24LL))(
                  v31,
                  &v59,
                  &qword_1C7F2A0,
                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
                v32 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v47);
                (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v32 + 24LL))(
                  v32,
                  &v59,
                  &qword_1C7F2A0,
                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) != 0);
                ++*(_DWORD *)(a1 + 332);
                sub_A05DC0(a1, v43, v49, (__int64)&v59);
                --*(_DWORD *)(v59 + 1224);
              }
            }
          }
        }
      }
      sub_25A130((char *)&v63);
    }
    else if ( !LODWORD(v58[0]) )
    {
      v6 = *(_QWORD *)(a1 + 32);
      v7 = v52;
      v8 = *(__int64 **)(v6 + 8LL * v52);
      if ( v8[1] != *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v53) + 8LL) )
      {
        v35 = sub_98B380(*v8);
        if ( v35 == (unsigned __int8)sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v5)) )
        {
          v9 = *(unsigned int *)(a1 + 1224);
          v63 = a1;
          v64 = a1 + 48 * v9 + 1080;
          sub_998560(v64);
          ++*(_DWORD *)(a1 + 1224);
          sub_9B2FA0(a1, (__int64 *)v41, (__int64)&v63);
          ++*(_DWORD *)(a1 + 328);
          sub_A05DC0(a1, v7, v5, (__int64)&v63);
          --*(_DWORD *)(v63 + 1224);
        }
      }
    }
    LODWORD(v63) = v5;
    v64 = 0;
    v65 = 0;
    v66 = 1;
    v67 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v64, (int *)v58);
    v10 = sub_A2F240(a1 + 1384, (int *)&v63);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 632) + 24LL * (unsigned int)v10[12];
      v12 = *(_DWORD *)(v11 + 12);
      if ( v12 == *(_DWORD *)(v41 + 12) )
      {
LABEL_23:
        sub_25A130((char *)&v64);
        goto LABEL_24;
      }
      v59 = 0;
      v60 = 0;
      v61 = 1;
      v62 = 0;
      if ( v12 != -1 )
      {
        v45 = v11;
        if ( (unsigned __int8)sub_9B3080(a1, v11, &v54, &v55, (__int64)&v59) )
        {
          v13 = v55;
          v14 = v45;
          if ( v5 == v55 )
          {
            v50 = v55;
            v33 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v58, (__int64)&v59);
            v14 = v45;
            v13 = v50;
            if ( v33 )
            {
              v17 = v54;
LABEL_17:
              v18 = *(_QWORD *)(a1 + 32);
              v19 = v17;
              v42 = (__int64 *)v14;
              v36 = v17;
              v20 = v52;
              v21 = *(__int64 **)(v18 + 8LL * v52);
              if ( v21[1] != *(_QWORD *)(*(_QWORD *)(v18 + 8LL * v17) + 8LL) )
              {
                v22 = sub_98B380(*v21);
                v23 = sub_98B380(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v19));
                v24 = v42;
                if ( v22 == v23 )
                {
                  v44 = v36;
                  v37 = v24;
                  v34 = 48LL * *(unsigned int *)(a1 + 1224);
                  v56 = a1;
                  v57 = a1 + v34 + 1080;
                  sub_998560(v57);
                  ++*(_DWORD *)(a1 + 1224);
                  sub_9B2FA0(a1, (__int64 *)v41, (__int64)&v56);
                  sub_9B2FA0(a1, v37, (__int64)&v56);
                  ++*(_DWORD *)(a1 + 328);
                  sub_A05DC0(a1, v20, v44, (__int64)&v56);
                  --*(_DWORD *)(v56 + 1224);
                }
              }
              sub_25A130((char *)&v59);
              goto LABEL_23;
            }
          }
          v46 = v14;
          if ( v13 != -1 )
          {
            v15 = v54;
            v54 = v13;
            v51 = v13;
            v55 = v15;
            v48 = v15;
            sub_1831620(qword_1C7F2C0, &v59);
            if ( v5 == v48 )
            {
              v16 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v58, (__int64)&v59);
              v14 = v46;
              v17 = v51;
              if ( v16 )
                goto LABEL_17;
            }
          }
        }
      }
      sub_25A130((char *)&v59);
    }
    LODWORD(v59) = a2;
    sub_9E9140(a1 + 1384, (int *)&v63, (int *)&v59);
    goto LABEL_23;
  }
}

