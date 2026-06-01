unsigned __int64 __fastcall sub_13FC7D0(__int64 a1, int a2, _BYTE *a3, signed __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 *v12; // rbp
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v17; // rax
  int v18; // [rsp+Ch] [rbp-4Ch]
  __int64 v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = *(unsigned int *)(a1 + 336);
  *(_QWORD *)(a1 + 160) += 1776LL;
  *(_DWORD *)(a1 + 336) = v9 + 1;
  v10 = *(_QWORD *)(a1 + 80);
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 88) >= v11 + 1776 && v10 )
  {
    *(_QWORD *)(a1 + 80) = v11 + 1776;
  }
  else
  {
    v18 = v9;
    v17 = sub_986170(a1 + 80, 1776, 1776, 3, v9, a6);
    LODWORD(v9) = v18;
    v11 = v17;
  }
  sub_FF1F40(v11, a3, a4, a2, 0, 0, 0, v9);
  *(_DWORD *)(v11 + 36) = a5;
  v12 = *(__int64 **)(a1 + 176);
  v13 = &v12[*(unsigned int *)(a1 + 184)];
  while ( v13 != v12 )
  {
    while ( 1 )
    {
      v14 = *v12;
      *(_QWORD *)(v14 + 40) = v11;
      v15 = *(__int64 **)(v11 + 264);
      v19[0] = v14;
      if ( v15 == *(__int64 **)(v11 + 272) )
        break;
      *v15 = v14;
      ++v12;
      *(_QWORD *)(v11 + 264) = v15 + 1;
      if ( v13 == v12 )
        goto LABEL_7;
    }
    ++v12;
    sub_FF1DF0(v11 + 256, v15, v19);
  }
LABEL_7:
  *(_DWORD *)(a1 + 184) = 0;
  return v11;
}
