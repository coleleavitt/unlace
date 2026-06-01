_DWORD *__fastcall sub_841330(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edx
  int v8; // edx
  unsigned int *v9; // rax
  unsigned int *v10; // rbp
  unsigned int *v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  _DWORD *result; // rax
  unsigned int **v16; // rax
  unsigned int *v17; // rdx
  unsigned int **v18; // r13
  __int64 v19; // rcx
  unsigned int *v20; // rax
  unsigned int *v21; // r12
  unsigned int v22; // r13d
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // r15
  unsigned int **v26; // rbp
  unsigned int *v27; // rcx
  unsigned int *v28; // r15
  int v29; // eax
  unsigned int v30; // ebp
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  int *i; // rbp
  __int64 v35; // rax
  void *v36; // rdi
  int *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  int *j; // rbp
  __int64 v41; // rax
  void *v42; // rdi
  int *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned int *v46; // [rsp+8h] [rbp-1C0h]
  void *v47; // [rsp+8h] [rbp-1C0h]
  void *v48; // [rsp+8h] [rbp-1C0h]
  unsigned int *v49; // [rsp+10h] [rbp-1B8h]
  char v50; // [rsp+36h] [rbp-192h]
  bool v51; // [rsp+37h] [rbp-191h]
  bool v52; // [rsp+37h] [rbp-191h]
  int *v54; // [rsp+58h] [rbp-170h]
  int *v55; // [rsp+58h] [rbp-170h]
  char v56; // [rsp+60h] [rbp-168h]
  __int64 v57; // [rsp+70h] [rbp-158h] BYREF
  __int64 v58; // [rsp+78h] [rbp-150h]
  __int64 v59; // [rsp+80h] [rbp-148h]
  __int64 v60; // [rsp+88h] [rbp-140h]
  _QWORD v61[2]; // [rsp+90h] [rbp-138h] BYREF
  _QWORD v62[2]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v63[4]; // [rsp+B0h] [rbp-118h] BYREF
  _QWORD v64[4]; // [rsp+D0h] [rbp-F8h] BYREF
  unsigned int **v65; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD *v66; // [rsp+F8h] [rbp-D0h]
  __int64 v67; // [rsp+100h] [rbp-C8h]
  _QWORD v68[4]; // [rsp+108h] [rbp-C0h] BYREF
  _QWORD v69[4]; // [rsp+128h] [rbp-A0h] BYREF
  _QWORD v70[4]; // [rsp+148h] [rbp-80h] BYREF
  _QWORD v71[2]; // [rsp+168h] [rbp-60h] BYREF
  _QWORD v72[10]; // [rsp+178h] [rbp-50h] BYREF

  if ( !*(_BYTE *)(sub_FF9A10(a1) + 338) )
    goto LABEL_14;
  v3 = sub_FF9A10(a1);
  v7 = 214013 * *(_DWORD *)(v3 + 232) + 2531011;
  *(_DWORD *)(v3 + 232) = v7;
  v8 = HIWORD(v7) & 0x7FFF;
  if ( __ROR4__(-858993459 * v8, 1) <= 0x19999999u )
    sub_1004BD0(a1, (_DWORD)a2, v8, v4, v5, v6);
  if ( *a2 )
    *(_DWORD *)(*a2 - 4LL) = 0;
  v9 = (unsigned int *)sub_FFB090(a1);
  v10 = *((unsigned int **)v9 + 1);
  v11 = &v10[*v9];
  if ( v11 == v10 )
  {
LABEL_14:
    v20 = (unsigned int *)sub_FFB090(a1);
    v21 = *((unsigned int **)v20 + 1);
    v49 = &v21[*v20];
    if ( v49 == v21 )
    {
LABEL_43:
      result = (_DWORD *)sub_FFB090(a1);
      *result = 0;
      return result;
    }
    while ( 1 )
    {
      v22 = *v21;
      v23 = sub_FF9B30(a1);
      v24 = 24LL * v22;
      v25 = 0xCCCCCCCCCCCCCCCDLL
          * ((__int64)(*(_QWORD *)(v24 + *(_QWORD *)(v23 + 256) + 8) - *(_QWORD *)(v24 + *(_QWORD *)(v23 + 256))) >> 3);
      if ( *(unsigned int *)(sub_FF9A10(a1) + 296) < v25 )
        goto LABEL_41;
      v50 = sub_FF9D60(a1, v22);
      if ( v50 )
        goto LABEL_41;
      v65 = nullptr;
      v66 = nullptr;
      v67 = 1;
      v68[0] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v65, &qword_1C7F2A0);
      v61[0] = 0;
      v61[1] = 0;
      v62[0] = 1;
      v62[1] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v61, &qword_1C7F2A0);
      v63[0] = 0;
      v63[1] = 0;
      v63[2] = 1;
      v63[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v63, (int *)v61);
      v64[0] = 0;
      v64[1] = 0;
      v64[2] = 1;
      v64[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, (int *)&v65);
      sub_25A130((char *)v61);
      sub_25A130((char *)&v65);
      v26 = (unsigned int **)(*(_QWORD *)(sub_FF9B30(a1) + 256) + v24);
      v68[0] = 0;
      v65 = v26;
      v66 = a2;
      v68[1] = 0;
      v67 = -1;
      v68[2] = 1;
      v68[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v68, (int *)v63);
      v69[0] = 0;
      v69[1] = 0;
      v69[2] = 1;
      v69[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v69, (int *)v64);
      v70[0] = 0;
      v70[2] = 1;
      v71[0] = 0;
      v72[0] = 1;
      v27 = v65[1];
      v70[1] = 0;
      v28 = *v65;
      v70[3] = 0;
      v71[1] = 0;
      v72[1] = 0;
      v46 = v27;
      if ( v28 != v27 )
        break;
LABEL_34:
      if ( (int)v67 >= 0 )
      {
        v57 = 0;
        v58 = 0;
        v59 = 1;
        v60 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v71, (int *)v68);
        v54 = (int *)v65[1];
        if ( *v65 != (unsigned int *)v54 )
        {
          v56 = 0;
          for ( i = (int *)(*v65 + 2); ; i = v37 )
          {
            v38 = (unsigned int)*(i - 2);
            if ( (_DWORD)v38 == (_DWORD)v67 )
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v57, i);
              v37 = i + 10;
              if ( v54 == i + 8 )
                goto LABEL_60;
            }
            else
            {
              v39 = *(_QWORD *)(v66[7] + 496LL);
              if ( *i > 0 )
              {
                v51 = *(_DWORD *)(sub_FFA020(v39) + 32) != 0;
                v35 = sub_FFA020(*(_QWORD *)(v66[7] + 496LL));
              }
              else
              {
                v51 = *(_DWORD *)(sub_FFA040(v39, v38) + 32) != 0;
                v35 = sub_FFA040(*(_QWORD *)(v66[7] + 496LL), (unsigned int)v38);
              }
              sub_3EBE30((__int64)v61, (__int64)i, v35);
              v36 = qword_1C7F2C0;
              if ( (v72[0] & 0x100000000LL) != 0
                || LODWORD(v72[0]) != 1
                || (v62[0] & 0x100000000LL) != 0
                || LODWORD(v62[0]) != 1 )
              {
                sub_1852000(qword_1C7F2C0, v71, v61);
              }
              else
              {
                sub_1832A70(qword_1C7F2C0, v71, v61);
                sub_182CBA0(v36, v72);
                BYTE4(v72[0]) &= ~1u;
                LODWORD(v72[0]) = 1;
              }
              v47 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v61);
              sub_182CBA0(v47, v62);
              v37 = i + 10;
              v56 |= v51;
              if ( v54 == i + 8 )
              {
LABEL_60:
                sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v71, (__int64)&v57, (__int64)v71);
                goto LABEL_61;
              }
            }
          }
        }
        v56 = 0;
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v71, (__int64)&v57, (__int64)v71);
LABEL_61:
        if ( (int)v57 <= 0 )
          sub_8404F0((__int64 *)&v65, v67, (int *)v71, 0, 0, v56);
        else
          sub_8404F0((__int64 *)&v65, v67, (int *)v71, 1, 1, v56);
        sub_25A130((char *)&v57);
        v32 = HIDWORD(v67);
        if ( v67 >= 0 )
        {
LABEL_64:
          v57 = 0;
          v58 = 0;
          v59 = 1;
          v60 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v71, (int *)v68);
          v55 = (int *)v65[1];
          if ( *v65 != (unsigned int *)v55 )
          {
            for ( j = (int *)(*v65 + 2); ; j = v43 )
            {
              v44 = (unsigned int)*(j - 2);
              if ( (_DWORD)v44 == HIDWORD(v67) )
              {
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v57, j);
                v43 = j + 10;
                if ( v55 == j + 8 )
                  break;
              }
              else
              {
                v45 = *(_QWORD *)(v66[7] + 496LL);
                if ( *j >= 0 )
                {
                  v52 = *(_DWORD *)(sub_FFA040(v45, v44) + 32) != 0;
                  v41 = sub_FFA040(*(_QWORD *)(v66[7] + 496LL), (unsigned int)v44);
                }
                else
                {
                  v52 = *(_DWORD *)(sub_FFA020(v45) + 32) != 0;
                  v41 = sub_FFA020(*(_QWORD *)(v66[7] + 496LL));
                }
                sub_3EBE30((__int64)v61, (__int64)j, v41);
                v42 = qword_1C7F2C0;
                if ( (v72[0] & 0x100000000LL) != 0
                  || LODWORD(v72[0]) != 1
                  || (v62[0] & 0x100000000LL) != 0
                  || LODWORD(v62[0]) != 1 )
                {
                  sub_1852000(qword_1C7F2C0, v71, v61);
                }
                else
                {
                  sub_1832A70(qword_1C7F2C0, v71, v61);
                  sub_182CBA0(v42, v72);
                  BYTE4(v72[0]) &= ~1u;
                  LODWORD(v72[0]) = 1;
                }
                v48 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v61);
                sub_182CBA0(v48, v62);
                v43 = j + 10;
                v50 |= v52;
                if ( v55 == j + 8 )
                  break;
              }
            }
          }
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v71, (__int64)&v57, (__int64)v71);
          if ( (int)v57 <= 0 )
            sub_8404F0((__int64 *)&v65, HIDWORD(v67), (int *)v71, 0, 1, v50);
          else
            sub_8404F0((__int64 *)&v65, HIDWORD(v67), (int *)v71, 1, 0, v50);
          sub_25A130((char *)&v57);
          goto LABEL_40;
        }
      }
      else
      {
        if ( (_DWORD)v67 == -1 )
          sub_840970((int *)&v65);
        v32 = HIDWORD(v67);
        if ( v67 >= 0 )
          goto LABEL_64;
      }
      if ( v32 == -1 )
        sub_840E50((int *)&v65);
LABEL_40:
      sub_25A130((char *)v71);
      sub_25A130((char *)v70);
      sub_25A130((char *)v69);
      sub_25A130((char *)v68);
      sub_25A130((char *)v64);
      sub_25A130((char *)v63);
LABEL_41:
      v33 = sub_FF9A10(a1);
      result = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 40) + 16LL))(*(_QWORD *)(v33 + 40));
      if ( (_BYTE)result )
        return result;
      if ( v49 == ++v21 )
        goto LABEL_43;
    }
    while ( 1 )
    {
      if ( v67 == 0xFFFFFFFEFFFFFFFELL )
        goto LABEL_40;
      v30 = *v28;
      v31 = *(_DWORD *)(*(_QWORD *)(sub_FF9B20(*(_QWORD *)(v66[7] + 496LL)) + 88) + 4LL * v30);
      if ( v31 == 1 )
        break;
      if ( v31 == 2 )
      {
        if ( (v28[2] & 0x80000000) == 0 )
          goto LABEL_23;
LABEL_31:
        if ( (_DWORD)v67 != -1 )
          v30 = -2;
        LODWORD(v67) = v30;
        v28 += 10;
        if ( v46 == v28 )
          goto LABEL_34;
      }
      else
      {
        if ( !v31 )
        {
          v29 = v30;
          if ( (_DWORD)v67 != -1 )
            v29 = -2;
          LODWORD(v67) = v29;
LABEL_23:
          if ( HIDWORD(v67) != -1 )
            v30 = -2;
          HIDWORD(v67) = v30;
        }
        v28 += 10;
        if ( v46 == v28 )
          goto LABEL_34;
      }
    }
    if ( (int)v28[2] > 0 )
      goto LABEL_31;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v12 = *v10;
    v13 = *(_DWORD *)(sub_FF9A30(a1) + 116);
    sub_83ECC0((__int64)a2, v12);
    v14 = sub_FF9A10(a1);
    result = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 40) + 16LL))(*(_QWORD *)(v14 + 40));
    if ( (_BYTE)result )
      return result;
    if ( v13 >= *(_DWORD *)(sub_FF9A30(a1) + 116) )
    {
      if ( v11 == ++v10 )
        goto LABEL_14;
    }
    else
    {
      v16 = (unsigned int **)sub_FF99F0(a1);
      v17 = *v16;
      v18 = v16;
      if ( !*v16 || (v19 = *(v17 - 1), (_DWORD)v19 == *(v17 - 2)) )
      {
        sub_2FD3F0(v16);
        v17 = *v18;
        v19 = *(*v18 - 1);
      }
      ++v10;
      v17[v19] = v12;
      ++*(v17 - 1);
      if ( v11 == v10 )
        goto LABEL_14;
    }
  }
}

