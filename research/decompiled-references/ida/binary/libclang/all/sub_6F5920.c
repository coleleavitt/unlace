unsigned __int64 __fastcall sub_6F5920(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned int v13; // ecx
  __int64 *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // al
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int32 v27; // eax
  __int32 v28; // ecx
  __int64 v29; // rsi
  int v30; // r9d
  __int64 *v31; // r8
  unsigned int v32; // edx
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rsi
  char v37; // al
  __int64 *v38; // rax
  __int64 v39; // r13
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // r13
  __int64 v60; // rsi
  __int64 v61; // r13
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r15
  unsigned __int8 v65; // al
  int v66; // edx
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 v74; // r13
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // r15
  unsigned __int8 v78; // dl
  int v79; // eax
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rbp
  __int64 v85; // rax
  __int64 v86; // [rsp+0h] [rbp-A8h]
  __int64 v87; // [rsp+8h] [rbp-A0h]
  __int64 v88; // [rsp+8h] [rbp-A0h]
  __int64 v89; // [rsp+10h] [rbp-98h] BYREF
  __int64 v90; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v92; // [rsp+28h] [rbp-80h]
  _BYTE v93[120]; // [rsp+30h] [rbp-78h] BYREF

  if ( a2 )
  {
    v5 = a2;
    while ( *(char *)(v5 + 28) >= 0 )
    {
      v8 = sub_6A68B0(v5);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      v10 = a1[1150].m128i_u32[0];
      v11 = a1[1149].m128i_i64[0];
      v89 = v9;
      v12 = v9;
      if ( (_DWORD)v10 )
      {
        v13 = (v10 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v14 = (__int64 *)(v11 + 16LL * v13);
        v15 = *v14;
        if ( v12 == *v14 )
        {
LABEL_3:
          if ( v14 != (__int64 *)(16 * v10 + v11) )
          {
            v25 = v14[1];
            v35 = v8;
            v36 = v25;
            if ( v8 == v12 )
              return v25;
            return sub_6B4A70(a1, v36, v35);
          }
        }
        else
        {
          v16 = 1;
          while ( v15 != -4096 )
          {
            v17 = v16 + 1;
            v18 = ((_DWORD)v10 - 1) & (v13 + v16);
            v13 = v18;
            v14 = (__int64 *)(v11 + 16 * v18);
            v15 = *v14;
            if ( v12 == *v14 )
              goto LABEL_3;
            v16 = v17;
          }
        }
      }
      v90 = 0;
      v6 = sub_6F4910(a1, v8, (unsigned __int64 *)&v90);
      v7 = (__int64)v6;
      if ( !v6 )
      {
        v37 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( v37 != 16 )
        {
          switch ( (v37 + 110) & 0x7F )
          {
            case 0:
              v84 = v8;
              while ( sub_7BACE0(v84) )
              {
                v84 = sub_7BACE0(v84);
                v85 = sub_6F5920(a1, v84, a3);
                if ( v85 )
                {
                  v35 = v8;
                  v36 = v85;
                  return sub_6B4A70(a1, v36, v35);
                }
              }
              return 0;
            case 3:
              v54 = *(_QWORD *)(v8 + 88);
              if ( !v54 )
                return 0;
              v53 = a3;
              goto LABEL_76;
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
              ptr = v93;
              v92 = 0x800000000LL;
              goto LABEL_20;
            case 0x27:
            case 0x28:
            case 0x29:
              v55 = *(_QWORD *)(v8 + 128);
              if ( !v55 )
              {
                sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104));
                v55 = *(_QWORD *)(v8 + 128);
                if ( !v55 )
                  return 0;
              }
              v56 = *(_QWORD *)(v55 + 88);
              if ( !v56 )
                return 0;
              v57 = *(_QWORD *)(v56 + 104);
              sub_6E77B0((unsigned __int64 *)(v57 + 96), v57);
              v58 = *(_QWORD *)(v56 + 128);
              if ( (*(_BYTE *)(v58 + 24) & 1) != 0 )
                v59 = sub_7A2E20(v58, v57);
              else
                v59 = *(_QWORD *)(v58 + 24);
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v56 + 104) + 96LL), *(_QWORD *)(v56 + 104));
              v60 = *(_QWORD *)(v56 + 104);
              v61 = v59 + 24LL * *(unsigned int *)(*(_QWORD *)(v56 + 128) + 16LL);
              sub_6E77B0((unsigned __int64 *)(v60 + 96), v60);
              v62 = *(_QWORD *)(v56 + 128);
              if ( (*(_BYTE *)(v62 + 24) & 1) != 0 )
                v63 = sub_7A2E20(v62, v60);
              else
                v63 = *(_QWORD *)(v62 + 24);
              v64 = v63;
              if ( v63 == v61 )
                goto LABEL_95;
              break;
            case 0x2C:
            case 0x2D:
            case 0x2E:
              v49 = (__int64 *)(*(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v8 + 80) & 4) != 0 )
                v50 = v49[1];
              else
                v50 = *v49;
              v51 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(v51 + 16) - 46 > 1 )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 46 > 1 )
                  return 0;
                v51 = sub_B0D320(v51);
                if ( !v51 )
                  return 0;
              }
              v52 = sub_B14A40(v51);
              if ( !v52 )
                return 0;
              v53 = a3;
              v54 = v52;
LABEL_76:
              v36 = sub_6F5920(a1, v54, v53);
              if ( v36 )
                goto LABEL_77;
              return 0;
            default:
              return 0;
          }
          do
          {
            v65 = *(_BYTE *)(v64 + 12);
            if ( (v65 & 1) == 0 )
            {
              v66 = (v65 >> 2) & 3;
              if ( (~v65 & 0xC) == 0 )
                v66 = v65 & 2;
              if ( !v66 )
              {
                ptr = **(void ***)(v64 + 16);
                v67 = sub_6B3060(&ptr, ~v65 & 0xC);
                if ( (v67 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
                {
                  v68 = sub_B0E910(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL));
                  v69 = v68;
                  if ( v68 )
                  {
                    v70 = *(_QWORD *)(v68 + 128);
                    if ( v70
                      || (v88 = v69,
                          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v69 + 104) + 96LL), *(_QWORD *)(v69 + 104)),
                          (v70 = *(_QWORD *)(v88 + 128)) != 0) )
                    {
                      v71 = *(_QWORD *)(v70 + 88);
                      if ( v71 )
                      {
                        v36 = sub_6F5920(a1, v71, a3);
                        if ( v36 )
                          goto LABEL_77;
                      }
                    }
                  }
                }
              }
            }
            v64 += 24;
          }
          while ( v61 != v64 );
LABEL_95:
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v56 + 104) + 96LL), *(_QWORD *)(v56 + 104));
          v72 = *(_QWORD *)(v56 + 128);
          if ( (*(_BYTE *)(v72 + 32) & 1) != 0 )
            v73 = sub_7A2E60();
          else
            v73 = *(_QWORD *)(v72 + 32);
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v56 + 104) + 96LL), *(_QWORD *)(v56 + 104));
          v36 = *(_QWORD *)(v56 + 104);
          v74 = v73 + 24LL * *(unsigned int *)(*(_QWORD *)(v56 + 128) + 20LL);
          sub_6E77B0((unsigned __int64 *)(v36 + 96), v36);
          v75 = *(_QWORD *)(v56 + 128);
          if ( (*(_BYTE *)(v75 + 32) & 1) != 0 )
            v76 = sub_7A2E60();
          else
            v76 = *(_QWORD *)(v75 + 32);
          v77 = v76;
          if ( v74 != v76 )
          {
            while ( 1 )
            {
              v78 = *(_BYTE *)(v77 + 12);
              v79 = (v78 >> 2) & 3;
              if ( (~v78 & 0xC) == 0 )
                v79 = v78 & 2;
              if ( !v79 )
              {
                ptr = **(void ***)(v77 + 16);
                v80 = sub_6B3060(&ptr, v36);
                if ( (v80 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
                {
                  v81 = sub_B0E910(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL));
                  v82 = v81;
                  if ( v81 )
                  {
                    v83 = *(_QWORD *)(v81 + 128);
                    if ( v83
                      || (v36 = *(_QWORD *)(v82 + 104),
                          v86 = v82,
                          sub_6E77B0((unsigned __int64 *)(v36 + 96), v36),
                          (v83 = *(_QWORD *)(v86 + 128)) != 0) )
                    {
                      v36 = *(_QWORD *)(v83 + 88);
                      if ( v36 )
                      {
                        v36 = sub_6F5920(a1, v36, a3);
                        if ( v36 )
                          break;
                      }
                    }
                  }
                }
              }
              v77 += 24;
              if ( v74 == v77 )
                return 0;
            }
LABEL_77:
            v35 = v8;
            return sub_6B4A70(a1, v36, v35);
          }
          return 0;
        }
        ptr = v93;
        v92 = 0x800000000LL;
        if ( (*(_BYTE *)(v8 + 58) & 8) != 0 && (v47 = sub_7BFE30(v8, 1)) != 0 && (v48 = sub_6F5920(a1, v47, a3)) != 0 )
        {
          v25 = sub_6B4A70(a1, v48, v8);
        }
        else
        {
          v19 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
            v19 = *(_QWORD *)v19;
          if ( (*(_BYTE *)(v19 + 8) & 0x7Fu) - 19 > 1 )
            goto LABEL_18;
          v39 = *(_QWORD *)(v19 + 40);
          if ( !v39 )
            goto LABEL_18;
          v40 = *(_QWORD *)(v39 + 120);
          if ( !v40 )
          {
            sub_6B0350((__int64 *)(*(_QWORD *)(v39 + 96) + 88LL), *(_QWORD *)(v39 + 96));
            v40 = *(_QWORD *)(v39 + 120);
          }
          if ( v40 <= 7 )
            goto LABEL_18;
          v41 = v40 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v41 + 72) & 1) != 0 )
          {
            sub_7B7DB0(v39);
            v41 = *(_QWORD *)(v39 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v42 = *(_QWORD *)(v41 + 56);
          if ( v42 )
          {
            while ( 1 )
            {
              if ( *(char *)(v42 + 28) >= 0 )
              {
                v43 = *(_QWORD *)(v42 + 40);
                if ( (v43 & 7) != 0 || v43 <= 7 )
                  break;
              }
              v42 = *(_QWORD *)(v42 + 128);
              if ( !v42 )
                goto LABEL_18;
            }
LABEL_47:
            v44 = sub_7BDA60(v42, *(_QWORD *)(v8 + 40), (*(_BYTE *)(v8 + 58) & 2) != 0, 0);
            if ( v44 )
            {
              v45 = (unsigned int)v92;
              if ( HIDWORD(v92) < (unsigned __int64)(unsigned int)v92 + 1 )
              {
                v87 = v44;
                sub_25D6060(&ptr, v93, (unsigned int)v92 + 1LL, 8);
                v45 = (unsigned int)v92;
                v44 = v87;
              }
              *((_QWORD *)ptr + v45) = v44;
              LODWORD(v92) = v92 + 1;
            }
            while ( 1 )
            {
              v42 = *(_QWORD *)(v42 + 128);
              if ( !v42 )
                break;
              if ( *(char *)(v42 + 28) >= 0 )
              {
                v46 = *(_QWORD *)(v42 + 40);
                if ( (v46 & 7) != 0 || v46 <= 7 )
                  goto LABEL_47;
              }
            }
            v20 = *(_BYTE *)(v8 + 28) & 0x7F;
          }
          else
          {
LABEL_18:
            v20 = *(_BYTE *)(v8 + 28) & 0x7F;
          }
          if ( (unsigned int)v20 - 16 <= 0x3E )
LABEL_20:
            v7 = v8;
          v21 = v7;
          v22 = 0;
          sub_6BEDE0((__int64)a1, v21, (__int64)&ptr);
          v23 = 8LL * (unsigned int)v92;
          if ( !(_DWORD)v92 )
          {
LABEL_24:
            if ( ptr != v93 )
              free(ptr);
            return 0;
          }
          while ( 1 )
          {
            v24 = sub_6F5920(a1, *(_QWORD *)((char *)ptr + v22), a3);
            if ( v24 )
              break;
            v22 += 8;
            if ( v22 == v23 )
              goto LABEL_24;
          }
          v25 = sub_6B4A70(a1, v24, v8);
        }
        if ( ptr != v93 )
          free(ptr);
        return v25;
      }
      v5 = v90;
      if ( v8 == v90 || !v90 )
      {
        v25 = sub_AA5910(v6, a1, a3, v8);
        v27 = a1[1150].m128i_i32[0];
        if ( v27 )
        {
          v28 = v27 - 1;
          v29 = a1[1149].m128i_i64[0];
          v30 = 1;
          v31 = nullptr;
          v32 = (v27 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
          v33 = (__int64 *)(v29 + 16LL * v32);
          v34 = *v33;
          if ( v12 == *v33 )
          {
LABEL_30:
            v33[1] = v25;
            return v25;
          }
          while ( v34 != -4096 )
          {
            if ( v34 == -8192 && !v31 )
              v31 = v33;
            v32 = v28 & (v30 + v32);
            v33 = (__int64 *)(v29 + 16LL * v32);
            v34 = *v33;
            if ( v12 == *v33 )
              goto LABEL_30;
            ++v30;
          }
          if ( !v31 )
            v31 = v33;
        }
        else
        {
          v31 = nullptr;
        }
        v38 = sub_6F4D20((__int64)a1[1149].m128i_i64, &v89, v31);
        *v38++ = v12;
        *v38 = 0;
        *v38 = v25;
        return v25;
      }
    }
  }
  return 0;
}

