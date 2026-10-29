int *__fastcall sub_9AA360(__int64 a1, unsigned int a2)
{
  void *v3; // rbx
  void *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 i; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // r13
  int v12; // edx
  void *v13; // rdi
  int v14; // eax
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // r13
  int *v20; // [rsp+8h] [rbp-B0h]
  void *v21; // [rsp+10h] [rbp-A8h]
  __int64 v22; // [rsp+10h] [rbp-A8h]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  void *v24; // [rsp+10h] [rbp-A8h]
  void *v25; // [rsp+10h] [rbp-A8h]
  int *v26; // [rsp+18h] [rbp-A0h]
  __int64 v27; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-88h]
  __int64 v29; // [rsp+38h] [rbp-80h]
  _QWORD v30[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v33[9]; // [rsp+70h] [rbp-48h] BYREF

  v3 = qword_1C7F2C0;
  v20 = (int *)(a1 + 952);
  sub_182CEF0(qword_1C7F2C0, a1 + 952);
  v29 = a1 + 968;
  sub_182CBA0(v3, a1 + 968);
  v4 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 972) &= ~1u;
  *(_DWORD *)(a1 + 968) = 1;
  v26 = (int *)(a1 + 984);
  sub_182CEF0(v4, a1 + 984);
  v28 = a1 + 1000;
  sub_182CBA0(v4, a1 + 1000);
  v5 = *(_QWORD *)(a1 + 656);
  v6 = *(_QWORD *)(a1 + 632);
  *(_BYTE *)(a1 + 1004) &= ~1u;
  *(_DWORD *)(a1 + 1000) = 1;
  v7 = *(_QWORD *)(v6 + 24LL * (*(_DWORD *)(v5 + 4LL * a2) & 0xFFFFFFF));
  if ( v7 )
  {
    for ( i = v7 + 40LL * *(unsigned int *)(v7 - 4); v7 != i; v7 += 40 )
    {
      v9 = *(unsigned int *)(v7 + 32);
      if ( a2 != (_DWORD)v9 && (_DWORD)v9 != -1 )
      {
        v10 = sub_9AA900(a1, v9);
        v11 = qword_1C7F2C0;
        v30[0] = 0;
        v30[1] = 0;
        v31[0] = 1;
        v31[1] = 0;
        if ( (*(_BYTE *)(v10 + 4) & 1) != 0 )
        {
          v23 = v10;
          sub_182C690(qword_1C7F2C0, v30, v10);
          v10 = v23;
        }
        else
        {
          LODWORD(v30[0]) = *(_DWORD *)v10;
        }
        if ( (*(_BYTE *)(v10 + 20) & 1) != 0 )
        {
          v22 = v10;
          sub_182C690(v11, v31, v10 + 16);
          v10 = v22;
        }
        else
        {
          v12 = *(_DWORD *)(v10 + 16);
          BYTE4(v31[0]) &= ~1u;
          LODWORD(v31[0]) = v12;
        }
        v32[0] = 0;
        v13 = qword_1C7F2C0;
        v32[1] = 0;
        v33[0] = 1;
        v33[1] = 0;
        if ( (*(_BYTE *)(v10 + 36) & 1) != 0 )
        {
          v27 = v10;
          sub_182C690(qword_1C7F2C0, v32, v10 + 32);
          v10 = v27;
        }
        else
        {
          LODWORD(v32[0]) = *(_DWORD *)(v10 + 32);
        }
        if ( (*(_BYTE *)(v10 + 52) & 1) != 0 )
        {
          sub_182C690(v13, v33, v10 + 48);
        }
        else
        {
          v14 = *(_DWORD *)(v10 + 48);
          BYTE4(v33[0]) &= ~1u;
          LODWORD(v33[0]) = v14;
        }
        if ( (v31[0] & 0x100000000LL) != 0
          || LODWORD(v31[0]) != 1
          || (*(_BYTE *)(v7 + 20) & 1) != 0
          || *(_DWORD *)(v7 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v30, v7);
        }
        else
        {
          v25 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v30, v7);
          sub_182CBA0(v25, v31);
          BYTE4(v31[0]) &= ~1u;
          LODWORD(v31[0]) = 1;
        }
        if ( (v33[0] & 0x100000000LL) != 0
          || LODWORD(v33[0]) != 1
          || (*(_BYTE *)(v7 + 20) & 1) != 0
          || *(_DWORD *)(v7 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v32, v7);
        }
        else
        {
          v24 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v32, v7);
          sub_182CBA0(v24, v33);
          BYTE4(v33[0]) &= ~1u;
          LODWORD(v33[0]) = 1;
        }
        v15 = qword_1C7F2C0;
        if ( LODWORD(v30[0]) )
        {
          if ( *(_DWORD *)(a1 + 952) )
          {
            if ( (*(_BYTE *)(a1 + 972) & 1) != 0
              || *(_DWORD *)(a1 + 968) != 1
              || (v31[0] & 0x100000000LL) != 0
              || LODWORD(v31[0]) != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v20, v30, v20);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, v20, v30, v20);
              sub_182CBA0(v15, v29);
              *(_BYTE *)(a1 + 972) &= ~1u;
              *(_DWORD *)(a1 + 968) = 1;
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v20, (int *)v30);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v20, v20);
        }
        v16 = qword_1C7F2C0;
        if ( LODWORD(v32[0]) )
        {
          if ( *(_DWORD *)(a1 + 984) )
          {
            if ( (*(_BYTE *)(a1 + 1004) & 1) != 0
              || *(_DWORD *)(a1 + 1000) != 1
              || (v33[0] & 0x100000000LL) != 0
              || LODWORD(v33[0]) != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v26, v32, v26);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, v26, v32, v26);
              sub_182CBA0(v16, v28);
              *(_BYTE *)(a1 + 1004) &= ~1u;
              *(_DWORD *)(a1 + 1000) = 1;
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v26, (int *)v32);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v26, v26);
        }
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v32);
        sub_182CBA0(v21, v33);
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v30);
        sub_182CBA0(v17, v31);
      }
    }
  }
  sub_1831620(qword_1C7F2C0, v20);
  sub_1831620(qword_1C7F2C0, v26);
  return v20;
}

