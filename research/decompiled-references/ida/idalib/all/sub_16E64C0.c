__int64 __fastcall sub_16E64C0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, double a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v8; // r13
  unsigned int v9; // r15d
  _BYTE *v11; // r9
  char *v12; // r10
  unsigned __int64 v13; // rsi
  _DWORD *v14; // rbx
  _DWORD *v15; // rbp
  unsigned __int16 v16; // ax
  unsigned int v17; // edx
  _DWORD *v18; // rdx
  signed __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  _DWORD *v22; // rcx
  char *v23; // r10
  __int64 v24; // r12
  char v25; // al
  char v26; // al
  unsigned int v27; // edx
  __int16 v28; // dx
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // [rsp+28h] [rbp-700h]
  char *v38; // [rsp+30h] [rbp-6F8h]
  unsigned int v39; // [rsp+30h] [rbp-6F8h]
  char *v40; // [rsp+30h] [rbp-6F8h]
  unsigned int v41; // [rsp+30h] [rbp-6F8h]
  __int64 v43; // [rsp+38h] [rbp-6F0h]
  unsigned __int8 v44; // [rsp+40h] [rbp-6E8h]
  char *v45; // [rsp+40h] [rbp-6E8h]
  int v47; // [rsp+64h] [rbp-6C4h] BYREF
  __int64 v48; // [rsp+68h] [rbp-6C0h] BYREF
  __int64 v49; // [rsp+74h] [rbp-6B4h] BYREF
  int v50; // [rsp+7Ch] [rbp-6ACh]
  __int64 v51[2]; // [rsp+80h] [rbp-6A8h] BYREF
  __int64 v52[2]; // [rsp+90h] [rbp-698h] BYREF
  unsigned __int8 *v53; // [rsp+A0h] [rbp-688h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp-680h]
  void *v55; // [rsp+130h] [rbp-5F8h] BYREF
  __int64 v56; // [rsp+138h] [rbp-5F0h]
  _BYTE v57[720]; // [rsp+140h] [rbp-5E8h] BYREF
  void *ptr; // [rsp+410h] [rbp-318h] BYREF
  __int64 v59; // [rsp+418h] [rbp-310h]
  _BYTE v60[776]; // [rsp+420h] [rbp-308h] BYREF

  LOBYTE(v6) = (unsigned int)(a2 - 5) > 4 && (unsigned int)(a2 - 1) > 1;
  if ( !(_BYTE)v6 )
  {
    v8 = a5;
    v51[0] = a3;
    v9 = 0;
    v52[0] = a4;
    v55 = v57;
    v56 = 0x900000000LL;
    ptr = v60;
    v59 = 0x900000000LL;
    v51[1] = 0;
    v52[1] = 0;
    if ( !a5 )
    {
      v8 = a4;
      v9 = 1;
    }
    if ( (unsigned __int8)sub_16BBF50(a1, v51, a2, 1, (__int64)&v55)
      && (unsigned __int8)sub_16BBF50(a1, v52, a2, v9, (__int64)&ptr) )
    {
      v11 = ptr;
      v12 = (char *)v55;
      v13 = (unsigned __int64)ptr + 80 * (unsigned int)v59;
      v37 = v13;
      v38 = (char *)v55 + 80 * (unsigned int)v56;
      v44 = v55 >= v38 || (unsigned __int64)ptr >= v13;
      if ( !v44 )
      {
        v14 = v55;
        v15 = ptr;
        v16 = (*((_DWORD *)v55 + 18) >> 4) & 0x3FFF;
        while ( 1 )
        {
          v17 = (v15[18] >> 4) & 0x3FFF;
          if ( v17 >= v16 )
          {
            if ( v17 > v16 )
              goto LABEL_18;
            v13 = a1;
            v44 |= (unsigned __int8)sub_16DF960((__int64)v15, a1, (unsigned __int64)v14, v8, v9, a6) ^ 1;
          }
          v15 += 20;
          if ( v37 > (unsigned __int64)v15 )
          {
            v16 = (v14[18] >> 4) & 0x3FFF;
          }
          else
          {
LABEL_18:
            v18 = v14 + 20;
            v19 = 0xCCCCCCCCCCCCCCCDLL * ((v38 - (char *)(v14 + 20)) >> 4);
            v20 = v19 >> 2;
            if ( v19 >> 2 > 0 )
            {
              v13 = v14[18] >> 4;
              v16 = (v14[38] >> 4) & 0x3FFF;
              LOWORD(v13) = v13 & 0x3FFF;
              if ( (_WORD)v13 == v16 )
              {
                v16 = (v14[58] >> 4) & 0x3FFF;
                if ( (_WORD)v13 == v16 )
                {
                  v16 = (v14[78] >> 4) & 0x3FFF;
                  if ( (_WORD)v13 == v16 )
                  {
                    v16 = (v14[98] >> 4) & 0x3FFF;
                    if ( (_WORD)v13 == v16 )
                    {
                      v21 = (__int64)&v14[80 * v20 + 20];
                      while ( 1 )
                      {
                        v22 = v18 + 80;
                        if ( (_DWORD *)v21 == v18 + 80 )
                        {
                          v19 = 0xCCCCCCCCCCCCCCCDLL * ((v38 - (char *)v22) >> 4);
                          goto LABEL_31;
                        }
                        v16 = (v18[98] >> 4) & 0x3FFF;
                        if ( (_WORD)v13 != v16 )
                          goto LABEL_36;
                        v16 = (v18[118] >> 4) & 0x3FFF;
                        if ( (_WORD)v13 != v16 )
                        {
                          v14 = v18 + 100;
                          goto LABEL_37;
                        }
                        v16 = (v18[138] >> 4) & 0x3FFF;
                        if ( (_WORD)v13 != v16 )
                        {
                          v14 = v18 + 120;
                          goto LABEL_37;
                        }
                        v16 = (v18[158] >> 4) & 0x3FFF;
                        if ( (_WORD)v13 != v16 )
                          break;
                        v18 += 80;
                      }
                      v14 = v18 + 140;
                    }
                    else
                    {
                      v14 += 80;
                    }
                  }
                  else
                  {
                    v14 += 60;
                  }
                }
                else
                {
                  v14 += 40;
                }
              }
              else
              {
                v14 += 20;
              }
              goto LABEL_37;
            }
            v22 = v14 + 20;
LABEL_31:
            if ( v19 == 2 )
            {
              v29 = v14[18];
              v14 = v22;
              v28 = (v29 >> 4) & 0x3FFF;
LABEL_58:
              v16 = (v14[18] >> 4) & 0x3FFF;
              if ( v16 != v28 )
                goto LABEL_37;
              v14 += 20;
              goto LABEL_55;
            }
            if ( v19 == 3 )
            {
              v16 = (v22[18] >> 4) & 0x3FFF;
              v28 = (v14[18] >> 4) & 0x3FFF;
              if ( v16 != v28 )
              {
LABEL_36:
                v14 = v22;
                goto LABEL_37;
              }
              v14 = v22 + 20;
              goto LABEL_58;
            }
            if ( v19 != 1 )
              goto LABEL_34;
            v27 = v14[18];
            v14 = v22;
            v28 = (v27 >> 4) & 0x3FFF;
LABEL_55:
            v16 = (v14[18] >> 4) & 0x3FFF;
            if ( v28 == v16 )
            {
LABEL_34:
              v11 = v15;
              if ( (unsigned __int64)v15 < v37 )
                goto LABEL_50;
              goto LABEL_35;
            }
LABEL_37:
            if ( v38 <= (char *)v14 || (unsigned __int64)v15 >= v37 )
            {
              v12 = (char *)v14;
              v11 = v15;
              LOBYTE(v6) = v44;
              break;
            }
          }
        }
      }
      if ( v37 > (unsigned __int64)v11 )
      {
LABEL_50:
        v26 = v11[64];
        v49 = *((_QWORD *)v11 + 7);
        LOBYTE(v50) = v26;
        v41 = sub_EEB7E0(v8, v13, a6);
        sub_168B9B0((__int64)&v53, a1 + 8, 6912);
        sub_16B71B0(&v53, 1);
        sub_16E1DA0(a1, v9, v8, (__int64)&v53, v41, 0, a6, v49, v50, nullptr, 0);
        if ( v53 && v54 )
          sub_1580C40(v54, (unsigned __int64)v53);
        sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 20), 0x1765u, 0);
        LODWORD(v48) = 1;
        v44 = *(_BYTE *)(sub_1587D10((__int64)&v53, (int *)&v48) + 120);
        sub_15F7200(&v53);
      }
      else
      {
        v45 = v12;
        if ( v38 <= v12 )
        {
          v44 = v6;
        }
        else
        {
          v43 = sub_EEC8C0(a4, v13, a6);
          v39 = sub_EEB7E0(v8, v13, a6);
          sub_168B9B0((__int64)&v53, a1 + 8, 6912);
          sub_16B71B0(&v53, 0);
          sub_16DCAE0(a1, v9, v8, (__int64)&v53, v39, 0, a6, v43, nullptr, 0);
          v23 = v45;
          if ( v53 && v54 )
          {
            sub_1580C40(v54, (unsigned __int64)v53);
            v23 = v45;
          }
          v40 = v23;
          sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 20), 0x1765u, 0);
          v47 = 1;
          v24 = sub_1587D10((__int64)&v53, &v47);
          v25 = v40[64];
          v49 = *((_QWORD *)v40 + 7);
          LOBYTE(v50) = v25;
          if ( *(_BYTE *)(v24 + 120) )
          {
            sub_AEC610((__int64 *)(v24 + 32), &v49);
            v44 = *(_BYTE *)(v24 + 120);
          }
          else
          {
            v44 = *(_BYTE *)(v24 + 132);
            if ( v44 )
            {
              v34 = sub_168B9E0((_QWORD *)v24);
              v35 = *(_QWORD *)(v24 + 16);
              if ( v35 )
                v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 32LL))(*(_QWORD *)(v24 + 16));
              v48 = v35;
              v36 = sub_1587BC0(v34, &v48, v30, v31, v32, v33);
              sub_AEC610((__int64 *)(*v36 + 32LL * *(unsigned int *)(v24 + 128) + 8), &v49);
              v44 = *(_BYTE *)(v24 + 120);
            }
          }
          sub_15F7200(&v53);
        }
      }
LABEL_35:
      v6 = v44 ^ 1;
    }
    if ( ptr != v60 )
      free(ptr);
    if ( v55 != v57 )
      free(v55);
  }
  return v6;
}
