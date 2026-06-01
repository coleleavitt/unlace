__int64 __fastcall sub_21EF140(int *a1, __int64 a2)
{
  unsigned __int16 *v3; // rsi
  void **v5; // r12
  void **v6; // rdi
  __int64 v7; // rdx
  bool v8; // bp
  __int64 v9; // rax
  void *v10; // rbp
  _BOOL8 v11; // rdx
  char v12; // al
  int v13; // eax
  __int64 v15; // rdx
  bool v16; // r13
  _BOOL8 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // rdi
  void *v23; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-90h]
  bool v25; // [rsp+Ch] [rbp-8Ch]
  void *v26; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-80h]
  bool v28; // [rsp+1Ch] [rbp-7Ch]
  void *v29; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-70h]
  void *v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h]
  void *v33; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-40h]
  char v35; // [rsp+63h] [rbp-35h]

  v3 = (unsigned __int16 *)a1;
  v5 = &v33;
  v6 = &v33;
  sub_21EEC90((__int64)&v33, v3);
  v8 = (v35 & 0x20) == 0;
  LODWORD(v32) = v34;
  if ( v34 > 0x40 )
  {
    v3 = (unsigned __int16 *)&v33;
    v6 = &v31;
    sub_2205510(&v31);
    v25 = v8;
    v24 = v32;
    v23 = v31;
    if ( v34 > 0x40 )
    {
      v6 = (void **)v33;
      if ( v33 )
      {
        operator delete[](v33);
        v9 = sub_21F90D0(v6, &v33, v15);
        v10 = (void *)v9;
        if ( a2 != v9 )
          goto LABEL_4;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v24 = v34;
    v25 = (v35 & 0x20) == 0;
    v23 = v33;
  }
  v9 = sub_21F90D0(v6, v3, v7);
  v10 = (void *)v9;
  if ( a2 != v9 )
  {
LABEL_4:
    sub_21FBA00(&v31, a2);
    goto LABEL_5;
  }
LABEL_19:
  sub_21FFBD0(&v31, v9);
LABEL_5:
  v11 = !v25;
  if ( v31 == v10 )
    v12 = sub_2201FE0(&v31, &v23, v11, 4);
  else
    v12 = sub_21FB140(&v31, &v23, v11, 4);
  v13 = v12 & 4;
  if ( !v13 && (*a1 & 0x20000000) != 0 )
  {
    sub_21EEEF0((__int64)&v33, a1);
    v16 = (v35 & 0x20) == 0;
    v30 = v34;
    if ( v34 > 0x40 )
    {
      sub_2205510(&v29);
      v28 = v16;
      v27 = v30;
      v26 = v29;
      if ( v34 > 0x40 && v33 )
      {
        operator delete[](v33);
        v16 = v28;
      }
    }
    else
    {
      v27 = v34;
      v28 = (v35 & 0x20) == 0;
      v26 = v33;
    }
    v17 = !v16;
    if ( v10 == v31 )
      v18 = sub_2201FE0(&v31, &v26, v17, 4);
    else
      v18 = sub_21FB140(&v31, &v26, v17, 4);
    LODWORD(v5) = ((unsigned __int8)(v18 >> 2) ^ 1) & 1;
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
  }
  else
  {
    LOBYTE(v5) = v13 == 0;
  }
  if ( v10 == v31 )
  {
    if ( v32 )
    {
      v19 = 24LL * *(_QWORD *)(v32 - 8);
      v20 = v32 + v19;
      if ( v32 != v32 + v19 )
      {
        while ( 1 )
        {
          v21 = v20 - 24;
          v22 = v20 - 24;
          if ( v10 == *(void **)(v20 - 24) )
          {
            sub_A4F010(v22);
            if ( v32 == v21 )
            {
LABEL_34:
              operator delete[]((void *)(v20 - 32), 24LL * *(_QWORD *)(v20 - 32) + 8);
              goto LABEL_12;
            }
          }
          else
          {
            sub_21F9830(v22);
            if ( v21 == v32 )
              goto LABEL_34;
          }
          v20 -= 24;
        }
      }
      operator delete[]((void *)(v32 - 8), v19 + 8);
    }
  }
  else
  {
    sub_21F9830(&v31);
  }
LABEL_12:
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  return (unsigned int)v5;
}
