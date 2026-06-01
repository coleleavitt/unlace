/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467D48
// Address: 0x00467D48

//----- (00467D48) --------------------------------------------------------
void __usercall sub_467D48(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4, __int64 a5)
{
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // kr00_4
  BOOL v8; // edi
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+4h] [ebp-328h] BYREF
  __m128i v10[5]; // [esp+Ch] [ebp-320h] BYREF
  __m128i v11[8]; // [esp+5Ch] [ebp-2D0h] BYREF
  __int16 v12; // [esp+E8h] [ebp-244h]
  __int16 v13; // [esp+ECh] [ebp-240h]
  __int16 v14; // [esp+F0h] [ebp-23Ch]
  __int16 v15; // [esp+F4h] [ebp-238h]
  int v16; // [esp+F8h] [ebp-234h]
  int v17; // [esp+FCh] [ebp-230h]
  int v18; // [esp+100h] [ebp-22Ch]
  int v19; // [esp+104h] [ebp-228h]
  int v20; // [esp+108h] [ebp-224h]
  __m128i *v21; // [esp+10Ch] [ebp-220h]
  int v22; // [esp+110h] [ebp-21Ch]
  __int32 v23; // [esp+114h] [ebp-218h]
  __int16 v24; // [esp+118h] [ebp-214h]
  unsigned int v25; // [esp+11Ch] [ebp-210h]
  __int32 *v26; // [esp+120h] [ebp-20Ch]
  __int16 v27; // [esp+124h] [ebp-208h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  __int32 retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( a4 != -1 )
    sub_463B83();
  sub_464890(v10, 0, 0x50u);
  sub_464890(v11, 0, 0x2CCu);
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v10;
  ExceptionInfo.ContextRecord = (PCONTEXT)v11;
  v21 = v11;
  v20 = v5;
  v19 = v6;
  v18 = a1;
  v17 = a3;
  v16 = a2;
  v27 = __SS__;
  v24 = __CS__;
  v15 = __DS__;
  v14 = __ES__;
  v13 = __FS__;
  v12 = __GS__;
  v7 = __readeflags();
  v25 = v7;
  v23 = retaddr;
  v26 = &retaddr;
  v11[0].m128i_i32[0] = 65537;
  v22 = savedregs;
  v10[0].m128i_i64[0] = a5;
  v10[0].m128i_i32[3] = retaddr;
  v8 = IsDebuggerPresent();
  SetUnhandledExceptionFilter(nullptr);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v8 && a4 != -1 )
    sub_463B83();
}
// 467DB1: variable 'v5' is possibly undefined
// 467DB7: variable 'v6' is possibly undefined
