unsigned int **__fastcall sub_A961B0(int *a1)
{
  unsigned int **result; // rax
  unsigned int *v3; // rbx
  bool v4; // r12
  __int64 v5; // rax
  void *v6; // rdi
  unsigned int v7; // edx
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // r13
  unsigned int v11; // r13d
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int *v14; // rbx
  bool v15; // r13
  _DWORD *v16; // rax
  void *v17; // rdi
  _DWORD *v18; // rdx
  int v19; // eax
  unsigned __int32 v20; // esi
  char v21; // r9
  int v22; // r14d
  void *v23; // r13
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  _DWORD *v27; // rax
  char v28; // al
  char v29; // al
  int v30; // eax
  int v31; // [rsp+Ch] [rbp-ACh]
  void *v32; // [rsp+10h] [rbp-A8h]
  __int64 v33; // [rsp+10h] [rbp-A8h]
  __int64 v34; // [rsp+10h] [rbp-A8h]
  unsigned int *v35; // [rsp+10h] [rbp-A8h]
  void *v36; // [rsp+10h] [rbp-A8h]
  unsigned int ***v37; // [rsp+18h] [rbp-A0h]
  __int64 v38; // [rsp+20h] [rbp-98h]
  unsigned __int32 v39; // [rsp+20h] [rbp-98h]
  unsigned int *v40; // [rsp+28h] [rbp-90h]
  unsigned int ***v41; // [rsp+28h] [rbp-90h]
  _DWORD *v42; // [rsp+38h] [rbp-80h]
  int v43; // [rsp+40h] [rbp-78h] BYREF
  char v44; // [rsp+44h] [rbp-74h]
  __int64 v45; // [rsp+48h] [rbp-70h]
  int v46; // [rsp+50h] [rbp-68h] BYREF
  char v47; // [rsp+54h] [rbp-64h]
  __int64 v48; // [rsp+58h] [rbp-60h]
  _QWORD v49[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v50[9]; // [rsp+70h] [rbp-48h] BYREF

  v37 = (unsigned int ***)(a1 + 22);
  sub_27B950((__int64)qword_1C7F2C0, (__int64)(a1 + 22), a1 + 6);
  result = *(unsigned int ***)a1;
  v31 = 0;
  v3 = **(unsigned int ***)a1;
  v40 = *(unsigned int **)(*(_QWORD *)a1 + 8LL);
  if ( v40 != v3 )
  {
    do
    {
      v11 = *v3;
      v33 = (__int64)(v3 + 2);
      v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 504LL);
      if ( (v3[2] & 0x80000000) == 0 )
      {
        v4 = *(_DWORD *)(sub_FFA040(v12, *v3) + 32) != 0;
        v5 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 504LL), v11);
        v6 = qword_1C7F2C0;
        v49[0] = 0;
        v49[1] = 0;
        v50[0] = 1;
        v50[1] = 0;
        if ( (v3[3] & 1) != 0 )
        {
          v38 = v5;
          sub_182C690(qword_1C7F2C0, v49, v33);
          v5 = v38;
        }
        else
        {
          LODWORD(v49[0]) = v3[2];
        }
        if ( (v3[7] & 1) != 0 )
        {
          v34 = v5;
          sub_182C690(v6, v50, v3 + 6);
          v5 = v34;
        }
        else
        {
          v7 = v3[6];
          BYTE4(v50[0]) &= ~1u;
          LODWORD(v50[0]) = v7;
        }
        if ( (v50[0] & 0x100000000LL) != 0
          || LODWORD(v50[0]) != 1
          || (*(_BYTE *)(v5 + 20) & 1) != 0
          || *(_DWORD *)(v5 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v49, v5);
        }
        else
        {
          v36 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v49, v5);
          sub_182CBA0(v36, v50);
          BYTE4(v50[0]) &= ~1u;
          LODWORD(v50[0]) = 1;
        }
        v44 &= 0xFCu;
        v8 = qword_1C7F2C0;
        v47 &= 0xFCu;
        v43 = 0;
        v45 = 0;
        v46 = 1;
        v48 = 0;
        if ( (v49[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v43, v49);
        else
          v43 = v49[0];
        if ( (v50[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v8, &v46, v50);
        }
        else
        {
          v47 &= ~1u;
          v46 = v50[0];
        }
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v49);
        sub_182CBA0(v32, v50);
      }
      else
      {
        v4 = *(_DWORD *)(sub_FFA020(v12) + 32) != 0;
        v13 = sub_FFA020(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 504LL));
        sub_3EBE30((__int64)&v43, v33, v13);
      }
      v9 = qword_1C7F2C0;
      if ( (a1[27] & 1) != 0 || a1[26] != 1 || (v47 & 1) != 0 || v46 != 1 )
      {
        sub_1852000(qword_1C7F2C0, v37, &v43);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, v37, &v43);
        sub_182CBA0(v9, a1 + 26);
        *((_BYTE *)a1 + 108) &= ~1u;
        a1[26] = 1;
      }
      v10 = qword_1C7F2C0;
      v3 += 10;
      sub_182CBA0(qword_1C7F2C0, &v43);
      sub_182CBA0(v10, &v46);
      v31 += v4;
    }
    while ( v40 != v3 );
    result = *(unsigned int ***)a1;
    v14 = **(unsigned int ***)a1;
    if ( *(unsigned int **)(*(_QWORD *)a1 + 8LL) != v14 )
    {
      v35 = *(unsigned int **)(*(_QWORD *)a1 + 8LL);
      v41 = (unsigned int ***)(a1 + 34);
      do
      {
        v22 = v14[2];
        v23 = qword_1C7F2C0;
        if ( (a1[23] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, a1 + 30, v37);
        }
        else
        {
          v24 = a1[22];
          *((_BYTE *)a1 + 124) &= ~1u;
          a1[30] = v24;
        }
        if ( (a1[27] & 1) != 0 )
        {
          sub_182C690(v23, v41, a1 + 26);
        }
        else
        {
          v25 = a1[26];
          *((_BYTE *)a1 + 140) &= ~1u;
          a1[34] = v25;
        }
        sub_3ED4D0((__int64)qword_1C7F2C0, a1 + 30, (__int64)(v14 + 2), (__int64)(a1 + 30));
        v39 = *v14;
        v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 504LL);
        if ( v22 <= 0 )
        {
          v15 = *(_DWORD *)(sub_FFA020(v26) + 32) != 0;
          v16 = (_DWORD *)sub_FFA020(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 504LL));
          v17 = qword_1C7F2C0;
          v18 = v16;
          v19 = *v16;
          if ( v19 )
            goto LABEL_32;
        }
        else
        {
          v15 = *(_DWORD *)(sub_FFA040(v26, *v14) + 32) != 0;
          v27 = (_DWORD *)sub_FFA040(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 504LL), v39);
          v17 = qword_1C7F2C0;
          v18 = v27;
          v19 = *v27;
          if ( v19 )
          {
LABEL_32:
            if ( a1[30] )
            {
              if ( (a1[35] & 1) != 0 || a1[34] != 1 || (v18[5] & 1) != 0 || v18[4] != 1 )
              {
                sub_1851D20(v17, a1 + 30, v18, a1 + 30);
              }
              else
              {
                sub_1831A80(v17, a1 + 30, v18, a1 + 30);
                sub_182CBA0(v17, v41);
                *((_BYTE *)a1 + 140) &= ~1u;
                a1[34] = 1;
              }
            }
            else
            {
              if ( (v18[1] & 1) != 0 )
              {
                v42 = v18;
                sub_182C690(v17, a1 + 30, v18);
                v18 = v42;
              }
              else
              {
                *((_BYTE *)a1 + 124) &= ~1u;
                a1[30] = v19;
              }
              if ( (v18[5] & 1) != 0 )
              {
                sub_182C690(v17, v41, v18 + 4);
              }
              else
              {
                v30 = v18[4];
                *((_BYTE *)a1 + 140) &= ~1u;
                a1[34] = v30;
              }
            }
            goto LABEL_36;
          }
        }
        v28 = *((_BYTE *)a1 + 124);
        if ( (v28 & 1) != 0 )
          sub_182C690(v17, a1 + 30, a1 + 30);
        else
          *((_BYTE *)a1 + 124) = v28 & 0xFE;
        v29 = *((_BYTE *)a1 + 140);
        if ( (v29 & 1) != 0 )
          sub_182C690(v17, v41, v41);
        else
          *((_BYTE *)a1 + 140) = v29 & 0xFE;
LABEL_36:
        v20 = *v14;
        v21 = v31 > v15;
        if ( v22 <= 0 )
          result = (unsigned int **)sub_A95670((__int64 *)a1, v20, a1 + 30, 0, 1u, v21);
        else
          result = (unsigned int **)sub_A95670((__int64 *)a1, v20, a1 + 30, 1, 0, v21);
        v14 += 10;
      }
      while ( v35 != v14 );
    }
  }
  return result;
}

