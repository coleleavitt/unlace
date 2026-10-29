/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FBF0
// Address: 0x0040FBF0

//----- (0040FBF0) --------------------------------------------------------
char __userpurge sub_40FBF0@<al>(int a1@<ecx>, __m128i a2@<xmm0>, DWORD a3, int a4)
{
  HANDLE *v5; // esi
  int v6; // eax
  int v7; // ecx
  CONTEXT *v9; // [esp-4h] [ebp-2Ch]
  void *v10; // [esp+Ch] [ebp-1Ch] BYREF
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  LPCONTEXT lpContext; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]

  v5 = (HANDLE *)a3;
  v6 = *(_DWORD *)(a3 + 24);
  if ( v6 != -1 )
  {
    if ( v6 != a4 )
    {
LABEL_10:
      sub_416110(a1, a2, v5[6], 1);
      v5[6] = (HANDLE)-1;
      return 1;
    }
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    lpContext = nullptr;
    v7 = *(_DWORD *)(a3 + 12);
    v14 = 0;
    a3 = 65539;
    if ( sub_40D4A0((FARPROC *)(v7 + 692), (unsigned int)&v10, &a3) )
    {
      v9 = lpContext;
      lpContext->ContextFlags = a3;
      if ( GetThreadContext(*v5, v9) )
      {
        lpContext->Eip = (DWORD)v5[6];
        lpContext->ContextFlags = 65537;
        if ( !SetThreadContext(*v5, lpContext) )
          sub_43C950(a2, a1, (int)"del_thread_bpt: SetThreadContext");
        v14 = 2;
        if ( v10 )
        {
          v11 = 0;
          sub_453A20(v10);
          v10 = nullptr;
          v12 = 0;
        }
        v14 = -1;
        goto LABEL_10;
      }
    }
    v14 = 1;
    if ( v10 )
    {
      v11 = 0;
      sub_453A20(v10);
    }
  }
  return 0;
}
