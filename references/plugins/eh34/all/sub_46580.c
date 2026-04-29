unsigned __int64 __fastcall sub_46580(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // rbp
  __int64 v4; // rbx
  _BYTE *v5; // rdx
  int v6; // esi
  _BYTE *v7; // rsi
  __int64 *v8; // r12
  unsigned int v9; // r14d
  unsigned __int8 (__fastcall *hexdsp)(__int64, _BYTE *, _QWORD); // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  void (__fastcall *v18)(__int64, __int64, _QWORD); // rax
  unsigned int v20; // r12d
  void (__fastcall *v21)(__int64, __int64, _QWORD); // rax
  __int64 v22; // [rsp+8h] [rbp-90h]
  unsigned __int8 v23; // [rsp+10h] [rbp-88h]
  __int64 v24; // [rsp+18h] [rbp-80h]
  __int64 v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v30[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v1 = a1 + 48;
  v31 = __readfsqword(0x28u);
  v3 = sub_4CAC0(a1 + 48);
  v26 = a1 + 336;
  if ( v3 )
  {
    v4 = 0;
    while ( 1 )
    {
      v13 = sub_4CAD0(v1, (unsigned int)v4);
      v28 = 0;
      v29 = 0;
      v11 = v13;
      v14 = *(_DWORD *)(v13 + 4);
      if ( v14 == 2 )
      {
        v15 = *(_QWORD *)(v11 + 16);
        v16 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 == 4 )
        {
          v7 = nullptr;
          v8 = &v28;
          goto LABEL_19;
        }
        if ( v16 > 4 )
        {
          if ( v16 == 5 )
          {
            v7 = nullptr;
            v8 = &v29;
LABEL_19:
            v9 = *(_DWORD *)&v7[*(_QWORD *)(v15 + 8) + 8];
            goto LABEL_10;
          }
        }
        else
        {
          v7 = (_BYTE *)&word_38;
          if ( !v16 )
          {
            v8 = &v28;
            goto LABEL_19;
          }
          v8 = &v29;
          if ( v16 == 1 )
            goto LABEL_19;
        }
LABEL_13:
        if ( v3 == ++v4 )
          return v31 - __readfsqword(0x28u);
      }
      else
      {
        if ( v14 != 3 )
          goto LABEL_13;
        v5 = *(_BYTE **)(v11 + 16);
        v6 = **(_DWORD **)v5;
        if ( v6 == 6 )
        {
          v7 = (_BYTE *)(a1 + 304);
          v8 = &v28;
        }
        else
        {
          if ( v6 != 10 )
            goto LABEL_13;
          v7 = (_BYTE *)(a1 + 320);
          v8 = &v29;
        }
        v24 = v11;
        v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) + 8LL);
        v23 = v5[8];
        hexdsp = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, _QWORD))get_hexdsp(v23, v7);
        if ( hexdsp(213, v7, v9) )
          goto LABEL_13;
        v11 = v24;
        if ( (v23 & 1) == 0 )
        {
          v27 = v24;
          v22 = v24 + 40;
          v25 = v24 + 24;
          sub_4BFB0(v30, v25);
          sub_4BFE0(v25, v22);
          v7 = v30;
          sub_4BFE0(v22, v30);
          v11 = v27;
        }
LABEL_10:
        v12 = v11;
        sub_4C070(v11);
        *(_DWORD *)v8 = v9;
        *((_BYTE *)v8 + 4) = 1;
        if ( !BYTE4(v28) )
        {
          if ( BYTE4(v29) )
          {
            v20 = v29;
            v21 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v12, v7);
            v21(205, a1 + 352, v20);
          }
          goto LABEL_13;
        }
        v17 = v28;
        ++v4;
        v18 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v12, v7);
        v18(205, v26, v17);
        if ( v3 == v4 )
          return v31 - __readfsqword(0x28u);
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}
