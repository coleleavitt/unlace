/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032E60
// Address: 0x0000000100032E60

//----- (0000000100032E60) ----------------------------------------------------
__int64 __fastcall sub_100032E60(void **a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // ecx
  int v5; // eax
  int v6; // r12d
  int *v7; // r15
  __int64 v8; // r15
  __int64 v9; // r14
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  unsigned __int8 *v13; // rax
  size_t v14; // r13
  char *v15; // r12
  char *v16; // rbx
  int v17; // r14d
  int v19; // [rsp+4h] [rbp-6Ch]
  unsigned __int8 v21; // [rsp+1Fh] [rbp-51h] BYREF
  unsigned __int8 __src[20]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v23[12]; // [rsp+34h] [rbp-3Ch] BYREF

  a1[3] = a1[1];
  v2 = a2[1];
  if ( v2 )
  {
    sub_100032FE0(a1, v2);
    if ( a2[1] )
    {
      v3 = 0;
      v4 = 1;
      v5 = 0;
      v6 = 0;
      do
      {
        v19 = v4;
        v8 = *a2;
        v9 = 16 * v3;
        v10 = pack_dd(__src, (unsigned __int64)v23, *(_DWORD *)(*a2 + v9) - v5);
        v11 = pack_dd(v10, (unsigned __int64)v23, *(_DWORD *)(v8 + v9 + 4) - v6);
        v12 = pack_dd(v11, (unsigned __int64)v23, *(_DWORD *)(v8 + v9 + 8));
        v13 = pack_dd(v12, (unsigned __int64)v23, *(_DWORD *)(v8 + v9 + 12));
        v14 = v13 - __src;
        if ( v13 != __src )
        {
          v15 = (char *)a1[1];
          v21 = 0;
          sub_10001CE90((__int64)a1, (unsigned __int64)&v15[v14], &v21);
          memcpy(&v15[(_QWORD)*a1], __src, v14);
        }
        v7 = (int *)(v9 + v8);
        v5 = *v7;
        v6 = v7[1];
        v3 = v19;
        v4 = v19 + 1;
      }
      while ( a2[1] > (unsigned __int64)v19 );
    }
  }
  v16 = (char *)a1[1];
  v17 = (_DWORD)v16 - *((_DWORD *)a1 + 6);
  __src[0] = 0;
  sub_10001CE90((__int64)a1, (unsigned __int64)(v16 + 2), __src);
  *(_WORD *)&v16[(_QWORD)*a1] = v17;
  return __stack_chk_guard;
}
