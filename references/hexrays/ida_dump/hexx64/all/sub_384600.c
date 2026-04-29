__int64 __fastcall sub_384600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 idati; // rbp
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  const char *v9; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = a1;
  idati = a2;
  v5 = *(unsigned int *)(a2 + 16);
  v12 = __readfsqword(0x28u);
  if ( (int)v5 <= 0 )
  {
LABEL_5:
    v9 = s1;
    if ( *(_QWORD *)(a3 + 8) )
    {
      v9 = *(const char **)a3;
      if ( *(_QWORD *)a3 )
        goto LABEL_7;
    }
    else if ( s1 )
    {
LABEL_7:
      v10[1] = v9;
      v11 = 256;
      if ( !idati )
        idati = get_idati(a1, a2, 256, v5);
      v10[0] = idati;
      return create_tinfo(v3, 61, 61, v10);
    }
    return 0;
  }
  v7 = 0;
  while ( 1 )
  {
    a1 = v3;
    a2 = *(_QWORD *)(*(_QWORD *)(idati + 24) + 8 * v7);
    result = sub_384600(v3, a2, a3);
    if ( (_BYTE)result )
      return result;
    if ( *(_DWORD *)(idati + 16) <= (int)++v7 )
      goto LABEL_5;
  }
}
