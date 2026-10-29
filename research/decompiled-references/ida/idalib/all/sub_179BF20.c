unsigned __int64 __fastcall sub_179BF20(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9

  result = *(_QWORD *)(a1 + 56);
  if ( (result & 4) != 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)result )
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v3 = (_QWORD *)*v3;
      v5 = sub_B8EAA0((__int64)v3);
      v6 = *(_QWORD *)(a2 + 16);
      v7 = v5;
      v8 = (v6 & 4) != 0 ? *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) : v6 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = sub_B8EAA0(v8);
      if ( !v11
        || (v14 = sub_B91570(v7, a2, v9, v10, v12, v13), result = sub_B91570(v11, a2, v15, v16, v17, v18), v14 != result) )
      {
        v19 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v19 = *(_QWORD *)(v19 + 8);
        sub_B8C080(a1, v11);
        sub_B90130(a1, v19, v20, v21, v22, v23);
        v24 = *(_BYTE *)(a1 + 28) & 0x7F;
        if ( (unsigned int)(v24 - 34) > 5 )
        {
          result = (unsigned int)(v24 - 40);
          if ( (unsigned int)result <= 6 )
          {
            result = sub_B73BE0(a1);
            v25 = result;
            if ( result )
              goto LABEL_13;
          }
        }
        else
        {
          result = sub_B77A30(a1);
          v25 = result;
          if ( result )
          {
LABEL_13:
            sub_B8C080(v25, v11);
            return sub_B90130(v25, v19, v26, v27, v28, v29);
          }
        }
      }
    }
  }
  return result;
}
