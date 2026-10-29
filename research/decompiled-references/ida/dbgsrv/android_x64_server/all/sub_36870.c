/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36870
// Address: 0x0000000000036870

//----- (0000000000036870) ----------------------------------------------------
__int64 __fastcall sub_36870(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v6; // ebp
  size_t v7; // r15
  __int64 v8; // rax
  FILE *v9; // rax
  FILE *v10; // r14
  int v11; // r12d
  unsigned __int8 v12; // al
  __int64 v13; // rax
  FILE *v14; // rax
  FILE *v15; // r13
  int v16; // r14d
  const char *v17; // rsi
  unsigned __int64 n; // [rsp+8h] [rbp-1060h]
  void *ptr[2]; // [rsp+10h] [rbp-1058h] BYREF
  __int64 v21; // [rsp+20h] [rbp-1048h]
  int v22; // [rsp+2Ch] [rbp-103Ch] BYREF
  char path[4096]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v24; // [rsp+1030h] [rbp-38h]

  v6 = a2;
  v24 = __readfsqword(0x28u);
  qsnprintf(path, 4096, "/proc/%u/exe", a2);
  v7 = a4 - 1;
  LODWORD(v8) = readlink(path, a3, a4 - 1);
  if ( (int)v8 > 0 )
  {
    v8 = (int)v8;
LABEL_3:
    a3[v8] = 0;
    LOBYTE(a3) = 1;
    return (unsigned int)a3;
  }
  v9 = qfopen(path, (__int64)"r");
  if ( v9 )
  {
    v10 = v9;
    v11 = qfread(v9, a3, a4);
    qfclose(v10);
    if ( v11 >= 2 )
    {
      v8 = v11;
      if ( v11 < a4 && *a3 == 47 )
        goto LABEL_3;
    }
  }
  n = a4;
  *a3 = 0;
  *(_OWORD *)ptr = 0;
  v21 = 0;
  while ( 1 )
  {
    v12 = sub_36AB0(&v22, (__int64)ptr, v6);
    v6 = v22;
    if ( (v22 == 1) | v12 ^ 1 )
    {
      *a3 = 0;
      LODWORD(a3) = 0;
      goto LABEL_23;
    }
    qsnprintf(path, 4096, "/proc/%u/exe", v22);
    LODWORD(v13) = readlink(path, a3, v7);
    if ( (int)v13 > 0 )
      break;
    v14 = qfopen(path, (__int64)"r");
    v15 = v14;
    if ( v14 )
    {
      v16 = qfread(v14, a3, n);
      qfclose(v15);
      if ( v16 >= 2 )
      {
        v13 = v16;
        if ( v16 < n && *a3 == 47 )
          goto LABEL_19;
      }
    }
    *a3 = 0;
  }
  v13 = (int)v13;
LABEL_19:
  a3[v13] = 0;
  if ( ptr[1] )
    v17 = (const char *)ptr[0];
  else
    v17 = s1;
  memcpy(a3, v17, n);
  LOBYTE(a3) = 1;
LABEL_23:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v21 = 0;
  }
  return (unsigned int)a3;
}
