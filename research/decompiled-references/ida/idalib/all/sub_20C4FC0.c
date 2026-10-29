unsigned __int64 __fastcall sub_20C4FC0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // r10d
  unsigned int i; // eax
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 result; // rax
  unsigned __int64 *v16; // r13
  __int64 v17; // rdi
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  __int64 **v23; // [rsp+10h] [rbp-38h] BYREF
  int v24; // [rsp+18h] [rbp-30h]
  char v25; // [rsp+1Ch] [rbp-2Ch]

  v8 = **a1;
  v24 = a2;
  v23 = a1;
  v9 = *(_DWORD *)(v8 + 2600);
  v25 = 0;
  if ( !v9 )
  {
    v22 = 0;
LABEL_13:
    v9 *= 2;
    goto LABEL_14;
  }
  a6 = v9 - 1;
  v10 = *(_QWORD *)(v8 + 2584);
  v11 = 1;
  a3 = 0;
  for ( i = a6
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * a2) | ((unsigned __int64)(((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4)) << 32))) >> 31)
           ^ (756364221 * a2)); ; i = a6 & v14 )
  {
    v13 = v10 + 24LL * i;
    a5 = *(_QWORD *)v13;
    if ( a1 == *(__int64 ***)v13 && a2 == *(_DWORD *)(v13 + 8) && !*(_BYTE *)(v13 + 12) )
    {
      result = *(_QWORD *)(v13 + 16);
      v16 = (unsigned __int64 *)(v13 + 16);
      if ( !result )
        goto LABEL_18;
      return result;
    }
    if ( a5 == -4096 )
      break;
    if ( a5 == -8192 && *(_DWORD *)(v13 + 8) == -2 && *(_BYTE *)(v13 + 12) != 1 && !a3 )
      a3 = v10 + 24LL * i;
LABEL_7:
    v14 = v11 + i;
    ++v11;
  }
  if ( *(_DWORD *)(v13 + 8) != -1 || !*(_BYTE *)(v13 + 12) )
    goto LABEL_7;
  if ( !a3 )
    a3 = v10 + 24LL * i;
  a4 = (unsigned int)(*(_DWORD *)(v8 + 2592) + 1);
  v22 = a3;
  if ( 4 * (int)a4 >= 3 * v9 )
    goto LABEL_13;
  v17 = (__int64)a1;
  a5 = v9 >> 3;
  if ( v9 - *(_DWORD *)(v8 + 2596) - (unsigned int)a4 > (unsigned int)a5 )
    goto LABEL_15;
LABEL_14:
  sub_20C4700((__int64 **)(v8 + 2584), v9, a3, a4, a5, a6);
  sub_20C3420((__int64 *)(v8 + 2584), (__int64 *)&v23, &v22);
  v17 = (__int64)v23;
  a3 = v22;
  LODWORD(a4) = *(_DWORD *)(v8 + 2592) + 1;
LABEL_15:
  v18 = *(_QWORD *)a3 == -4096;
  *(_DWORD *)(v8 + 2592) = a4;
  if ( !v18 || *(_DWORD *)(a3 + 8) != -1 || !*(_BYTE *)(a3 + 12) )
    --*(_DWORD *)(v8 + 2596);
  v19 = v24;
  *(_QWORD *)a3 = v17;
  v16 = (unsigned __int64 *)(a3 + 16);
  *(_DWORD *)(a3 + 8) = v19;
  LOBYTE(v19) = v25;
  *(_QWORD *)(a3 + 16) = 0;
  *(_BYTE *)(a3 + 12) = v19;
LABEL_18:
  v20 = *(_QWORD *)(v8 + 2208);
  *(_QWORD *)(v8 + 2288) += 40LL;
  result = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(v8 + 2216) >= result + 40 && v20 )
    *(_QWORD *)(v8 + 2208) = result + 40;
  else
    result = sub_986170(v8 + 2208, 40, 40, 4, a5, a6);
  v21 = *a1;
  *(_DWORD *)(result + 32) = a2;
  *(_QWORD *)(result + 24) = a1;
  *(_QWORD *)result = v21;
  *(_QWORD *)(result + 16) = result + 24;
  *(_QWORD *)(result + 8) = 0x100000011LL;
  *v16 = result;
  return result;
}
