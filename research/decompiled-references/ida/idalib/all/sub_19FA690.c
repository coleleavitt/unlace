__int64 __fastcall sub_19FA690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r12
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 *v15; // r14
  unsigned __int64 v16; // rax

  v5 = a4;
  v6 = a2;
  if ( sub_19F7E80(a2, a2, a3, a4) )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v15 = sub_F63270(a2, a2, v7, v8, v9, v10);
    if ( (unsigned __int8)sub_19F8CB0(v15, a2) )
    {
      v16 = sub_19FA400(a1, (__int64)v15);
      if ( v16 )
      {
        v6 = *(_QWORD *)(v16 + 48);
        goto LABEL_3;
      }
      return 0;
    }
  }
LABEL_3:
  v11 = *(_QWORD **)(a1 + 248);
  v12 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = sub_A81910(v11, v12, 0);
  if ( v5 )
    v5 += 64;
  result = sub_B7BC50((__int64)v11, v5, 0, 0, a3, v12, (__int64)v13, 0, 0, 0);
  *(_BYTE *)(result + 29) &= 0x9Fu;
  return result;
}
