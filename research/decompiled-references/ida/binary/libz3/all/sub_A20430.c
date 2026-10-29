void __fastcall sub_A20430(__int64 a1, __int64 *a2, unsigned int a3, char a4, _DWORD *a5, __int64 a6)
{
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r15d
  __int64 v12; // rax
  int v13; // edx
  _BYTE *v14; // r12
  int v15; // r13d
  _QWORD *v16; // r8
  _BYTE *v17; // r9
  char v18; // dl
  _BYTE *v19; // r9
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r13
  char v23; // al
  int *v24; // rsi
  __int64 v25; // rdi
  _BOOL8 v26; // rcx
  char v27; // al
  _QWORD *v28; // r8
  __int64 v29; // rcx
  int *(__fastcall *v30)(__int64, __int64, __int64, char); // rax
  _QWORD *v31; // r12
  __int64 v32; // r9
  char v33; // dl
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // r13
  char v39; // al
  int *v40; // rsi
  __int64 v41; // rdi
  char v42; // al
  _QWORD *v43; // r8
  _BOOL8 v44; // rcx
  char v45; // al
  char v46; // al
  _QWORD *v47; // [rsp+0h] [rbp-2F8h]
  __int64 v49; // [rsp+20h] [rbp-2D8h]
  _QWORD *v50; // [rsp+20h] [rbp-2D8h]
  __int64 v51; // [rsp+20h] [rbp-2D8h]
  _QWORD *v52; // [rsp+20h] [rbp-2D8h]
  __int64 v53; // [rsp+28h] [rbp-2D0h]
  unsigned __int8 v55; // [rsp+46h] [rbp-2B2h]
  __int64 v57; // [rsp+48h] [rbp-2B0h]
  _BYTE *v59; // [rsp+70h] [rbp-288h]
  _BYTE *v60; // [rsp+70h] [rbp-288h]
  __int64 v61; // [rsp+70h] [rbp-288h]
  __int64 v62; // [rsp+70h] [rbp-288h]
  __int64 v63; // [rsp+70h] [rbp-288h]
  __int64 v64; // [rsp+70h] [rbp-288h]
  _QWORD *v65; // [rsp+78h] [rbp-280h]
  _QWORD *v66; // [rsp+78h] [rbp-280h]
  _QWORD *v67; // [rsp+78h] [rbp-280h]
  _QWORD *v68; // [rsp+78h] [rbp-280h]
  _QWORD *v69; // [rsp+78h] [rbp-280h]
  _QWORD v70[4]; // [rsp+80h] [rbp-278h] BYREF
  _QWORD v71[4]; // [rsp+A0h] [rbp-258h] BYREF
  _QWORD v72[2]; // [rsp+C0h] [rbp-238h] BYREF
  _QWORD v73[2]; // [rsp+D0h] [rbp-228h] BYREF
  int v74[24]; // [rsp+E0h] [rbp-218h] BYREF
  _QWORD v75[4]; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v76[4]; // [rsp+160h] [rbp-198h] BYREF
  _QWORD v77[4]; // [rsp+180h] [rbp-178h] BYREF
  _BYTE v78[96]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v79[96]; // [rsp+200h] [rbp-F8h] BYREF
  int v80[38]; // [rsp+260h] [rbp-98h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 24LL)
    || ((v7 = *(_QWORD **)(a6 + 8), !*v7) || !*(_DWORD *)(*v7 - 4LL)) && ((v8 = v7[1]) == 0 || !*(_DWORD *)(v8 - 4)) )
  {
    v70[0] = 0;
    v70[1] = 0;
    v9 = *a2;
    v70[2] = 1;
    v70[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v70, (int *)(v9 + 40LL * a3));
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 24LL) )
    {
      if ( SLODWORD(v70[0]) < 0 )
        sub_1831620(qword_1C7F2C0, v70);
      sub_98B740((__int64)a5, (__int64)v70);
    }
    v10 = *a2;
    if ( *a2 )
    {
      v53 = v10 + 40LL * *(unsigned int *)(v10 - 4);
      if ( v53 != v10 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *(unsigned int *)(v10 + 32);
          if ( a3 == v11 || (_DWORD)v12 == -1 )
            goto LABEL_40;
          v13 = *(_DWORD *)v10 >> 31;
          if ( a4 )
            LOBYTE(v13) = *(_DWORD *)v10 > 0;
          v14 = *(_BYTE **)(*(_QWORD *)(a1 + 8LL * (v13 & 1) + 744) + 8 * v12);
          if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 16LL))(v14) )
            goto LABEL_40;
          v55 = *(_BYTE *)(*(_QWORD *)(a1 + 464) + 24LL);
          if ( !v55 || !*a5 && !a5[8] && !a5[16] )
          {
            v26 = 1;
            if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
              v26 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
            (*(void (__fastcall **)(_BYTE *, __int64, __int64, _BOOL8))(*(_QWORD *)v14 + 24LL))(v14, a6, v10, v26);
            goto LABEL_40;
          }
          v71[0] = 0;
          v71[1] = 0;
          v71[2] = 1;
          v71[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v71, (int *)v10);
          v15 = v14[112] & 1;
          if ( SLODWORD(v71[0]) < 0 )
            sub_1831620(qword_1C7F2C0, v71);
          v72[0] = 1;
          v72[1] = 0;
          v73[0] = 1;
          v73[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v73);
          LODWORD(v73[0]) = 1;
          BYTE4(v73[0]) &= ~1u;
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v72, (__int64)v71, (__int64)v72);
          sub_8A6550((__int64)v74, (__int64)(v14 + 16));
          v75[0] = 0;
          v75[1] = 0;
          v75[2] = 1;
          v75[3] = 0;
          v76[0] = 0;
          v76[1] = 0;
          v76[2] = 1;
          v76[3] = 0;
          v77[0] = 0;
          v77[1] = 0;
          v77[2] = 1;
          v77[3] = 0;
          sub_98B5F0((__int64)v75, v74);
          if ( v15 )
          {
            sub_9AF010((__int64)v75, (__int64)v72, (__int64)a5);
            sub_9AF010((__int64)v76, (__int64)v72, (__int64)(a5 + 8));
            sub_9AF010((__int64)v77, (__int64)v72, (__int64)(a5 + 16));
          }
          else
          {
            sub_9AEDC0((__int64)v75, (__int64)v72, (__int64)a5);
            sub_9AEDC0((__int64)v76, (__int64)v72, (__int64)(a5 + 8));
            sub_9AEDC0((__int64)v77, (__int64)v72, (__int64)(a5 + 16));
          }
          sub_8A6550((__int64)v78, (__int64)v74);
          v16 = *(_QWORD **)(*(_QWORD *)(a1 + 760) + 8LL * *(unsigned int *)(v10 + 32));
          if ( !v16 )
            break;
          v47 = &v16[*((unsigned int *)v16 - 1)];
          if ( v47 == v16 )
            break;
          v57 = 0;
          if ( v15 )
          {
            do
            {
              while ( 1 )
              {
                v19 = (_BYTE *)*v16;
                if ( v14 != (_BYTE *)*v16 )
                {
                  v20 = (unsigned int)(2 * *((_DWORD *)v19 + 29));
                  v21 = *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v20);
                  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v20) )
                  {
                    v22 = a1 + 160;
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * *((unsigned int *)v19 + 2) + 3) & 0x40) != 0 )
                      v22 = a1 + 64;
                    v23 = (4 * (v21 == 1)) | v19[216] & 0xFB;
                    v19[216] = v23;
                    if ( v21 == 1 )
                    {
                      v66 = v16;
                      v60 = v19;
                      v49 = (__int64)(v19 + 16);
                      sub_98B5F0((__int64)(v19 + 16), (int *)v19 + 30);
                      v17 = v60;
                      v16 = v66;
                      v18 = v60[216] & 1;
                    }
                    else
                    {
                      v65 = v16;
                      v24 = (int *)(v19 + 120);
                      v59 = v19;
                      v25 = (__int64)(v19 + 16);
                      v49 = (__int64)(v19 + 16);
                      if ( (v23 & 3) != 0 )
                      {
                        sub_98B5F0(v25, v24);
                        sub_2FC4A0((__int64)qword_1C7F2C0, v49, v22, v49);
                        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(v59 + 48), v22 + 32, (__int64)(v59 + 48));
                        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(v59 + 80), v22 + 64, (__int64)(v59 + 80));
                        v17 = v59;
                        v16 = v65;
                        v18 = 0;
                      }
                      else
                      {
                        sub_98B5F0(v25, v24);
                        sub_9FF170(v49, v22);
                        v17 = v59;
                        v16 = v65;
                        v18 = v55;
                      }
                    }
                    v17[112] = v18 & 1 | v17[112] & 0xFE;
                    if ( (v14[112] & 1) == v18 )
                      break;
                  }
                }
                if ( v47 == ++v16 )
                  goto LABEL_50;
              }
              v67 = v16;
              v61 = (__int64)v17;
              sub_8A6550((__int64)v80, v49);
              v27 = sub_33D280((__int64)v75, (__int64)v80);
              v28 = v67;
              if ( !v27 )
              {
                v46 = sub_33D280((__int64)v78, (__int64)v80);
                v28 = v67;
                if ( v46 )
                {
                  sub_98B5F0((__int64)v78, v80);
                  v28 = v67;
                  v57 = v61;
                }
              }
              v50 = v28;
              sub_2A6060((__int64)v80);
              v16 = v50 + 1;
            }
            while ( v47 != v50 + 1 );
LABEL_50:
            if ( !v57 )
              break;
            sub_9F7AE0((__int64)v79, (__int64)v78, (__int64)v74);
            sub_8A6550((__int64)v80, (__int64)v79);
            sub_98B740((__int64)v80, (__int64)v71);
            sub_9FF170((__int64)a5, (__int64)v80);
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v34 = *v16;
                if ( (_BYTE *)*v16 != v14 )
                {
                  v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL);
                  v36 = (unsigned int)(2 * *(_DWORD *)(v34 + 116));
                  v37 = *(char *)(v35 + v36);
                  if ( *(_BYTE *)(v35 + v36) )
                  {
                    v38 = a1 + 64;
                    v68 = v16;
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * *(unsigned int *)(v34 + 8) + 3) & 0x40) == 0 )
                      v38 = a1 + 160;
                    v39 = (4 * (v37 == 1)) | *(_BYTE *)(v34 + 216) & 0xFB;
                    *(_BYTE *)(v34 + 216) = v39;
                    if ( v37 == 1 )
                    {
                      v63 = v34;
                      v51 = v34 + 16;
                      sub_98B5F0(v34 + 16, (int *)(v34 + 120));
                      v32 = v63;
                      v16 = v68;
                      v33 = *(_BYTE *)(v63 + 216) & 1;
                    }
                    else
                    {
                      v62 = v34;
                      v40 = (int *)(v34 + 120);
                      v51 = v34 + 16;
                      v41 = v34 + 16;
                      if ( (v39 & 3) != 0 )
                      {
                        sub_98B5F0(v41, v40);
                        sub_2FC4A0((__int64)qword_1C7F2C0, v51, v38, v51);
                        sub_2FC4A0((__int64)qword_1C7F2C0, v62 + 48, v38 + 32, v62 + 48);
                        sub_2FC4A0((__int64)qword_1C7F2C0, v62 + 80, v38 + 64, v62 + 80);
                        v32 = v62;
                        v16 = v68;
                        v33 = 0;
                      }
                      else
                      {
                        sub_98B5F0(v41, v40);
                        sub_9FF170(v51, v38);
                        v32 = v62;
                        v16 = v68;
                        v33 = v55;
                      }
                    }
                    *(_BYTE *)(v32 + 112) = v33 & 1 | *(_BYTE *)(v32 + 112) & 0xFE;
                    if ( (v14[112] & 1) == v33 )
                      break;
                  }
                }
                if ( v47 == ++v16 )
                  goto LABEL_72;
              }
              v69 = v16;
              v64 = v32;
              sub_8A6550((__int64)v80, v51);
              v42 = sub_33D280((__int64)v80, (__int64)v75);
              v43 = v69;
              if ( !v42 )
              {
                v45 = sub_33D280((__int64)v80, (__int64)v78);
                v43 = v69;
                if ( v45 )
                {
                  sub_98B5F0((__int64)v78, v80);
                  v43 = v69;
                  v57 = v64;
                }
              }
              v52 = v43;
              sub_2A6060((__int64)v80);
              v16 = v52 + 1;
            }
            while ( v47 != v52 + 1 );
LABEL_72:
            if ( !v57 )
              break;
            sub_9F7AE0((__int64)v79, (__int64)v74, (__int64)v78);
            sub_8A6550((__int64)v80, (__int64)v79);
            sub_98B740((__int64)v80, (__int64)v71);
            sub_9FF170((__int64)a5, (__int64)v80);
          }
          sub_2A6060((__int64)v80);
          sub_2A6060((__int64)v79);
          v29 = 1;
          v30 = *(int *(__fastcall **)(__int64, __int64, __int64, char))(*(_QWORD *)v57 + 24LL);
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          {
            v55 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
            v29 = v55;
          }
          if ( v30 == sub_A202E0 )
          {
            v31 = *(_QWORD **)(a6 + 8);
            v80[0] = ((*(_BYTE *)(v57 + 216) & 4) == 0) + 2 * *(_DWORD *)(v57 + 116);
            sub_98CFC0(v31, (unsigned int *)v80);
            if ( v55 )
              sub_98D840(v31 + 2, (__int64)v71);
          }
          else
          {
            v30(v57, a6, (__int64)v71, v29);
          }
          sub_2A6060((__int64)v78);
          sub_2A6060((__int64)v75);
          sub_2A6060((__int64)v74);
          sub_25A130((char *)v72);
          sub_25A130((char *)v71);
LABEL_40:
          v10 += 40;
          ++v11;
          if ( v53 == v10 )
            goto LABEL_41;
        }
        v44 = 1;
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          v44 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
        (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *, _BOOL8))(*(_QWORD *)v14 + 24LL))(v14, a6, v71, v44);
        sub_2A6060((__int64)v78);
        sub_2A6060((__int64)v75);
        sub_2A6060((__int64)v74);
        sub_25A130((char *)v72);
        sub_25A130((char *)v71);
        goto LABEL_40;
      }
    }
LABEL_41:
    sub_25A130((char *)v70);
  }
}

