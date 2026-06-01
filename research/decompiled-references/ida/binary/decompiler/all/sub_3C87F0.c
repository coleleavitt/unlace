__int64 __fastcall sub_3C87F0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // r14
  _DWORD *v8; // r13
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r9
  const char *v13; // rcx
  const char *v14; // rsi
  __int64 v15; // rax
  __m128i v16; // [rsp+10h] [rbp-D8h] BYREF
  int v17; // [rsp+20h] [rbp-C8h]
  __m128i v18; // [rsp+30h] [rbp-B8h] BYREF
  int v19; // [rsp+40h] [rbp-A8h]
  _BYTE v20[32]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v23[2]; // [rsp+88h] [rbp-60h] BYREF
  int v24; // [rsp+98h] [rbp-50h]
  unsigned __int64 v25; // [rsp+A8h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  LOBYTE(v3) = *(_QWORD *)(a2 + 48) == -1 || *(_DWORD *)(a2 + 32) > 72;
  if ( (_BYTE)v3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 60) - 1) <= 1 )
    {
      v6 = *(_QWORD *)(v5 + 64);
      if ( v6 )
      {
        if ( *(int *)(v6 + 312) <= 6 )
        {
          v8 = (_DWORD *)sub_3C8680(v5, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
          if ( v8 )
          {
            v18 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            v21[0] = 0xFFFFFFFF00000000LL;
            v22[0] = 0xFFFFFFFF00000000LL;
            v23[0] = 0xFFFFFFFF00000000LL;
            v19 = -1;
            v21[1] = 0;
            v22[1] = 0;
            v23[1] = 0;
            sub_32D4D0(v20, -1);
            v24 = 0;
            sub_3C8720((__int64)&v16, a1, a2);
            v9 = _mm_load_si128(&v16);
            v19 = v17;
            v18 = v9;
            v10 = sub_135890(v6, (__int64)&v18, 9u);
            if ( a3 == 1 )
            {
              if ( v10 )
              {
                v14 = "mv:InsertInsn";
                v13 = "Restore deleted instruction";
LABEL_13:
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  140,
                  v14,
                  1,
                  v13,
                  &callui,
                  v11);
                v3 = 1;
                goto LABEL_9;
              }
            }
            else if ( v10 )
            {
LABEL_9:
              sub_11A960((__int64)v23);
              sub_11A960((__int64)v22);
              sub_11A960((__int64)v21);
              return v3;
            }
            v13 = "Insert assertion...";
            v14 = "mv:InsertInsn";
            if ( !a3 )
            {
              v15 = sub_3C52A0(v6, (__int64)&v18, v8);
              v13 = "Delete microcode instruction";
              if ( v15 )
                v13 = "Delete user-defined instruction";
              v14 = "mv:DeleteInsn";
            }
            goto LABEL_13;
          }
        }
      }
    }
  }
  return v3;
}
