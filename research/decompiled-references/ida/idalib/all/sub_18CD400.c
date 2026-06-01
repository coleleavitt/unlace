void __fastcall sub_18CD400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v7; // r14
  unsigned __int64 v8; // r13
  char v9; // cl
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31[3]; // [rsp+0h] [rbp-F8h] BYREF
  void *v32; // [rsp+18h] [rbp-E0h]
  __int64 v33; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v36; // [rsp+60h] [rbp-98h] BYREF
  char v37; // [rsp+B8h] [rbp-40h]
  unsigned int v38; // [rsp+C0h] [rbp-38h]
  char v39; // [rsp+C4h] [rbp-34h]

  v7 = *(_BYTE **)(a2 + 112);
  if ( v7 )
  {
    if ( !(v7[81] >> 5) )
    {
      v8 = *(_QWORD *)(a2 + 112);
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 104);
        if ( (v10 & 1) != 0 )
          break;
        if ( (v10 & 2) != 0 )
        {
          if ( v9 )
            goto LABEL_20;
          v25 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
          v9 = 1;
          if ( v25 )
          {
            v26 = v25[2295];
            if ( v26 )
            {
              v27 = v25[294];
              v25[304] += 24LL;
              v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v25[295] >= v28 + 24 && v27 )
              {
                v25[294] = v28 + 24;
                v29 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v29 = sub_986170((__int64)(v25 + 294), 24, 24, 3, a5, a6);
                v28 = v29 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v29 = v26;
              v30 = v28 | 4;
              *(_DWORD *)(v29 + 8) = 0;
              *(_QWORD *)(v29 + 16) = v8;
            }
            else
            {
              v30 = v8 & 0xFFFFFFFFFFFFFFFBLL;
            }
            v11 = v30 & 0xFFFFFFFFFFFFFFFELL;
            v10 = v11 | 1;
            *(_QWORD *)(v8 + 104) = v11 | 1;
            goto LABEL_12;
          }
LABEL_30:
          v12 = 0;
LABEL_18:
          v8 = v12;
          goto LABEL_6;
        }
        v8 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_30;
LABEL_6:
        if ( v7 == (_BYTE *)v8 || !v8 )
          goto LABEL_20;
        if ( *(_BYTE *)(v8 + 81) >> 5 )
          return;
      }
      if ( v9 )
        goto LABEL_20;
      v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
LABEL_12:
      v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = 1;
      v13 = v12;
      if ( v11 )
      {
        v14 = v11 & 4;
        if ( (_DWORD)v14 )
        {
          if ( v12 )
          {
            v15 = *(_QWORD *)v12;
            v16 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
            if ( *(_DWORD *)(v13 + 8) != v16 )
            {
              *(_DWORD *)(v13 + 8) = v16;
              (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v15 + 152LL))(
                v15,
                v8,
                v14,
                1);
            }
            v12 = *(_QWORD *)(v13 + 16);
            v9 = 1;
          }
        }
      }
      goto LABEL_18;
    }
  }
  else
  {
LABEL_20:
    v17 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 16LL))(v7);
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v17, 0x16DDu, 0);
    if ( v37 )
    {
      sub_AE9DF0(&v36, a2, 0xAu);
    }
    else if ( v39 )
    {
      v20 = sub_168B9E0(v34);
      v23 = v35;
      if ( v35 )
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      v31[0] = v23;
      v24 = sub_1587BC0(v20, v31, v18, v19, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v38 + 8), a2, 0xAu);
    }
    sub_9EC740((__int64)v31, v17, "static ", 7, 0);
    sub_1589170((__int64)v34, v31);
    if ( v32 != &v33 )
      operator delete(v32);
    sub_15F7200(v34);
  }
}
