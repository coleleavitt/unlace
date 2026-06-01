/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74140
// Address: 0x00074140

//----- (00074140) --------------------------------------------------------
int __fastcall sub_74140(char **a1)
{
  char *v2; // r0
  const char *v3; // r9
  int v4; // r3
  int v5; // r4
  size_t v7; // r10
  char *v8; // r1
  char *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r12
  __int64 v12; // kr08_8
  int v13; // r10
  char *v14; // r2
  void *v15; // r0
  int v16; // r3
  char *v17; // r3
  unsigned __int8 *v18; // [sp+4h] [bp-1020h] BYREF
  int v19; // [sp+8h] [bp-101Ch]
  int v20; // [sp+Ch] [bp-1018h]
  __int64 v21; // [sp+10h] [bp-1014h] BYREF
  int v22; // [sp+18h] [bp-100Ch]
  char v23[4]; // [sp+1Ch] [bp-1008h] BYREF

  sub_73E9C((int)a1, "cfg", 6);
  v19 = 0;
  v20 = 0;
  v18 = nullptr;
  if ( !sub_73A40((int)&v18) )
    goto LABEL_5;
  v2 = v19 ? sub_76A30(v23, 4096, v18, 0) : sub_76A30(v23, 4096, (unsigned __int8 *)&dword_8DA5C, 0);
  v3 = v2;
  if ( !sub_77448((int)v2) )
    goto LABEL_5;
  v21 = 0;
  v22 = 0;
  if ( v3 )
  {
    v7 = strlen(v3);
    LODWORD(v21) = sub_77EB0((int)&v21, nullptr, v7 + 1, 1u);
    HIDWORD(v21) = v7 + 1;
    memmove((void *)v21, v3, v7);
    *(_BYTE *)(v21 + v7) = 0;
  }
  v9 = a1[1];
  v8 = *a1;
  v10 = (unsigned int)a1[2];
  v11 = (unsigned int)(v9 + 1);
  if ( *a1 > (char *)&v21 || &v21 >= (__int64 *)&v8[12 * v10] )
  {
    if ( v10 < v11 )
    {
      v8 = (char *)sub_77EB0((int)a1, v8, (unsigned int)(a1[1] + 1), 0xCu);
      v9 = a1[1];
      *a1 = v8;
    }
    v16 = 12 * (_DWORD)v9;
    *(_DWORD *)&v8[v16] = v21;
    v17 = &v8[v16];
    *((_DWORD *)v17 + 1) = HIDWORD(v21);
    *((_DWORD *)v17 + 2) = v22;
    v4 = (int)(a1[1] + 1);
    a1[1] = (char *)v4;
  }
  else
  {
    v12 = v21;
    v13 = v22;
    v21 = 0;
    v22 = 0;
    if ( v10 < v11 )
    {
      v8 = (char *)sub_77EB0((int)a1, v8, v11, 0xCu);
      v9 = a1[1];
      *a1 = v8;
    }
    v14 = &v8[12 * (_DWORD)v9];
    *(_QWORD *)v14 = v12;
    *((_DWORD *)v14 + 2) = v13;
    v15 = (void *)v21;
    v4 = (int)(a1[1] + 1);
    a1[1] = (char *)v4;
    if ( v15 )
    {
      HIDWORD(v21) = 0;
      sub_77E08(v15);
LABEL_5:
      v4 = (int)a1[1];
    }
  }
  v5 = v4;
  if ( v4 )
    v5 = 1;
  if ( v18 )
  {
    v19 = 0;
    sub_77E08(v18);
  }
  return v5;
}
// 8DA5C: using guessed type int dword_8DA5C;
