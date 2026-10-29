__int64 __fastcall sub_9A1BC0(__int64 a1, unsigned int a2, int a3, char **a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned int v10; // edx
  void *v11; // rdi
  int v12; // eax
  int v13; // eax
  void *v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // esi
  char *v17; // rsi
  char *v18; // rdx
  int v19; // esi
  __int64 v20; // rsi
  void *v21; // rdi
  void *v22; // r13
  __int64 v23; // rax
  unsigned int v24; // ebx
  char **v25; // r14
  __int64 v26; // rbp
  __int64 v27; // r12
  void *v28; // r15
  char *v29; // rsi
  char v30; // di
  __int64 v31; // rdx
  char v32; // di
  __int64 v33; // rdx
  char **v34; // rdi
  void *v35; // [rsp+8h] [rbp-D0h]
  int v36; // [rsp+8h] [rbp-D0h]
  int v37; // [rsp+14h] [rbp-C4h]
  __int64 v38; // [rsp+28h] [rbp-B0h]
  __int64 v39; // [rsp+30h] [rbp-A8h]
  __int64 v40; // [rsp+38h] [rbp-A0h]
  __int64 v41; // [rsp+40h] [rbp-98h]
  int v42; // [rsp+48h] [rbp-90h]
  int v43; // [rsp+48h] [rbp-90h]
  int v44; // [rsp+4Ch] [rbp-8Ch]
  _QWORD v45[2]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v47; // [rsp+70h] [rbp-68h] BYREF
  __int64 v48; // [rsp+78h] [rbp-60h]
  __int64 v49; // [rsp+80h] [rbp-58h] BYREF
  __int64 v50; // [rsp+88h] [rbp-50h]
  int v51; // [rsp+90h] [rbp-48h]

  result = *(_QWORD *)(a1 + 696) + 24LL * a2;
  v6 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
  {
    v7 = v6 + 40LL * *(unsigned int *)(v6 - 4);
    if ( v7 != v6 )
    {
      v8 = a1;
      v37 = *(_DWORD *)(result + 12);
      result = (__int64)&v47;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 32);
        if ( v10 != -1 )
        {
          result = (*(_BYTE *)(*(_QWORD *)(v8 + 720) + 4LL * v10 + 3) >> 4) & 3;
          if ( (_DWORD)result == a3 && v37 != v10 )
            break;
        }
LABEL_7:
        v6 += 40;
        if ( v6 == v7 )
          return result;
      }
      v45[0] = 0;
      v45[1] = 0;
      v46[0] = 1;
      v11 = qword_1C7F2C0;
      v46[1] = 0;
      if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
      {
        v35 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v45, v6);
        v11 = v35;
        if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
          goto LABEL_11;
      }
      else
      {
        LODWORD(v45[0]) = *(_DWORD *)v6;
        if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
        {
LABEL_11:
          v12 = *(_DWORD *)(v6 + 16);
          BYTE4(v46[0]) &= ~1u;
          LODWORD(v46[0]) = v12;
LABEL_12:
          sub_1831620(qword_1C7F2C0, v45);
          v13 = *(_DWORD *)(v6 + 32);
          v14 = qword_1C7F2C0;
          v47 = 0;
          v48 = 0;
          v49 = 1;
          v50 = 0;
          if ( (v45[0] & 0x100000000LL) != 0 )
          {
            v43 = v13;
            sub_182C690(qword_1C7F2C0, &v47, v45);
            v13 = v43;
          }
          else
          {
            LODWORD(v47) = v45[0];
          }
          if ( (v46[0] & 0x100000000LL) != 0 )
          {
            v36 = v13;
            sub_182C690(v14, &v49, v46);
            v13 = v36;
          }
          else
          {
            BYTE4(v49) &= ~1u;
            LODWORD(v49) = v46[0];
          }
          v15 = *((unsigned int *)a4 + 2);
          v16 = *((_DWORD *)a4 + 3);
          v51 = v13;
          if ( (unsigned int)v15 >= v16 )
          {
            v42 = 2 * v16;
            v23 = sub_186B270(80LL * v16);
            v15 = *((unsigned int *)a4 + 2);
            v17 = (char *)v23;
            if ( (_DWORD)v15 )
            {
              v39 = v7;
              v40 = v23;
              v38 = v6;
              v24 = 0;
              v41 = v8;
              v25 = a4;
              v26 = 0;
              v44 = a3;
              v27 = v23;
              do
              {
                v28 = qword_1C7F2C0;
                ++v24;
                v27 += 40;
                v29 = &(*v25)[v26];
                v26 += 40;
                v30 = v29[4];
                *(_DWORD *)(v27 - 40) = *(_DWORD *)v29;
                *(_BYTE *)(v27 - 36) = v30 & 3 | *(_BYTE *)(v27 - 36) & 0xFC;
                v31 = *((_QWORD *)v29 + 1);
                *((_QWORD *)v29 + 1) = 0;
                *(_QWORD *)(v27 - 32) = v31;
                v32 = v29[20];
                *(_DWORD *)(v27 - 24) = *((_DWORD *)v29 + 4);
                *(_BYTE *)(v27 - 20) = v32 & 3 | *(_BYTE *)(v27 - 20) & 0xFC;
                v33 = *((_QWORD *)v29 + 3);
                *((_QWORD *)v29 + 3) = 0;
                *(_QWORD *)(v27 - 16) = v33;
                *(_DWORD *)(v27 - 8) = *((_DWORD *)v29 + 8);
                sub_182CBA0(v28, v29);
                sub_182CBA0(v28, v29 + 16);
                v15 = *((unsigned int *)v25 + 2);
              }
              while ( v24 < (unsigned int)v15 );
              a4 = v25;
              v6 = v38;
              v7 = v39;
              v17 = (char *)v40;
              a3 = v44;
              v8 = v41;
            }
            v34 = (char **)*a4;
            if ( *a4 )
            {
              if ( v34 != a4 + 2 )
              {
                sub_186B220(v34);
                v15 = *((unsigned int *)a4 + 2);
              }
            }
            *a4 = v17;
            *((_DWORD *)a4 + 3) = v42;
            v13 = v51;
          }
          else
          {
            v17 = *a4;
          }
          v18 = &v17[40 * v15];
          v19 = v47;
          *((_DWORD *)v18 + 8) = v13;
          *(_DWORD *)v18 = v19;
          v18[4] = BYTE4(v47) & 3 | v18[4] & 0xFC;
          v20 = v48;
          v48 = 0;
          *((_QWORD *)v18 + 1) = v20;
          *((_DWORD *)v18 + 4) = v49;
          v21 = qword_1C7F2C0;
          v18[20] = BYTE4(v49) & 3 | v18[20] & 0xFC;
          *((_QWORD *)v18 + 3) = v50;
          ++*((_DWORD *)a4 + 2);
          v50 = 0;
          sub_182CBA0(v21, &v47);
          sub_182CBA0(v21, &v49);
          v22 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v45);
          result = sub_182CBA0(v22, v46);
          goto LABEL_7;
        }
      }
      sub_182C690(v11, v46, v6 + 16);
      goto LABEL_12;
    }
  }
  return result;
}

