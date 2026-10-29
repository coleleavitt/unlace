__int64 __fastcall use_mapping(unsigned int a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_DWORD *)sub_4EE820(*(_QWORD *)(qword_2CA1698 + 1480) + 2408LL, a1);
  result = a1;
  if ( v1 )
    return v1[2] + a1 - *v1;
  return result;
}

