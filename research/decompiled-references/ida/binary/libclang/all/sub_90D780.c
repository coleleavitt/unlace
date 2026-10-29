__int64 __fastcall sub_90D780(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rbp
  __int64 *v17; // rbx
  void *v18; // rax
  void *v19; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-90h]
  void *v21; // [rsp+10h] [rbp-88h]
  unsigned int v22; // [rsp+18h] [rbp-80h]
  void *v23; // [rsp+20h] [rbp-78h]
  unsigned int v24; // [rsp+28h] [rbp-70h]
  void *v25; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-60h]
  void *v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-50h]
  void *v29; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-40h]
  void *v31; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v20 = v4;
  v19 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 16);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v22 = v7;
  v21 = *(void **)v6;
  sub_A1A5E0(v5, 16);
  v10 = v20;
  if ( v20 <= 0x40 )
  {
    if ( v19 )
    {
      v28 = v20;
      v24 = 3;
      v27 = v19;
      v23 = &byte_7;
      v26 = v22;
      if ( v22 <= 0x40 )
        goto LABEL_4;
      goto LABEL_37;
    }
  }
  else if ( v10 != (unsigned int)sub_2587400(&v19) )
  {
    v24 = 3;
    v28 = v10;
    v23 = &byte_7;
    sub_2585B30(&v27);
    v26 = v22;
    if ( v22 <= 0x40 )
    {
LABEL_4:
      v25 = v21;
LABEL_5:
      sub_25893F0(&v31, &v25, &v27, v8, v9);
      v30 = v32;
      if ( v32 > 0x40 )
        sub_2585B30(&v29);
      else
        v29 = v31;
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      v23 = v29;
      v11 = v30;
      v30 = 0;
      v24 = v11;
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      v12 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
      v13 = v24;
      *(_DWORD *)(v12 + 8) = v24;
      if ( v13 > 0x40 )
        sub_2585B30(v12);
      else
        *(_QWORD *)v12 = v23;
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      v14 = 1;
      goto LABEL_25;
    }
LABEL_37:
    sub_2585B30(&v25);
    goto LABEL_5;
  }
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v17 = (__int64 *)sub_A2E130(a1, v16, 2306, 0);
  v18 = (void *)sub_AC7B80(*(_QWORD *)(v16 + 24));
  if ( v17 )
  {
    v31 = v18;
    LOBYTE(v32) = 1;
    sub_839C90(v17, (__int64 *)&v31);
  }
  v14 = 0;
LABEL_25:
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  return v14;
}

