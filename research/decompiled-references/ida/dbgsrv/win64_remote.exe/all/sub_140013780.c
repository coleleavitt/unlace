/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140013780
// Address: 0x0000000140013780

//----- (0000000140013780) ----------------------------------------------------
int __fastcall sub_140013780(__int64 a1, __int16 **a2)
{
  __int16 *v4; // rax
  DWORD v5; // r12d
  unsigned int (__fastcall **v6)(__int64, int *); // r15
  __int64 v7; // rbx
  __int16 *v8; // rax
  unsigned int v9; // ebp
  int v10; // edi
  char *v11; // rdx
  const char *v12; // rax
  __int64 v13; // rax
  size_t v14; // r8
  void *Block; // [rsp+20h] [rbp-3C8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-3C0h]
  __int64 v18; // [rsp+30h] [rbp-3B8h]
  unsigned int (__fastcall **v19)(__int64, int *); // [rsp+38h] [rbp-3B0h]
  __int64 v20; // [rsp+40h] [rbp-3A8h]
  int v21; // [rsp+48h] [rbp-3A0h]
  int v22[6]; // [rsp+50h] [rbp-398h] BYREF
  __int64 v23; // [rsp+68h] [rbp-380h]
  unsigned int v24; // [rsp+70h] [rbp-378h]
  char v25[528]; // [rsp+80h] [rbp-368h] BYREF
  char String1[272]; // [rsp+290h] [rbp-158h] BYREF

  v4 = word_1400CAE32;
  if ( a2[1] )
    v4 = *a2;
  *(_BYTE *)v4 = 0;
  a2[3] = (__int16 *)-1LL;
  a2[4] = nullptr;
  a2[5] = (__int16 *)-1LL;
  v5 = *(_DWORD *)(a1 + 488);
  v6 = (unsigned int (__fastcall **)(__int64, int *))sub_14001E600();
  v19 = v6;
  v7 = -1;
  v20 = -1;
  v21 = 0;
  LODWORD(v8) = sub_14001D3A0(v5);
  v9 = 8;
  if ( (_DWORD)v8 == 1 )
    v9 = 24;
  if ( *((_BYTE *)v6 + 56) )
  {
    v10 = 0;
    while ( 1 )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))*v6)(v9, v5);
      v20 = v7;
      if ( v7 != -1 )
        break;
      LODWORD(v8) = GetLastError();
      v21 = (int)v8;
      if ( (_DWORD)v8 == 24 && ++v10 < 5 )
        continue;
      goto LABEL_26;
    }
    v22[0] = 568;
    if ( v6[3](v7, v22) )
    {
      Block = nullptr;
      v17 = 0;
      v18 = 0;
      sub_140061080((__int64)&Block, v25, 0, 0xFDE9u);
      v11 = (char *)Str1;
      if ( v17 )
        v11 = (char *)Block;
      sub_1400621E0(String1, v11, 260);
      if ( Block )
      {
        v17 = 0;
        j_free(Block);
      }
      if ( *(_QWORD *)(a1 + 864) <= 1u
        || (v12 = sub_14005D9D0(*(_BYTE **)(a1 + 856)), LODWORD(v8) = stricmp(String1, v12), !(_DWORD)v8) )
      {
        if ( a2 != (__int16 **)(a1 + 856) )
        {
          v13 = *(_QWORD *)(a1 + 864);
          v14 = v13 - 1;
          if ( !v13 )
            v14 = 0;
          if ( v14 )
            sub_140001810((__int64)a2, *(const void **)(a1 + 856), v14);
          else
            a2[1] = nullptr;
        }
        a2[3] = (__int16 *)(v23 & *(_QWORD *)(a1 + 24));
        v8 = (__int16 *)(*(_QWORD *)(a1 + 24) & v24);
        a2[4] = v8;
      }
    }
    else
    {
      LODWORD(v8) = GetLastError();
    }
  }
LABEL_26:
  if ( *((_BYTE *)v6 + 56) && v7 != -1 )
    LODWORD(v8) = CloseHandle((HANDLE)v7);
  return (int)v8;
}
// 140013920: conditional instruction was optimized away because rbx.8!=FFFFFFFFFFFFFFFF
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
