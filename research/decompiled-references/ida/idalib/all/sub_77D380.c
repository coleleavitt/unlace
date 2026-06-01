__int64 __fastcall sub_77D380(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, __int64, __int64, __int64, unsigned __int64); // r11
  __int64 v10; // r9
  __int64 v11; // rdi
  _QWORD *v12; // rbp
  void *v13; // rdi
  __int64 *v15; // rbx
  unsigned __int64 v16; // [rsp+0h] [rbp-A8h]
  __int64 v17; // [rsp+10h] [rbp-98h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+18h] [rbp-90h]
  __int64 v20; // [rsp+20h] [rbp-88h]
  void *s; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h]
  void *v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-60h]
  int v25; // [rsp+50h] [rbp-58h]
  __int64 v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[5] + 8LL) & 2) == 0 )
    return v28 - __readfsqword(0x28u);
  if ( a1[7] )
  {
    v3 = 0;
    v16 = 0;
    while ( 1 )
    {
      v25 = 1065353216;
      v26 = 0;
      s = &v27;
      v4 = a1[6];
      v27 = 0;
      v22 = 1;
      v5 = v3 + v4;
      v23 = nullptr;
      v6 = *(_QWORD *)(v5 + 32) == 0;
      v24 = 0;
      if ( !v6 )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(v5 + 24) + 9 * v7;
          if ( !*(_BYTE *)(v8 + 8) )
          {
            v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64))(*a1 + 120LL);
            v10 = a2 + *(_QWORD *)v8;
            if ( v9 == sub_773D30 )
            {
              v11 = v3 + a1[6];
              if ( (*(_BYTE *)(v11 + 168) & 4) == 0 )
              {
                v18 = a2 + *(_QWORD *)v8;
                v17 = v5;
                sub_773820((_QWORD *)(v11 + 48), *(_QWORD *)v8);
                v5 = v17;
                v10 = v18;
              }
            }
            else
            {
              v20 = v5;
              v19 = a2 + *(_QWORD *)v8;
              ((void (__fastcall *)(_QWORD *, void **, unsigned __int64, unsigned __int64))v9)(a1, &s, v16, v7);
              v5 = v20;
              v10 = v19;
            }
            *(_QWORD *)v8 = v10;
            *(_DWORD *)(v5 + 168) |= 1u;
          }
          ++v7;
        }
        while ( v7 < *(_QWORD *)(v5 + 32) );
        v12 = v23;
        if ( (*(_BYTE *)(v5 + 168) & 4) != 0 )
          goto LABEL_14;
        v15 = (__int64 *)(v5 + 48);
        if ( v23 )
          break;
      }
LABEL_16:
      memset(s, 0, 8 * v22);
      v24 = 0;
      v23 = nullptr;
      if ( s != &v27 )
        operator delete(s, 8 * v22);
      ++v16;
      v3 += 176;
      if ( v16 >= a1[7] )
        goto LABEL_19;
    }
    do
    {
      sub_7740F0(v15, v12 + 1);
      v12 = (_QWORD *)*v12;
    }
    while ( v12 );
    v12 = v23;
LABEL_14:
    while ( v12 )
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
      operator delete(v13, 0x10u);
    }
    goto LABEL_16;
  }
LABEL_19:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
  sub_39ADA0(0x47u, a1[4]);
  return sub_774BB0((__int64)a1, 71);
}
