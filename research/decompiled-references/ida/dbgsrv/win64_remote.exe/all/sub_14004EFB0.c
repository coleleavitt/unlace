/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004EFB0
// Address: 0x000000014004EFB0

//----- (000000014004EFB0) ----------------------------------------------------
__int64 __fastcall sub_14004EFB0(__int64 a1, _QWORD *a2, const char **a3, int a4)
{
  void *v6; // rcx
  __int64 v7; // r12
  const char *v8; // rsi
  signed int v9; // r13d
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  size_t v13; // r14
  size_t v14; // rax
  size_t v15; // rdi
  size_t v16; // rbx
  char *v17; // rcx
  size_t v18; // r14
  size_t v19; // rax
  size_t v20; // rdi
  size_t v21; // rbx
  char *v22; // rcx
  const char *v23; // r15
  signed int v24; // edi
  char v25; // cl
  const char *v26; // rax
  signed __int64 v27; // rsi
  signed __int64 v28; // r14
  size_t v29; // rax
  size_t v30; // rsi
  size_t v31; // rbx
  char *v32; // rcx
  const char *v33; // rsi
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // rax
  size_t v37; // rdi
  size_t v38; // rbx
  char *v39; // rcx
  int v40; // r15d
  size_t v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rbx
  char *v45; // rcx
  size_t v46; // rsi
  void *v47; // r14
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  char *v51; // rcx
  unsigned int v52; // ebx
  void *v53; // [rsp+20h] [rbp-59h] BYREF
  size_t Size; // [rsp+28h] [rbp-51h]
  size_t v55; // [rsp+30h] [rbp-49h]
  void *Block; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-39h]
  unsigned __int64 v58; // [rsp+48h] [rbp-31h]
  signed int v59; // [rsp+50h] [rbp-29h]
  _QWORD *v60; // [rsp+58h] [rbp-21h]
  const char **v61; // [rsp+60h] [rbp-19h]
  __int64 v62; // [rsp+68h] [rbp-11h]
  _BYTE v63[5]; // [rsp+70h] [rbp-9h] BYREF
  char v64[3]; // [rsp+75h] [rbp-4h] BYREF
  _BYTE v65[5]; // [rsp+78h] [rbp-1h] BYREF
  char v66[3]; // [rsp+7Dh] [rbp+4h] BYREF
  _BYTE v67[5]; // [rsp+80h] [rbp+7h] BYREF
  char v68[3]; // [rsp+85h] [rbp+Ch] BYREF
  _BYTE Src[10]; // [rsp+88h] [rbp+Fh] BYREF
  char v70[6]; // [rsp+92h] [rbp+19h] BYREF

  v59 = a4;
  v61 = a3;
  v60 = a2;
  if ( !a4 )
    return 0;
  v6 = nullptr;
  v53 = nullptr;
  Size = 0;
  v55 = 0;
  if ( a4 <= 0 )
  {
LABEL_99:
    v52 = 0;
  }
  else
  {
    v62 = a1 + 192;
    while ( 1 )
    {
      Size = 0;
      v7 = 0;
      v8 = pNodeName;
      v9 = 0;
      do
      {
        v10 = *a2 - v7;
        v11 = (unsigned __int64)v10 >> 63;
        v12 = v7 - *a2;
        if ( v10 >= 0 )
          v12 = v10;
        v13 = sub_14005B5A0(Src, (unsigned __int64)v70, v12 + 1) - Src;
        if ( v13 )
        {
          v14 = Size;
          v15 = Size;
          v16 = v13 + Size;
          if ( v13 + Size < Size )
            v16 = 0x7FFFFFFFFFFFFFFFLL;
          if ( v16 <= Size )
          {
            if ( v16 != Size )
            {
              if ( v16 < Size )
                v14 = v16;
              Size = v14;
            }
          }
          else
          {
            if ( v16 <= v55 )
            {
              v17 = (char *)v53;
            }
            else
            {
              v17 = (char *)sub_14005ABE0((__int64)&v53, v53, v16, 1u);
              v53 = v17;
              v14 = Size;
            }
            memset(&v17[v14], 0, v16 - v14);
            Size = v16;
          }
          memcpy((char *)v53 + v15, Src, v13);
        }
        v18 = sub_14005B4D0(v63, (unsigned __int64)v64, (unsigned __int8)v11) - v63;
        if ( v18 )
        {
          v19 = Size;
          v20 = Size;
          v21 = v18 + Size;
          if ( v18 + Size < Size )
            v21 = 0x7FFFFFFFFFFFFFFFLL;
          if ( v21 <= Size )
          {
            if ( v21 != Size )
            {
              if ( v21 < Size )
                v19 = v21;
              Size = v19;
            }
          }
          else
          {
            if ( v21 <= v55 )
            {
              v22 = (char *)v53;
            }
            else
            {
              v22 = (char *)sub_14005ABE0((__int64)&v53, v53, v21, 1u);
              v53 = v22;
              v19 = Size;
            }
            memset(&v22[v19], 0, v21 - v19);
            Size = v21;
          }
          memcpy((char *)v53 + v20, v63, v18);
        }
        v7 = *v60;
        v23 = *v61;
        v24 = 0;
        v25 = **v61;
        if ( v25 )
        {
          v26 = *v61;
          v27 = v8 - v23;
          do
          {
            if ( v25 != v26[v27] )
              break;
            ++v24;
            v25 = *++v26;
          }
          while ( *v26 );
        }
        v28 = sub_14005B4D0(v65, (unsigned __int64)v66, v24) - v65;
        if ( v28 )
        {
          v29 = Size;
          v30 = Size;
          v31 = Size + v28;
          if ( Size + v28 < Size )
            v31 = 0x7FFFFFFFFFFFFFFFLL;
          if ( v31 <= Size )
          {
            if ( v31 != Size )
            {
              if ( v31 < Size )
                v29 = v31;
              Size = v29;
            }
          }
          else
          {
            if ( v31 <= v55 )
            {
              v32 = (char *)v53;
            }
            else
            {
              v32 = (char *)sub_14005ABE0((__int64)&v53, v53, v31, 1u);
              v53 = v32;
              v29 = Size;
            }
            memset(&v32[v29], 0, v31 - v29);
            Size = v31;
          }
          memcpy((char *)v53 + v30, v65, v28);
        }
        v33 = pNodeName;
        if ( &v23[v24] )
          v33 = &v23[v24];
        v34 = strlen(v33);
        v35 = v34 + 1;
        if ( v34 != -1 )
        {
          v36 = Size;
          v37 = Size;
          v38 = v35 + Size;
          if ( v35 + Size < Size )
            v38 = 0x7FFFFFFFFFFFFFFFLL;
          if ( v38 <= Size )
          {
            if ( v38 != Size )
            {
              if ( v38 < Size )
                v36 = v38;
              Size = v36;
            }
          }
          else
          {
            if ( v38 <= v55 )
            {
              v39 = (char *)v53;
            }
            else
            {
              v39 = (char *)sub_14005ABE0((__int64)&v53, v53, v38, 1u);
              v53 = v39;
              v36 = Size;
            }
            memset(&v39[v36], 0, v38 - v36);
            Size = v38;
          }
          memcpy((char *)v53 + v37, v33, v35);
        }
        v8 = v23;
        a2 = ++v60;
        ++v61;
        ++v9;
      }
      while ( Size <= 0x100000 && v9 < v59 );
      v40 = v59 - v9;
      v59 -= v9;
      sub_140054B30((__int64 *)&Block, 50);
      v41 = sub_14005B4D0(v67, (unsigned __int64)v68, v9) - v67;
      if ( v41 )
      {
        v42 = v57;
        v43 = v57;
        v44 = v41 + v57;
        if ( v41 + v57 < v57 )
          v44 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v44 <= v57 )
        {
          if ( v44 != v57 )
          {
            if ( v44 < v57 )
              v42 = v44;
            v57 = v42;
          }
        }
        else
        {
          if ( v44 <= v58 )
          {
            v45 = (char *)Block;
          }
          else
          {
            v45 = (char *)sub_14005ABE0((__int64)&Block, Block, v44, 1u);
            Block = v45;
            v42 = v57;
          }
          memset(&v45[v42], 0, v44 - v42);
          v57 = v44;
        }
        memcpy((char *)Block + v43, v67, v41);
      }
      v46 = Size;
      v47 = v53;
      if ( Size )
      {
        v48 = v57;
        v49 = v57;
        v50 = Size + v57;
        if ( Size + v57 < v57 )
          v50 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v50 <= v57 )
        {
          if ( v50 != v57 )
          {
            if ( v50 < v57 )
              v48 = v50;
            v57 = v48;
          }
        }
        else
        {
          if ( v50 <= v58 )
          {
            v51 = (char *)Block;
          }
          else
          {
            v51 = (char *)sub_14005ABE0((__int64)&Block, Block, v50, 1u);
            Block = v51;
            v48 = v57;
          }
          memset(&v51[v48], 0, v50 - v48);
          v57 = v50;
        }
        memcpy((char *)Block + v49, v47, v46);
      }
      if ( v9 != (unsigned int)sub_140051AF0(v62, (__int64)&Block, 0xFFFFFFFF, 0) )
        break;
      if ( Block )
      {
        v57 = 0;
        j_free(Block);
      }
      a2 = v60;
      if ( v40 <= 0 )
      {
        v6 = v53;
        goto LABEL_99;
      }
    }
    if ( Block )
    {
      v57 = 0;
      j_free(Block);
    }
    v6 = v53;
    v52 = 1;
  }
  if ( v6 )
  {
    Size = 0;
    j_free(v6);
  }
  return v52;
}
