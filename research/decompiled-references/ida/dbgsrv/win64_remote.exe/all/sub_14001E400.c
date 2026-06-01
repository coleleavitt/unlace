/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E400
// Address: 0x000000014001E400

//----- (000000014001E400) ----------------------------------------------------
__int64 __fastcall sub_14001E400(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rdi
  void *v6; // r14
  void *v7; // rax
  __int64 v8; // rsi
  DWORD LastError; // ebx
  DWORD v10; // r12d
  unsigned int v11; // ebp
  int v12; // edi
  char *v13; // rdx
  unsigned __int8 v14; // bl
  char *v16; // rdx
  void *Block; // [rsp+28h] [rbp-2C0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-2B8h]
  __int64 v20; // [rsp+38h] [rbp-2B0h]
  void *v21; // [rsp+40h] [rbp-2A8h]
  __int64 v22; // [rsp+48h] [rbp-2A0h]
  DWORD v23; // [rsp+50h] [rbp-298h]
  void *v24; // [rsp+58h] [rbp-290h]
  int v25[76]; // [rsp+60h] [rbp-288h] BYREF
  char v26[272]; // [rsp+190h] [rbp-158h] BYREF

  v3 = a3;
  v6 = ::Block;
  if ( !::Block )
  {
    v7 = operator new(0x40u);
    v24 = v7;
    if ( v7 )
      v6 = (void *)sub_14001D1E0((__int64)v7);
    else
      v6 = nullptr;
    ::Block = v6;
  }
  v21 = v6;
  v8 = -1;
  v22 = -1;
  LastError = 0;
  v23 = 0;
  v10 = *(_DWORD *)a1;
  v11 = 8;
  if ( (unsigned int)sub_14001D3A0(*(_DWORD *)a1) == 1 )
    v11 = 24;
  if ( *((_BYTE *)v6 + 56) )
  {
    v12 = 0;
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))v6)(v11, v10);
      v22 = v8;
      if ( v8 != -1 )
        break;
      LastError = GetLastError();
      v23 = LastError;
      if ( LastError == 24 && ++v12 < 5 )
        continue;
      goto LABEL_13;
    }
    v25[0] = 568;
    if ( !(*((unsigned int (__fastcall **)(__int64, int *))v6 + 3))(v8, v25) )
    {
      LastError = GetLastError();
      v23 = LastError;
LABEL_13:
      v3 = a3;
      goto LABEL_14;
    }
    Block = nullptr;
    v19 = 0;
    v20 = 0;
    sub_140061080((__int64)&Block, v26, 0, 0xFDE9u);
    v16 = (char *)Str1;
    if ( v19 )
      v16 = (char *)Block;
    sub_1400621E0(a2, v16, a3);
    if ( Block )
    {
      v19 = 0;
      j_free(Block);
    }
    v14 = 1;
  }
  else
  {
LABEL_14:
    if ( LastError == 299 && !*(_DWORD *)(a1 + 32) )
      *(_DWORD *)(a1 + 32) = 8;
    v13 = (char *)Str1;
    if ( *(_QWORD *)(a1 + 16) )
      v13 = *(char **)(a1 + 8);
    sub_1400621E0(a2, v13, v3);
    v14 = 0;
  }
  if ( *((_BYTE *)v6 + 56) && v8 != -1 )
    CloseHandle((HANDLE)v8);
  return v14;
}
