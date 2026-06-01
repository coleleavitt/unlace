void __fastcall sub_F086E0(__int64 a1, __int64 a2, double a3)
{
  int v5; // ebx
  const char *v6; // rax
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v18[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v19; // [rsp+30h] [rbp-28h]

  v5 = (*(_BYTE *)(a2 + 2) >> 3) & 0xF;
  v6 = (const char *)sub_10CCE40((*(_BYTE *)(a2 + 2) >> 3) & 0xF, a2);
  if ( v5 == 3 )
  {
    v6 = "alignof";
    if ( (*(_BYTE *)(a1 + 27) & 8) == 0 )
    {
      v6 = "_Alignof";
      if ( (*(_BYTE *)(a1 + 27) & 0x10) == 0 )
        v6 = "__alignof";
    }
  }
  sub_995540(*(_QWORD *)a1, v6);
  if ( *(char *)(a2 + 2) >= 0 )
  {
    sub_995540(*(_QWORD *)a1, " ");
    v16 = *(char **)(a2 + 16);
    if ( v16 )
      sub_F05430((_QWORD *)a1, v16, v12, v13, v14, v15, a3);
    else
      sub_F049C0((__int64 *)a1);
  }
  else
  {
    v7 = *(_QWORD *)a1;
    v8 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      sub_227BA10(v7, 40);
    }
    else
    {
      *(_QWORD *)(v7 + 32) = v8 + 1;
      *v8 = 40;
    }
    v9 = *(_QWORD *)a1;
    v17 = **(_QWORD **)(a2 + 16);
    v19 = 257;
    sub_F74830(&v17, v9, a1 + 24, v18, 0);
    v10 = *(_QWORD *)a1;
    v11 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      sub_227BA10(v10, 41);
    }
    else
    {
      *(_QWORD *)(v10 + 32) = v11 + 1;
      *v11 = 41;
    }
  }
}
