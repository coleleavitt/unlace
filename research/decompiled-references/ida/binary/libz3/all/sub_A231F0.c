void __fastcall sub_A231F0(__int64 a1, __int64 *a2, unsigned int a3, char a4, _DWORD *a5, __int64 a6)
{
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
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
  _QWORD *v47; // [rsp+8h] [rbp-260h]
  __int64 v48; // [rsp+10h] [rbp-258h]
  __int64 v50; // [rsp+28h] [rbp-240h]
  _QWORD *v51; // [rsp+28h] [rbp-240h]
  __int64 v52; // [rsp+28h] [rbp-240h]
  _QWORD *v53; // [rsp+28h] [rbp-240h]
  unsigned __int8 v55; // [rsp+4Eh] [rbp-21Ah]
  __int64 v57; // [rsp+58h] [rbp-210h]
  _BYTE *v59; // [rsp+80h] [rbp-1E8h]
  _BYTE *v60; // [rsp+80h] [rbp-1E8h]
  __int64 v61; // [rsp+80h] [rbp-1E8h]
  __int64 v62; // [rsp+80h] [rbp-1E8h]
  __int64 v63; // [rsp+80h] [rbp-1E8h]
  __int64 v64; // [rsp+80h] [rbp-1E8h]
  _QWORD *v65; // [rsp+88h] [rbp-1E0h]
  _QWORD *v66; // [rsp+88h] [rbp-1E0h]
  _QWORD *v67; // [rsp+88h] [rbp-1E0h]
  _QWORD *v68; // [rsp+88h] [rbp-1E0h]
  _QWORD *v69; // [rsp+88h] [rbp-1E0h]
  _QWORD v70[4]; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD v71[4]; // [rsp+B0h] [rbp-1B8h] BYREF
  _QWORD v72[2]; // [rsp+D0h] [rbp-198h] BYREF
  _QWORD v73[2]; // [rsp+E0h] [rbp-188h] BYREF
  int v74[8]; // [rsp+F0h] [rbp-178h] BYREF
  char v75[32]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v76[4]; // [rsp+130h] [rbp-138h] BYREF
  _QWORD v77[4]; // [rsp+150h] [rbp-118h] BYREF
  char v78[32]; // [rsp+170h] [rbp-F8h] BYREF
  char v79[32]; // [rsp+190h] [rbp-D8h] BYREF
  char v80[32]; // [rsp+1B0h] [rbp-B8h] BYREF
  char v81[32]; // [rsp+1D0h] [rbp-98h] BYREF
  int v82[8]; // [rsp+1F0h] [rbp-78h] BYREF
  char v83[88]; // [rsp+210h] [rbp-58h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 400) + 24LL)
    || ((v7 = *(_QWORD **)(a6 + 8), !*v7) || !*(_DWORD *)(*v7 - 4LL)) && ((v8 = v7[1]) == 0 || !*(_DWORD *)(v8 - 4)) )
  {
    v70[0] = 0;
    v70[1] = 0;
    v9 = *a2;
    v70[2] = 1;
    v70[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v70, (int *)(v9 + 40LL * a3));
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 400) + 24LL) )
    {
      if ( SLODWORD(v70[0]) < 0 )
        sub_1831620(qword_1C7F2C0, v70);
      sub_9AF730((__int64)qword_1C7F2C0, (__int64)a5, (__int64)v70, (__int64)a5);
      sub_9AF730((__int64)qword_1C7F2C0, (__int64)(a5 + 8), (__int64)v70, (__int64)(a5 + 8));
    }
    v10 = *a2;
    if ( *a2 )
    {
      v48 = v10 + 40LL * *(unsigned int *)(v10 - 4);
      if ( v48 != v10 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *(unsigned int *)(v10 + 32);
          if ( (_DWORD)v12 == -1 || a3 == v11 )
            goto LABEL_39;
          v13 = *(_DWORD *)v10 >> 31;
          if ( a4 )
            LOBYTE(v13) = *(_DWORD *)v10 > 0;
          v14 = *(_BYTE **)(*(_QWORD *)(a1 + 8LL * (v13 & 1) + 680) + 8 * v12);
          if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 16LL))(v14) )
            goto LABEL_39;
          v55 = *(_BYTE *)(*(_QWORD *)(a1 + 400) + 24LL);
          if ( v55 && (*a5 || a5[8]) )
          {
            v71[0] = 0;
            v71[1] = 0;
            v71[2] = 1;
            v71[3] = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v71, (int *)v10);
            v15 = v14[80] & 1;
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
            sub_91F480((__int64)v74, (__int64)(v14 + 16));
            v76[0] = 0;
            v76[1] = 0;
            v76[2] = 1;
            v76[3] = 0;
            v77[0] = 0;
            v77[1] = 0;
            v77[2] = 1;
            v77[3] = 0;
            sub_98B520((__int64)v76, v74);
            if ( v15 )
            {
              sub_9AF010((__int64)v76, (__int64)v72, (__int64)a5);
              sub_9AF010((__int64)v77, (__int64)v72, (__int64)(a5 + 8));
            }
            else
            {
              sub_9AEDC0((__int64)v76, (__int64)v72, (__int64)a5);
              sub_9AEDC0((__int64)v77, (__int64)v72, (__int64)(a5 + 8));
            }
            sub_91F480((__int64)v78, (__int64)v74);
            v16 = *(_QWORD **)(*(_QWORD *)(a1 + 696) + 8LL * *(unsigned int *)(v10 + 32));
            if ( !v16 )
              goto LABEL_74;
            v47 = &v16[*((unsigned int *)v16 - 1)];
            if ( v47 == v16 )
              goto LABEL_74;
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
                    v20 = (unsigned int)(2 * *((_DWORD *)v19 + 21));
                    v21 = *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v20);
                    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v20) )
                    {
                      v22 = a1 + 128;
                      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * *((unsigned int *)v19 + 2) + 3) & 0x40) != 0 )
                        v22 = a1 + 64;
                      v23 = (4 * (v21 == 1)) | v19[152] & 0xFB;
                      v19[152] = v23;
                      if ( v21 == 1 )
                      {
                        v66 = v16;
                        v60 = v19;
                        v50 = (__int64)(v19 + 16);
                        sub_98B520((__int64)(v19 + 16), (int *)v19 + 22);
                        v17 = v60;
                        v16 = v66;
                        v18 = v60[152] & 1;
                      }
                      else
                      {
                        v65 = v16;
                        v24 = (int *)(v19 + 88);
                        v59 = v19;
                        v25 = (__int64)(v19 + 16);
                        v50 = (__int64)(v19 + 16);
                        if ( (v23 & 3) != 0 )
                        {
                          sub_98B520(v25, v24);
                          sub_2FC4A0((__int64)qword_1C7F2C0, v50, v22, v50);
                          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(v59 + 48), v22 + 32, (__int64)(v59 + 48));
                          v17 = v59;
                          v16 = v65;
                          v18 = 0;
                        }
                        else
                        {
                          sub_98B520(v25, v24);
                          sub_992DA0(v50, v22);
                          v17 = v59;
                          v16 = v65;
                          v18 = v55;
                        }
                      }
                      v17[80] = v18 & 1 | v17[80] & 0xFE;
                      if ( (v14[80] & 1) == v18 )
                        break;
                    }
                  }
                  if ( v47 == ++v16 )
                    goto LABEL_49;
                }
                v67 = v16;
                v61 = (__int64)v17;
                sub_91F480((__int64)v82, v50);
                v27 = sub_927C80((__int64)v76, (__int64)v82);
                v28 = v67;
                if ( !v27 )
                {
                  v46 = sub_927C80((__int64)v78, (__int64)v82);
                  v28 = v67;
                  if ( v46 )
                  {
                    sub_98B520((__int64)v78, v82);
                    v28 = v67;
                    v57 = v61;
                  }
                }
                v51 = v28;
                sub_25A130(v83);
                sub_25A130((char *)v82);
                v16 = v51 + 1;
              }
              while ( v47 != v51 + 1 );
LABEL_49:
              if ( !v57 )
                goto LABEL_74;
              sub_992E80((__int64)v80, (__int64)v78, (__int64)v74);
              sub_993140((__int64)v82, (__int64)v71, (__int64)v80);
              sub_992DA0((__int64)a5, (__int64)v82);
LABEL_51:
              sub_25A130(v83);
              sub_25A130((char *)v82);
              sub_25A130(v81);
              sub_25A130(v80);
              v29 = 1;
              v30 = *(int *(__fastcall **)(__int64, __int64, __int64, char))(*(_QWORD *)v57 + 24LL);
              if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
              {
                v55 = *(_DWORD *)(a1 + 1536) != 0x7FFFFFFF;
                v29 = v55;
              }
              if ( v30 == sub_A20040 )
              {
                v31 = *(_QWORD **)(a6 + 8);
                v82[0] = ((*(_BYTE *)(v57 + 152) & 4) == 0) + 2 * *(_DWORD *)(v57 + 84);
                sub_98CFC0(v31, (unsigned int *)v82);
                if ( v55 )
                  sub_98D840(v31 + 2, (__int64)v71);
              }
              else
              {
                v30(v57, a6, (__int64)v71, v29);
              }
              v10 += 40;
              ++v11;
              sub_25A130(v79);
              sub_25A130(v78);
              sub_25A130((char *)v77);
              sub_25A130((char *)v76);
              sub_25A130(v75);
              sub_25A130((char *)v74);
              sub_25A130((char *)v72);
              sub_25A130((char *)v71);
              if ( v48 == v10 )
                break;
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
                    v36 = (unsigned int)(2 * *(_DWORD *)(v34 + 84));
                    v37 = *(char *)(v35 + v36);
                    if ( *(_BYTE *)(v35 + v36) )
                    {
                      v38 = a1 + 64;
                      v68 = v16;
                      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * *(unsigned int *)(v34 + 8) + 3) & 0x40) == 0 )
                        v38 = a1 + 128;
                      v39 = (4 * (v37 == 1)) | *(_BYTE *)(v34 + 152) & 0xFB;
                      *(_BYTE *)(v34 + 152) = v39;
                      if ( v37 == 1 )
                      {
                        v63 = v34;
                        v52 = v34 + 16;
                        sub_98B520(v34 + 16, (int *)(v34 + 88));
                        v32 = v63;
                        v16 = v68;
                        v33 = *(_BYTE *)(v63 + 152) & 1;
                      }
                      else
                      {
                        v62 = v34;
                        v40 = (int *)(v34 + 88);
                        v52 = v34 + 16;
                        v41 = v34 + 16;
                        if ( (v39 & 3) != 0 )
                        {
                          sub_98B520(v41, v40);
                          sub_2FC4A0((__int64)qword_1C7F2C0, v52, v38, v52);
                          sub_2FC4A0((__int64)qword_1C7F2C0, v62 + 48, v38 + 32, v62 + 48);
                          v32 = v62;
                          v16 = v68;
                          v33 = 0;
                        }
                        else
                        {
                          sub_98B520(v41, v40);
                          sub_992DA0(v52, v38);
                          v32 = v62;
                          v16 = v68;
                          v33 = v55;
                        }
                      }
                      *(_BYTE *)(v32 + 80) = v33 & 1 | *(_BYTE *)(v32 + 80) & 0xFE;
                      if ( (v14[80] & 1) == v33 )
                        break;
                    }
                  }
                  if ( v47 == ++v16 )
                    goto LABEL_72;
                }
                v69 = v16;
                v64 = v32;
                sub_91F480((__int64)v82, v52);
                v42 = sub_927C80((__int64)v82, (__int64)v76);
                v43 = v69;
                if ( !v42 )
                {
                  v45 = sub_927C80((__int64)v82, (__int64)v78);
                  v43 = v69;
                  if ( v45 )
                  {
                    sub_98B520((__int64)v78, v82);
                    v43 = v69;
                    v57 = v64;
                  }
                }
                v53 = v43;
                sub_25A130(v83);
                sub_25A130((char *)v82);
                v16 = v53 + 1;
              }
              while ( v47 != v53 + 1 );
LABEL_72:
              if ( v57 )
              {
                sub_992E80((__int64)v80, (__int64)v74, (__int64)v78);
                sub_993140((__int64)v82, (__int64)v71, (__int64)v80);
                sub_992DA0((__int64)a5, (__int64)v82);
                goto LABEL_51;
              }
LABEL_74:
              v44 = 1;
              if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
                v44 = *(_DWORD *)(a1 + 1536) != 0x7FFFFFFF;
              (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *, _BOOL8))(*(_QWORD *)v14 + 24LL))(v14, a6, v71, v44);
              v10 += 40;
              ++v11;
              sub_25A130(v79);
              sub_25A130(v78);
              sub_25A130((char *)v77);
              sub_25A130((char *)v76);
              sub_25A130(v75);
              sub_25A130((char *)v74);
              sub_25A130((char *)v72);
              sub_25A130((char *)v71);
              if ( v48 == v10 )
                break;
            }
          }
          else
          {
            v26 = 1;
            if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
              v26 = *(_DWORD *)(a1 + 1536) != 0x7FFFFFFF;
            (*(void (__fastcall **)(_BYTE *, __int64, __int64, _BOOL8))(*(_QWORD *)v14 + 24LL))(v14, a6, v10, v26);
LABEL_39:
            v10 += 40;
            ++v11;
            if ( v48 == v10 )
              break;
          }
        }
      }
    }
    sub_25A130((char *)v70);
  }
}

