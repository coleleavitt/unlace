__int64 __fastcall sub_3AA670(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char *v6; // rax
  char v7; // cl
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax

  v5 = a3;
  v6 = *(char **)a3;
  if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 8) )
  {
    *(_DWORD *)(a1 + 12) = 0;
    v7 = 0;
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_3;
  }
  v7 = *v6;
  *(_QWORD *)a3 = v6 + 1;
  a3 = v7 & 0x7F;
  *(_DWORD *)(a1 + 12) = a3;
  if ( a2 )
  {
LABEL_3:
    *a2 = v7;
    a3 = *(unsigned int *)(a1 + 12);
  }
  if ( (_DWORD)a3 )
  {
    v8 = *(_QWORD *)(v5 + 8);
    *(_DWORD *)(a1 + 8) = unpack_dd(v5);
    if ( (unsigned __int8)is_cvt64(v5, v8, v9) )
    {
      v10 = (unsigned int)unpack_dd(v5);
      if ( v10 == 0xFFFFFFFFLL )
        v10 = -1;
    }
    else
    {
      v10 = unpack_dq(v5);
    }
    *(_QWORD *)a1 = v10;
    return a4;
  }
LABEL_8:
  if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
  {
    result = (unsigned int)a4 + (unsigned int)unpack_dd(v5);
    if ( result == 0xFFFFFFFFLL )
      result = -1;
  }
  else
  {
    result = a4 + unpack_dq(v5);
  }
  *(_QWORD *)a1 = result;
  return result;
}
