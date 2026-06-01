unsigned __int64 __fastcall sub_B54B20(__int64 **a1, int a2, int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  const char **v11; // rax
  __int64 v12; // r9
  size_t v13; // rax
  int v14; // edx
  char v15; // cl
  char v16; // al
  __int64 v17; // r8
  __int64 *v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 result; // rax
  __int16 v21; // dx
  __int16 v22; // dx
  const char *v23; // [rsp+8h] [rbp-40h]
  char v24; // [rsp+8h] [rbp-40h]

  v11 = (const char **)sub_B3E290((__int64)a1[3], a4);
  if ( !*v11 )
    goto LABEL_8;
  v23 = *v11;
  v13 = strlen(*v11);
  if ( v13 == 1 )
  {
    v14 = *(unsigned __int8 *)v23;
    v15 = 1;
    v16 = *v23;
    if ( v14 == 98 )
    {
LABEL_16:
      v17 = v15 & 7;
      goto LABEL_9;
    }
    if ( v14 == 99 || v16 == 112 )
    {
      v17 = 2;
      goto LABEL_9;
    }
    if ( v16 != 97 && v16 != 101 )
      goto LABEL_8;
LABEL_15:
    v15 = 3;
    goto LABEL_16;
  }
  if ( v13 == 2 )
  {
    v17 = 0;
    if ( *(_WORD *)v23 != 28005 )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( v13 != 6 || *(_DWORD *)v23 != 1751346785 || (v17 = 4, *((_WORD *)v23 + 2) != 29295) )
LABEL_8:
    v17 = 0;
LABEL_9:
  v18 = *a1;
  v19 = **a1;
  v18[10] += 32;
  result = (v19 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v18[1] >= result + 32 && v19 )
  {
    *v18 = result + 32;
  }
  else
  {
    v24 = v17;
    result = sub_986170((__int64)v18, 32, 32, 4, v17, v12);
    LOBYTE(v17) = v24;
  }
  v21 = *(_WORD *)(result + 12);
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  v22 = v21 & 0xFE00 | 3;
  *(_QWORD *)(result + 16) = a5;
  *(_WORD *)(result + 12) = v22;
  *(_QWORD *)(result + 24) = a6;
  *(_BYTE *)(result + 13) = (2 * v17) | HIBYTE(v22) & 0xF1;
  *(_DWORD *)(result + 12) = *(_DWORD *)(result + 12) & 0xFFF | (a4 << 12);
  return result;
}
