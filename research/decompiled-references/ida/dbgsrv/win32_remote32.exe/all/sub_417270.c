/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417270
// Address: 0x00417270

//----- (00417270) --------------------------------------------------------
bool __userpurge sub_417270@<al>(int a1@<ecx>, __m128i a2@<xmm0>, unsigned __int8 a3)
{
  int v4; // ecx
  bool v5; // bl
  BOOL v6; // eax
  unsigned int v7; // ecx
  CONTEXT *v9; // [esp-4h] [ebp-34h]
  void *v10; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-1Ch]
  int v12; // [esp+18h] [ebp-18h]
  LPCONTEXT lpContext; // [esp+1Ch] [ebp-14h]
  DWORD v14; // [esp+20h] [ebp-10h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]

  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  lpContext = nullptr;
  v4 = *(_DWORD *)(a1 + 12);
  v15 = 0;
  v14 = 65539;
  if ( sub_40D4A0((FARPROC *)(v4 + 692), (unsigned int)&v10, &v14)
    && (v9 = lpContext, lpContext->ContextFlags = v14, GetThreadContext(*(HANDLE *)a1, v9)) )
  {
    v5 = 1;
    if ( (lpContext->EFlags & 0x100) != a3 << 8 )
    {
      if ( (lpContext->ContextFlags & 0x10001) == 0 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(30117);
      }
      lpContext->EFlags |= 0x100u;
      lpContext->ContextFlags = 65537;
      v6 = SetThreadContext(*(HANDLE *)a1, lpContext);
      v5 = v6;
      if ( v6 )
      {
        v7 = *(_DWORD *)(a1 + 28) | 1;
        if ( !a3 )
          v7 = *(_DWORD *)(a1 + 28) & 0xFFFFFFFE;
        *(_DWORD *)(a1 + 28) = v7;
      }
      else
      {
        sub_43C950(a2, *(_DWORD *)(a1 + 12), (int)"%d: SetThreadContext failed", *(_DWORD *)(a1 + 16));
      }
    }
    v15 = 2;
    if ( v10 )
    {
      v11 = 0;
      sub_453A20(v10);
    }
    return v5;
  }
  else
  {
    v15 = 1;
    if ( v10 )
    {
      v11 = 0;
      sub_453A20(v10);
    }
    return 0;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
