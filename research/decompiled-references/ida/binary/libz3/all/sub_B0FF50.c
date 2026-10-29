__int64 __fastcall sub_B0FF50(__int64 a1, int a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // edi
  _DWORD *v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned int **v21; // rbp
  unsigned int v22; // ebx
  __int64 v24; // rdi
  __int64 v25; // rdi
  char v26; // bp
  unsigned int **v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdi
  unsigned int v30; // r13d
  int v31; // ecx
  __int64 i; // rax
  unsigned int *v33; // rdx
  __int64 v34; // [rsp+10h] [rbp-108h]
  __int64 v35; // [rsp+18h] [rbp-100h]
  char v37; // [rsp+30h] [rbp-E8h]
  unsigned int v38; // [rsp+30h] [rbp-E8h]
  __int64 v40; // [rsp+40h] [rbp-D8h]
  _QWORD v41[3]; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-B8h]
  _QWORD v43[3]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-98h]
  _QWORD v45[3]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-78h]
  __int64 v47; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-68h]
  __int64 v49; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-48h]

  LODWORD(v7) = 0;
  v8 = *(_QWORD *)(*a4 + 8LL * a5);
  v9 = *(_DWORD *)(v8 + 8) & 1;
  v10 = *(_DWORD *)(v8 + 8) & 1;
  v11 = *(_DWORD **)(v8 + 40 * v9 + 16);
  if ( a2 == *v11 >> 1 )
  {
    v12 = 0;
  }
  else
  {
    do
    {
      v7 = (unsigned int)(v7 + 1);
      v12 = 40 * v7;
    }
    while ( a2 != v11[10 * v7] >> 1 );
  }
  v41[0] = 0;
  v13 = v8 + 40 * v9;
  v40 = a1 + 72;
  v41[1] = 0;
  v42 = a1 + 72;
  v43[0] = 0;
  v43[1] = 0;
  if ( (*(_BYTE *)(v13 + 28) & 1) != 0 )
  {
    sub_182EA00(a1 + 72, v43, v8 + (-v10 & 0x28) + 24);
    v14 = a1 + 72;
  }
  else
  {
    v14 = a1 + 72;
    LODWORD(v43[0]) = *(_DWORD *)(v13 + 24);
  }
  if ( (v43[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(v14, v41, v43);
    v14 = a1 + 72;
  }
  else
  {
    BYTE4(v41[0]) &= ~1u;
    LODWORD(v41[0]) = v43[0];
  }
  sub_1839610(v14, v41, *(_QWORD *)(v8 + 40LL * (*(_DWORD *)(v8 + 8) & 1) + 16) + v12 + 8);
  v15 = a1 + 72;
  v50 = 0;
  v34 = v8 + 104;
  v49 = a1 + 72;
  v51 = 0;
  if ( (v41[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(v40, &v50, v41);
    v15 = v49;
  }
  else
  {
    LODWORD(v50) = v41[0];
  }
  sub_1839610(v15, &v50, v34);
  v16 = v49;
  v47 = 0;
  v48 = 0;
  v46 = v49;
  if ( (v50 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v49, &v47, &v50);
    v16 = v49;
  }
  else
  {
    LODWORD(v47) = v50;
  }
  sub_182EF00(v16, &v50);
  v35 = v8 + 136;
  v37 = sub_B156B0(*(_QWORD *)(v8 + 128), v8 + 136, &v47);
  sub_182EF00(v46, &v47);
  v17 = *(_DWORD *)(v8 + 120);
  if ( v37 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v8 + 40LL * (*(_DWORD *)(v8 + 8) & 1) + 16);
      if ( !v18 || v17 >= *(_DWORD *)(v18 - 4) )
        break;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *(unsigned int *)(v18 + 40LL * v17)) == 0xFF )
      {
        ++v17;
      }
      else
      {
        sub_B08C10(a1, v8, v17);
        v19 = a1 + 72;
        v50 = 0;
        v51 = 0;
        v49 = a1 + 72;
        if ( (v41[0] & 0x100000000LL) != 0 )
        {
          sub_182EA00(v40, &v50, v41);
          v19 = v49;
        }
        else
        {
          LODWORD(v50) = v41[0];
        }
        sub_1839610(v19, &v50, v34);
        v20 = v49;
        v47 = 0;
        v48 = 0;
        v46 = v49;
        if ( (v50 & 0x100000000LL) != 0 )
        {
          sub_182EA00(v49, &v47, &v50);
          v20 = v49;
        }
        else
        {
          LODWORD(v47) = v50;
        }
        sub_182EF00(v20, &v50);
        if ( (*(_BYTE *)(v8 + 140) & 1) != 0 || (v47 & 0x100000000LL) != 0 )
          v38 = (unsigned int)sub_182EB00(*(_QWORD *)(v8 + 128), v35, &v47) >> 31;
        else
          LOBYTE(v38) = *(_DWORD *)(v8 + 136) < (int)v47;
        ++v17;
        sub_182EF00(v46, &v47);
        if ( !(_BYTE)v38 )
          break;
      }
    }
  }
  if ( (unsigned __int8)sub_B156B0(*(_QWORD *)(v8 + 128), v35, v41) )
  {
    v21 = (unsigned int **)sub_B0FE70(a1, v8, 0);
    LODWORD(v49) = *(_DWORD *)(v8 + 8) ^ 1;
    sub_B0E290(v21, (unsigned int *)&v49);
    sub_B05AC0(a1, v8, (__int64 *)v21);
    v22 = 0;
  }
  else
  {
    sub_B04D20(a1, a4, a5, v8, v7);
    v24 = v42;
    v50 = 0;
    v51 = 0;
    v49 = v42;
    if ( (v43[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v42, &v50, v43);
      v24 = v49;
    }
    else
    {
      LODWORD(v50) = v43[0];
    }
    sub_1839610(v24, &v50, v34);
    v25 = v49;
    v47 = 0;
    v48 = 0;
    v46 = v49;
    if ( (v50 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v49, &v47, &v50);
      v25 = v49;
    }
    else
    {
      LODWORD(v47) = v50;
    }
    sub_182EF00(v25, &v50);
    v26 = sub_B156B0(*(_QWORD *)(v8 + 128), v35, &v47);
    sub_182EF00(v46, &v47);
    if ( v26 )
    {
      v27 = (unsigned int **)sub_B0FE70(a1, v8, 1u);
      LODWORD(v49) = *(_DWORD *)(v8 + 8);
      sub_B0E290(v27, (unsigned int *)&v49);
      v28 = *(_QWORD *)(v8 + 128);
      v45[0] = 0;
      v45[1] = 0;
      v44 = a1 + 72;
      v49 = v28;
      v50 = 0;
      v51 = 0;
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      {
        sub_182EA00(v28, &v50, v35);
        v28 = v49;
      }
      else
      {
        LODWORD(v50) = *(_DWORD *)(v8 + 136);
      }
      sub_183A580(v28, &v50, v43, &v50);
      v29 = v49;
      v47 = 0;
      v48 = 0;
      v46 = v49;
      if ( (v50 & 0x100000000LL) != 0 )
      {
        sub_182EA00(v49, &v47, &v50);
        v29 = v49;
      }
      else
      {
        LODWORD(v47) = v50;
      }
      sub_182EF00(v29, &v50);
      if ( (v47 & 0x100000000LL) != 0 )
      {
        sub_182EA00(v44, v45, &v47);
      }
      else
      {
        BYTE4(v45[0]) &= ~1u;
        LODWORD(v45[0]) = v47;
      }
      v30 = 0;
      sub_182EF00(v46, &v47);
      v31 = *(_DWORD *)(v8 + 8);
      for ( i = *(_QWORD *)(v8 + 40LL * (v31 & 1) + 16); i; i = *(_QWORD *)(v8 + 40LL * (v31 & 1) + 16) )
      {
        if ( v30 >= *(_DWORD *)(i - 4) )
          break;
        v33 = (unsigned int *)(i + 40LL * v30);
        if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *v33) )
        {
          if ( (unsigned __int8)sub_B156B0(v44, v45, v33 + 2) )
            sub_B0DF40(
              a1,
              v8,
              (__int64 *)v27,
              *(_DWORD *)(*(_QWORD *)(v8 + 40LL * (*(_DWORD *)(v8 + 8) & 1) + 16) + 40LL * v30));
          v31 = *(_DWORD *)(v8 + 8);
        }
        ++v30;
      }
      sub_182EF00(v44, v45);
    }
    v22 = 1;
  }
  sub_182EF00(v42, v43);
  sub_182EF00(v40, v41);
  return v22;
}

