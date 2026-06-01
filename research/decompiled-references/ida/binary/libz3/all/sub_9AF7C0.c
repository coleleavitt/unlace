_BOOL8 __fastcall sub_9AF7C0(__int64 a1, unsigned int a2, __int64 a3)
{
  void *v5; // rbx
  void *v6; // rbx
  void *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  bool v11; // bp
  void *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r15
  int v15; // eax
  __int64 v17; // r15
  int v18; // eax
  __int64 i; // [rsp+18h] [rbp-C0h]
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+28h] [rbp-B0h]
  bool v22; // [rsp+30h] [rbp-A8h]
  void *v23; // [rsp+30h] [rbp-A8h]
  void *v24; // [rsp+30h] [rbp-A8h]
  void *v25; // [rsp+30h] [rbp-A8h]
  void *v26; // [rsp+38h] [rbp-A0h]
  void *v27; // [rsp+38h] [rbp-A0h]
  __int64 v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 v29; // [rsp+48h] [rbp-90h]
  __int64 v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+58h] [rbp-80h]
  _BYTE v32[16]; // [rsp+60h] [rbp-78h] BYREF
  int v33; // [rsp+70h] [rbp-68h] BYREF
  char v34; // [rsp+74h] [rbp-64h]
  _BYTE v35[16]; // [rsp+80h] [rbp-58h] BYREF
  int v36; // [rsp+90h] [rbp-48h] BYREF
  char v37; // [rsp+94h] [rbp-44h]

  v5 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  sub_182CBA0(v5, a3 + 16);
  *(_BYTE *)(a3 + 20) &= ~1u;
  v6 = qword_1C7F2C0;
  *(_DWORD *)(a3 + 16) = 1;
  v21 = a3 + 32;
  sub_182CEF0(v6, a3 + 32);
  sub_182CBA0(v6, a3 + 48);
  *(_BYTE *)(a3 + 52) &= ~1u;
  v7 = qword_1C7F2C0;
  *(_DWORD *)(a3 + 48) = 1;
  v20 = a3 + 64;
  sub_182CEF0(v7, a3 + 64);
  sub_182CBA0(v7, a3 + 80);
  v8 = *(_QWORD *)(a1 + 720);
  *(_BYTE *)(a3 + 84) &= ~1u;
  *(_DWORD *)(a3 + 80) = 1;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 696) + 24LL * (*(_DWORD *)(v8 + 4LL * a2) & 0xFFFFFFF));
  if ( v9 )
  {
    v22 = 0;
    for ( i = v9 + 40LL * *(unsigned int *)(v9 - 4); i != v9; v22 = v11 )
    {
      while ( 1 )
      {
        v10 = *(unsigned int *)(v9 + 32);
        v11 = (_DWORD)v10 != -1 && a2 != (_DWORD)v10;
        if ( v11 )
          break;
LABEL_4:
        v9 += 40;
        if ( i == v9 )
          goto LABEL_21;
      }
      v12 = qword_1C7F2C0;
      v13 = 96 * v10;
      if ( *(_DWORD *)(a1 + 976) >= *(_DWORD *)(*(_QWORD *)(a1 + 984) + 4 * v10) )
      {
        v28 = 0;
        v17 = *(_QWORD *)(a1 + 728) + v13;
        v29 = 0;
        v30 = 1;
        v31 = 0;
        if ( (*(_BYTE *)(v17 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v28, v17);
        else
          LODWORD(v28) = *(_DWORD *)v17;
        if ( (*(_BYTE *)(v17 + 20) & 1) != 0 )
        {
          sub_182C690(v12, &v30, v17 + 16);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 16);
          BYTE4(v30) &= ~1u;
          LODWORD(v30) = v18;
        }
        sub_91F480((__int64)v32, v17 + 32);
        if ( (v30 & 0x100000000LL) != 0
          || (_DWORD)v30 != 1
          || (*(_BYTE *)(v9 + 20) & 1) != 0
          || *(_DWORD *)(v9 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v28, v9);
        }
        else
        {
          v27 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, &v28, v9);
          sub_182CBA0(v27, &v30);
          BYTE4(v30) &= ~1u;
          LODWORD(v30) = 1;
        }
        sub_9AF730((__int64)qword_1C7F2C0, (__int64)v32, v9, (__int64)v32);
        if ( (v37 & 1) != 0 || v36 != 1 || (*(_BYTE *)(v9 + 20) & 1) != 0 || *(_DWORD *)(v9 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v35, v9);
        }
        else
        {
          v26 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v35, v9);
          sub_182CBA0(v26, &v36);
          v37 &= ~1u;
          v36 = 1;
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)&v28, a3);
        sub_2FC4A0((__int64)qword_1C7F2C0, v21, (__int64)v32, v21);
        sub_2FC4A0((__int64)qword_1C7F2C0, v20, (__int64)v35, v20);
        sub_2A6060((__int64)&v28);
        goto LABEL_4;
      }
      v28 = 0;
      v14 = *(_QWORD *)(a1 + 736) + v13;
      v29 = 0;
      v30 = 1;
      v31 = 0;
      if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v28, v14);
      else
        LODWORD(v28) = *(_DWORD *)v14;
      if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
      {
        sub_182C690(v12, &v30, v14 + 16);
      }
      else
      {
        v15 = *(_DWORD *)(v14 + 16);
        BYTE4(v30) &= ~1u;
        LODWORD(v30) = v15;
      }
      sub_91F480((__int64)v32, v14 + 32);
      if ( (v30 & 0x100000000LL) != 0 || (_DWORD)v30 != 1 || (*(_BYTE *)(v9 + 20) & 1) != 0 || *(_DWORD *)(v9 + 16) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v28, v9);
      }
      else
      {
        v23 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, &v28, v9);
        sub_182CBA0(v23, &v30);
        BYTE4(v30) &= ~1u;
        LODWORD(v30) = 1;
      }
      if ( (v34 & 1) != 0 || v33 != 1 || (*(_BYTE *)(v9 + 20) & 1) != 0 || *(_DWORD *)(v9 + 16) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v32, v9);
      }
      else
      {
        v25 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v32, v9);
        sub_182CBA0(v25, &v33);
        v34 &= ~1u;
        v33 = 1;
      }
      if ( (v37 & 1) != 0 || v36 != 1 || (*(_BYTE *)(v9 + 20) & 1) != 0 || *(_DWORD *)(v9 + 16) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v35, v9);
      }
      else
      {
        v24 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v35, v9);
        sub_182CBA0(v24, &v36);
        v37 &= ~1u;
        v36 = 1;
      }
      sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)&v28, a3);
      sub_2FC4A0((__int64)qword_1C7F2C0, v21, (__int64)v32, v21);
      sub_2FC4A0((__int64)qword_1C7F2C0, v20, (__int64)v35, v20);
      v9 += 40;
      sub_2A6060((__int64)&v28);
    }
  }
  else
  {
    v22 = 0;
  }
LABEL_21:
  sub_1831620(qword_1C7F2C0, a3);
  sub_1831620(qword_1C7F2C0, v21);
  sub_1831620(qword_1C7F2C0, v20);
  return v22;
}

