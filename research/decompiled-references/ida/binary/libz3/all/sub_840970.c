unsigned int **__fastcall sub_840970(int *a1)
{
  unsigned int *v2; // rbx
  unsigned int **result; // rax
  bool v4; // r12
  __int64 v5; // rax
  void *v6; // rdi
  void *v7; // r14
  __int64 v8; // rdi
  unsigned int *v9; // rbx
  bool v10; // r13
  _DWORD *v11; // rax
  void *v12; // rdi
  _DWORD *v13; // rdx
  int v14; // eax
  unsigned __int32 v15; // esi
  char v16; // r9
  int v17; // r14d
  void *v18; // r13
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  _DWORD *v22; // rax
  char v23; // al
  char v24; // al
  int v25; // eax
  int v26; // [rsp+Ch] [rbp-8Ch]
  unsigned int ***v27; // [rsp+10h] [rbp-88h]
  unsigned int v28; // [rsp+18h] [rbp-80h]
  unsigned int *v29; // [rsp+18h] [rbp-80h]
  unsigned int *v30; // [rsp+20h] [rbp-78h]
  unsigned __int32 v31; // [rsp+20h] [rbp-78h]
  unsigned int ***v32; // [rsp+28h] [rbp-70h]
  _DWORD *v33; // [rsp+38h] [rbp-60h]
  _BYTE v34[16]; // [rsp+40h] [rbp-58h] BYREF
  int v35; // [rsp+50h] [rbp-48h] BYREF
  char v36; // [rsp+54h] [rbp-44h]

  v27 = (unsigned int ***)(a1 + 22);
  sub_27B950((__int64)qword_1C7F2C0, (__int64)(a1 + 22), a1 + 6);
  v26 = 0;
  v2 = **(unsigned int ***)a1;
  result = (unsigned int **)&v35;
  v30 = *(unsigned int **)(*(_QWORD *)a1 + 8LL);
  if ( v30 != v2 )
  {
    do
    {
      v28 = *v2;
      v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 496LL);
      if ( (int)v2[2] > 0 )
      {
        v4 = *(_DWORD *)(sub_FFA020(v8) + 32) != 0;
        v5 = sub_FFA020(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 496LL));
      }
      else
      {
        v4 = *(_DWORD *)(sub_FFA040(v8, *v2) + 32) != 0;
        v5 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 496LL), v28);
      }
      sub_3EBE30((__int64)v34, (__int64)(v2 + 2), v5);
      v6 = qword_1C7F2C0;
      if ( (a1[27] & 1) != 0 || a1[26] != 1 || (v36 & 1) != 0 || v35 != 1 )
      {
        sub_1852000(qword_1C7F2C0, v27, v34);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, v27, v34);
        sub_182CBA0(v6, a1 + 26);
        *((_BYTE *)a1 + 108) &= ~1u;
        a1[26] = 1;
      }
      v7 = qword_1C7F2C0;
      v2 += 10;
      sub_182CBA0(qword_1C7F2C0, v34);
      sub_182CBA0(v7, &v35);
      v26 += v4;
    }
    while ( v30 != v2 );
    result = *(unsigned int ***)a1;
    v9 = **(unsigned int ***)a1;
    if ( *(unsigned int **)(*(_QWORD *)a1 + 8LL) != v9 )
    {
      v29 = *(unsigned int **)(*(_QWORD *)a1 + 8LL);
      v32 = (unsigned int ***)(a1 + 34);
      do
      {
        v17 = v9[2];
        v18 = qword_1C7F2C0;
        if ( (a1[23] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, a1 + 30, v27);
        }
        else
        {
          v19 = a1[22];
          *((_BYTE *)a1 + 124) &= ~1u;
          a1[30] = v19;
        }
        if ( (a1[27] & 1) != 0 )
        {
          sub_182C690(v18, v32, a1 + 26);
        }
        else
        {
          v20 = a1[26];
          *((_BYTE *)a1 + 140) &= ~1u;
          a1[34] = v20;
        }
        sub_3ED4D0((__int64)qword_1C7F2C0, a1 + 30, (__int64)(v9 + 2), (__int64)(a1 + 30));
        v31 = *v9;
        v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 496LL);
        if ( v17 > 0 )
        {
          v10 = *(_DWORD *)(sub_FFA020(v21) + 32) != 0;
          v11 = (_DWORD *)sub_FFA020(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 496LL));
          v12 = qword_1C7F2C0;
          v13 = v11;
          v14 = *v11;
          if ( v14 )
            goto LABEL_17;
        }
        else
        {
          v10 = *(_DWORD *)(sub_FFA040(v21, *v9) + 32) != 0;
          v22 = (_DWORD *)sub_FFA040(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 496LL), v31);
          v12 = qword_1C7F2C0;
          v13 = v22;
          v14 = *v22;
          if ( v14 )
          {
LABEL_17:
            if ( a1[30] )
            {
              if ( (a1[35] & 1) != 0 || a1[34] != 1 || (v13[5] & 1) != 0 || v13[4] != 1 )
              {
                sub_1851D20(v12, a1 + 30, v13, a1 + 30);
              }
              else
              {
                sub_1831A80(v12, a1 + 30, v13, a1 + 30);
                sub_182CBA0(v12, v32);
                *((_BYTE *)a1 + 140) &= ~1u;
                a1[34] = 1;
              }
            }
            else
            {
              if ( (v13[1] & 1) != 0 )
              {
                v33 = v13;
                sub_182C690(v12, a1 + 30, v13);
                v13 = v33;
              }
              else
              {
                *((_BYTE *)a1 + 124) &= ~1u;
                a1[30] = v14;
              }
              if ( (v13[5] & 1) != 0 )
              {
                sub_182C690(v12, v32, v13 + 4);
              }
              else
              {
                v25 = v13[4];
                *((_BYTE *)a1 + 140) &= ~1u;
                a1[34] = v25;
              }
            }
            goto LABEL_21;
          }
        }
        v23 = *((_BYTE *)a1 + 124);
        if ( (v23 & 1) != 0 )
          sub_182C690(v12, a1 + 30, a1 + 30);
        else
          *((_BYTE *)a1 + 124) = v23 & 0xFE;
        v24 = *((_BYTE *)a1 + 140);
        if ( (v24 & 1) != 0 )
          sub_182C690(v12, v32, v32);
        else
          *((_BYTE *)a1 + 140) = v24 & 0xFE;
LABEL_21:
        v15 = *v9;
        v16 = v26 > v10;
        if ( v17 <= 0 )
          result = (unsigned int **)sub_8404F0((__int64 *)a1, v15, a1 + 30, 0, 0, v16);
        else
          result = (unsigned int **)sub_8404F0((__int64 *)a1, v15, a1 + 30, 1, 1, v16);
        v9 += 10;
      }
      while ( v29 != v9 );
    }
  }
  return result;
}

