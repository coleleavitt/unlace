/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E891E
// Address: 0x00000000000E891E

//----- (00000000000E891E) ----------------------------------------------------
__int64 __fastcall sub_E891E(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  unsigned int *FDE; // rax
  unsigned int *v8; // r13
  unsigned int *v9; // r15
  _BYTE *v10; // r12
  _BYTE *v11; // rdi
  __int64 v12; // rax
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rdx
  char *v16; // rax
  char *v17; // r8
  _BYTE *i; // r12
  char v19; // dl
  char v20; // r14
  char *v21; // rax
  char *v22; // rdi
  unsigned __int8 v23; // al
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rax
  char *v27; // r14
  char *v28; // r12
  char v29; // r15
  char *v30; // rax
  char *v31; // [rsp+10h] [rbp-68h]
  char *v32; // [rsp+18h] [rbp-60h]
  __int64 v33; // [rsp+28h] [rbp-50h] BYREF
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = 96;
  v4 = (_DWORD *)a2;
  while ( v2 )
  {
    *v4++ = 0;
    --v2;
  }
  v5 = a1[19];
  a1[26] = 0;
  a1[20] = 0;
  if ( !v5 )
    return 5;
  FDE = Unwind_Find_FDE(v5 + (a1[24] >> 63) - 1, a1 + 21);
  v8 = FDE;
  if ( !FDE )
    return 5;
  *(_QWORD *)(a2 + 328) = a1[23];
  v9 = (unsigned int *)((char *)FDE - (int)FDE[1] + 4);
  v10 = (char *)v9 + 9;
  v11 = (char *)v9 + strlen((const char *)v9 + 9) + 10;
  if ( *((_BYTE *)v9 + 9) == 101 && *((_BYTE *)v9 + 10) == 104 )
  {
    v12 = *(_QWORD *)v11;
    v10 = (char *)v9 + 11;
    v11 += 8;
    *(_QWORD *)(a2 + 376) = v12;
  }
  if ( *((_BYTE *)v9 + 8) > 3u )
  {
    if ( *v11 != 8 || v11[1] )
      return 3;
    v11 += 2;
  }
  v13 = sub_E7845(v11, &v33);
  *(_QWORD *)(a2 + 352) = v33;
  v14 = sub_E786B(v13, &v34);
  *(_QWORD *)(a2 + 344) = v34;
  if ( *((_BYTE *)v9 + 8) == 1 )
  {
    v15 = (unsigned __int8)*v14;
    v16 = v14 + 1;
  }
  else
  {
    v16 = sub_E7845(v14, &v33);
    v15 = v33;
  }
  *(_QWORD *)(a2 + 360) = v15;
  v17 = nullptr;
  *(_BYTE *)(a2 + 369) = -1;
  if ( *v10 == 122 )
  {
    v16 = sub_E7845(v16, &v33);
    ++v10;
    *(_BYTE *)(a2 + 370) = 1;
    v17 = &v16[v33];
  }
  for ( i = v10 + 1; ; ++i )
  {
    v19 = *(i - 1);
    if ( !v19 )
      break;
    switch ( v19 )
    {
      case 'L':
        *(_BYTE *)(a2 + 369) = *v16;
LABEL_25:
        ++v16;
        continue;
      case 'R':
        *(_BYTE *)(a2 + 368) = *v16;
        goto LABEL_25;
      case 'P':
        v20 = *v16;
        v32 = v17;
        v31 = v16 + 1;
        v21 = (char *)sub_E7BE2(*v16, (__int64)a1);
        v16 = sub_E78A7(v20, v21, v31, v35);
        v17 = v32;
        *(_QWORD *)(a2 + 336) = v35[0];
        break;
      case 'S':
        *(_BYTE *)(a2 + 371) = 1;
        break;
      default:
        v22 = v17;
        goto LABEL_35;
    }
  }
  if ( v17 )
    v16 = v17;
  v22 = v16;
LABEL_35:
  if ( !v22 )
    return 3;
  sub_E7C2A(v22, (unsigned __int64)v9 + *v9 + 4, a1, a2);
  if ( *(_BYTE *)(a2 + 368) == 0xFF )
  {
    v25 = 0;
  }
  else
  {
    v23 = *(_BYTE *)(a2 + 368) & 7;
    if ( v23 == 2 )
    {
      v25 = 2;
    }
    else
    {
      if ( v23 <= 2u )
      {
        v24 = v23 == 0;
        goto LABEL_42;
      }
      if ( v23 == 3 )
      {
        v25 = 4;
      }
      else
      {
        v24 = v23 == 4;
LABEL_42:
        if ( !v24 )
          abort();
        v25 = 8;
      }
    }
  }
  v26 = (unsigned int)(2 * v25);
  v27 = nullptr;
  v28 = (char *)v8 + v26 + 8;
  if ( *(_BYTE *)(a2 + 370) )
  {
    v28 = sub_E7845((_BYTE *)v8 + v26 + 8, v35);
    v27 = &v28[v35[0]];
  }
  v29 = *(_BYTE *)(a2 + 369);
  if ( v29 != -1 )
  {
    v30 = (char *)sub_E7BE2(*(_BYTE *)(a2 + 369), (__int64)a1);
    v28 = sub_E78A7(v29, v30, v28, v35);
    a1[20] = v35[0];
  }
  if ( !v27 )
    v27 = v28;
  sub_E7C2A(v27, (unsigned __int64)v8 + *v8 + 4, a1, a2);
  return 0;
}
