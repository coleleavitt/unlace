unsigned __int64 *__fastcall sub_9E0580(
        unsigned __int64 *a1,
        __int64 **a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rbp
  __int16 v8; // ax
  __int64 *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  char v20; // al
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // [rsp+8h] [rbp-50h]
  _QWORD v24[2]; // [rsp+10h] [rbp-48h] BYREF
  char v25; // [rsp+20h] [rbp-38h]

  if ( !a3 )
    goto LABEL_9;
  v7 = a3;
  v8 = *(_WORD *)a3 & 0x1FF;
  if ( v8 == 9 )
  {
    if ( *(_DWORD *)(a3 + 16) * ((*(_WORD *)(a3 + 2) >> 6) & 7) == 1
      && *(_BYTE *)(a3 + 4LL * *(unsigned int *)(a3 + 4) + 20) == 42 )
    {
      v9 = *a2;
      v10 = **a2;
      v9[10] += 16;
      v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v9[1] >= v11 + 16 && v10 )
      {
        *v9 = v11 + 16;
        v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v12 = sub_986170((__int64)v9, 16, 16, 4, a5, a6);
        v11 = v12 & 0xFFFFFFFFFFFFFFF9LL;
      }
      *(_QWORD *)v12 = 2;
      *(_QWORD *)(v12 + 8) = 0;
      a1[1] = (unsigned __int64)"wildcard";
      *a1 = v11;
      a1[2] = 8;
      return a1;
    }
LABEL_9:
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
  }
  if ( v8 == 91 )
  {
    v14 = 0;
    if ( ((*(_BYTE *)(a3 + 3) >> 1) & 0x3F) == 0xE )
    {
      v14 = 1;
      v7 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    }
  }
  else
  {
    v14 = 0;
    if ( v8 == 4 && *(_BYTE *)(a3 + 2) >> 3 == 9 )
    {
      v23 = a4;
      v14 = 1;
      v22 = sub_BFB900(*(_QWORD *)(a3 + 16));
      a4 = v23;
      v7 = v22;
    }
  }
  v15 = sub_9DF520((__int64)a2, v7, a4, (__int64)a4);
  v19 = (unsigned __int64)v15;
  if ( !v15 )
    goto LABEL_9;
  v20 = *(_BYTE *)v15;
  if ( v20 == 3 )
    goto LABEL_9;
  if ( v20 == 21 && *(_BYTE *)(v19 + 2) == 5 )
    v19 = *(_QWORD *)(v19 + 16);
  sub_9DD0C0(v24, *(_QWORD *)(v7 + 8), v16, v17, v18);
  v21 = v24[1];
  if ( v25 )
    v14 = (unsigned int)v14 | 2;
  a1[1] = v24[0];
  a1[2] = v21;
  *a1 = (2 * v14) | v19 & 0xFFFFFFFFFFFFFFF9LL;
  return a1;
}
