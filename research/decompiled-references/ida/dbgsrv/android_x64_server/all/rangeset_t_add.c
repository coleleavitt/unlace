/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add
// Address: 0x00000000000C9520

//----- (00000000000C9520) ----------------------------------------------------
__int64 __fastcall rangeset_t_add(__int64 a1, unsigned __int64 *a2)
{
  int v2; // eax
  char v3; // al
  unsigned int v4; // ebx
  unsigned int v5; // eax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  int v9; // [rsp+18h] [rbp-20h]
  char v10; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v11; // [rsp+20h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  if ( a1 && *a2 < a2[1] )
  {
    v2 = *(_DWORD *)(a1 + 32);
    *(_OWORD *)ptr = 0;
    v8 = 0;
    v9 = v2;
    if ( v2 == -1 )
      v3 = 0;
    else
      v3 = must_journal();
    v10 = v3;
    LOBYTE(v5) = sub_C9120((char **)a1, a2, (__int64)ptr);
    v4 = v5;
    if ( (_BYTE)v5 )
      sub_C9640((__int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v8 = 0;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
// C9584: variable 'v5' is possibly undefined
