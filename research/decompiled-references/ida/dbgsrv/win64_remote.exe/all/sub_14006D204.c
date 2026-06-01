/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006D204
// Address: 0x000000014006D204

//----- (000000014006D204) ----------------------------------------------------
void __fastcall sub_14006D204(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct _CONTEXT *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct FH4::FuncInfo4 *a5,
        struct FH4::HandlerType4 *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  __int64 *EstablisherFrame; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // r15
  struct FH4::HandlerType4 *v20; // rbp
  __int64 v21; // rbx
  int v22; // edi
  int v23; // esi
  __int64 ImageBase; // rax
  unsigned __int64 v25; // [rsp+A8h] [rbp+10h] BYREF
  struct _CONTEXT *v26; // [rsp+B0h] [rbp+18h]

  v26 = a3;
  EstablisherFrame = (__int64 *)__FrameHandler4::GetEstablisherFrame(a2, a4, a5, &v25);
  v18 = a7;
  v19 = (unsigned __int64 *)EstablisherFrame;
  v20 = a6;
  if ( a7 )
    sub_14006D140((__int64)a1, EstablisherFrame, (__int64)a6, a7);
  v21 = *((int *)v20 + 4);
  v22 = a8[2];
  v23 = *a8;
  ImageBase = GetImageBase(a8, v16, v17, v18);
  __FrameHandler4::UnwindNestedFrames(a2, a1, v26, v19, (void *)(v21 + ImageBase), a5, v23, v22, v20, a4, a12);
}
// 14006D275: variable 'v16' is possibly undefined
// 14006D275: variable 'v17' is possibly undefined
// 14006D275: variable 'v18' is possibly undefined
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
