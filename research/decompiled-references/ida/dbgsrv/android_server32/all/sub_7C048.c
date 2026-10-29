/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C048
// Address: 0x0007C048

//----- (0007C048) --------------------------------------------------------
int __fastcall sub_7C048(_DWORD *a1, __int64 a2, char *a3, size_t n)
{
  char *v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r1
  __int64 v10; // r2
  int v11; // r7
  __int64 v12; // r0
  bool v13; // zf
  size_t v14; // r0
  _DWORD *v15; // r1
  int v16; // r0
  int result; // r0
  _DWORD *v18; // r3
  bool v19; // cf
  _DWORD *v20; // r3
  int whence; // [sp+0h] [bp-1Ch] BYREF
  _DWORD *v22; // [sp+4h] [bp-18h]
  void *ptr; // [sp+8h] [bp-14h]
  int v24; // [sp+Ch] [bp-10h]
  int v25; // [sp+10h] [bp-Ch]
  int v26; // [sp+14h] [bp-8h]
  _DWORD *v27; // [sp+18h] [bp-4h]

  if ( *((_QWORD *)a1 + 5) != a2 )
  {
    set_qerrno(3);
    v16 = 0;
    return ~v16;
  }
  v22 = a1 + 10;
  v6 = a3;
  v7 = a1[8];
  v8 = a1[6];
  ptr = a3;
  if ( v7 >= v8 )
    goto LABEL_24;
  v10 = *((_QWORD *)a1 + 6);
  v25 = 0;
  v26 = -1;
  v27 = a1 + 12;
  v6 = (char *)ptr;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1[5] + 4 * v7);
    HIDWORD(v12) = v26;
    LODWORD(v12) = v26;
    if ( v11 )
    {
      if ( *(int *)v11 < 2 )
      {
        v24 = *(_DWORD *)(v11 + 8);
        v13 = qfseek((FILE *)v24, (int)&whence, v10, SHIDWORD(v10), 0) == 0;
        HIDWORD(v12) = v26;
        LODWORD(v12) = v26;
        if ( v13 )
          v12 = qftell((FILE *)*(_DWORD *)(v11 + 8));
      }
      else
      {
        *(_QWORD *)(v11 + 24) = v10;
        v12 = v10;
      }
    }
    if ( *(_QWORD *)v27 != v12 )
    {
      v16 = v25;
      return ~v16;
    }
    if ( v11 )
    {
      if ( *(int *)v11 < 2 )
      {
        v14 = qfread(*(FILE **)(v11 + 8), v6, n);
        if ( v14 != -1 )
          goto LABEL_17;
      }
      else
      {
        v14 = sub_7B4E0(v11, v6, n);
        if ( v14 != -1 )
          goto LABEL_17;
      }
    }
    v14 = 0;
LABEL_17:
    n -= v14;
    v6 += v14;
    if ( !n )
      break;
    v7 = a1[8] + 1;
    a1[8] = v7;
    v15 = v27;
    HIDWORD(v10) = v25;
    *v27 = v25;
    v15[1] = HIDWORD(v10);
    LODWORD(v10) = HIDWORD(v10);
    if ( v7 >= a1[6] )
      goto LABEL_24;
  }
  v18 = v27;
  v19 = __CFADD__(*v27, v14);
  *v27 += v14;
  v18[1] += v19;
LABEL_24:
  result = v6 - (_BYTE *)ptr;
  v20 = v22;
  v19 = __CFADD__(*v22, v6 - (_BYTE *)ptr);
  *v22 += v6 - (_BYTE *)ptr;
  v20[1] += v19;
  return result;
}
