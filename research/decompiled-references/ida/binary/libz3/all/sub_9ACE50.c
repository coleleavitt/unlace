int *__fastcall sub_9ACE50(__int64 a1, unsigned int a2)
{
  void *v3; // rbx
  void *v4; // rbx
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 i; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // r13
  int v14; // eax
  void *v15; // r14
  int v16; // eax
  void *v17; // r14
  int v18; // eax
  void *v19; // rdi
  void *v20; // r14
  void *v21; // r13
  int *v24; // [rsp+10h] [rbp-C8h]
  void *v25; // [rsp+18h] [rbp-C0h]
  void *v26; // [rsp+18h] [rbp-C0h]
  void *v27; // [rsp+18h] [rbp-C0h]
  void *v28; // [rsp+18h] [rbp-C0h]
  __int64 v29; // [rsp+20h] [rbp-B8h]
  __int64 v30; // [rsp+28h] [rbp-B0h]
  __int64 v31; // [rsp+38h] [rbp-A0h]
  _QWORD v32[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v37[9]; // [rsp+90h] [rbp-48h] BYREF

  v3 = qword_1C7F2C0;
  v24 = (int *)(a1 + 1016);
  sub_182CEF0(qword_1C7F2C0, a1 + 1016);
  v31 = a1 + 1032;
  sub_182CBA0(v3, a1 + 1032);
  v4 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 1036) &= ~1u;
  *(_DWORD *)(a1 + 1032) = 1;
  v30 = a1 + 1048;
  sub_182CEF0(v4, a1 + 1048);
  sub_182CBA0(v4, a1 + 1064);
  v5 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 1068) &= ~1u;
  *(_DWORD *)(a1 + 1064) = 1;
  v29 = a1 + 1080;
  sub_182CEF0(v5, a1 + 1080);
  sub_182CBA0(v5, a1 + 1096);
  v6 = *(_QWORD *)(a1 + 720);
  v7 = *(_QWORD *)(a1 + 696);
  *(_BYTE *)(a1 + 1100) &= ~1u;
  *(_DWORD *)(a1 + 1096) = 1;
  v8 = *(_QWORD *)(v7 + 24LL * (*(_DWORD *)(v6 + 4LL * a2) & 0xFFFFFFF));
  if ( v8 )
  {
    for ( i = v8 + 40LL * *(unsigned int *)(v8 - 4); v8 != i; v8 += 40 )
    {
      v10 = *(unsigned int *)(v8 + 32);
      if ( a2 != (_DWORD)v10 && (_DWORD)v10 != -1 )
      {
        v11 = sub_9AD4F0(a1, v10);
        v12 = qword_1C7F2C0;
        v32[0] = 0;
        v32[1] = 0;
        v13 = v11;
        v33[0] = 1;
        v33[1] = 0;
        if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v32, v11);
        else
          LODWORD(v32[0]) = *(_DWORD *)v11;
        if ( (*(_BYTE *)(v13 + 20) & 1) != 0 )
        {
          sub_182C690(v12, v33, v13 + 16);
        }
        else
        {
          v14 = *(_DWORD *)(v13 + 16);
          BYTE4(v33[0]) &= ~1u;
          LODWORD(v33[0]) = v14;
        }
        v34[0] = 0;
        v15 = qword_1C7F2C0;
        v34[1] = 0;
        v35[0] = 1;
        v35[1] = 0;
        if ( (*(_BYTE *)(v13 + 36) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v34, v13 + 32);
        else
          LODWORD(v34[0]) = *(_DWORD *)(v13 + 32);
        if ( (*(_BYTE *)(v13 + 52) & 1) != 0 )
        {
          sub_182C690(v15, v35, v13 + 48);
        }
        else
        {
          v16 = *(_DWORD *)(v13 + 48);
          BYTE4(v35[0]) &= ~1u;
          LODWORD(v35[0]) = v16;
        }
        v36[0] = 0;
        v17 = qword_1C7F2C0;
        v36[1] = 0;
        v37[0] = 1;
        v37[1] = 0;
        if ( (*(_BYTE *)(v13 + 68) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v36, v13 + 64);
        else
          LODWORD(v36[0]) = *(_DWORD *)(v13 + 64);
        if ( (*(_BYTE *)(v13 + 84) & 1) != 0 )
        {
          sub_182C690(v17, v37, v13 + 80);
        }
        else
        {
          v18 = *(_DWORD *)(v13 + 80);
          BYTE4(v37[0]) &= ~1u;
          LODWORD(v37[0]) = v18;
        }
        if ( (v33[0] & 0x100000000LL) != 0
          || LODWORD(v33[0]) != 1
          || (*(_BYTE *)(v8 + 20) & 1) != 0
          || *(_DWORD *)(v8 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v32, v8);
        }
        else
        {
          v28 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v32, v8);
          sub_182CBA0(v28, v33);
          BYTE4(v33[0]) &= ~1u;
          LODWORD(v33[0]) = 1;
        }
        if ( (v35[0] & 0x100000000LL) != 0
          || LODWORD(v35[0]) != 1
          || (*(_BYTE *)(v8 + 20) & 1) != 0
          || *(_DWORD *)(v8 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v34, v8);
        }
        else
        {
          v27 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v34, v8);
          sub_182CBA0(v27, v35);
          BYTE4(v35[0]) &= ~1u;
          LODWORD(v35[0]) = 1;
        }
        if ( (v37[0] & 0x100000000LL) != 0
          || LODWORD(v37[0]) != 1
          || (*(_BYTE *)(v8 + 20) & 1) != 0
          || *(_DWORD *)(v8 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v36, v8);
        }
        else
        {
          v26 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v36, v8);
          sub_182CBA0(v26, v37);
          BYTE4(v37[0]) &= ~1u;
          LODWORD(v37[0]) = 1;
        }
        v19 = qword_1C7F2C0;
        if ( LODWORD(v32[0]) )
        {
          if ( *(_DWORD *)(a1 + 1016) )
          {
            if ( (*(_BYTE *)(a1 + 1036) & 1) != 0
              || *(_DWORD *)(a1 + 1032) != 1
              || (v33[0] & 0x100000000LL) != 0
              || LODWORD(v33[0]) != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v24, v32, v24);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, v24, v32, v24);
              sub_182CBA0(v19, v31);
              *(_BYTE *)(a1 + 1036) &= ~1u;
              *(_DWORD *)(a1 + 1032) = 1;
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v24, (int *)v32);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v24, v24);
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, v30, (__int64)v34, v30);
        sub_2FC4A0((__int64)qword_1C7F2C0, v29, (__int64)v36, v29);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v36);
        sub_182CBA0(v25, v37);
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v34);
        sub_182CBA0(v20, v35);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v32);
        sub_182CBA0(v21, v33);
      }
    }
  }
  sub_1831620(qword_1C7F2C0, v24);
  sub_1831620(qword_1C7F2C0, v30);
  sub_1831620(qword_1C7F2C0, v29);
  return v24;
}

