__int64 __fastcall sub_9FD760(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  int *v4; // rax
  void *v5; // r15
  void *v7; // r13
  int *v8; // rax
  void *v9; // [rsp+0h] [rbp-250h]
  void *v10; // [rsp+18h] [rbp-238h]
  void *v11; // [rsp+18h] [rbp-238h]
  __int64 v12; // [rsp+20h] [rbp-230h]
  bool v13; // [rsp+3Ah] [rbp-216h]
  char v14; // [rsp+3Bh] [rbp-215h]
  char v15; // [rsp+5Eh] [rbp-1F2h] BYREF
  bool v16; // [rsp+5Fh] [rbp-1F1h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-1E0h]
  __int64 v19; // [rsp+78h] [rbp-1D8h]
  char v20[32]; // [rsp+80h] [rbp-1D0h] BYREF
  char v21[32]; // [rsp+A0h] [rbp-1B0h] BYREF
  int v22[8]; // [rsp+C0h] [rbp-190h] BYREF
  char v23[32]; // [rsp+E0h] [rbp-170h] BYREF
  _QWORD v24[2]; // [rsp+100h] [rbp-150h] BYREF
  _QWORD v25[2]; // [rsp+110h] [rbp-140h] BYREF
  _QWORD v26[8]; // [rsp+120h] [rbp-130h] BYREF
  _QWORD v27[2]; // [rsp+160h] [rbp-F0h] BYREF
  _QWORD v28[2]; // [rsp+170h] [rbp-E0h] BYREF
  _QWORD v29[8]; // [rsp+180h] [rbp-D0h] BYREF
  _QWORD v30[2]; // [rsp+1C0h] [rbp-90h] BYREF
  _QWORD v31[2]; // [rsp+1D0h] [rbp-80h] BYREF
  _QWORD v32[2]; // [rsp+1E0h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+1F0h] [rbp-60h] BYREF
  _QWORD v34[10]; // [rsp+200h] [rbp-50h] BYREF

  v1 = a1[4];
  if ( v1 )
    v2 = *(int *)(v1 - 4);
  else
    v2 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25[0] = 1;
  v25[1] = 0;
  v26[0] = 0;
  v26[1] = 0;
  v26[2] = 1;
  memset(&v26[3], 0, 24);
  v26[6] = 1;
  v26[7] = 0;
  v27[0] = 0;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  v29[0] = 0;
  v29[1] = 0;
  v29[2] = 1;
  memset(&v29[3], 0, 24);
  v29[6] = 1;
  v29[7] = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 1;
  v19 = 0;
  if ( (int)v2 > 0 )
  {
    v12 = v2;
    v3 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1[90] + 4 * v3 + 3) & 0x30) != 0 )
        goto LABEL_7;
      sub_9FAB60(a1, v3, &v15, (__int64)v24, &v16, (__int64)v27, v17);
      if ( (v17[0] & 0x100000000LL) == 0 && LODWORD(v17[0]) == 1 && (v18 & 0x100000000LL) == 0 && (_DWORD)v18 == 1 )
      {
        v8 = sub_9AD4F0((__int64)a1, v3);
        if ( !*v8 && (v8[13] & 1) == 0 && v8[12] == 1 && !v8[16] )
          goto LABEL_7;
      }
      v4 = sub_9AD4F0((__int64)a1, v3);
      sub_27B620((__int64)v30, (__int64)(v4 + 8), (__int64)v17);
      v5 = qword_1C7F2C0;
      if ( (v31[0] & 0x100000000LL) == 0 && LODWORD(v31[0]) == 1 )
      {
        sub_182CBA0(qword_1C7F2C0, v30);
        sub_182CBA0(v5, v31);
        goto LABEL_7;
      }
      sub_182CBA0(qword_1C7F2C0, v30);
      sub_182CBA0(v5, v31);
      v14 = v15;
      if ( v15 )
      {
        if ( v16 )
        {
          v30[0] = 0;
          v30[1] = 0;
          v31[0] = 1;
          v31[1] = 0;
          v32[0] = 0;
          v32[1] = 0;
          v33[0] = 1;
          v33[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v33);
          LODWORD(v33[0]) = 1;
          BYTE4(v33[0]) &= ~1u;
          v34[0] = 0;
          v34[1] = 0;
          v34[2] = 1;
          v34[3] = 0;
          sub_9FD3E0(a1, v3, (__int64)v30);
          sub_2A6060((__int64)v30);
          goto LABEL_7;
        }
      }
      else
      {
        sub_9ABE60((__int64)v22, (__int64)v26);
        sub_894960((__int64)v30, (__int64)v22);
        v10 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v24);
        sub_182CBA0(v10, v25);
        BYTE4(v25[0]) &= ~1u;
        LODWORD(v25[0]) = 1;
        sub_98B520((__int64)v26, (int *)v30);
        sub_25A130((char *)v32);
        sub_25A130((char *)v30);
        sub_25A130((char *)v22);
        v13 = v16;
        if ( v16 )
        {
          if ( (v17[0] & 0x100000000LL) == 0 )
          {
            v13 = 1;
            if ( LODWORD(v17[0]) == 1 )
            {
              v13 = (v18 & 0x100000000LL) == 0;
              if ( (v18 & 0x100000000LL) != 0 )
              {
                v13 = (v17[0] & 0x100000000LL) == 0;
              }
              else if ( (_DWORD)v18 == 1 )
              {
                goto LABEL_17;
              }
            }
          }
          goto LABEL_16;
        }
      }
      sub_9A9130((__int64)v22, (__int64)v29);
      sub_894960((__int64)v30, (__int64)v22);
      v11 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, v27);
      sub_182CBA0(v11, v28);
      BYTE4(v28[0]) &= ~1u;
      LODWORD(v28[0]) = 1;
      sub_98B520((__int64)v29, (int *)v30);
      sub_25A130((char *)v32);
      sub_25A130((char *)v30);
      sub_25A130((char *)v22);
      if ( (v17[0] & 0x100000000LL) != 0 || LODWORD(v17[0]) != 1 || (v18 & 0x100000000LL) != 0 || (_DWORD)v18 != 1 )
      {
        if ( v14 )
        {
LABEL_22:
          sub_8A6550((__int64)v30, (__int64)v27);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v30, (__int64)v17, (__int64)v30);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v32, (__int64)v17, (__int64)v32);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v34, (__int64)v17, (__int64)v34);
          sub_9A9130((__int64)v20, (__int64)v32);
          sub_3EBE30((__int64)v21, (__int64)v17, (__int64)v20);
          sub_894960((__int64)v22, (__int64)v21);
          v7 = qword_1C7F2C0;
          sub_182CEF0(qword_1C7F2C0, v27);
          sub_182CBA0(v7, v28);
          BYTE4(v28[0]) &= ~1u;
          LODWORD(v28[0]) = 1;
          sub_98B520((__int64)v29, v22);
          sub_25A130(v23);
          sub_25A130((char *)v22);
          sub_25A130(v21);
          sub_25A130(v20);
          sub_2A6060((__int64)v30);
          goto LABEL_23;
        }
        v13 = 0;
LABEL_16:
        sub_8A6550((__int64)v30, (__int64)v24);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v30, (__int64)v17, (__int64)v30);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v32, (__int64)v17, (__int64)v32);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v34, (__int64)v17, (__int64)v34);
        sub_9ABE60((__int64)v20, (__int64)v32);
        sub_3EBE30((__int64)v21, (__int64)v17, (__int64)v20);
        sub_894960((__int64)v22, (__int64)v21);
        v9 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v24);
        sub_182CBA0(v9, v25);
        BYTE4(v25[0]) &= ~1u;
        LODWORD(v25[0]) = 1;
        sub_98B520((__int64)v26, v22);
        sub_25A130(v23);
        sub_25A130((char *)v22);
        sub_25A130(v21);
        sub_25A130(v20);
        sub_2A6060((__int64)v30);
        if ( !v13 )
          goto LABEL_22;
LABEL_17:
        sub_9FD3E0(a1, v3++, (__int64)v24);
        if ( v3 == v12 )
          break;
      }
      else
      {
LABEL_23:
        if ( v14 )
        {
          sub_9FD3E0(a1, v3, (__int64)v27);
        }
        else if ( !sub_33D280((__int64)v27, (__int64)v24) )
        {
          goto LABEL_17;
        }
LABEL_7:
        if ( ++v3 == v12 )
          break;
      }
    }
  }
  sub_25A130((char *)v17);
  sub_2A6060((__int64)v27);
  return sub_2A6060((__int64)v24);
}

