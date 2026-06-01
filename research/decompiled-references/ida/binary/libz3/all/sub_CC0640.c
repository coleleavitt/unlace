__int64 __fastcall sub_CC0640(__int64 a1)
{
  __int64 *v1; // r14
  bool i; // al
  void *v3; // r15
  char v4; // al
  bool v5; // r13
  void *v6; // r13
  void *v7; // r13
  int v8; // edx
  void *v9; // r13
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rax
  void *v13; // rdi
  int v14; // r13d
  void *v15; // r15
  int v16; // edx
  void *v17; // r15
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rax
  void *v21; // rbp
  void *v22; // rbp
  unsigned int v23; // ebp
  void *v24; // rbx
  int v26; // eax
  unsigned int v28; // [rsp+2Ch] [rbp-CCh]
  __int64 *v29; // [rsp+30h] [rbp-C8h]
  _QWORD v30[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-78h] BYREF
  __int64 v35; // [rsp+88h] [rbp-70h]
  __int64 v36; // [rsp+90h] [rbp-68h] BYREF
  __int64 v37; // [rsp+98h] [rbp-60h]
  __int64 v38; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-50h]
  __int64 v40; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-40h]

  v1 = *(__int64 **)(a1 + 128);
  v30[0] = 0;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  if ( !v1 || (v29 = &v1[*((unsigned int *)v1 - 1)], v29 == v1) )
  {
LABEL_21:
    v23 = 1;
  }
  else
  {
    v28 = 0;
    for ( i = sub_CBFB60(a1, *v1, (__int64)v30); ; i = sub_CBFB60(a1, *v1, (__int64)v30) )
    {
      if ( i )
      {
        v38 = 1;
        v39 = 0;
        v40 = 1;
        v41 = 0;
        sub_182CBA0(qword_1C7F2C0, &v40);
        BYTE4(v40) &= ~1u;
        v3 = qword_1C7F2C0;
        LODWORD(v40) = 1;
        if ( (v31[0] & 0x100000000LL) == 0 && LODWORD(v31[0]) == 1 )
        {
          if ( (v38 & 0x100000000LL) != 0 || (v30[0] & 0x100000000LL) != 0 )
          {
            v26 = sub_182C7B0(qword_1C7F2C0, &v38, v30);
            v3 = qword_1C7F2C0;
            v5 = v26 < 0;
          }
          else
          {
            v5 = (int)v38 < SLODWORD(v30[0]);
          }
        }
        else
        {
          v4 = sub_1848D40(qword_1C7F2C0, &v38, v30);
          v3 = qword_1C7F2C0;
          v5 = v4;
        }
        sub_182CBA0(v3, &v38);
        sub_182CBA0(v3, &v40);
        if ( v5 )
        {
          v32[0] = 2;
          v32[1] = 0;
          v33[0] = 1;
          v33[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v33);
          BYTE4(v33[0]) &= ~1u;
          v6 = qword_1C7F2C0;
          LODWORD(v33[0]) = 1;
          v34 = 0;
          v35 = 0;
          v36 = 1;
          v37 = 0;
          if ( (v30[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v34, v30);
          else
            LODWORD(v34) = v30[0];
          if ( (v31[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v6, &v36, v31);
          }
          else
          {
            BYTE4(v36) &= ~1u;
            LODWORD(v36) = v31[0];
          }
          v7 = qword_1C7F2C0;
          BYTE4(v38) &= 0xFCu;
          BYTE4(v40) &= 0xFCu;
          LODWORD(v38) = 0;
          v39 = 0;
          LODWORD(v40) = 1;
          v41 = 0;
          sub_1833EB0(qword_1C7F2C0, &v34, v32, &v38);
          sub_182CBA0(v7, &v40);
          v8 = v38;
          v9 = qword_1C7F2C0;
          LODWORD(v38) = v34;
          LODWORD(v34) = v8;
          v10 = v39;
          v39 = v35;
          v35 = v10;
          v11 = BYTE4(v38) & 1;
          LOBYTE(v10) = BYTE4(v34) & 0xFC | BYTE4(v38) & 2;
          BYTE4(v38) = BYTE4(v34) & 1 | BYTE4(v38) & 0xFC | BYTE4(v34) & 2;
          BYTE4(v34) = v11 | v10;
          LODWORD(v40) = v36;
          v12 = v37;
          v37 = v41;
          v41 = v12;
          LODWORD(v36) = 1;
          LOBYTE(v12) = BYTE4(v36) & 1 | BYTE4(v36) & 2 | BYTE4(v40) & 0xFC;
          BYTE4(v36) = BYTE4(v36) & 0xFC | BYTE4(v40) & 2;
          BYTE4(v40) = v12;
          sub_182CBA0(qword_1C7F2C0, &v38);
          v13 = v9;
          v14 = 1;
          sub_182CBA0(v13, &v40);
          while ( (int)v34 > 0 )
          {
            v15 = qword_1C7F2C0;
            ++v14;
            BYTE4(v38) &= 0xFCu;
            BYTE4(v40) &= 0xFCu;
            LODWORD(v38) = 0;
            v39 = 0;
            LODWORD(v40) = 1;
            v41 = 0;
            sub_1833EB0(qword_1C7F2C0, &v34, v32, &v38);
            sub_182CBA0(v15, &v40);
            v16 = v38;
            v17 = qword_1C7F2C0;
            LODWORD(v38) = v34;
            LODWORD(v34) = v16;
            v18 = v39;
            v39 = v35;
            v35 = v18;
            v19 = BYTE4(v38) & 1;
            LOBYTE(v18) = BYTE4(v34) & 0xFC | BYTE4(v38) & 2;
            BYTE4(v38) = BYTE4(v34) & 1 | BYTE4(v38) & 0xFC | BYTE4(v34) & 2;
            BYTE4(v34) = v19 | v18;
            LODWORD(v40) = v36;
            v20 = v37;
            v37 = v41;
            v41 = v20;
            LODWORD(v36) = 1;
            LOBYTE(v18) = BYTE4(v36) & 0xFC | BYTE4(v40) & 2;
            BYTE4(v40) = BYTE4(v36) & 1 | BYTE4(v36) & 2 | BYTE4(v40) & 0xFC;
            BYTE4(v36) = v18;
            sub_182CBA0(qword_1C7F2C0, &v38);
            sub_182CBA0(v17, &v40);
          }
          v21 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v34);
          sub_182CBA0(v21, &v36);
          v22 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v32);
          sub_182CBA0(v22, v33);
          v28 += v14;
          if ( *(_DWORD *)(a1 + 192) < v28 )
            break;
        }
      }
      if ( v29 == ++v1 )
        goto LABEL_21;
    }
    v23 = 0;
  }
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v24, v31);
  return v23;
}

