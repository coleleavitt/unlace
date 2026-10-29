__int64 __fastcall sub_6DFA90(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  unsigned int v5; // ebx
  unsigned int v9; // r15d
  void *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  char v13; // si
  char v14; // dl
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r15d
  void *v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  char v22; // si
  char v23; // dl
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r15d
  void *v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  char v31; // si
  char v32; // dl
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD v36[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v37; // [rsp+20h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  int v39; // [rsp+30h] [rbp-78h] BYREF
  char v40; // [rsp+34h] [rbp-74h]
  __int64 v41; // [rsp+38h] [rbp-70h]
  int v42; // [rsp+40h] [rbp-68h]
  char v43; // [rsp+44h] [rbp-64h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h] BYREF
  __int64 v48; // [rsp+68h] [rbp-40h]

  if ( !*(_WORD *)(a2 + 4) && (v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v4 == 5 )
  {
    v36[0] = 0;
    v37 = 1;
    v36[1] = 0;
    v38 = 0;
    switch ( v4[1] )
    {
      case 0:
        v5 = sub_1666AE0(a1 + 8, a2, a3, &v45);
        goto LABEL_8;
      case 6:
        if ( !(unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 32), a3) )
          goto LABEL_7;
        v27 = 1;
        if ( *(_DWORD *)(a2 + 24) <= 1u )
          goto LABEL_19;
        do
        {
          if ( !(unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 8LL * v27 + 32), v36) )
            goto LABEL_7;
          v45 = 0;
          v46 = 0;
          v47 = 1;
          v48 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v45, (int *)a3);
          v28 = qword_1C7F2C0;
          if ( LODWORD(v36[0]) )
          {
            if ( (_DWORD)v45 )
            {
              if ( (v47 & 0x100000000LL) != 0 || (_DWORD)v47 != 1 || (v37 & 0x100000000LL) != 0 || (_DWORD)v37 != 1 )
              {
                sub_1851D20(qword_1C7F2C0, &v45, v36, &v45);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, &v45, v36, &v45);
                sub_182CBA0(v28, &v47);
                BYTE4(v47) &= ~1u;
                LODWORD(v47) = 1;
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v45, (int *)v36);
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v45, (int *)&v45);
          }
          v39 = 0;
          v40 &= 0xFCu;
          v43 &= 0xFCu;
          v41 = 0;
          v42 = 1;
          v44 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v39, (int *)&v45);
          ++v27;
          sub_25A130((char *)&v45);
          v29 = *(_DWORD *)a3;
          *(_DWORD *)a3 = v39;
          v39 = v29;
          v30 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v41;
          v41 = v30;
          v31 = *(_BYTE *)(a3 + 4);
          LOBYTE(v30) = v31 & 2;
          v31 &= ~2u;
          v32 = v31 & 0xFE | v40 & 2 | v40 & 1;
          v40 = v31 & 1 | v40 & 0xFC | v30 & 0xFE;
          LODWORD(v30) = *(_DWORD *)(a3 + 16);
          *(_BYTE *)(a3 + 4) = v32;
          v33 = v42;
          v42 = v30;
          v34 = *(_QWORD *)(a3 + 24);
          *(_DWORD *)(a3 + 16) = v33;
          v35 = v44;
          v44 = v34;
          LOBYTE(v34) = *(_BYTE *)(a3 + 20);
          *(_QWORD *)(a3 + 24) = v35;
          LOBYTE(v35) = v34 & 0xFC | v43 & 2 | v43 & 1;
          v43 = v34 & 1 | v43 & 0xFC | v34 & 2;
          *(_BYTE *)(a3 + 20) = v35;
          sub_25A130((char *)&v39);
        }
        while ( v27 < *(_DWORD *)(a2 + 24) );
        goto LABEL_19;
      case 7:
        if ( !(unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 32), a3) )
          goto LABEL_7;
        v18 = 1;
        if ( *(_DWORD *)(a2 + 24) <= 1u )
          goto LABEL_19;
        while ( (unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 8LL * v18 + 32), v36) )
        {
          v45 = 0;
          v46 = 0;
          v47 = 1;
          v48 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v45, (int *)a3);
          v19 = qword_1C7F2C0;
          if ( (v47 & 0x100000000LL) != 0 || (_DWORD)v47 != 1 || (v37 & 0x100000000LL) != 0 || (_DWORD)v37 != 1 )
          {
            sub_1852000(qword_1C7F2C0, &v45, v36);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, &v45, v36);
            sub_182CBA0(v19, &v47);
            BYTE4(v47) &= ~1u;
            LODWORD(v47) = 1;
          }
          v39 = 0;
          v40 &= 0xFCu;
          v43 &= 0xFCu;
          v41 = 0;
          v42 = 1;
          v44 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v39, (int *)&v45);
          ++v18;
          sub_25A130((char *)&v45);
          v20 = *(_DWORD *)a3;
          *(_DWORD *)a3 = v39;
          v39 = v20;
          v21 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v41;
          v41 = v21;
          v22 = *(_BYTE *)(a3 + 4);
          LOBYTE(v21) = v22 & 2;
          v22 &= ~2u;
          v23 = v22 & 0xFE | v40 & 2 | v40 & 1;
          v40 = v22 & 1 | v40 & 0xFC | v21 & 0xFE;
          LODWORD(v21) = *(_DWORD *)(a3 + 16);
          *(_BYTE *)(a3 + 4) = v23;
          v24 = v42;
          v42 = v21;
          v25 = *(_QWORD *)(a3 + 24);
          *(_DWORD *)(a3 + 16) = v24;
          v26 = v44;
          v44 = v25;
          LOBYTE(v25) = *(_BYTE *)(a3 + 20);
          *(_QWORD *)(a3 + 24) = v26;
          LOBYTE(v26) = v25 & 0xFC | v43 & 2 | v43 & 1;
          v43 = v25 & 1 | v43 & 0xFC | v25 & 2;
          *(_BYTE *)(a3 + 20) = v26;
          sub_25A130((char *)&v39);
          if ( v18 >= *(_DWORD *)(a2 + 24) )
            goto LABEL_19;
        }
        goto LABEL_7;
      case 8:
        if ( !(unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 32), a3) )
          goto LABEL_7;
        sub_1831620(qword_1C7F2C0, a3);
        goto LABEL_19;
      case 9:
        if ( !(unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 32), a3) )
          goto LABEL_7;
        v9 = 1;
        if ( *(_DWORD *)(a2 + 24) <= 1u )
          goto LABEL_19;
        break;
      default:
        goto LABEL_7;
    }
    do
    {
      if ( !(unsigned __int8)sub_6DFA90(a1, *(_QWORD *)(a2 + 8LL * v9 + 32), v36) )
      {
LABEL_7:
        v5 = 0;
        goto LABEL_8;
      }
      v45 = 0;
      v46 = 0;
      v47 = 1;
      v48 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v45, (int *)a3);
      v10 = qword_1C7F2C0;
      if ( (v47 & 0x100000000LL) != 0 || (_DWORD)v47 != 1 || (v37 & 0x100000000LL) != 0 || (_DWORD)v37 != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v45, v36);
      }
      else
      {
        sub_1831650(qword_1C7F2C0, &v45, v36);
        sub_182CBA0(v10, &v47);
        BYTE4(v47) &= ~1u;
        LODWORD(v47) = 1;
      }
      v39 = 0;
      v40 &= 0xFCu;
      v43 &= 0xFCu;
      v41 = 0;
      v42 = 1;
      v44 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v39, (int *)&v45);
      ++v9;
      sub_25A130((char *)&v45);
      v11 = *(_DWORD *)a3;
      *(_DWORD *)a3 = v39;
      v39 = v11;
      v12 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v41;
      v41 = v12;
      v13 = *(_BYTE *)(a3 + 4);
      LOBYTE(v12) = v13 & 2;
      v13 &= ~2u;
      v14 = v13 & 0xFE | v40 & 2 | v40 & 1;
      v40 = v13 & 1 | v40 & 0xFC | v12 & 0xFE;
      LODWORD(v12) = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a3 + 4) = v14;
      v15 = v42;
      v42 = v12;
      v16 = *(_QWORD *)(a3 + 24);
      *(_DWORD *)(a3 + 16) = v15;
      v17 = v44;
      v44 = v16;
      LOBYTE(v16) = *(_BYTE *)(a3 + 20);
      *(_QWORD *)(a3 + 24) = v17;
      LOBYTE(v17) = v16 & 0xFC | v43 & 2 | v43 & 1;
      v43 = v16 & 1 | v43 & 0xFC | v16 & 2;
      *(_BYTE *)(a3 + 20) = v17;
      sub_25A130((char *)&v39);
    }
    while ( v9 < *(_DWORD *)(a2 + 24) );
LABEL_19:
    v5 = 1;
LABEL_8:
    sub_25A130((char *)v36);
  }
  else
  {
    return 0;
  }
  return v5;
}

