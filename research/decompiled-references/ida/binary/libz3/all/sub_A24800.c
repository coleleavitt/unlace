__int64 __fastcall sub_A24800(_QWORD *a1, __int64 *a2, unsigned int a3, char a4, unsigned int a5, int a6, int *a7)
{
  __int64 v7; // rax
  _QWORD *v8; // rdx
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  void *v12; // r13
  void *v13; // r13
  void *v14; // rbx
  void *v15; // rbx
  __int64 *v17; // r15
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 *v20; // r13
  __int64 v21; // r15
  unsigned int v22; // ebx
  unsigned int v23; // [rsp+1Ch] [rbp-ACh]
  void *v24; // [rsp+20h] [rbp-A8h]
  void *v25; // [rsp+20h] [rbp-A8h]
  void *v26; // [rsp+20h] [rbp-A8h]
  void *v27; // [rsp+20h] [rbp-A8h]
  __int64 v28; // [rsp+28h] [rbp-A0h]
  int *v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h]
  _QWORD v33[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v36[9]; // [rsp+80h] [rbp-48h] BYREF

  v7 = a1[87];
  v8 = a1 + 16;
  v9 = (*(_BYTE *)(a1[82] + 4LL * a5 + 3) & 0x40) == 0;
  v33[0] = 0;
  if ( !v9 )
    v8 = a1 + 8;
  v34[0] = 1;
  v35[0] = 0;
  v36[0] = 1;
  v10 = *(__int64 **)(v7 + 8LL * a5);
  v32 = (__int64)v8;
  v33[1] = 0;
  v34[1] = 0;
  v35[1] = 0;
  v36[1] = 0;
  if ( !v10 || (v11 = &v10[*((unsigned int *)v10 - 1)], v10 == v11) )
  {
    v23 = 0;
    goto LABEL_12;
  }
  if ( !a6 )
  {
    v23 = 0;
    v17 = v10;
    while ( 1 )
    {
      v18 = *v17;
      v19 = 2 * *(_DWORD *)(*v17 + 84);
      if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v19) )
      {
        v28 = v18 + 88;
        v24 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v33);
        sub_182CBA0(v24, v34);
        LODWORD(v34[0]) = 1;
        BYTE4(v34[0]) &= ~1u;
        v25 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v35);
        sub_182CBA0(v25, v36);
        BYTE4(v36[0]) &= ~1u;
        LODWORD(v36[0]) = 1;
        if ( (*(_BYTE *)(v18 + 152) & 3) != 0 )
        {
          if ( !sub_927C80(v28, (__int64)a7) )
            goto LABEL_14;
          sub_98B520((__int64)v33, a7);
          sub_992DA0((__int64)v33, v28);
          sub_992DA0((__int64)v33, v32);
          if ( SLODWORD(v33[0]) <= 0 && (LODWORD(v33[0]) || SLODWORD(v35[0]) < 0) )
            goto LABEL_14;
          sub_A23F40((__int64)a1, v19 ^ 1, a2, a3, a4, v33);
          goto LABEL_21;
        }
        if ( !sub_927C80((__int64)a7, v28) )
        {
          if ( *(_BYTE *)(a1[50] + 24LL) )
          {
            sub_98B520((__int64)v33, a7);
            sub_992DA0((__int64)v33, v28);
          }
          sub_A23F40((__int64)a1, v19, a2, a3, a4, v33);
LABEL_21:
          ++v23;
        }
      }
LABEL_14:
      if ( v11 == ++v17 )
        goto LABEL_12;
    }
  }
  if ( a6 == 1 )
  {
    v23 = 0;
    v20 = v10;
    while ( 1 )
    {
      v21 = *v20;
      v22 = 2 * *(_DWORD *)(*v20 + 84);
      if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v22) )
      {
        v31 = (int *)(v21 + 88);
        v26 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v33);
        sub_182CBA0(v26, v34);
        LODWORD(v34[0]) = 1;
        BYTE4(v34[0]) &= ~1u;
        v27 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v35);
        sub_182CBA0(v27, v36);
        BYTE4(v36[0]) &= ~1u;
        LODWORD(v36[0]) = 1;
        if ( (*(_BYTE *)(v21 + 152) & 3) == 0 )
        {
          if ( !sub_927C80((__int64)a7, (__int64)v31) )
            goto LABEL_24;
          sub_98B520((__int64)v33, v31);
          sub_992DA0((__int64)v33, (__int64)a7);
          sub_992DA0((__int64)v33, v32);
          if ( SLODWORD(v33[0]) <= 0 && (LODWORD(v33[0]) || SLODWORD(v35[0]) < 0) )
            goto LABEL_24;
          sub_A23F40((__int64)a1, v22 ^ 1, a2, a3, a4, v33);
          goto LABEL_31;
        }
        if ( !sub_927C80((__int64)v31, (__int64)a7) )
        {
          if ( *(_BYTE *)(a1[50] + 24LL) )
          {
            sub_98B520((__int64)v33, v31);
            sub_992DA0((__int64)v33, (__int64)a7);
          }
          sub_A23F40((__int64)a1, v22, a2, a3, a4, v33);
LABEL_31:
          ++v23;
        }
      }
LABEL_24:
      if ( v11 == ++v20 )
        goto LABEL_12;
    }
  }
  do
  {
    while ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + (unsigned int)(2 * *(_DWORD *)(*v10 + 84))) )
    {
      if ( v11 == ++v10 )
        goto LABEL_11;
    }
    v12 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v33);
    sub_182CBA0(v12, v34);
    v13 = qword_1C7F2C0;
    LODWORD(v34[0]) = 1;
    BYTE4(v34[0]) &= ~1u;
    sub_182CEF0(qword_1C7F2C0, v35);
    sub_182CBA0(v13, v36);
    ++v10;
    BYTE4(v36[0]) &= ~1u;
    LODWORD(v36[0]) = 1;
  }
  while ( v11 != v10 );
LABEL_11:
  v23 = 0;
LABEL_12:
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v35);
  sub_182CBA0(v14, v36);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v33);
  sub_182CBA0(v15, v34);
  return v23;
}

