__int64 __fastcall sub_BA7020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rax
  unsigned int *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r13
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 224);
  if ( (char *)v3 != (char *)sub_BA1BB0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 5952);
  if ( v4 != sub_BA3290 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    return 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( (v5 & 1) != 0 )
  {
    v6 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    v7 = v6 + 2;
    v8 = (__int64)&v6[2 * *v6 + 2];
    goto LABEL_6;
  }
  v8 = a2 + 16;
  v7 = (_QWORD *)(a2 + 8);
  if ( v5 )
  {
LABEL_6:
    while ( (_QWORD *)v8 != v7 )
    {
      result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 56))(a1, *v7);
      if ( !(_BYTE)result )
        return result;
      ++v7;
    }
  }
  return 1;
}

