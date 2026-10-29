void __fastcall sub_1E68180(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v5; // rax
  __int16 v6; // ax
  bool v7; // al
  __int64 v8; // r12
  int v9; // edx
  unsigned int *v10; // rbp
  size_t v11; // r13
  char *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  size_t v31; // rax
  __int64 v32; // [rsp+8h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v34; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v37[11]; // [rsp+40h] [rbp-98h] BYREF
  char v38; // [rsp+98h] [rbp-40h]
  unsigned int v39; // [rsp+A0h] [rbp-38h]
  char v40; // [rsp+A4h] [rbp-34h]

  v5 = *(_QWORD *)(a2 + 72);
  v32 = a3;
  v6 = *(_WORD *)(v5 + 8);
  if ( v6 == 263 )
  {
    v8 = 1;
    v7 = 1;
  }
  else
  {
    v7 = v6 == 271;
    v8 = 2LL * v7;
  }
  v9 = *(_DWORD *)(a2 + 24);
  v10 = *(unsigned int **)(*(_QWORD *)a2 + 16LL);
  v33 = v9;
  v11 = *v10;
  v12 = (char *)(v10 + 4);
  if ( *(_WORD *)(a2 + 56) )
  {
    v13 = *(_QWORD *)(a2 + 80);
    if ( (v13 & 2) != 0 && v7 )
    {
      v14 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      if ( v9 < 0 )
      {
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 16);
          if ( (unsigned int)*(_QWORD *)v15 == 6 )
          {
            if ( *(_DWORD *)(v15 + 16) == 1869771891 && *(_WORD *)(v15 + 20) == 26478 )
            {
              v31 = j__strlen("__strong");
              if ( (unsigned __int8)sub_15F1800(a1, (int *)&v33, "__strong", v31, a4, a5) )
              {
                v12 = "__strong";
                v11 = j__strlen("__strong");
              }
            }
          }
          else if ( (unsigned int)*(_QWORD *)v15 == 4 && *(_DWORD *)(v15 + 16) == 1801545079 )
          {
            v16 = j__strlen("__weak");
            if ( (unsigned __int8)sub_15F1800(a1, (int *)&v33, "__weak", v16, a4, a5) )
            {
              v12 = "__weak";
              v11 = j__strlen("__weak");
            }
          }
        }
      }
    }
  }
  sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), v33, (*(_BYTE *)(a2 + 35) & 2) == 0 ? 7451 : 5189, 0);
  if ( v38 )
  {
    sub_AEC220(v37, v12, v11);
    if ( v38 )
      goto LABEL_19;
  }
  else
  {
    if ( !v40 )
      goto LABEL_6;
    v21 = sub_168B9E0(v35);
    v22 = v36;
    if ( v36 )
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    v34 = v22;
    v23 = sub_1587BC0(v21, &v34, v17, v18, v19, v20);
    sub_AEC220((unsigned __int8 **)(*v23 + 32LL * v39 + 8), v12, v11);
    if ( v38 )
    {
LABEL_19:
      sub_1E5E160(v37, v8);
      goto LABEL_6;
    }
  }
  if ( v40 )
  {
    v26 = sub_168B9E0(v35);
    v29 = v36;
    if ( v36 )
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    v34 = v29;
    v30 = sub_1587BC0(v26, &v34, v24, v25, v27, v28);
    sub_1E5E160((unsigned __int8 **)(*v30 + 32LL * v39 + 8), v8);
  }
LABEL_6:
  sub_1605D30((__int64)v35, &v32);
  sub_15F7200(v35);
}
