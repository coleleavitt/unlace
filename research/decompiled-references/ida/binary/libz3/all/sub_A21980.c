__int64 __fastcall sub_A21980(_QWORD *a1, __int64 *a2, unsigned int a3, char a4, unsigned int a5, int a6, int *a7)
{
  __int64 v7; // rax
  _QWORD *v8; // rdx
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // r14
  void *v12; // r15
  void *v13; // r15
  void *v14; // r13
  __int64 v16; // r15
  unsigned int v17; // r12d
  void *v18; // r13
  __int64 v19; // r15
  unsigned int v20; // r12d
  void *v21; // r13
  unsigned int v22; // [rsp+Ch] [rbp-CCh]
  void *v23; // [rsp+10h] [rbp-C8h]
  void *v24; // [rsp+10h] [rbp-C8h]
  void *v25; // [rsp+10h] [rbp-C8h]
  void *v26; // [rsp+10h] [rbp-C8h]
  __int64 v27; // [rsp+18h] [rbp-C0h]
  int *v30; // [rsp+30h] [rbp-A8h]
  __int64 v31; // [rsp+38h] [rbp-A0h]
  _QWORD v32[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v37[9]; // [rsp+90h] [rbp-48h] BYREF

  v7 = a1[95];
  v8 = a1 + 20;
  v9 = (*(_BYTE *)(a1[90] + 4LL * a5 + 3) & 0x40) == 0;
  v32[0] = 0;
  if ( !v9 )
    v8 = a1 + 8;
  v32[1] = 0;
  v31 = (__int64)v8;
  v33[0] = 1;
  v33[1] = 0;
  v34[0] = 0;
  v34[1] = 0;
  v35[0] = 1;
  v35[1] = 0;
  v36[0] = 0;
  v36[1] = 0;
  v37[0] = 1;
  v37[1] = 0;
  v10 = *(__int64 **)(v7 + 8LL * a5);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 != v11 )
    {
      if ( a6 )
      {
        if ( a6 != 1 )
        {
          do
          {
            while ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + (unsigned int)(2 * *(_DWORD *)(*v10 + 116))) )
            {
              if ( v11 == ++v10 )
                goto LABEL_11;
            }
            v12 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v32);
            sub_182CBA0(v12, v33);
            v13 = qword_1C7F2C0;
            BYTE4(v33[0]) &= ~1u;
            LODWORD(v33[0]) = 1;
            sub_182CEF0(qword_1C7F2C0, v34);
            sub_182CBA0(v13, v35);
            v14 = qword_1C7F2C0;
            BYTE4(v35[0]) &= ~1u;
            LODWORD(v35[0]) = 1;
            sub_182CEF0(qword_1C7F2C0, v36);
            sub_182CBA0(v14, v37);
            ++v10;
            BYTE4(v37[0]) &= ~1u;
            LODWORD(v37[0]) = 1;
          }
          while ( v11 != v10 );
          goto LABEL_11;
        }
        v22 = 0;
        while ( 1 )
        {
          v19 = *v10;
          v20 = 2 * *(_DWORD *)(*v10 + 116);
          if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v20) )
          {
            v30 = (int *)(v19 + 120);
            v25 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v32);
            sub_182CBA0(v25, v33);
            BYTE4(v33[0]) &= ~1u;
            LODWORD(v33[0]) = 1;
            v26 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v34);
            sub_182CBA0(v26, v35);
            v21 = qword_1C7F2C0;
            BYTE4(v35[0]) &= ~1u;
            LODWORD(v35[0]) = 1;
            sub_182CEF0(qword_1C7F2C0, v36);
            sub_182CBA0(v21, v37);
            BYTE4(v37[0]) &= ~1u;
            LODWORD(v37[0]) = 1;
            if ( (*(_BYTE *)(v19 + 216) & 3) == 0 )
            {
              if ( !sub_33D280((__int64)a7, (__int64)v30) )
                goto LABEL_24;
              sub_98B5F0((__int64)v32, v30);
              sub_9FF170((__int64)v32, (__int64)a7);
              sub_9FF170((__int64)v32, v31);
              if ( SLODWORD(v32[0]) <= 0
                && (LODWORD(v32[0]) || SLODWORD(v34[0]) <= 0 && (LODWORD(v34[0]) || SLODWORD(v36[0]) < 0)) )
              {
                goto LABEL_24;
              }
              sub_A210C0((__int64)a1, v20 ^ 1, a2, a3, a4, v32);
              goto LABEL_31;
            }
            if ( !sub_33D280((__int64)v30, (__int64)a7) )
            {
              if ( *(_BYTE *)(a1[58] + 24LL) )
              {
                sub_98B5F0((__int64)v32, v30);
                sub_9FF170((__int64)v32, (__int64)a7);
              }
              sub_A210C0((__int64)a1, v20, a2, a3, a4, v32);
LABEL_31:
              ++v22;
            }
          }
LABEL_24:
          if ( v11 == ++v10 )
            goto LABEL_12;
        }
      }
      v22 = 0;
      while ( 1 )
      {
        v16 = *v10;
        v17 = 2 * *(_DWORD *)(*v10 + 116);
        if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v17) )
        {
          v27 = v16 + 120;
          v23 = qword_1C7F2C0;
          sub_182CEF0(qword_1C7F2C0, v32);
          sub_182CBA0(v23, v33);
          BYTE4(v33[0]) &= ~1u;
          LODWORD(v33[0]) = 1;
          v24 = qword_1C7F2C0;
          sub_182CEF0(qword_1C7F2C0, v34);
          sub_182CBA0(v24, v35);
          v18 = qword_1C7F2C0;
          BYTE4(v35[0]) &= ~1u;
          LODWORD(v35[0]) = 1;
          sub_182CEF0(qword_1C7F2C0, v36);
          sub_182CBA0(v18, v37);
          BYTE4(v37[0]) &= ~1u;
          LODWORD(v37[0]) = 1;
          if ( (*(_BYTE *)(v16 + 216) & 3) != 0 )
          {
            if ( !sub_33D280(v27, (__int64)a7) )
              goto LABEL_14;
            sub_98B5F0((__int64)v32, a7);
            sub_9FF170((__int64)v32, v27);
            sub_9FF170((__int64)v32, v31);
            if ( SLODWORD(v32[0]) <= 0
              && (LODWORD(v32[0]) || SLODWORD(v34[0]) <= 0 && (LODWORD(v34[0]) || SLODWORD(v36[0]) < 0)) )
            {
              goto LABEL_14;
            }
            sub_A210C0((__int64)a1, v17 ^ 1, a2, a3, a4, v32);
            goto LABEL_21;
          }
          if ( !sub_33D280((__int64)a7, v27) )
          {
            if ( *(_BYTE *)(a1[58] + 24LL) )
            {
              sub_98B5F0((__int64)v32, a7);
              sub_9FF170((__int64)v32, v27);
            }
            sub_A210C0((__int64)a1, v17, a2, a3, a4, v32);
LABEL_21:
            ++v22;
          }
        }
LABEL_14:
        if ( v11 == ++v10 )
          goto LABEL_12;
      }
    }
  }
LABEL_11:
  v22 = 0;
LABEL_12:
  sub_2A6060((__int64)v32);
  return v22;
}

