/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4639C5
// Address: 0x004639C5

//----- (004639C5) --------------------------------------------------------
void __usercall sub_4639C5(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // kr00_4
  BOOL v7; // esi
  __m128i v8[8]; // [esp+8h] [ebp-324h] BYREF
  __int16 v9; // [esp+94h] [ebp-298h]
  __int16 v10; // [esp+98h] [ebp-294h]
  __int16 v11; // [esp+9Ch] [ebp-290h]
  __int16 v12; // [esp+A0h] [ebp-28Ch]
  int v13; // [esp+A4h] [ebp-288h]
  int v14; // [esp+A8h] [ebp-284h]
  int v15; // [esp+ACh] [ebp-280h]
  int v16; // [esp+B0h] [ebp-27Ch]
  int v17; // [esp+B4h] [ebp-278h]
  __m128i *v18; // [esp+B8h] [ebp-274h]
  int v19; // [esp+BCh] [ebp-270h]
  __int32 v20; // [esp+C0h] [ebp-26Ch]
  __int16 v21; // [esp+C4h] [ebp-268h]
  unsigned int v22; // [esp+C8h] [ebp-264h]
  __int32 *v23; // [esp+CCh] [ebp-260h]
  __int16 v24; // [esp+D0h] [ebp-25Ch]
  __m128i v25[5]; // [esp+2D4h] [ebp-58h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+324h] [ebp-8h] BYREF
  int savedregs; // [esp+32Ch] [ebp+0h]
  __int32 retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  sub_463B83();
  v18 = sub_464890(v8, 0, 0x2CCu);
  v17 = v4;
  v16 = v5;
  v15 = a1;
  v14 = a3;
  v13 = a2;
  v24 = __SS__;
  v21 = __CS__;
  v12 = __DS__;
  v11 = __ES__;
  v10 = __FS__;
  v9 = __GS__;
  v6 = __readeflags();
  v22 = v6;
  v20 = retaddr;
  v23 = &retaddr;
  v8[0].m128i_i32[0] = 65537;
  v19 = savedregs;
  sub_464890(v25, 0, 0x50u);
  v25[0].m128i_i64[0] = 0x140000015LL;
  v25[0].m128i_i32[3] = retaddr;
  v7 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v25;
  ExceptionInfo.ContextRecord = (PCONTEXT)v8;
  SetUnhandledExceptionFilter(nullptr);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v7 )
    sub_463B83();
}
// 463A05: variable 'v4' is possibly undefined
// 463A0B: variable 'v5' is possibly undefined
