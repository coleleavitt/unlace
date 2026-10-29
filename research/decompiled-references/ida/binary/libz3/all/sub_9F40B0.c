__int64 __fastcall sub_9F40B0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int v9; // r13d
  void *v10; // rdi
  int v11; // eax
  int v12; // eax
  void *v13; // rdi
  int v14; // eax
  int v15; // eax
  void *v16; // rdi
  int v17; // eax
  int v18; // eax
  void *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  void *v22; // rdi
  __int64 v23; // rdx
  unsigned int *v25; // [rsp+0h] [rbp-C8h]
  __int64 v26; // [rsp+10h] [rbp-B8h]
  void *v27; // [rsp+10h] [rbp-B8h]
  void *v28; // [rsp+10h] [rbp-B8h]
  __int64 v29; // [rsp+18h] [rbp-B0h]
  __int64 v30; // [rsp+18h] [rbp-B0h]
  void *v31; // [rsp+28h] [rbp-A0h]
  __int64 v32; // [rsp+28h] [rbp-A0h]
  _QWORD v33[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v38[9]; // [rsp+80h] [rbp-48h] BYREF

  sub_9F3E00((__int64)a1, a2, a3);
  v5 = a1[89] + 16LL * a2;
  v6 = *(unsigned int **)v5;
  if ( *(_QWORD *)v5 && 2 * *(_DWORD *)(v5 + 8) < *(v6 - 1) )
    sub_9A4400((__int64 *)v5, a1 + 87);
  v33[0] = 0;
  v33[1] = 0;
  v34[0] = 1;
  v34[1] = 0;
  v35[0] = 0;
  v35[1] = 0;
  v36[0] = 1;
  v36[1] = 0;
  v37[0] = 0;
  v37[1] = 0;
  v38[0] = 1;
  v38[1] = 0;
  if ( v6 )
  {
    v25 = &v6[2 * *(v6 - 1)];
    if ( v25 != v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( (_DWORD)v7 != -1 )
        {
          v8 = a1[87] + 24 * v7;
          v9 = *(_DWORD *)(v8 + 12);
          if ( v9 != -1 && ((*(_BYTE *)(a1[90] + 4LL * v9 + 3) >> 4) & 3) != 2 )
            break;
        }
LABEL_28:
        v6 += 2;
        if ( v25 == v6 )
          return sub_2A6060((__int64)v33);
      }
      v10 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
      {
        v28 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v33, a3);
        v10 = v28;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        {
LABEL_11:
          v12 = *(_DWORD *)(a3 + 16);
          BYTE4(v34[0]) &= ~1u;
          v13 = qword_1C7F2C0;
          LODWORD(v34[0]) = v12;
          if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
          {
LABEL_12:
            v14 = *(_DWORD *)(a3 + 32);
            BYTE4(v35[0]) &= ~1u;
            LODWORD(v35[0]) = v14;
            goto LABEL_13;
          }
LABEL_35:
          sub_182C690(v13, v35, a3 + 32);
LABEL_13:
          if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
          {
            sub_182C690(v13, v36, a3 + 48);
          }
          else
          {
            v15 = *(_DWORD *)(a3 + 48);
            BYTE4(v36[0]) &= ~1u;
            LODWORD(v36[0]) = v15;
          }
          v16 = qword_1C7F2C0;
          if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
          {
            v27 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v37, a3 + 64);
            v16 = v27;
            if ( (*(_BYTE *)(a3 + 84) & 1) == 0 )
              goto LABEL_17;
          }
          else
          {
            v17 = *(_DWORD *)(a3 + 64);
            BYTE4(v37[0]) &= ~1u;
            LODWORD(v37[0]) = v17;
            if ( (*(_BYTE *)(a3 + 84) & 1) == 0 )
            {
LABEL_17:
              v18 = *(_DWORD *)(a3 + 80);
              BYTE4(v38[0]) &= ~1u;
              LODWORD(v38[0]) = v18;
              goto LABEL_18;
            }
          }
          sub_182C690(v16, v38, a3 + 80);
LABEL_18:
          v19 = qword_1C7F2C0;
          v20 = *(_QWORD *)v8 + 40LL * v6[1];
          if ( (v34[0] & 0x100000000LL) != 0
            || LODWORD(v34[0]) != 1
            || (*(_BYTE *)(v20 + 20) & 1) != 0
            || *(_DWORD *)(v20 + 16) != 1 )
          {
            v26 = *(_QWORD *)v8 + 40LL * v6[1];
            sub_1848FF0(qword_1C7F2C0, v33, v20);
            v21 = v26;
          }
          else
          {
            v30 = *(_QWORD *)v8 + 40LL * v6[1];
            sub_1831650(qword_1C7F2C0, v33, v20);
            sub_182CBA0(v19, v34);
            BYTE4(v34[0]) &= ~1u;
            v21 = v30;
            LODWORD(v34[0]) = 1;
          }
          v22 = qword_1C7F2C0;
          if ( (v36[0] & 0x100000000LL) != 0
            || LODWORD(v36[0]) != 1
            || (*(_BYTE *)(v21 + 20) & 1) != 0
            || *(_DWORD *)(v21 + 16) != 1 )
          {
            v29 = v21;
            sub_1848FF0(qword_1C7F2C0, v35, v21);
            v23 = v29;
          }
          else
          {
            v32 = v21;
            sub_1831650(qword_1C7F2C0, v35, v21);
            sub_182CBA0(v22, v36);
            BYTE4(v36[0]) &= ~1u;
            v23 = v32;
            LODWORD(v36[0]) = 1;
          }
          if ( (v38[0] & 0x100000000LL) != 0
            || LODWORD(v38[0]) != 1
            || (*(_BYTE *)(v23 + 20) & 1) != 0
            || *(_DWORD *)(v23 + 16) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, v37, v23);
          }
          else
          {
            v31 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, v37, v23);
            sub_182CBA0(v31, v38);
            BYTE4(v38[0]) &= ~1u;
            LODWORD(v38[0]) = 1;
          }
          sub_1831620(qword_1C7F2C0, v33);
          sub_1831620(qword_1C7F2C0, v35);
          sub_1831620(qword_1C7F2C0, v37);
          sub_9F3E00((__int64)a1, v9, (__int64)v33);
          goto LABEL_28;
        }
      }
      else
      {
        v11 = *(_DWORD *)a3;
        BYTE4(v33[0]) &= ~1u;
        LODWORD(v33[0]) = v11;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
          goto LABEL_11;
      }
      sub_182C690(v10, v34, a3 + 16);
      v13 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
        goto LABEL_12;
      goto LABEL_35;
    }
  }
  return sub_2A6060((__int64)v33);
}

