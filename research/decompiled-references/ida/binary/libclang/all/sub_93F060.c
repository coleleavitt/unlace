__int64 __fastcall sub_93F060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  int v10; // eax
  unsigned int v11; // edx
  char v12; // al
  unsigned int v13; // esi
  unsigned __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // edx
  void *v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // eax
  void *v25; // rdx
  char v26; // [rsp+0h] [rbp-98h]
  unsigned int v27; // [rsp+0h] [rbp-98h]
  void *v28; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-80h]
  void *v30; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-70h]
  void *v32; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-60h]
  void *v34; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-50h]
  void *v36; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v34, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v37 = *(_DWORD *)(a4 + 8);
    if ( v37 > 0x40 )
      sub_2585B30(&v36);
    else
      v36 = *(void **)a4;
    sub_8CC450((__int64)&v36, &v34, a4);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
  }
  v8 = sub_93ECD0(a1, a2, a3, a4, v7);
  if ( (_BYTE)v8 )
  {
    v10 = *(_DWORD *)(a3 + 8);
    v11 = *(_DWORD *)(a4 + 8);
    v29 = 3;
    v28 = &byte_7;
    sub_92A4D0((__int64)&v36, v10 - 1, v11);
    v12 = sub_922400(a4, (__int64)&v36);
    if ( v37 > 0x40 && v36 )
    {
      v26 = v12;
      operator delete[](v36);
      v12 = v26;
    }
    v13 = *(_DWORD *)(a3 + 8);
    v14 = *(_QWORD *)a3;
    v15 = v13 - 1;
    v16 = 1LL << ((unsigned __int8)v13 - 1);
    if ( v12 == 3 )
    {
      if ( v13 > 0x40 )
        v14 = *(_QWORD *)(v14 + 8LL * (v15 >> 6));
      if ( (v16 & v14) != 0 )
      {
        sub_8F62E0((__int64)&v36, v13);
        v28 = v36;
        v18 = v37;
        v29 = v37;
        goto LABEL_12;
      }
      v27 = *(_DWORD *)(a4 + 8);
      v23 = sub_831980(a3);
      sub_92A4D0((__int64)&v36, v23, v27);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v24 = v37;
      v25 = v36;
      *(_DWORD *)(a4 + 8) = v37;
      *(_QWORD *)a4 = v25;
      v35 = v24;
      if ( v24 > 0x40 )
        sub_2585B30(&v34);
      else
        v34 = v25;
      sub_91FD90((__int64)&v36, (__int64)&v34, v7);
      v31 = *(_DWORD *)(a3 + 8);
      if ( v31 > 0x40 )
        sub_2585B30(&v30);
      else
        v30 = *(void **)a3;
      sub_8CC270((__int64)&v32, (__int64)&v30);
      sub_8CC680((__int64)&v32, (__int64)&v36, (__int64)&v28);
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      if ( v35 <= 0x40 )
        goto LABEL_49;
      v22 = v34;
      if ( !v34 )
        goto LABEL_49;
      goto LABEL_48;
    }
    if ( v13 <= 0x40 )
    {
      if ( (v16 & v14) != 0 )
      {
LABEL_29:
        sub_938B60((__int64)&v36, a3);
        sub_8CC270((__int64)&v30, (__int64)&v36);
        if ( v37 > 0x40 && v36 )
          operator delete[](v36);
        v33 = *(_DWORD *)(a4 + 8);
        if ( v33 > 0x40 )
          sub_2585B30(&v32);
        else
          v32 = *(void **)a4;
        sub_91FD90((__int64)&v34, (__int64)&v32, v7);
        v37 = v31;
        if ( v31 > 0x40 )
          sub_2585B30(&v36);
        else
          v36 = v30;
        sub_8CC680((__int64)&v36, (__int64)&v34, (__int64)&v28);
        if ( v37 > 0x40 && v36 )
          operator delete[](v36);
        if ( v35 > 0x40 && v34 )
          operator delete[](v34);
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
        sub_938170((__int64)&v36, (__int64)&v28);
        if ( v29 > 0x40 && v28 )
          operator delete[](v28);
        v28 = v36;
        v18 = v37;
        v29 = v37;
        if ( v31 <= 0x40 )
          goto LABEL_12;
        v22 = v30;
        if ( !v30 )
          goto LABEL_12;
LABEL_48:
        operator delete[](v22);
LABEL_49:
        v18 = v29;
        goto LABEL_12;
      }
    }
    else if ( (*(_QWORD *)(v14 + 8LL * (v15 >> 6)) & v16) != 0 )
    {
      v17 = sub_2587400(a3);
      if ( v17 == v13 )
      {
        sub_8F62E0((__int64)&v36, v17);
        v28 = v36;
        v18 = v37;
        v29 = v37;
LABEL_12:
        v35 = v18;
        v19 = *(_QWORD *)(a1 + 184);
        if ( v18 > 0x40 )
          sub_2585B30(&v34);
        else
          v34 = v28;
        sub_8CC190((__int64)&v36, (__int64)&v34);
        v20 = sub_A1A4E0(v19, 16);
        v21 = v37;
        v37 = 0;
        *(_DWORD *)(v20 + 8) = v21;
        *(_QWORD *)v20 = v36;
        if ( v35 > 0x40 && v34 )
          operator delete[](v34);
        if ( v29 > 0x40 && v28 )
          operator delete[](v28);
        return v8;
      }
      goto LABEL_29;
    }
    v33 = *(_DWORD *)(a4 + 8);
    if ( v33 > 0x40 )
      sub_2585B30(&v32);
    else
      v32 = *(void **)a4;
    if ( !v7 )
      v7 = v33;
    sub_2587E20(&v36, &v32, v7);
    v35 = v37;
    if ( v37 > 0x40 )
    {
      sub_2585B30(&v34);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
    }
    else
    {
      v34 = v36;
    }
    v31 = *(_DWORD *)(a3 + 8);
    if ( v31 > 0x40 )
      sub_2585B30(&v30);
    else
      v30 = *(void **)a3;
    sub_8CC270((__int64)&v36, (__int64)&v30);
    sub_8CC680((__int64)&v36, (__int64)&v34, (__int64)&v28);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    if ( v33 <= 0x40 )
      goto LABEL_49;
    v22 = v32;
    if ( !v32 )
      goto LABEL_49;
    goto LABEL_48;
  }
  return v8;
}

