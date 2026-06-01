/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006C754
// Address: 0x000000014006C754

//----- (000000014006C754) ----------------------------------------------------
void __fastcall sub_14006C754(_QWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  PVOID v6; // rax
  PVOID BaseOfImage; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR Arguments[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v4 = 429065504;
  if ( a2 && (*a2 & 0x10) != 0 )
  {
    v5 = *a1 - 8LL;
    v2 = *(_BYTE **)(*(_QWORD *)v5 + 48LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  }
  v6 = nullptr;
  BaseOfImage = nullptr;
  if ( v2 )
  {
    v6 = RtlPcToFileHeader(v2, &BaseOfImage);
    BaseOfImage = v6;
    if ( (*v2 & 8) != 0 || !v6 )
      v4 = 26820608;
  }
  Arguments[0] = v4;
  Arguments[1] = (ULONG_PTR)a1;
  Arguments[2] = (ULONG_PTR)v2;
  Arguments[3] = (ULONG_PTR)v6;
  RaiseException(0xE06D7363, 1u, 4u, Arguments);
}
