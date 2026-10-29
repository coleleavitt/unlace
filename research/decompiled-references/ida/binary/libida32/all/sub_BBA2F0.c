__int64 __fastcall sub_BBA2F0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r15d
  __int64 (*v5)(); // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rax
  __int16 v10; // dx
  unsigned __int64 v11; // r12
  void *v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  void *v17; // rbp
  void *v18; // rdx
  unsigned __int8 v20; // [rsp+Fh] [rbp-A9h]
  __int64 *v21; // [rsp+28h] [rbp-90h] BYREF
  void *v22[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+40h] [rbp-78h]
  void *v24[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v25; // [rsp+60h] [rbp-58h]
  _QWORD *v26; // [rsp+68h] [rbp-50h]
  void *v27; // [rsp+70h] [rbp-48h]

  v21 = a1;
  v3 = sub_BA5B20(&v21, a2);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    v5 = *(__int64 (**)())(*v21 + 4424);
    if ( v5 == sub_BA26A0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v21, a2) )
    {
      v6 = a2;
      v7 = *(unsigned int *)(a2 + 48);
      while ( 1 )
      {
        if ( !v6 )
        {
LABEL_22:
          if ( v7 == -1 )
          {
            sub_EC6110(v24, a2);
            v15 = v24[0];
            v16 = v26;
            *(__m128i *)v22 = _mm_load_si128((const __m128i *)v24);
            v17 = v27;
            v23 = v25;
            v18 = v22[1];
            while ( v16 == v15 )
            {
              while ( 1 )
              {
                if ( v17 == v18 )
                  return v4;
                if ( ((unsigned __int8)v18 & 3) != 0 )
LABEL_31:
                  v15 = (_QWORD *)sub_ECEDF0(v22);
LABEL_26:
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v21 + 96))(v21, *v15) )
                  return 0;
                v18 = v22[1];
                if ( ((__int64)v22[1] & 3) != 0 )
                  break;
                v15 = (char *)v22[0] + 8;
                v22[0] = v15;
                if ( v16 != v15 )
                  goto LABEL_25;
              }
              if ( ((unsigned __int64)v22[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                sub_ECEC20(v22);
              else
                sub_ECEA10(v22, 1);
              v15 = v22[0];
              v18 = v22[1];
            }
LABEL_25:
            if ( ((unsigned __int8)v18 & 3) != 0 )
              goto LABEL_31;
            goto LABEL_26;
          }
        }
        v8 = *(_QWORD *)(v6 + 24);
        v20 = sub_F41400(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v9 = **(_QWORD **)(v6 + 40);
        v10 = (*(_WORD *)(v9 + 2) >> 6) & 7;
        if ( ((*(_WORD *)(v9 + 2) >> 6) & 7) == 2 )
          goto LABEL_36;
        if ( (_BYTE)v10 == 4 )
        {
          v11 = *(unsigned int *)(v9 + 4 * (v7 + *(unsigned int *)(v9 + 4)) + 20);
          goto LABEL_8;
        }
        if ( (_BYTE)v10 == 1 )
          v11 = *(unsigned __int8 *)(v7 + v9 + 4LL * *(unsigned int *)(v9 + 4) + 20);
        else
LABEL_36:
          v11 = *(unsigned __int16 *)(v9 + 2 * v7 + 4LL * *(unsigned int *)(v9 + 4) + 20);
LABEL_8:
        v12 = *(void **)(v8 + 16);
        v13 = *(unsigned int *)(v8 + 24);
        v14 = (unsigned __int64)(v13 + 63) >> 6;
        if ( v14 > 1 )
        {
          sub_21E18D0(v22, v13, v14, v12);
        }
        else
        {
          LODWORD(v22[1]) = *(_DWORD *)(v8 + 24);
          if ( (unsigned int)v13 <= 0x40 )
          {
            v22[0] = v12;
            LODWORD(v24[1]) = v13;
LABEL_11:
            if ( v20 )
            {
              v11 &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v13;
              if ( !(_DWORD)v13 )
                v11 = 0;
            }
            v24[0] = (void *)v11;
            goto LABEL_13;
          }
          sub_21E1730(v22, v12, 0);
        }
        LODWORD(v13) = v22[1];
        LODWORD(v24[1]) = v22[1];
        if ( LODWORD(v22[1]) <= 0x40 )
          goto LABEL_11;
        sub_21E1730(v24, v11, v20);
LABEL_13:
        sub_BE8DF0(v8 + 16, *(_QWORD *)(v6 + 32), v24);
        if ( LODWORD(v24[1]) > 0x40 && v24[0] )
          operator delete[](v24[0]);
        if ( LODWORD(v22[1]) > 0x40 && v22[0] )
          operator delete[](v22[0]);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v21 + 96))(v21, *(_QWORD *)(v6 + 24)) )
          return 0;
        if ( *(unsigned int *)(v6 + 48) + (unsigned __int64)*(unsigned int *)(v6 + 52) <= ++v7 )
        {
          v6 = 0;
          v7 = -1;
          goto LABEL_22;
        }
      }
    }
  }
  return 0;
}

