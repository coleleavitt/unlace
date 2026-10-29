__int64 __fastcall sub_830100(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // ebp
  char v8; // al
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rdx
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdi
  _DWORD *v16; // rcx
  __int64 v17; // rdi
  _DWORD *v18; // rsi
  _DWORD *i; // r12
  int v20; // edx
  void *v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // r12
  void *v27; // r12
  void *v28; // r12
  void *v29; // rbp
  int v30; // edx
  int v31; // ebp
  int v32; // r8d
  int v33; // r9d
  void *v34; // rbp
  void *v35; // r12
  int v36; // [rsp+0h] [rbp-118h]
  unsigned int *v37; // [rsp+8h] [rbp-110h]
  int *v38; // [rsp+10h] [rbp-108h]
  void *v39; // [rsp+10h] [rbp-108h]
  int *v40; // [rsp+18h] [rbp-100h]
  _QWORD *v41; // [rsp+20h] [rbp-F8h]
  __int64 *v42; // [rsp+28h] [rbp-F0h]
  __int64 *v43; // [rsp+30h] [rbp-E8h]
  void *v44; // [rsp+38h] [rbp-E0h]
  __int64 *v45; // [rsp+40h] [rbp-D8h]
  __int64 v46; // [rsp+48h] [rbp-D0h]
  __int64 v47; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-C0h]
  int v49[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-B0h]
  int v51[4]; // [rsp+70h] [rbp-A8h] BYREF
  int v52; // [rsp+80h] [rbp-98h] BYREF
  char v53; // [rsp+84h] [rbp-94h]
  char v54; // [rsp+88h] [rbp-90h]
  int v55; // [rsp+90h] [rbp-88h] BYREF
  char v56; // [rsp+94h] [rbp-84h]
  __int64 v57; // [rsp+98h] [rbp-80h]
  int v58; // [rsp+A0h] [rbp-78h] BYREF
  char v59; // [rsp+A4h] [rbp-74h]
  __int64 v60; // [rsp+A8h] [rbp-70h]
  int v61[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-48h]

  result = *(unsigned int *)(a2 + 8);
  v5 = *(_QWORD *)a2;
  v41 = a1;
  v37 = a3;
  v46 = a4;
  v6 = *(_QWORD *)a2 + 48 * result;
  if ( *(_QWORD *)a2 != v6 )
  {
    while ( *(_DWORD *)(v5 + 4) != 2 )
    {
      v5 += 48;
      if ( v6 == v5 )
        return result;
    }
    if ( v5 != v6 )
    {
      v40 = v49;
      do
      {
        v7 = *(_DWORD *)(v5 + 8);
        v8 = sub_FF9F70(v41[62], v7);
        v9 = v41[62];
        if ( v8 )
        {
          v31 = sub_FF9F90(v9, v7);
          sub_3EBE30((__int64)v61, v46, v5 + 16);
          sub_830100(
            (int)v41,
            v31,
            (int)v37,
            (int)v61,
            v32,
            v33,
            v36,
            v37,
            (int)v38,
            (int)v40,
            v41,
            v42,
            (int)v43,
            (int)v44,
            (int)v45,
            v46,
            v47,
            v48,
            v49[0],
            v50,
            v51[0],
            v51[2],
            v52,
            v54);
          v34 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v61);
          sub_182CBA0(v34, &v63);
        }
        else
        {
          v10 = sub_FF9E10(v9, v7);
          v47 = 0;
          v48 = 0;
          v11 = v10;
          *(_QWORD *)v49 = 1;
          v50 = 0;
          sub_182CBA0(qword_1C7F2C0, v40);
          LOBYTE(v49[1]) &= ~1u;
          v49[0] = 1;
          v12 = v37[2];
          v13 = *(_DWORD **)v37;
          v61[0] = v11;
          v62 = 0;
          v63 = 0;
          v14 = v12 - 1;
          v12 *= 48;
          v64 = 1;
          v65 = 0;
          v15 = 3LL * (v11 & v14);
          v16 = (_DWORD *)((char *)v13 + v12);
          v17 = 16 * v15;
          v18 = &v13[(unsigned __int64)v17 / 4];
          if ( v17 != v12 )
          {
            for ( i = &v13[(unsigned __int64)v17 / 4]; v16 != i; i += 12 )
            {
              v20 = i[1];
              if ( v20 == 2 )
              {
                if ( v11 == *i && v11 == i[2] )
                {
LABEL_15:
                  v43 = &v62;
                  v39 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v62);
                  v45 = &v64;
                  sub_182CBA0(v39, &v64);
                  v42 = &v47;
                  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, i + 4);
                  goto LABEL_16;
                }
              }
              else if ( !v20 )
              {
                goto LABEL_45;
              }
            }
          }
          for ( ; v18 != v13; v13 += 12 )
          {
            v30 = v13[1];
            if ( v30 == 2 )
            {
              if ( v11 == *v13 && v11 == v13[2] )
              {
                i = v13;
                goto LABEL_15;
              }
            }
            else if ( !v30 )
            {
              break;
            }
          }
LABEL_45:
          v35 = qword_1C7F2C0;
          v43 = &v62;
          sub_182CBA0(qword_1C7F2C0, &v62);
          v45 = &v64;
          sub_182CBA0(v35, &v64);
          v42 = &v47;
LABEL_16:
          v38 = v51;
          sub_3EBE30((__int64)v51, v5 + 16, v46);
          *(_QWORD *)v61 = 0;
          v21 = qword_1C7F2C0;
          v62 = 0;
          v63 = 1;
          v64 = 0;
          if ( (v47 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, v61, &v47);
          else
            v61[0] = v47;
          if ( (v49[1] & 1) != 0 )
          {
            sub_182C690(v21, &v63, v40);
          }
          else
          {
            BYTE4(v63) &= ~1u;
            LODWORD(v63) = v49[0];
          }
          v22 = qword_1C7F2C0;
          if ( v51[0] )
          {
            if ( v61[0] )
            {
              if ( (v63 & 0x100000000LL) != 0 || (_DWORD)v63 != 1 || (v53 & 1) != 0 || v52 != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v61, v51, v61);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v61, v51, v61);
                sub_182CBA0(v22, &v63);
                BYTE4(v63) &= ~1u;
                LODWORD(v63) = 1;
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v61, v51);
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v61, v61);
          }
          v56 &= 0xFCu;
          v23 = qword_1C7F2C0;
          v59 &= 0xFCu;
          v55 = 0;
          v57 = 0;
          v58 = 1;
          v60 = 0;
          if ( (v61[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v55, v61);
          else
            v55 = v61[0];
          if ( (v63 & 0x100000000LL) != 0 )
          {
            sub_182C690(v23, &v58, &v63);
          }
          else
          {
            v59 &= ~1u;
            v58 = v63;
          }
          v44 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v61);
          sub_182CBA0(v44, &v63);
          v61[0] = v11;
          LODWORD(v62) = v55;
          BYTE4(v62) = v56 & 3 | BYTE4(v62) & 0xFC;
          v24 = v57;
          v57 = 0;
          v63 = v24;
          LODWORD(v64) = v58;
          BYTE4(v64) = v59 & 3 | BYTE4(v64) & 0xFC;
          v25 = v60;
          v60 = 0;
          v65 = v25;
          sub_83CA80(v37, v61);
          v26 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          sub_182CBA0(v26, &v64);
          v27 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v55);
          sub_182CBA0(v27, &v58);
          v28 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v51);
          sub_182CBA0(v28, &v52);
          v29 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v47);
          sub_182CBA0(v29, v40);
        }
        result = v5 + 48;
        if ( v6 == v5 + 48 )
          break;
        while ( 1 )
        {
          v5 = result;
          if ( *(_DWORD *)(result + 4) == 2 )
            break;
          result += 48;
          if ( v6 == result )
            return result;
        }
      }
      while ( v6 != result );
    }
  }
  return result;
}

