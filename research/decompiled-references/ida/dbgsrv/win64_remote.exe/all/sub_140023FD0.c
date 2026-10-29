/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140023FD0
// Address: 0x0000000140023FD0

//----- (0000000140023FD0) ----------------------------------------------------
__int64 __fastcall sub_140023FD0(char *a1, char *a2, char *a3, char *a4, unsigned __int64 a5, __int64 a6)
{
  char v9; // al
  char *v10; // rbx
  _QWORD *v11; // rsi
  void *i; // rdx
  char *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // r10
  char **v17; // rcx
  char **v18; // rax
  const char *v19; // rax
  const char *v20; // rdi
  size_t v21; // rax
  char *v22; // rcx
  unsigned int v23; // r15d
  char *v24; // rsi
  char *v25; // rbx
  int v26; // edi
  signed __int64 v27; // rsi
  char *v28; // rdx
  char *v29; // rcx
  unsigned __int8 v30; // r15
  char *v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  char *v35; // rbx
  void *v36; // rcx
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  void *v39[2]; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  char v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v42[2]; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  void *v44; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  _BYTE v47[160]; // [rsp+A0h] [rbp-60h] BYREF

  v41[0] = 2;
  v42[1] = nullptr;
  v43 = 0;
  v42[0] = nullptr;
  if ( a3 || !a2 )
  {
    if ( (unsigned int)sub_140029410(v41, (__int64)a2, a3, 0) )
    {
LABEL_25:
      sub_140021BB0((__int64)a1);
      if ( a6 )
      {
        v19 = sub_140064D10(-1);
        v20 = v19;
        if ( v19 && (v21 = strlen(v19)) != 0 )
          sub_140001810(a6, v20, v21);
        else
          *(_QWORD *)(a6 + 8) = 0;
      }
      v30 = 0;
      goto LABEL_66;
    }
  }
  else
  {
    sub_140028E70(v41, a2);
  }
  v9 = v41[0];
  if ( v41[0] == 10 )
  {
    v10 = v41;
    Block = nullptr;
    v39[0] = nullptr;
    v39[1] = nullptr;
    v11 = sub_14002DA30();
    for ( i = nullptr; ; i = ++v39[0] )
    {
      v13 = v10 + 8;
      v10 = nullptr;
      v14 = *((int *)v13 + 2);
      if ( (v14 & 0x80000000) != 0LL )
      {
        v10 = (char *)sub_1400258A0((__int64)v11, ~(_DWORD)v14);
        i = v39[0];
      }
      else
      {
        v15 = *(_QWORD *)v13;
        if ( v15 && *(_DWORD *)v15 == 289621065 && v14 < *(_QWORD *)(v15 + 32) )
          v10 = (char *)(*(_QWORD *)(v15 + 24) + 32 * v14);
      }
      if ( !v10 )
        goto LABEL_34;
      if ( *v10 != 10 )
        break;
      v16 = Block;
      v17 = (char **)Block;
      v18 = (char **)((char *)Block + 8 * (_QWORD)i);
      if ( Block != v18 )
      {
        while ( v10 != *v17 )
        {
          if ( ++v17 == v18 )
            goto LABEL_18;
        }
LABEL_34:
        sub_1400640B0(0x61Bu);
        if ( Block )
        {
          v39[0] = nullptr;
          j_free(Block);
        }
        goto LABEL_25;
      }
LABEL_18:
      if ( v17 != v18 )
        goto LABEL_34;
      if ( (char *)i + 1 > v39[1] )
      {
        v16 = sub_14005ABE0((__int64)&Block, Block, (unsigned __int64)i + 1, 8u);
        Block = v16;
        i = v39[0];
      }
      *((_QWORD *)v16 + (_QWORD)i) = v10;
    }
    v41[0] = 2;
    if ( (unsigned int)sub_140028E70(v41, v10) )
    {
      if ( Block )
      {
        v39[0] = nullptr;
        j_free(Block);
      }
      goto LABEL_25;
    }
    if ( Block )
    {
      v39[0] = nullptr;
      j_free(Block);
      Block = nullptr;
      v39[1] = nullptr;
    }
    v9 = v41[0];
  }
  if ( v9 != 6 )
  {
    sub_1400640B0(0x605u);
    goto LABEL_25;
  }
  v22 = nullptr;
  v44 = nullptr;
  v45 = 0;
  v46 = 0;
  if ( a2 )
  {
    v23 = a5 + 1;
    if ( a5 != -1 )
    {
      LOBYTE(Block) = 2;
      v39[1] = nullptr;
      v40 = 0;
      v39[0] = nullptr;
      sub_140028810((__int64)&v44, a5 + 1, (char *)&Block);
      if ( (_BYTE)Block == 5 )
      {
        sub_140024A20((_DWORD *)v39[0], (char *)&Block);
      }
      else if ( (_BYTE)Block == 7 && v39[0] )
      {
        v39[1] = nullptr;
        j_free(v39[0]);
      }
      LOBYTE(Block) = 2;
      v22 = (char *)v44;
    }
    v24 = a4;
    a4 = v22;
    v25 = v22 + 32;
    sub_140028E70(v22, a2);
    v26 = 0;
    if ( a5 )
    {
      v27 = v24 - v25;
      do
      {
        v28 = &v25[v27];
        v29 = v25;
        v25 += 32;
        sub_140028E70(v29, v28);
        ++v26;
      }
      while ( v26 < a5 );
    }
  }
  else
  {
    v23 = a5;
  }
  sub_1400210A0((__int64)v47, 0, 0);
  v30 = sub_1400288C0((__int64)v47, nullptr, (int)v42[0], v23, a4, a1, a6);
  sub_140021420((__int64)v47);
  v31 = (char *)v44;
  if ( v44 )
  {
    v32 = v45;
    v33 = 0;
    if ( v45 )
    {
      v34 = 0;
      do
      {
        v35 = &v31[v34];
        if ( !&v31[v34] )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(2656);
        }
        if ( *v35 == 5 )
        {
          sub_140024A20(*((_DWORD **)v35 + 1), &v31[v34]);
        }
        else if ( *v35 == 7 )
        {
          v36 = *((void **)v35 + 1);
          if ( v36 )
          {
            *((_QWORD *)v35 + 2) = 0;
            j_free(v36);
            *((_QWORD *)v35 + 3) = 0;
          }
        }
        *v35 = 2;
        *((_QWORD *)v35 + 1) = 0;
        ++v33;
        v34 += 32;
        v31 = (char *)v44;
      }
      while ( v33 < v32 );
    }
    v45 = 0;
    j_free(v31);
    v44 = nullptr;
    v46 = 0;
  }
LABEL_66:
  if ( v41[0] == 5 )
  {
    sub_140024A20((_DWORD *)v42[0], v41);
  }
  else if ( v41[0] == 7 && v42[0] )
  {
    v42[1] = nullptr;
    j_free(v42[0]);
  }
  return v30;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
