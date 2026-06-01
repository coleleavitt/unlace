__int64 __fastcall sub_2060B50(__int64 a1, __int64 *a2, __int64 a3, __int64 **a4, char a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v9; // rdi
  __int64 **v10; // r15
  _QWORD *v11; // rdi
  __int64 *v12; // rax
  __int64 result; // rax
  __int64 v14; // r12
  __int64 *v15; // rdx
  __int64 v16; // rbp
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-A8h]
  __int64 v20; // [rsp+0h] [rbp-A8h]
  __int64 *v21; // [rsp+0h] [rbp-A8h]
  __int64 *v22; // [rsp+0h] [rbp-A8h]
  int v23; // [rsp+Ch] [rbp-9Ch]
  int v24; // [rsp+Ch] [rbp-9Ch]
  _BYTE v25[32]; // [rsp+10h] [rbp-98h] BYREF
  char v26; // [rsp+30h] [rbp-78h]
  _BYTE v27[32]; // [rsp+40h] [rbp-68h] BYREF
  char v28; // [rsp+60h] [rbp-48h]

  v7 = a2;
  if ( a4 != *(__int64 ***)(a1 + 8) )
    goto LABEL_2;
  v11 = (_QWORD *)(a1 - 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF));
  v12 = &a2[a3];
  if ( v12 == a2 )
    return a1;
  while ( *v11 == *a2 )
  {
    ++a2;
    v11 += 4;
    if ( v12 == a2 )
      return a1;
  }
LABEL_2:
  v9 = *(unsigned __int16 *)(a1 + 2);
  v10 = nullptr;
  if ( a5 )
    v10 = a4;
  switch ( *(_WORD *)(a1 + 2) )
  {
    case '"':
      v14 = a3 - 1;
      sub_20BEED0(v25, a1);
      v15 = v7 + 1;
      v16 = *v7;
      v17 = *(_BYTE *)(a1 + 1) >> 1;
      if ( !a6 )
      {
        v24 = *(_BYTE *)(a1 + 1) >> 1;
        v22 = v15;
        v18 = sub_20BEEB0(a1);
        v17 = v24;
        v15 = v22;
        a6 = v18;
      }
      v28 = 0;
      if ( v26 )
      {
        v23 = v17;
        v21 = v15;
        sub_20150B0((__int64)v27, (__int64)v25);
        v28 = 1;
        v17 = v23;
        v15 = v21;
      }
      result = sub_20605D0(a6, v16, v15, v14, v17, (__int64)v27, (__int64)v10);
      if ( v28 )
      {
        v20 = result;
        sub_200ED00((__int64)v27);
        result = v20;
      }
      if ( v26 )
      {
        v19 = result;
        sub_200ED00((__int64)v25);
        result = v19;
      }
      break;
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
      result = sub_205E850(v9, *v7, a4, a5);
      break;
    case '=':
      result = sub_205EAD0(*v7, v7[1], (__int64)v10);
      break;
    case '>':
      result = sub_205EC40(*v7, v7[1], (char *)v7[2], (__int64)v10);
      break;
    case '?':
      result = sub_205EDD0(*v7, v7[1], *(_DWORD **)(a1 + 24), *(unsigned int *)(a1 + 32), v10);
      break;
    default:
      result = sub_205EA20(v9, *v7, (unsigned __int8 *)v7[1], *(_BYTE *)(a1 + 1) >> 1, (__int64)v10);
      break;
  }
  return result;
}
