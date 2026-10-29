__int64 __fastcall sub_206B380(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 **v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int8 **v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r15d
  char v10; // r14
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-70h]
  __int64 v19; // [rsp+0h] [rbp-70h]
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+10h] [rbp-60h]
  _BYTE v22[88]; // [rsp+18h] [rbp-58h] BYREF

  if ( *a3 == 6 )
    return 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( !sub_2236570(a1, a3) )
      goto LABEL_10;
    return 0;
  }
  v4 = *(unsigned __int8 ***)a1;
  v5 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 12);
  if ( *(_QWORD *)a1 != v5 )
  {
    while ( a3 != *v4 )
    {
      if ( (unsigned __int8 **)v5 == ++v4 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( *(_BYTE *)(a2 + 20) )
  {
    v7 = *(unsigned __int8 ***)a2;
    v8 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 12);
    if ( *(_QWORD *)a2 == v8 )
      return (__int64)a3;
    while ( a3 != *v7 )
    {
      if ( (unsigned __int8 **)v8 == ++v7 )
        return (__int64)a3;
    }
  }
  else if ( !sub_2236570(a2, a3) )
  {
    return (__int64)a3;
  }
  if ( (unsigned int)*a3 - 5 > 0x20 )
    return (__int64)a3;
  v9 = 0;
  v10 = 0;
  ptr = v22;
  v21 = 0x400000000LL;
  v11 = *(a3 - 16);
  if ( (v11 & 2) == 0 )
    goto LABEL_23;
  while ( v9 < *((_DWORD *)a3 - 6) )
  {
    v12 = *(unsigned __int8 **)(*((_QWORD *)a3 - 4) + 8LL * v9);
    if ( v12 )
    {
LABEL_19:
      if ( v12 == a3 )
      {
        v10 = 1;
        sub_20128C0((__int64)&ptr, 0);
      }
      else
      {
        v13 = sub_206B380(a1, a2);
        if ( v13 )
          sub_20128C0((__int64)&ptr, v13);
      }
      goto LABEL_22;
    }
    while ( 1 )
    {
      sub_20128C0((__int64)&ptr, 0);
LABEL_22:
      v11 = *(a3 - 16);
      ++v9;
      if ( (v11 & 2) != 0 )
        break;
LABEL_23:
      if ( v9 >= ((*((_WORD *)a3 - 8) >> 6) & 0xFu) )
        goto LABEL_28;
      v12 = *(unsigned __int8 **)&a3[8 * v9 + -16 - 8LL * ((v11 >> 2) & 0xF)];
      if ( v12 )
        goto LABEL_19;
    }
  }
LABEL_28:
  v14 = ptr;
  result = 0;
  if ( (_DWORD)v21 && ((_DWORD)v21 != 1 || !v10) )
  {
    v15 = *((_QWORD *)a3 + 1);
    v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    v17 = (v15 >> 2) & 1;
    if ( (BYTE1(*(_QWORD *)a3) & 0x7F) == 1 )
    {
      if ( v17 )
        v16 = (_QWORD *)*v16;
      result = sub_20B52A0(v16, ptr, (unsigned int)v21, 1, 1);
    }
    else
    {
      if ( v17 )
        v16 = (_QWORD *)*v16;
      result = sub_20B52A0(v16, ptr, (unsigned int)v21, 0, 1);
    }
    if ( v10 )
    {
      v19 = result;
      sub_20BCE60(result, 0, result);
      v14 = ptr;
      result = v19;
    }
    else
    {
      v14 = ptr;
    }
  }
  if ( v14 != v22 )
  {
    v18 = result;
    free(v14);
    return v18;
  }
  return result;
}
