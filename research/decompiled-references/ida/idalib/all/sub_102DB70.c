__int64 __fastcall sub_102DB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  char v6; // al
  __int64 (*v7)(void); // rax
  char v8; // dl

  result = 1;
  if ( (_DWORD)a2 != *(unsigned __int8 *)(a1 + 16) )
  {
    if ( (_DWORD)a2 == *(unsigned __int8 *)(a1 + 20) )
      return 2;
    if ( *(unsigned __int8 *)(a1 + 22) == (_DWORD)a2 )
      return 4;
    if ( (_DWORD)a2 == 96 )
    {
      if ( sub_21F90E0() != *(_QWORD *)(a1 + 112) )
        return 0;
      return 8;
    }
    if ( (_DWORD)a2 != 128 )
      return 0;
    if ( (_DWORD)a3 == 16 )
    {
LABEL_12:
      v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL);
      if ( v5 == sub_102B800 )
        v6 = *(_BYTE *)(a1 + 278);
      else
        v6 = v5(a1);
      if ( v6 )
        return 16;
      return 0;
    }
    if ( (_DWORD)a3 != 32 )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( sub_21F90D0(a1, a2, a3) != v4 && sub_21F90C0() != v4 )
        goto LABEL_12;
      return 8;
    }
    v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 128LL);
    if ( (char *)v7 == (char *)sub_102B810 )
      v8 = *(_BYTE *)(a1 + 282);
    else
      v8 = v7();
    result = 32;
    if ( !v8 )
      return 0;
  }
  return result;
}
