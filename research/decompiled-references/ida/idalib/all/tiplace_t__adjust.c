unsigned __int64 __fastcall tiplace_t__adjust(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebp
  unsigned __int64 result; // rax
  _QWORD *v5; // rdi
  unsigned __int8 v6; // dl
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax

  if ( a2[2] )
  {
    v3 = *(_DWORD *)(a1 + 12);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2);
    if ( !(_DWORD)result )
      goto LABEL_13;
    v3 = *(_DWORD *)(a1 + 12);
    if ( !a2[2] )
    {
      result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2);
      if ( (unsigned int)result >= v3 && v3 )
      {
        v3 = *(_DWORD *)(a1 + 12);
        goto LABEL_5;
      }
      if ( !a2[2] )
      {
        result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2);
        if ( (_DWORD)result )
        {
          result = 1;
          goto LABEL_35;
        }
LABEL_13:
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = -2;
        return result;
      }
LABEL_34:
      result = *(unsigned int *)a2[1];
      if ( (_DWORD)result )
      {
LABEL_35:
        *(_DWORD *)(a1 + 12) = result;
        *(_QWORD *)(a1 + 16) = -2;
        *(_DWORD *)(a1 + 8) = -1;
        return result;
      }
      goto LABEL_13;
    }
  }
  result = v3;
  if ( v3 >= (unsigned __int64)a2[5] || *(int *)(a2[4] + 4LL * v3) < 0 )
    goto LABEL_34;
LABEL_5:
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(2993);
LABEL_53:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 16) > 0xFFFFFFFFFFFFFFFDLL )
    return result;
  v5 = (_QWORD *)sub_559D40(*(_QWORD *)(qword_2CCB598 + 1656), a2);
  result = sub_55F9A0(v5, a2, v3, 1);
  if ( !result || *(_DWORD *)(result + 96) || *(_BYTE *)(result + 102) )
    goto LABEL_33;
  v6 = *(_BYTE *)(result + 100);
  if ( v6 == 29 )
  {
    v10 = *(_QWORD *)result;
    if ( !v10 )
      sub_555DE0();
LABEL_40:
    result = *(_QWORD *)(v10 + 8);
    if ( !result )
      goto LABEL_33;
    goto LABEL_41;
  }
  if ( v6 > 0x1Du )
  {
    if ( v6 != 45 )
    {
      if ( v6 == 61 )
        goto LABEL_33;
LABEL_44:
      if ( !under_debugger )
        interr(3095);
      goto LABEL_53;
    }
    v10 = *(_QWORD *)result;
    if ( !v10 )
      sub_555E00();
    goto LABEL_40;
  }
  if ( v6 != 12 )
  {
    if ( v6 == 13 )
    {
      v7 = *(_QWORD *)(result + 40);
      if ( v7 )
      {
        v8 = (_QWORD *)(*(_QWORD *)(result + 32) + 32 * v7 - 32);
        result = *v8 + v8[1] - 1LL;
        goto LABEL_23;
      }
LABEL_33:
      *(_QWORD *)(a1 + 16) = -2;
      return result;
    }
    goto LABEL_44;
  }
  v9 = *(_QWORD *)result;
  if ( !*(_QWORD *)result )
    sub_555E20(v5, a2);
  result = *(_BYTE *)(v9 + 88) & 0xF0;
  if ( (*(_BYTE *)(v9 + 88) & 0xF0) == 0xC0 )
    result = *(unsigned int *)(v9 + 28);
  if ( (_DWORD)result == 64 || (_DWORD)result == 208 )
  {
    result = *(_QWORD *)(v9 + 8) + 1LL;
  }
  else
  {
    if ( (_DWORD)result == 32 )
      goto LABEL_33;
    result = *(_QWORD *)(v9 + 8);
  }
  if ( !result )
    goto LABEL_33;
LABEL_41:
  --result;
LABEL_23:
  if ( result < *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = result;
  return result;
}
