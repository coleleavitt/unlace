__int64 __fastcall sub_2ED000(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // r14
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  unsigned int v17; // esi
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v20; // r13
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+18h] [rbp-140h]
  __int64 v25; // [rsp+30h] [rbp-128h]
  void *v26; // [rsp+38h] [rbp-120h]
  void *v27; // [rsp+38h] [rbp-120h]
  _QWORD v28[2]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-108h] BYREF
  int v30[8]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+88h] [rbp-D0h]
  __int64 v33; // [rsp+90h] [rbp-C8h]
  __int64 v34; // [rsp+98h] [rbp-C0h]
  __int64 v35; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-B0h]
  __int64 v37; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-90h]
  __int64 v41; // [rsp+D0h] [rbp-88h]
  __int64 v42; // [rsp+D8h] [rbp-80h]
  __int64 v43; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-70h]
  __int64 v45; // [rsp+F0h] [rbp-68h]
  __int64 v46; // [rsp+F8h] [rbp-60h]
  __int64 v47; // [rsp+100h] [rbp-58h] BYREF
  __int64 v48; // [rsp+108h] [rbp-50h]
  __int64 v49; // [rsp+110h] [rbp-48h]
  __int64 v50; // [rsp+118h] [rbp-40h]

  result = *(_QWORD *)(a1 + 8);
  v25 = result;
  if ( *(_QWORD *)(a1 + 616) )
  {
    v3 = *(_QWORD *)(a1 + 608);
    if ( v3 )
    {
      v23 = v3 + 104LL * *(unsigned int *)(v3 - 4);
      if ( v23 != v3 )
      {
        v5 = v3 + 48;
        v3 = 0;
        while ( 1 )
        {
          v28[0] = 0;
          v29[0] = 1;
          v6 = *(_DWORD *)(v5 - 48);
          v28[1] = 0;
          v29[1] = 0;
          if ( v6 == 1 )
            break;
          if ( v6 != 2 )
          {
            if ( v6 )
              goto LABEL_24;
            sub_1374250(&v39, *(_QWORD *)(a1 + 616), *(_QWORD *)(v5 - 40));
            v7 = v39;
            v39 = v3;
            sub_2EB430(v3, v40);
            if ( !(unsigned __int8)sub_1666AE0(a1 + 168, v7, v28, &v39)
              && !(unsigned __int8)sub_1673B50((int)a1 + 184, v7, (unsigned int)v28, (unsigned int)&v39, v8, v9) )
            {
              goto LABEL_35;
            }
            sub_2FC530(v30, v5, v28);
            v31 = 0;
            v32 = 0;
            v33 = 1;
            v34 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v31, v30);
            v35 = 0;
            v36 = 0;
            v37 = 1;
            v38 = 0;
            v26 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, &v35);
            sub_182CBA0(v26, &v37);
            BYTE4(v37) &= ~1u;
            LODWORD(v37) = 1;
            v39 = 0;
            v40 = 0;
            v41 = 1;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            v45 = 1;
            v46 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, (int *)&v31);
            v47 = 0;
            v48 = 0;
            v49 = 1;
            v50 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, (int *)&v35);
            sub_25A130((char *)&v35);
            sub_25A130((char *)&v31);
            sub_25A130((char *)v30);
            v10 = *(unsigned int *)(v5 + 48);
            v11 = a1 + 296;
            if ( a2 )
            {
LABEL_10:
              sub_32F720(v11, v10, &v39);
              goto LABEL_29;
            }
LABEL_28:
            sub_32F8F0(v11, v10, &v39);
LABEL_29:
            sub_2A6060((__int64)&v39);
            goto LABEL_35;
          }
          v12 = *(_QWORD *)(v5 - 16);
          if ( v12 )
          {
            v13 = 0;
            if ( *(_DWORD *)(v12 - 4) )
            {
              while ( 1 )
              {
                sub_1374250(&v39, *(_QWORD *)(a1 + 616), *(_QWORD *)(v12 + 8LL * v13));
                v14 = v39;
                v39 = v3;
                if ( v3 )
                {
                  v15 = v40;
                  if ( (*(_DWORD *)(v3 + 8))-- == 1 )
                    sub_15D7BC0(v15, v3);
                }
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) != v14 )
                  sub_2FC4A0(qword_1C7F2C0, v28, *(_QWORD *)(v5 - 8) + 32LL * v13, v28);
                v12 = *(_QWORD *)(v5 - 16);
                ++v13;
                if ( !v12 )
                  break;
                v3 = v14;
                if ( v13 >= *(_DWORD *)(v12 - 4) )
                  goto LABEL_20;
              }
            }
            else
            {
LABEL_20:
              v14 = v3;
            }
          }
          else
          {
            v14 = v3;
          }
          v17 = *(_DWORD *)(a1 + 424);
          v18 = *(_QWORD *)(a1 + 416);
          v40 = 0;
          v39 = *(_QWORD *)(v5 + 40);
          v19 = *(_QWORD *)(sub_2EB230(v18, v17, &v39) + 16);
          if ( a2 )
            sub_3004A0(v19, v28);
          else
            sub_300430(v19, v28);
          v3 = v14;
LABEL_24:
          v20 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v28);
          sub_182CBA0(v20, v29);
          if ( v23 == v5 + 56 )
            return sub_2EB430(v3, v25);
          v5 += 104;
        }
        sub_1374250(&v39, *(_QWORD *)(a1 + 616), *(_QWORD *)(v5 - 40));
        v7 = v39;
        v39 = v3;
        sub_2EB430(v3, v40);
        if ( (unsigned __int8)sub_1666AE0(a1 + 168, v7, v28, &v31)
          || (unsigned __int8)sub_1673B50((int)a1 + 184, v7, (unsigned int)v28, (unsigned int)&v39, v21, v22) )
        {
          sub_2FC530(v30, v5, v28);
          v31 = 0;
          v32 = 0;
          v33 = 1;
          v34 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v31, v30);
          v35 = 0;
          v36 = 0;
          v37 = 1;
          v38 = 0;
          v27 = qword_1C7F2C0;
          sub_182CEF0(qword_1C7F2C0, &v35);
          sub_182CBA0(v27, &v37);
          BYTE4(v37) &= ~1u;
          LODWORD(v37) = 1;
          v39 = 0;
          v40 = 0;
          v41 = 1;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 1;
          v46 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, (int *)&v31);
          v47 = 0;
          v48 = 0;
          v49 = 1;
          v50 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, (int *)&v35);
          sub_25A130((char *)&v35);
          sub_25A130((char *)&v31);
          sub_25A130((char *)v30);
          v10 = *(unsigned int *)(v5 + 48);
          v11 = a1 + 296;
          if ( a2 )
            goto LABEL_10;
          goto LABEL_28;
        }
LABEL_35:
        v3 = v7;
        goto LABEL_24;
      }
      v3 = 0;
    }
    return sub_2EB430(v3, v25);
  }
  return result;
}

