__int64 __fastcall sub_1F8860(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  bool v5; // zf
  unsigned __int8 v6; // r12
  int v7; // eax
  int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  struct _Unwind_Exception *v14; // rbx
  unsigned __int8 v15; // [rsp+Fh] [rbp-39h]
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  __int128 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v5 = *(_BYTE *)(a1 + 968) == 0;
  v18 = __readfsqword(0x28u);
  v6 = (unsigned __int8)a2;
  if ( v5 )
  {
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  if ( !*(_QWORD *)(a1 + 424) )
  {
    v14 = (struct _Unwind_Exception *)sub_1E69C0(a5, a1, (__int64)a2, a3, a4);
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16, a2);
    }
    _Unwind_Resume(v14);
  }
  v7 = *(_DWORD *)(a1 + 416);
  switch ( v7 )
  {
    case 2:
      v13 = *(_QWORD *)(a1 + 896);
      break;
    case 3:
      v13 = *(_QWORD *)(a1 + 904);
      break;
    case 1:
      goto LABEL_6;
    default:
      goto LABEL_14;
  }
LABEL_15:
  if ( *(_QWORD *)(a1 + 888) == v13 )
  {
    v7 = 1;
  }
  else if ( *(_QWORD *)(a1 + 896) == v13 )
  {
    v7 = 2;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 904) != v13 )
    {
      v8 = *(_DWORD *)(a1 + 944);
      if ( v8 )
        goto LABEL_7;
      return 1;
    }
    v7 = 3;
  }
LABEL_6:
  v8 = *(_DWORD *)(a1 + 944);
  if ( v8 == v7 )
    return 1;
LABEL_7:
  v9 = &v16;
  v16 = 0;
  v17 = 0;
  sub_1EB3E0((_QWORD *)a1, &v16, v8);
  v11 = 0;
  if ( (_QWORD)v17 )
  {
    while ( 1 )
    {
      v9 = *(__int64 **)(v16 + 8 * v11);
      result = sub_1F8250(a1, v9, v6, v10, 0.0);
      if ( (_BYTE)result )
        break;
      if ( ++v11 >= (unsigned __int64)v17 )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    result = 0;
  }
  if ( v16 )
  {
    v15 = result;
    *(_QWORD *)&v17 = 0;
    qfree(v16, (const char *)v9);
    return v15;
  }
  return result;
}
