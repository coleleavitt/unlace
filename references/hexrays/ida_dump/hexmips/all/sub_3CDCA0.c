__int64 __fastcall sub_3CDCA0(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rdi
  __int64 v7; // r14
  _DWORD *v9; // r13
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r9
  const char *v14; // rcx
  const char *v15; // rsi
  __int64 v16; // rax
  __m128i v17; // [rsp+10h] [rbp-D8h] BYREF
  int v18; // [rsp+20h] [rbp-C8h]
  __m128i v19; // [rsp+30h] [rbp-B8h] BYREF
  int v20; // [rsp+40h] [rbp-A8h]
  _BYTE v21[32]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v24[2]; // [rsp+88h] [rbp-60h] BYREF
  int v25; // [rsp+98h] [rbp-50h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  LOBYTE(v4) = *(_QWORD *)(a2 + 48) == -1 || *(_DWORD *)(a2 + 32) > 72;
  if ( (_BYTE)v4 )
    return 0;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) <= 1 )
    {
      v7 = *(_QWORD *)(v6 + 64);
      if ( v7 )
      {
        if ( *(int *)(v7 + 312) <= 6 )
        {
          v9 = (_DWORD *)sub_3CDC60(v6, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
          if ( v9 )
          {
            v19 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            v22[0] = 0xFFFFFFFF00000000LL;
            v23[0] = 0xFFFFFFFF00000000LL;
            v24[0] = 0xFFFFFFFF00000000LL;
            v20 = -1;
            v22[1] = 0;
            v23[1] = 0;
            v24[1] = 0;
            sub_32B920((__int64)v21, -1);
            v25 = 0;
            sub_3CC450(&v17, a1, a2, a4);
            v10 = _mm_load_si128(&v17);
            v20 = v18;
            v19 = v10;
            v11 = sub_133B90(v7, (__int64)&v19, 9u);
            if ( a3 == 1 )
            {
              if ( v11 )
              {
                v15 = "mv:InsertInsn";
                v14 = "Restore deleted instruction";
LABEL_13:
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  140,
                  v15,
                  1,
                  v14,
                  &callui,
                  v12);
                v4 = 1;
                goto LABEL_9;
              }
            }
            else if ( v11 )
            {
LABEL_9:
              sub_118BA0((__int64)v24);
              sub_118BA0((__int64)v23);
              sub_118BA0((__int64)v22);
              return v4;
            }
            v14 = "Insert assertion...";
            v15 = "mv:InsertInsn";
            if ( !a3 )
            {
              v16 = sub_3CA080(v7, (__int64)&v19, v9);
              v14 = "Delete microcode instruction";
              if ( v16 )
                v14 = "Delete user-defined instruction";
              v15 = "mv:DeleteInsn";
            }
            goto LABEL_13;
          }
        }
      }
    }
  }
  return v4;
}
