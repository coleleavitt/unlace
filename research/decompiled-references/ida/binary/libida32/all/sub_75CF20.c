__int64 __fastcall sub_75CF20(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r11
  __int64 v6; // r12
  bool v7; // zf
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // r8d
  void (__fastcall *v11)(__int64, __int64, unsigned int, __int64, unsigned int); // rax
  int v12; // r9d
  __int64 v13; // rdi
  unsigned int *v14; // rbx
  unsigned int *v15; // rdi
  __int64 *v17; // r12
  unsigned int v18; // [rsp+4h] [rbp-A4h]
  int v19; // [rsp+10h] [rbp-98h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  int v21; // [rsp+18h] [rbp-90h]
  __int64 v22; // [rsp+20h] [rbp-88h]
  void *s; // [rsp+30h] [rbp-78h] BYREF
  __int64 v24; // [rsp+38h] [rbp-70h]
  void *v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[5] + 8LL) & 2) == 0 )
    return v30 - __readfsqword(0x28u);
  if ( a1[7] )
  {
    v18 = 0;
    v3 = 0;
    while ( 1 )
    {
      v4 = a1[6];
      v27 = 1065353216;
      v28 = 0;
      v5 = 176 * v3;
      s = &v29;
      v29 = 0;
      v6 = 176 * v3 + v4;
      v24 = 1;
      v7 = *(_QWORD *)(v6 + 32) == 0;
      v25 = nullptr;
      v26 = 0;
      if ( !v7 )
      {
        v8 = 0;
        do
        {
          v9 = *(_QWORD *)(v6 + 24) + 5 * v8;
          if ( !*(_BYTE *)(v9 + 4) )
          {
            v10 = *(_DWORD *)v9;
            v11 = *(void (__fastcall **)(__int64, __int64, unsigned int, __int64, unsigned int))(*a1 + 120LL);
            v12 = a2 + *(_DWORD *)v9;
            if ( v11 == sub_753890 )
            {
              v13 = v5 + a1[6];
              if ( (*(_BYTE *)(v13 + 164) & 4) == 0 )
              {
                v20 = v5;
                v19 = a2 + v10;
                sub_753360((_QWORD *)(v13 + 48), v10);
                v12 = v19;
                v5 = v20;
              }
            }
            else
            {
              v22 = v5;
              v21 = a2 + v10;
              ((void (__fastcall *)(_QWORD *, void **, _QWORD, unsigned __int64))v11)(a1, &s, v18, v8);
              v5 = v22;
              v12 = v21;
            }
            *(_DWORD *)v9 = v12;
            *(_DWORD *)(v6 + 164) |= 1u;
          }
          ++v8;
        }
        while ( v8 < *(_QWORD *)(v6 + 32) );
        v14 = (unsigned int *)v25;
        if ( (*(_BYTE *)(v6 + 164) & 4) != 0 )
          goto LABEL_14;
        v17 = (__int64 *)(v6 + 48);
        if ( v25 )
          break;
      }
LABEL_16:
      memset(s, 0, 8 * v24);
      v26 = 0;
      v25 = nullptr;
      if ( s != &v29 )
        operator delete(s, 8 * v24);
      v3 = ++v18;
      if ( (unsigned __int64)v18 >= a1[7] )
        goto LABEL_19;
    }
    do
    {
      sub_753C70(v17, v14 + 2);
      v14 = *(unsigned int **)v14;
    }
    while ( v14 );
    v14 = (unsigned int *)v25;
LABEL_14:
    while ( v14 )
    {
      v15 = v14;
      v14 = *(unsigned int **)v14;
      operator delete(v15, 0x10u);
    }
    goto LABEL_16;
  }
LABEL_19:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
  sub_396090(0x47u, a1[4]);
  return sub_754740((__int64)a1, 71);
}

