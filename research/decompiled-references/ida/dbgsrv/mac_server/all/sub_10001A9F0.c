/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A9F0
// Address: 0x000000010001A9F0

//----- (000000010001A9F0) ----------------------------------------------------
__int64 __fastcall sub_10001A9F0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r13
  int v10; // r15d
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+0h] [rbp-80h]
  _BYTE v17[8]; // [rsp+14h] [rbp-6Ch] BYREF
  unsigned int v18; // [rsp+1Ch] [rbp-64h]
  _DWORD v19[2]; // [rsp+2Ch] [rbp-54h] BYREF
  _DWORD v20[4]; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v21; // [rsp+44h] [rbp-3Ch]

  v8 = 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         a2,
         v20,
         28,
         0) == 28 )
  {
    v8 = 0;
    if ( v20[0] == a5 && v20[3] == 7 )
    {
      LOBYTE(v8) = 1;
      if ( a3 )
      {
        *a3 = 0;
        if ( v21 )
        {
          v15 = a4;
          v9 = a2 + 28;
          v10 = 0;
          while ( 1 )
          {
            v19[0] = 0;
            (*(void (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
              *(_QWORD *)(a1 + 8),
              v9,
              v19,
              8,
              0);
            if ( v19[0] == 15 )
              break;
            if ( v19[0] == 13 )
            {
              v11 = *(__int64 **)(a1 + 8);
              v12 = *v11;
              v13 = 24;
              goto LABEL_13;
            }
            v9 += v19[1];
            if ( ++v10 >= v21 )
              return v8;
          }
          v11 = *(__int64 **)(a1 + 8);
          v12 = *v11;
          v13 = 12;
LABEL_13:
          (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, __int64, _QWORD))(v12 + 288))(v11, v9, v17, v13, 0);
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
            *(_QWORD *)(a1 + 8),
            v9 + v18,
            a3,
            v15,
            0);
        }
      }
    }
  }
  return v8;
}
