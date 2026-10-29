__int64 __fastcall sub_18C21E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  LOBYTE(v6) = sub_F58320(*v4);
  if ( (_BYTE)v6 )
  {
    v9 = *(_QWORD *)v5;
    v3 = v6;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 57 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
        goto LABEL_5;
      v13 = sub_F63050(v9, v4, v7, v8);
      if ( v13 && ((*(_BYTE *)(v13 + 18) >> 3) & 0xF) == 6 )
        return v3;
    }
    else if ( ((*(_BYTE *)(v9 + 18) >> 3) & 0xF) == 6 )
    {
      return v3;
    }
  }
  v9 = *(_QWORD *)v5;
LABEL_5:
  if ( sub_F58320(v9) )
  {
    v11 = *v4;
    if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57 <= 1
      || (v14 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57,
          (unsigned int)v14 <= 1)
      && (v11 = sub_F63050(*v4, v4, v14, v10)) != 0 )
    {
      LOBYTE(v3) = ((*(_BYTE *)(v11 + 18) >> 3) & 0xF) == 6;
      return v3;
    }
  }
  return 0;
}
