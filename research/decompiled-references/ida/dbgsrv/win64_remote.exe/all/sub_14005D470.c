/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D470
// Address: 0x000000014005D470

//----- (000000014005D470) ----------------------------------------------------
_BOOL8 __fastcall sub_14005D470(char *VarName, __int64 a2)
{
  _DWORD *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  errno_t v6; // eax
  int v7; // esi
  void *v8; // r14
  __int64 v9; // rbp
  size_t v10; // r15
  void *v11; // rax
  void *v12; // r14
  void *v13; // rcx
  void *v14; // r15
  void *v15; // rax
  void *Block[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  void *Src; // [rsp+80h] [rbp+18h] BYREF
  size_t BufferCount; // [rsp+88h] [rbp+20h] BYREF

  if ( qword_1400CB638 )
  {
    v5 = lpCriticalSection;
  }
  else
  {
    v4 = operator new(0x10u);
    v4[2] = GetCurrentThreadId();
    *(_QWORD *)v4 = -1;
    qword_1400CB638 = (__int64)v4;
    v5 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28u);
    InitializeCriticalSection(v5);
    lpCriticalSection = v5;
  }
  if ( v5 )
    EnterCriticalSection(v5);
  v6 = dupenv_s((char **)&Src, &BufferCount, VarName);
  v7 = v6;
  if ( BufferCount )
  {
    if ( !v6 )
    {
      if ( a2 )
      {
        v8 = Src;
        *(_OWORD *)Block = 0;
        v9 = 0;
        v18 = 0;
        if ( Src )
        {
          v10 = strlen((const char *)Src);
          v11 = nullptr;
          if ( v10 != -1 )
          {
            v11 = sub_14005ABE0((__int64)Block, nullptr, v10 + 1, 1u);
            Block[0] = v11;
          }
          Block[1] = (void *)(v10 + 1);
          memcpy(v11, v8, v10);
          *((_BYTE *)Block[0] + v10) = 0;
          v9 = v18;
        }
        v12 = Block[0];
        v13 = nullptr;
        Block[0] = nullptr;
        v14 = Block[1];
        Block[1] = nullptr;
        v18 = 0;
        v15 = *(void **)a2;
        if ( *(_QWORD *)a2 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          j_free(v15);
          *(_QWORD *)(a2 + 16) = 0;
          v13 = Block[0];
        }
        *(_QWORD *)a2 = v12;
        *(_QWORD *)(a2 + 8) = v14;
        *(_QWORD *)(a2 + 16) = v9;
        if ( v13 )
        {
          Block[1] = nullptr;
          j_free(v13);
        }
      }
      free(Src);
    }
  }
  else
  {
    v7 = 1;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v7 == 0;
}
// 1400CB638: using guessed type __int64 qword_1400CB638;
