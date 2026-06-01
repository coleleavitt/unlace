/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400528C0
// Address: 0x00000001400528C0

//----- (00000001400528C0) ----------------------------------------------------
__int64 __fastcall sub_1400528C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r14d
  const char *v12; // rax
  const char *v13; // rbx
  size_t v14; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  sub_140054330(&v15, v6, 1u, a3);
  if ( !a3 )
  {
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  v7 = -1;
  while ( 1 )
  {
    v8 = -1;
    if ( (int)sub_140054410(v6) <= 0 )
      break;
    v9 = sub_140054420(v6);
    v8 = v9;
    if ( v9 <= 0 )
      break;
    a3 -= v9;
    a2 += v9;
    sub_140054390(&v15);
LABEL_7:
    if ( !a3 )
      goto LABEL_8;
  }
  v10 = sub_1400543B0(v6);
  if ( v10 == -21015 )
    goto LABEL_7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  if ( v8 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    if ( v10 != -15059582 )
    {
      v12 = (const char *)sub_1400545E0(v6);
      v13 = v12;
      if ( v12 && (v14 = strlen(v12)) != 0 )
        sub_140001810(a1 + 16, v13, v14);
      else
        *(_QWORD *)(a1 + 24) = 0;
    }
  }
LABEL_9:
  sub_140054360(&v15);
  return v7;
}
