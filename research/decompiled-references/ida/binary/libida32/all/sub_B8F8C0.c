__int64 __fastcall sub_B8F8C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  const char *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned int *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v14[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v15; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    sub_971800(*(_QWORD *)a1, "typedef ");
    if ( (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
      sub_971800(*(_QWORD *)a1, "__module_private__ ");
    v2 = *(_QWORD *)a1;
  }
  v3 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = *(unsigned int *)(a1 + 32);
  v13 = (_QWORD *)*v3;
  v5 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 7) != 0 )
  {
    v7 = 0;
    v6 = &byte_22CD811;
  }
  else
  {
    v6 = &byte_22CD811;
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 )
    {
      v8 = *(unsigned int **)(v7 + 16);
      v7 = *v8;
      v6 = (const char *)(v8 + 4);
    }
  }
  v14[0] = v6;
  v15 = 261;
  v14[1] = v7;
  result = sub_F50AF0(&v13, v2, a1 + 8, v14, v4);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    return sub_B8E960((const char **)a1, a2, 0, v10, v11, v12);
  return result;
}

