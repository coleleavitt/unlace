/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EBF0
// Address: 0x0040EBF0

//----- (0040EBF0) --------------------------------------------------------
int __userpurge sub_40EBF0@<eax>(__m128i a1@<xmm0>, DWORD a2, int a3)
{
  int v3; // esi
  char v4; // bl
  _BYTE *v5; // eax
  int (__stdcall *v6)(_DWORD); // ecx
  int *v7; // ecx
  int v8; // eax
  HANDLE *v9; // edi
  int v10; // ecx
  DWORD v11; // edi
  int *v12; // ecx
  CONTEXT *v14; // [esp-4h] [ebp-48h]
  void *v15; // [esp+10h] [ebp-34h] BYREF
  int v16; // [esp+14h] [ebp-30h]
  int v17; // [esp+18h] [ebp-2Ch]
  LPCONTEXT lpContext; // [esp+1Ch] [ebp-28h]
  int v19; // [esp+20h] [ebp-24h] BYREF
  int v20; // [esp+28h] [ebp-1Ch]
  int v21; // [esp+2Ch] [ebp-18h]
  LPVOID lpBaseAddress; // [esp+30h] [ebp-14h]
  int *v23; // [esp+34h] [ebp-10h] BYREF
  int v24; // [esp+40h] [ebp-4h]

  v3 = a2;
  if ( !*(_DWORD *)(a2 + 200) && (*(_DWORD *)(a2 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  v4 = 1;
  v5 = sub_418F20();
  if ( v5[29] && (v6 = *((int (__stdcall **)(_DWORD))v5 + 6)) != nullptr )
  {
    if ( *(_DWORD *)(v3 + 452) == -1 || !v6(*(_DWORD *)(v3 + 452)) )
      v4 = 0;
    if ( !*(_BYTE *)(v3 + 521) )
      *(_BYTE *)(v3 + 520) = v4;
  }
  else if ( *(_DWORD *)(v3 + 608) )
  {
    sub_416D20((int **)v3, 0);
    v7 = *(int **)(v3 + 604);
    v8 = *v7;
    v23 = (int *)v8;
    if ( (int *)v8 != v7 )
    {
      do
      {
        v9 = (HANDLE *)(v8 + 20);
        v15 = nullptr;
        v21 = v8 + 20;
        v16 = 0;
        v17 = 0;
        lpContext = nullptr;
        v10 = *(_DWORD *)(v8 + 32);
        v24 = 0;
        a2 = 65539;
        if ( sub_40D4A0((FARPROC *)(v10 + 692), (unsigned int)&v15, &a2)
          && (v14 = lpContext, lpContext->ContextFlags = a2, GetThreadContext(*v9, v14)) )
        {
          v11 = lpContext->Eip - *(_DWORD *)(v3 + 208);
          lpBaseAddress = (LPVOID)lpContext->Eip;
          a2 = v11;
          sub_408C10((int *)(v3 + 216), &v19, &a2);
          if ( *(_BYTE *)(v20 + 13) || v11 < *(_DWORD *)(v20 + 16) || v20 == *(_DWORD *)(v3 + 216) )
          {
            v4 = sub_4165C0(v3, a1, v21, lpBaseAddress) != 0 ? v4 : 0;
            v24 = 3;
          }
          else
          {
            v24 = 2;
          }
        }
        else
        {
          v4 = 0;
          v24 = 1;
        }
        if ( v15 )
        {
          v16 = 0;
          sub_453A20(v15);
          v15 = nullptr;
          v17 = 0;
        }
        v24 = -1;
        sub_40B5E0((int *)&v23);
        v12 = *(int **)(v3 + 604);
        v8 = (int)v23;
      }
      while ( v23 != v12 );
      v8 = *v12;
    }
    PostThreadMessageA(*(_DWORD *)(v8 + 36), 0, 0, 0);
    sub_4161F0((int **)v3, 0);
  }
  else
  {
    v4 = 0;
  }
  *(_BYTE *)(v3 + 662) = 1;
  return 2 * (v4 != 0) - 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
