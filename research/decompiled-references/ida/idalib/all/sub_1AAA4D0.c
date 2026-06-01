__int64 __fastcall sub_1AAA4D0(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // dx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v28[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v30; // [rsp+30h] [rbp-98h] BYREF
  char v31; // [rsp+88h] [rbp-40h]
  unsigned int v32; // [rsp+90h] [rbp-38h]
  char v33; // [rsp+94h] [rbp-34h]

  v4 = sub_BFBAE0(a2);
  v7 = *(_WORD *)v4 & 0x1FF;
  if ( v7 == 16 )
    return 1;
  v8 = v4;
  if ( v7 != 109 && v7 != 69 )
  {
    if ( v7 != 71 )
    {
      v15 = v4;
      if ( (unsigned int)v7 - 23 > 1 )
      {
        v13 = sub_EEB7E0(v4, a2, a3);
        v14 = 2929;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v9 = *(_QWORD *)(v4 + 16);
    v10 = *(_BYTE *)(v9 + 28) & 0x7F;
    v11 = (unsigned int)(v10 - 34);
    if ( (unsigned int)v11 > 5 )
    {
      if ( (unsigned int)(v10 - 40) > 6 )
        goto LABEL_8;
      v12 = *(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      if ( !v12 )
        goto LABEL_8;
      v17 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v9, v11, v5, v6);
      v18 = v17;
      if ( v17 )
      {
        v15 = v8;
        if ( !sub_B96EF0((__int64)v17) )
        {
          v19 = v18[16];
          if ( v19 && (*(_BYTE *)(v19 + 10) & 0x20) != 0 )
            return v8;
LABEL_8:
          v13 = sub_EEB7E0(v8, a2, a3);
          v14 = 2929;
LABEL_11:
          sub_168B9F0((__int64)v28, a1, v13, v14, 0);
          if ( v31 )
          {
            sub_AE9DF0(&v30, v8, 0xFu);
          }
          else if ( v33 )
          {
            v22 = sub_168B9E0(v28);
            v25 = v29;
            if ( v29 )
              v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
            v27 = v25;
            v26 = sub_1587BC0(v22, &v27, v20, v21, v23, v24);
            sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v32 + 8), v8, 0xFu);
          }
          sub_15F7200(v28);
          return 1;
        }
LABEL_10:
        v13 = sub_EEB7E0(v15, a2, a3);
        v14 = 2930;
        goto LABEL_11;
      }
      if ( (*(_BYTE *)(*(_QWORD *)v12 + 17LL) & 4) == 0 )
        goto LABEL_8;
    }
  }
  return v8;
}
