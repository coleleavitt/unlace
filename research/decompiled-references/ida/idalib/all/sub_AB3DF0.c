__int64 __fastcall sub_AB3DF0(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r14
  __int64 v10; // r14
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  _QWORD *v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // [rsp+0h] [rbp-58h]
  __int64 *v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = sub_2244B30(a2, a3);
  v6 = (unsigned int)sub_2244CB0(a1 + 1312, a2, a3, v5);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 1312) + 8 * v6);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_AB3DB0(v19, v9, 0);
      v10 = *v19[0];
      result = *(_QWORD *)(*v19[0] + 8);
      if ( result )
        return result;
      goto LABEL_4;
    }
    --*(_DWORD *)(a1 + 1328);
  }
  v18 = v6;
  v14 = sub_22300B0(a3 + 17, 8, v6, v6, v7, v8);
  v15 = v18;
  v16 = (_QWORD *)v14;
  if ( a3 )
  {
    memcpy((void *)(v14 + 16), a2, a3);
    v15 = v18;
  }
  *((_BYTE *)v16 + a3 + 16) = 0;
  *v16 = a3;
  v16[1] = 0;
  *v9 = (__int64)v16;
  ++*(_DWORD *)(a1 + 1324);
  v17 = sub_22450D0(a1 + 1312, v15);
  sub_AB3DB0(v19, (__int64 *)(*(_QWORD *)(a1 + 1312) + 8LL * v17), 0);
  v10 = *v19[0];
  result = *(_QWORD *)(*v19[0] + 8);
  if ( !result )
  {
LABEL_4:
    v12 = *(_QWORD *)(a1 + 18648);
    LODWORD(v19[0]) = 0;
    v13 = sub_A71230(a1, v12, a3);
    result = sub_C09810(a1, a2, a3, 0, 0, v13, v19, 1);
    *(_QWORD *)(v10 + 8) = result;
  }
  return result;
}
