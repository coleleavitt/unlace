__int64 __fastcall sub_9D7F30(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  void *v10; // rdi
  int v11; // edx
  int v12; // edx
  void *v13; // rdi
  int v14; // edx
  int v15; // edx
  void *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  void *v19; // rbx
  void *v20; // rbx
  unsigned int *v22; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+10h] [rbp-88h]
  __int64 v24; // [rsp+10h] [rbp-88h]
  __int64 v25; // [rsp+10h] [rbp-88h]
  void *v26; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  _QWORD v30[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v33[9]; // [rsp+50h] [rbp-48h] BYREF

  sub_9D7C80((__int64)a1, a2, a3);
  v5 = a1[81] + 16LL * a2;
  v6 = *(unsigned int **)v5;
  if ( *(_QWORD *)v5 && 2 * *(_DWORD *)(v5 + 8) < *(v6 - 1) )
    sub_997BC0((__int64 *)v5, a1 + 79);
  v30[0] = 0;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 1;
  v33[1] = 0;
  if ( v6 )
  {
    v22 = &v6[2 * *(v6 - 1)];
    if ( v22 != v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( (_DWORD)v7 != -1 )
        {
          v8 = a1[79] + 24 * v7;
          v9 = *(_DWORD *)(v8 + 12);
          if ( v9 != -1 && ((*(_BYTE *)(a1[82] + 4LL * v9 + 3) >> 4) & 3) != 2 )
            break;
        }
LABEL_22:
        v6 += 2;
        if ( v22 == v6 )
          goto LABEL_23;
      }
      v10 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
      {
        v27 = a1[79] + 24 * v7;
        sub_182C690(qword_1C7F2C0, v30, a3);
        v8 = v27;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        {
LABEL_11:
          v12 = *(_DWORD *)(a3 + 16);
          BYTE4(v31[0]) &= ~1u;
          v13 = qword_1C7F2C0;
          LODWORD(v31[0]) = v12;
          if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
          {
LABEL_12:
            v14 = *(_DWORD *)(a3 + 32);
            BYTE4(v32[0]) &= ~1u;
            LODWORD(v32[0]) = v14;
LABEL_13:
            if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
            {
              v24 = v8;
              sub_182C690(v13, v33, a3 + 48);
              v8 = v24;
            }
            else
            {
              v15 = *(_DWORD *)(a3 + 48);
              BYTE4(v33[0]) &= ~1u;
              LODWORD(v33[0]) = v15;
            }
            v16 = qword_1C7F2C0;
            v17 = *(_QWORD *)v8 + 40LL * v6[1];
            if ( (v31[0] & 0x100000000LL) != 0
              || LODWORD(v31[0]) != 1
              || (*(_BYTE *)(v17 + 20) & 1) != 0
              || *(_DWORD *)(v17 + 16) != 1 )
            {
              v23 = *(_QWORD *)v8 + 40LL * v6[1];
              sub_1848FF0(qword_1C7F2C0, v30, v17);
              v18 = v23;
            }
            else
            {
              v29 = *(_QWORD *)v8 + 40LL * v6[1];
              sub_1831650(qword_1C7F2C0, v30, v17);
              sub_182CBA0(v16, v31);
              BYTE4(v31[0]) &= ~1u;
              v18 = v29;
              LODWORD(v31[0]) = 1;
            }
            if ( (v33[0] & 0x100000000LL) != 0
              || LODWORD(v33[0]) != 1
              || (*(_BYTE *)(v18 + 20) & 1) != 0
              || *(_DWORD *)(v18 + 16) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v32, v18);
            }
            else
            {
              v26 = qword_1C7F2C0;
              sub_1831650(qword_1C7F2C0, v32, v18);
              sub_182CBA0(v26, v33);
              BYTE4(v33[0]) &= ~1u;
              LODWORD(v33[0]) = 1;
            }
            sub_1831620(qword_1C7F2C0, v30);
            sub_1831620(qword_1C7F2C0, v32);
            sub_9D7C80((__int64)a1, v9, (__int64)v30);
            goto LABEL_22;
          }
LABEL_27:
          v28 = v8;
          sub_182C690(v13, v32, a3 + 32);
          v8 = v28;
          goto LABEL_13;
        }
      }
      else
      {
        v11 = *(_DWORD *)a3;
        BYTE4(v30[0]) &= ~1u;
        LODWORD(v30[0]) = v11;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
          goto LABEL_11;
      }
      v25 = v8;
      sub_182C690(v10, v31, a3 + 16);
      v8 = v25;
      v13 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
        goto LABEL_12;
      goto LABEL_27;
    }
  }
LABEL_23:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  sub_182CBA0(v19, v33);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  return sub_182CBA0(v20, v31);
}

