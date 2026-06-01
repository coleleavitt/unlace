__int64 __fastcall sub_3A0120(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // rcx
  unsigned int v4; // r14d
  unsigned int v6; // eax
  char v7; // r8
  __int64 v8; // r12
  void *v9; // r9
  void *v10; // rax
  void *v11; // [rsp+8h] [rbp-88h]
  char v12; // [rsp+17h] [rbp-79h]
  char v13; // [rsp+17h] [rbp-79h]
  __int64 *v14; // [rsp+18h] [rbp-78h]
  unsigned int v15; // [rsp+2Ch] [rbp-64h] BYREF
  __int64 v16; // [rsp+30h] [rbp-60h] BYREF
  __int64 v17; // [rsp+38h] [rbp-58h] BYREF
  void *src; // [rsp+40h] [rbp-50h] BYREF
  __int128 v19; // [rsp+48h] [rbp-48h]
  unsigned __int64 v20; // [rsp+58h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 128);
  v20 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(v1 + 1008);
  v14 = sub_38C8E0(a1, &v16, (int *)&v15);
  if ( !v14 )
    return 0;
  v3 = *(unsigned int *)(v2 + 8);
  v17 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, const char *, __int64, _QWORD, __int64))callui)(
         16,
         13,
         &v17,
         v3,
         "Please choose enum",
         v16,
         v15,
         v2 + 12);
  if ( (_BYTE)v4 )
  {
    src = nullptr;
    v4 = 0;
    v19 = 0;
    if ( (v17 & 0x100) != 0 )
    {
      if ( get_tinfo_pdata() )
      {
        LOBYTE(v6) = sub_32CB80(&v17, *(_QWORD *)(a1 + 128));
        v4 = v6;
        if ( (_BYTE)v6 )
        {
          *(_DWORD *)(v2 + 8) = get_tinfo_property();
          v7 = *(_BYTE *)(v2 + 12);
          v14[5] = v14[5] & 0xFF000000F00FFFFFLL | 0x88888808800000LL;
          if ( v14 + 2 != (__int64 *)&src )
          {
            v8 = v19;
            if ( (unsigned __int64)v19 < 2 )
            {
              v14[3] = 0;
            }
            else
            {
              v9 = src;
              v10 = (void *)v14[2];
              if ( v14[4] < (unsigned __int64)v19 )
              {
                v13 = v7;
                v11 = src;
                v10 = (void *)qvector_reserve((__int64)(v14 + 2), (__int64)v10, v19, 1);
                v9 = v11;
                v7 = v13;
                v14[2] = (__int64)v10;
              }
              v12 = v7;
              v14[3] = v8;
              memmove(v10, v9, v8 - 1);
              v7 = v12;
              *(_BYTE *)(v14[2] + v8 - 1) = 0;
            }
          }
          *((_BYTE *)v14 + 13) |= 0x21u;
          *((_BYTE *)v14 + 14) = v7;
          sub_39FD80(a1, (__int64)v14, 1u, (__m128)0LL);
          goto LABEL_8;
        }
        sub_2B4E70((__int64)"AUTOHIDE NONE\nToo long/wide enum. It cannot be used by the decompiler, sorry");
      }
      v4 = 0;
LABEL_8:
      if ( src )
      {
        *(_QWORD *)&v19 = 0;
        qfree((__int64)src);
      }
    }
  }
  clear_tinfo_t();
  return v4;
}
