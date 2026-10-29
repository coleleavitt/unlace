/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4157F0
// Address: 0x004157F0

//----- (004157F0) --------------------------------------------------------
bool __thiscall sub_4157F0(int this, unsigned int a2, DWORD a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  CONTEXT *v9; // [esp-4h] [ebp-10h]

  v4 = (2 * (a3 & 2)) | 0x1000B;
  if ( (a3 & 0xC) == 0 )
    v4 = (2 * (a3 & 2)) | 0x10003;
  v5 = v4 | 0x10020;
  if ( (a3 & 0x10) == 0 )
    v5 = v4;
  v6 = *(_DWORD *)(this + 12);
  v7 = v5 | 0x10060;
  if ( (a3 & 0x20) == 0 )
    v7 = v5;
  a3 = v7;
  if ( !sub_40D4A0((FARPROC *)(v6 + 692), a2, &a3) )
    return 0;
  v9 = *(CONTEXT **)(a2 + 12);
  v9->ContextFlags = a3;
  return GetThreadContext(*(HANDLE *)this, v9);
}
