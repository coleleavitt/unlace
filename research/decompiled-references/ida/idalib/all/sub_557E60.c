__int64 __fastcall sub_557E60(_DWORD *a1, const void *a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  _DWORD *v6; // rbp
  const void *v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  const char *v11; // rdx
  __int64 idati; // rax
  const void *v13; // r15
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v16; // [rsp+10h] [rbp-48h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  result = 0;
  if ( !a4 )
    return result;
  v6 = a1;
  if ( a1[34] < a4 )
    return result;
  v8 = a2;
  v9 = *(_QWORD *)(a5 + 56) + 24LL * (a4 - 1);
  if ( a3 != (__int64 *)v9 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 <= 1 )
    {
      a3[1] = 0;
LABEL_7:
      v11 = haystack;
      goto LABEL_8;
    }
    v13 = *(const void **)v9;
    a1 = (_DWORD *)*a3;
    if ( a3[2] < v10 )
    {
      v14 = qvector_reserve(a3, *a3, *(_QWORD *)(v9 + 8), 1);
      *a3 = v14;
      a1 = (_DWORD *)v14;
    }
    a3[1] = v10;
    a2 = v13;
    memmove(a1, v13, v10 - 1);
    *(_BYTE *)(*a3 + v10 - 1) = 0;
  }
  if ( !a3[1] )
    goto LABEL_7;
  v11 = (const char *)*a3;
LABEL_8:
  if ( !v11 )
    return 0;
  idati = *((_QWORD *)v6 + 15);
  v15[1] = v11;
  v16 = 256;
  if ( !idati )
    idati = get_idati(a1, a2);
  v15[0] = idati;
  return create_tinfo(v8, 61, 61, v15);
}
