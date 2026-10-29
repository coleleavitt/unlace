void __fastcall sub_CEB500(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8)
{
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  __int64 v14; // r9
  unsigned int v15; // ebp
  char v16; // al
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // dl
  char v21; // dl
  char v22; // dl
  char v23; // dl
  char v24; // cl
  void (__fastcall *v25)(__int64, __int64, _QWORD, bool, _QWORD, _QWORD, __int64, __int64); // rax
  __int64 v26; // rcx
  int v27; // [rsp+Ch] [rbp-4Ch]
  unsigned int v29; // [rsp+18h] [rbp-40h]
  unsigned __int8 v30; // [rsp+1Ch] [rbp-3Ch]
  char v31; // [rsp+1Dh] [rbp-3Bh]
  unsigned __int8 v32; // [rsp+1Fh] [rbp-39h]

  v10 = *(_DWORD *)(a8 + 20);
  if ( v10 != -1 )
  {
    v11 = *(_DWORD *)(a8 + 16);
    v14 = *(_QWORD *)(a8 + 40);
    v29 = v10 / v11;
    v27 = *(_DWORD *)(v14 + 28) + 16;
    if ( v11 <= v10 )
    {
      v32 = a6;
      v15 = 0;
      v16 = 16 * (a6 & 1);
      v17 = 0;
      v31 = v16;
      while ( 1 )
      {
        v19 = a2 + v17;
        *(_DWORD *)v19 = v17 + 16;
        v20 = *(_BYTE *)(v19 + 4);
        *(_QWORD *)(v19 + 8) = v14;
        *(_BYTE *)(v19 + 4) = v31 | v20 & 0xE9 | 2;
        v21 = a3;
        if ( !a3 )
          v21 = *(_BYTE *)(a8 + 56);
        *(_BYTE *)(v19 + 4) = v21 & 1 | *(_BYTE *)(v19 + 4) & 0xFE;
        v22 = a4;
        if ( !a4 )
          v22 = *(_BYTE *)(a8 + 57);
        v23 = (32 * (a7 & 1)) | ((v22 & 1) << 6) | *(_BYTE *)(v19 + 4) & 0x9F | 0x80;
        v24 = *(_BYTE *)(v19 + 5) & 0xFE;
        *(_BYTE *)(v19 + 4) = v23;
        *(_BYTE *)(v19 + 5) = a5 & 1 | v24;
        v25 = *(void (__fastcall **)(__int64, __int64, _QWORD, bool, _QWORD, _QWORD, __int64, __int64))(v14 + 64);
        if ( v25 )
        {
          v18 = 1;
          if ( (v23 & 0x20) == 0 )
          {
            v26 = *(_QWORD *)(v14 + 32);
            if ( *(_BYTE *)(v14 + 60) == 1 || !v26 )
              v18 = 0;
            else
              v18 = *(unsigned __int8 *)(v26 + 648);
          }
          v30 = a5;
          v25(a1, a2 + v17 + 16, v23 & 1, (v23 & 0x40) != 0, a5, v32, v18, v14);
          a5 = v30;
        }
        ++v15;
        v17 += v27;
        if ( v15 >= v29 )
          break;
        v14 = *(_QWORD *)(a8 + 40);
      }
    }
  }
}
