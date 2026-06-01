/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006E238
// Address: 0x000000014006E238

//----- (000000014006E238) ----------------------------------------------------
__int64 __fastcall sub_14006E238(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 FrameInfo; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-88h]
  __int64 v13; // [rsp+50h] [rbp-68h]
  _QWORD v14[2]; // [rsp+60h] [rbp-58h]
  char v15[72]; // [rsp+70h] [rbp-48h] BYREF
  int v16; // [rsp+C0h] [rbp+8h]

  v2 = *(_QWORD *)(sub_14006CCF8() + 40);
  v12 = *(_QWORD *)(sub_14006CCF8() + 32);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 64);
  v13 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 40);
  v14[0] = *(_QWORD *)(a1 + 72);
  v14[1] = *(_QWORD *)(a1 + 104);
  v16 = *(_DWORD *)(a1 + 56);
  _except_validate_context_record(v4);
  *(_QWORD *)(sub_14006CCF8() + 32) = v3;
  *(_QWORD *)(sub_14006CCF8() + 40) = v4;
  v6 = sub_14006CCF8();
  FrameInfo = CreateFrameInfo(v15, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL));
  if ( *(_QWORD *)(a1 + 88) )
    sub_14006CCF8();
  v8 = CallSettingFrame_LookupContinuationIndex(v13, v5, 256);
  v9 = v8;
  if ( v8 < 2 )
  {
    v9 = v14[v8];
    if ( !v9 )
      abort();
  }
  CallSettingFrame_NotifyContinuationAddr(v9, v5);
  FindAndUnlinkFrame(FrameInfo);
  if ( *(_DWORD *)v3 == -529697949 && *(_DWORD *)(v3 + 24) == 4 )
  {
    v10 = *(_DWORD *)(v3 + 32);
    if ( v10 == 429065504 || (unsigned int)(v10 - 429065505) <= 1 )
    {
      if ( (unsigned int)IsExceptionObjectToBeDestroyed(*(_QWORD *)(v3 + 40)) )
        sub_14006BB0C(v3);
    }
  }
  *(_QWORD *)(sub_14006CCF8() + 32) = v12;
  *(_QWORD *)(sub_14006CCF8() + 40) = v2;
  *(_DWORD *)(sub_14006CCF8() + 120) = v16;
  *(_DWORD *)(sub_14006CCF8() + 120) = -2;
  return v9;
}
// 14006E3F7: conditional instruction was optimized away because r15d.4==0
// 14006E31F: ignored the value written to the shadow area of the succeeding call
// 14006BB84: using guessed type __int64 __fastcall IsExceptionObjectToBeDestroyed(_QWORD);
// 14006C2E0: using guessed type __int64 __fastcall CreateFrameInfo(_QWORD, _QWORD);
// 14006C31C: using guessed type __int64 __fastcall FindAndUnlinkFrame(_QWORD);
// 14006EDE4: using guessed type __int64 __fastcall _except_validate_context_record(_QWORD);
// 14006F240: using guessed type __int64 __fastcall CallSettingFrame_LookupContinuationIndex(_QWORD, _QWORD, _QWORD);
// 14006F270: using guessed type __int64 __fastcall CallSettingFrame_NotifyContinuationAddr(_QWORD, _QWORD);
