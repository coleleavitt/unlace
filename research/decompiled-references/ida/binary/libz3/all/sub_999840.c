__int64 __fastcall sub_999840(__int64 a1, unsigned int a2)
{
  void *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 i; // rbx
  unsigned int v9; // esi
  __int64 v10; // rax
  int v11; // eax
  void *v12; // rdi
  char v14; // al
  char v15; // al
  int v16; // eax
  void *v17; // [rsp+0h] [rbp-78h]
  void *v18; // [rsp+0h] [rbp-78h]
  void *v19; // [rsp+0h] [rbp-78h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  int v22; // [rsp+20h] [rbp-58h] BYREF
  char v23; // [rsp+24h] [rbp-54h]
  int v24; // [rsp+30h] [rbp-48h] BYREF
  char v25; // [rsp+34h] [rbp-44h]

  v20 = a1 + 888;
  v4 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 888);
  v21 = a1 + 904;
  sub_182CBA0(v4, a1 + 904);
  v5 = *(_QWORD *)(a1 + 592);
  v6 = *(_QWORD *)(a1 + 568);
  *(_BYTE *)(a1 + 908) &= ~1u;
  *(_DWORD *)(a1 + 904) = 1;
  v7 = *(_QWORD *)(v6 + 24LL * (*(_DWORD *)(v5 + 4LL * a2) & 0xFFFFFFF));
  if ( v7 )
  {
    for ( i = v7 + 40LL * *(unsigned int *)(v7 - 4); v7 != i; v7 += 40 )
    {
      v9 = *(_DWORD *)(v7 + 32);
      if ( v9 == -1 || a2 == v9 )
        continue;
      v10 = sub_999800(a1, v9);
      sub_3EBE30((__int64)&v22, v7, v10);
      v11 = v22;
      v12 = qword_1C7F2C0;
      if ( !v22 )
      {
        v14 = *(_BYTE *)(a1 + 892);
        if ( (v14 & 1) != 0 )
        {
          v18 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v20, v20);
          v12 = v18;
        }
        else
        {
          *(_BYTE *)(a1 + 892) = v14 & 0xFE;
        }
        v15 = *(_BYTE *)(a1 + 908);
        if ( (v15 & 1) != 0 )
          sub_182C690(v12, v21, v21);
        else
          *(_BYTE *)(a1 + 908) = v15 & 0xFE;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(a1 + 888) )
      {
        if ( (*(_BYTE *)(a1 + 908) & 1) != 0 || *(_DWORD *)(a1 + 904) != 1 || (v25 & 1) != 0 || v24 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v20, &v22, v20);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, v20, &v22, v20);
          sub_182CBA0(v12, v21);
          *(_BYTE *)(a1 + 908) &= ~1u;
          *(_DWORD *)(a1 + 904) = 1;
        }
        goto LABEL_10;
      }
      if ( (v23 & 1) != 0 )
      {
        v19 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v20, &v22);
        v12 = v19;
        if ( (v25 & 1) != 0 )
        {
LABEL_26:
          sub_182C690(v12, v21, &v24);
          goto LABEL_10;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 892) &= ~1u;
        *(_DWORD *)(a1 + 888) = v11;
        if ( (v25 & 1) != 0 )
          goto LABEL_26;
      }
      v16 = v24;
      *(_BYTE *)(a1 + 908) &= ~1u;
      *(_DWORD *)(a1 + 904) = v16;
LABEL_10:
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v22);
      sub_182CBA0(v17, &v24);
    }
  }
  sub_1831620(qword_1C7F2C0, v20);
  return v20;
}

