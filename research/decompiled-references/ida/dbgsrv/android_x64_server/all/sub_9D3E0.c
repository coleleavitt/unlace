/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D3E0
// Address: 0x000000000009D3E0

//----- (000000000009D3E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9D3E0(unsigned __int64 *a1)
{
  unsigned __int8 *v1; // rcx
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rax
  int v4; // ecx
  int v5; // ebp
  __int64 v6; // rdx
  unsigned int v7; // r15d
  unsigned __int8 *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // ecx
  int v12; // ebp
  __int64 v13; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  char *v17; // [rsp+0h] [rbp-38h] BYREF
  char v18; // [rsp+Bh] [rbp-2Dh] BYREF
  _BYTE v19[4]; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v1 = (unsigned __int8 *)*a1;
  v2 = *a1 + 1;
  if ( v2 < *a1 || (v3 = a1[1], v2 > v3) )
  {
    v18 = 0;
    v5 = 1;
    goto LABEL_8;
  }
  *a1 = v2;
  v4 = *v1;
  v18 = v4;
  v5 = 1;
  if ( (v4 & 0x80u) != 0 )
  {
    if ( (v4 & 0xFFFFFFC0) == 0xC0 )
    {
      v6 = (unsigned int)((v4 & 0xFFFFFFE0) == 224) + 3;
      if ( ((v4 & 0xFFFFFFE0) == 224) == -3 )
        goto LABEL_8;
      v5 = ((v4 & 0xFFFFFFE0) == 224) | 4;
    }
    else
    {
      v5 = 2;
      v6 = 1;
    }
    v15 = v2 + v6;
    if ( v2 + v6 >= v2 && v15 <= v3 )
    {
      *a1 = v15;
      __memcpy_chk(v19, v2, v6, 4);
    }
  }
LABEL_8:
  v17 = &v18;
  v7 = unpack_dd((unsigned __int64 *)&v17, (unsigned __int64)&v19[v5 - 1]);
  v8 = (unsigned __int8 *)*a1;
  v9 = *a1 + 1;
  if ( v9 < *a1 || (v10 = a1[1], v9 > v10) )
  {
    v18 = 0;
    v12 = 1;
    goto LABEL_15;
  }
  *a1 = v9;
  v11 = *v8;
  v18 = v11;
  v12 = 1;
  if ( (v11 & 0x80u) != 0 )
  {
    if ( (v11 & 0xFFFFFFC0) == 0xC0 )
    {
      v13 = (unsigned int)((v11 & 0xFFFFFFE0) == 224) + 3;
      if ( ((v11 & 0xFFFFFFE0) == 224) == -3 )
        goto LABEL_15;
      v12 = ((v11 & 0xFFFFFFE0) == 224) | 4;
    }
    else
    {
      v12 = 2;
      v13 = 1;
    }
    v16 = v9 + v13;
    if ( v9 + v13 >= v9 && v16 <= v10 )
    {
      *a1 = v16;
      __memcpy_chk(v19, v9, v13, 4);
    }
  }
LABEL_15:
  v17 = &v18;
  return v7 | (unsigned __int64)(unpack_dd((unsigned __int64 *)&v17, (unsigned __int64)&v19[v12 - 1]) << 32);
}
// 33BE0: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
