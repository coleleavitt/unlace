void __fastcall sub_18CFB60(__int64 a1, unsigned __int64 a2, signed int a3, __m128i a4, double a5)
{
  _BYTE *v6; // rdx
  int v8; // eax
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  char *v13; // r14
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // r14
  size_t v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r15
  int v20; // eax
  int v21; // eax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-160h]
  __int64 v26; // [rsp+10h] [rbp-150h] BYREF
  _DWORD v27[6]; // [rsp+18h] [rbp-148h] BYREF
  void *v28; // [rsp+30h] [rbp-130h]
  __int64 v29; // [rsp+40h] [rbp-120h] BYREF
  _DWORD v30[6]; // [rsp+58h] [rbp-108h] BYREF
  void *v31; // [rsp+70h] [rbp-F0h]
  __int64 v32; // [rsp+80h] [rbp-E0h] BYREF
  _BYTE v33[200]; // [rsp+98h] [rbp-C8h] BYREF

  if ( a3 >= 0 && *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) )
  {
    v6 = *(_BYTE **)(a1 + 232);
    v8 = 22;
    if ( (*v6 & 1) == 0 )
      v8 = (v6[1] & 8) == 0 ? 6 : 22;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 8LL) & v8) != v8
      && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 8LL) & 0x18) != 0x18 )
    {
      while ( ((*(_WORD *)a2 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
        a2 = *(_QWORD *)(a2 + 24);
      v9 = (unsigned __int16 *)sub_BFB9F0(a2);
      v11 = *v9;
      LOWORD(v11) = v11 & 0x1FF;
      if ( (unsigned __int16)v11 > 0x4Eu )
      {
        if ( (unsigned __int16)v11 > 0x58u )
        {
          if ( (unsigned __int16)v11 <= 0x5Du )
          {
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFB6C0((__int64)v9, *(_QWORD *)(a1 + 248), v11, v10)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1B3 )
              return;
          }
        }
        else
        {
          v22 = (v9[1] >> 3) & 0x7F;
          if ( v22 == 24 )
            return;
          if ( !v22 )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v23 + 16) == 13
              && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1B3
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
            {
              return;
            }
          }
        }
      }
      sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), a3, 0x1A12u, 0);
      sub_15F7200(v33);
      v12 = sub_EEB7E0(a2, a1 + 8, *(double *)a4.m128i_i64);
      v13 = "static_cast<void>(";
      sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v12, 0x16BCu, 0);
      v26 = sub_EEC8C0(a2, a1 + 8, *(double *)a4.m128i_i64);
      v14 = sub_1587DB0((__int64)v33, &v26);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
        v13 = "(void)(";
      v25 = j__strlen(v13);
      v15 = sub_EEB7E0(a2, (__int64)&v26, *(double *)a4.m128i_i64);
      sub_9EC740((__int64)v27, v15, v13, v25, 0);
      v16 = sub_1589170(v14, v27);
      v17 = j__strlen(")");
      v18 = *(_QWORD *)(a1 + 240);
      v19 = v17;
      v20 = sub_EEC140(a2);
      v21 = sub_13DC060(v20, 0, *(__int64 **)(v18 + 88), *(_QWORD *)(v18 + 56), a4, a5);
      sub_9EC740((__int64)v30, v21, ")", v19, 0);
      sub_1589170(v16, v30);
      if ( v31 != &v32 )
        operator delete(v31);
      if ( v28 != &v29 )
        operator delete(v28);
      sub_15F7200(v33);
    }
  }
}
