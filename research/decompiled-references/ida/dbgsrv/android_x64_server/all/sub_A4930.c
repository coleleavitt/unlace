/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4930
// Address: 0x00000000000A4930

//----- (00000000000A4930) ----------------------------------------------------
__int64 __fastcall sub_A4930(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbx
  const char *v6; // rsi
  int v7; // eax
  int v8; // r15d
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned int v16; // [rsp+1Ch] [rbp-2Ch] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  v5 = sub_A4110();
  if ( *(_QWORD *)(a1 + 16) )
    v6 = *(const char **)(a1 + 8);
  else
    v6 = s1;
  v7 = (*(__int64 (__fastcall **)(__int64, const char *, unsigned int *))(*(_QWORD *)v5 + 488LL))(v5, v6, &v16);
  if ( v7 < 0 )
    goto LABEL_14;
  v8 = v7;
  v9 = *(_QWORD *)(v5 + 552);
  v10 = v9;
  if ( !v9 )
    v10 = *(_DWORD *)(v5 + 648);
  if ( v8 >= v10 )
  {
LABEL_14:
    if ( !(_BYTE)under_debugger )
      interr(30056);
    BUG();
  }
  v14 = 0;
  v15 = 0;
  if ( !v9 )
    LODWORD(v9) = *(_DWORD *)(v5 + 648);
  sub_9A950((__int64)&v14, (int)v9);
  v11 = sub_A4120();
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v5 + 224LL))(v5, v11, v16, v14, 0) <= 0 )
  {
    v12 = throw_idc_exception(a2, "failed to read register value", 0.0, a4);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v14 + 32LL * v8 + 8);
    v12 = 0;
  }
  sub_9AA40((__int64)&v14);
  return v12;
}
// 158B40: using guessed type __int64 under_debugger;
