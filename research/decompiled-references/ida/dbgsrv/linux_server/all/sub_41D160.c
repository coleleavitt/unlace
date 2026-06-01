/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D160
// Address: 0x000000000041D160

//----- (000000000041D160) ----------------------------------------------------
__int64 __fastcall sub_41D160(
        __int64 a1,
        unsigned int a2,
        __off64_t a3,
        unsigned __int64 *a4,
        int a5,
        char a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 result; // rax
  __int64 v16; // rbx
  int v17; // r13d
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // ebp
  unsigned __int64 *v21; // r15
  int *v22; // rbx
  __int64 v23; // rcx
  int v24; // r13d
  int v25; // r14d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  char v29; // r15
  int v30; // eax
  int v31; // r14d
  int v32; // [rsp+8h] [rbp-B0h]
  unsigned int v33; // [rsp+Ch] [rbp-ACh]
  size_t nbytes; // [rsp+18h] [rbp-A0h]
  __int64 v36; // [rsp+20h] [rbp-98h]
  char v38; // [rsp+2Fh] [rbp-89h]
  char file[72]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v33 = a2;
  v40 = __readfsqword(0x28u);
  result = 0;
  if ( *(_BYTE *)(a1 + 1349) )
    return result;
  v16 = a1;
  if ( *(_DWORD *)(a1 + 1340) == -1 )
    return result;
  v17 = a5;
  if ( a6 )
  {
    sub_41C660(a1, 0, 1, *(double *)a7.m128_u64, a8, a9, a10, a11, a12, a13, a14);
    if ( a2 == -1 )
      v33 = *(_DWORD *)(a1 + 1340);
    nbytes = v17;
    if ( (unsigned __int64)v17 > 0x18 )
    {
      v29 = a6;
      v20 = 0;
      goto LABEL_32;
    }
    if ( v17 )
    {
      v38 = a6;
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  nbytes = a5;
  if ( a2 != -1 )
  {
    if ( (unsigned __int64)a5 > 0x18 )
    {
      v29 = 1;
      v20 = 0;
      goto LABEL_32;
    }
    if ( a5 )
    {
      v38 = 1;
      goto LABEL_20;
    }
    return result;
  }
  if ( (unsigned __int64)a5 > 0x18 )
  {
    v33 = *(_DWORD *)(a1 + 1340);
    v29 = 1;
    v20 = 0;
    goto LABEL_32;
  }
  if ( a5 )
  {
    v33 = *(_DWORD *)(a1 + 1340);
    v38 = 1;
LABEL_20:
    while ( 1 )
    {
      v20 = 0;
      v36 = v16;
      v21 = a4;
      v32 = v17;
      v22 = __errno_location();
      while ( 1 )
      {
        v24 = a3 & 7;
        *v22 = 0;
        v25 = v32 - v20;
        if ( v32 - v20 > 8 - v24 )
          v25 = 8 - v24;
        v26 = ptrace(PTRACE_PEEKTEXT, v33, a3 - (a3 & 7), 0);
        if ( *v22 )
          break;
        if ( v25 == 8 )
        {
          *v21 = v26;
          v23 = 8;
        }
        else
        {
          v27 = v26 >> (8 * (unsigned __int8)v24);
          v23 = v25;
          if ( v25 > 0 )
          {
            v23 = v25;
            v28 = v21;
            do
            {
              *(_BYTE *)v28 = v27;
              v28 = (unsigned __int64 *)((char *)v28 + 1);
              v27 >>= 8;
            }
            while ( (unsigned __int64 *)((char *)v21 + v25) != v28 );
          }
        }
        v21 = (unsigned __int64 *)((char *)v21 + v23);
        a3 += v23;
        v20 += v25;
        if ( v32 <= v20 )
        {
          v16 = v36;
          goto LABEL_9;
        }
      }
      v17 = v32;
      v16 = v36;
      if ( v32 <= v20 || !v38 )
        break;
      v29 = 0;
LABEL_32:
      sub_485490(file, 64, "/proc/%d/mem", v33);
      v30 = open(file, 0);
      v31 = v30;
      if ( v30 != -1 )
      {
        v20 = pread64(v30, a4, nbytes, a3);
        close(v31);
      }
      if ( v20 == v17 || !v29 )
        break;
      if ( v17 <= 0 )
      {
        result = 0;
        goto LABEL_11;
      }
      v38 = 0;
    }
LABEL_9:
    result = 0;
    if ( v20 >= 0 )
      result = (unsigned int)v20;
LABEL_11:
    if ( a6 )
    {
      v17 = result;
LABEL_13:
      sub_41CFB0(v16, 0, 1, a7, a8, a9, a10, v18, v19, a13, a14);
      return (unsigned int)v17;
    }
  }
  return result;
}
// 41D200: variable 'v18' is possibly undefined
// 41D200: variable 'v19' is possibly undefined
