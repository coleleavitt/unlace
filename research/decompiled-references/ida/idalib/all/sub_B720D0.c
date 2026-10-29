unsigned __int64 __fastcall sub_B720D0(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  char v10; // al
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v3 = *(_BYTE *)(a1 + 68);
  v4 = v3 & 0xC;
  v5 = v3 & 1;
  if ( (_BYTE)v4 == 12 )
  {
    if ( !(_BYTE)v5 )
      return sub_B71EB0(a1, a2, v4, v5);
    goto LABEL_13;
  }
  if ( (v3 & 0xC) == 0 )
  {
    if ( !(_BYTE)v5 )
      return sub_B71EB0(a1, a2, v4, v5);
LABEL_13:
    v8 = *(_QWORD *)(a1 + 72);
    goto LABEL_14;
  }
  v6 = *(unsigned __int64 **)(a1 + 72);
  if ( (_BYTE)v5 )
  {
    v11 = *v6;
    if ( (*v6 & 1) != 0 )
      goto LABEL_5;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 72);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
LABEL_5:
      v7 = sub_B8C330(a1);
      a2 = v11 >> 1;
      v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v7 + 18360) + 40LL))(
             *(_QWORD *)(v7 + 18360),
             v11 >> 1);
      goto LABEL_6;
    }
  }
  v8 = v11;
LABEL_6:
  if ( v8 )
    return *(unsigned int *)(a1 + 64) | (unsigned __int64)(sub_EEC140(v8) << 32);
  v10 = *(_BYTE *)(a1 + 68);
  if ( (v10 & 1) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v4 = v10 & 0xC;
    if ( (_BYTE)v4 != 12 && (v10 & 0xC) != 0 )
      v8 = *(_QWORD *)(v8 + 8);
LABEL_14:
    if ( v8 )
      return *(unsigned int *)(a1 + 64) | (unsigned __int64)(sub_EEC140(v8) << 32);
  }
  return sub_B71EB0(a1, a2, v4, v5);
}
