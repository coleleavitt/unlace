__int64 __fastcall sub_6CA20(__int64 a1, unsigned int *a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned __int8 *v6; // r8
  __int64 result; // rax
  _BYTE *v8; // rbx
  unsigned __int8 v9; // r12
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int8 *v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int8 *v14; // rbx
  unsigned __int64 v15; // rax

  v4 = (unsigned __int64)&a3[a4];
  if ( !a4 )
    return -72;
  v5 = *a3;
  v6 = a3 + 1;
  if ( v5 <= 0x7F )
    goto LABEL_6;
  if ( v5 == 255 )
  {
    v6 = a3 + 3;
    if ( (unsigned __int64)(a3 + 3) <= v4 )
    {
      v5 = *(unsigned __int16 *)(a3 + 1) + 32512;
      *a2 = v5;
      goto LABEL_12;
    }
    return -72;
  }
  if ( v4 <= (unsigned __int64)v6 )
    return -72;
  v6 = a3 + 2;
  v5 = a3[1] + ((v5 - 128) << 8);
LABEL_6:
  *a2 = v5;
  if ( !v5 )
  {
    result = a4;
    if ( v6 == (unsigned __int8 *)v4 )
      return result;
    return -20;
  }
LABEL_12:
  v8 = v6 + 1;
  if ( (unsigned __int64)(v6 + 1) > v4 )
    return -72;
  v9 = *v6;
  if ( (*v6 & 3) == 0 )
  {
    v10 = a1 + 27324;
    v11 = sub_6C820(
            a1 + 32,
            (__int64 *)a1,
            v9 >> 6,
            0x23u,
            9u,
            v6 + 1,
            v4 - (_QWORD)v8,
            (__int64)qword_AA200,
            (__int64)qword_AA2E0,
            (__int64)qword_A9E60,
            *(_DWORD *)(a1 + 30004),
            *(_DWORD *)(a1 + 30204),
            v5,
            a1 + 27324,
            *(_DWORD *)(a1 + 30180));
    if ( v11 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v12 = &v8[v11];
      v13 = sub_6C820(
              a1 + 4136,
              (__int64 *)(a1 + 16),
              (v9 >> 4) & 3,
              0x1Fu,
              8u,
              v12,
              v4 - (_QWORD)v12,
              (__int64)qword_AA180,
              (__int64)qword_AA160,
              (__int64)qword_A9D40,
              *(_DWORD *)(a1 + 30004),
              *(_DWORD *)(a1 + 30204),
              v5,
              v10,
              *(_DWORD *)(a1 + 30180));
      if ( v13 <= 0xFFFFFFFFFFFFFF88LL )
      {
        v14 = &v12[v13];
        v15 = sub_6C820(
                a1 + 6192,
                (__int64 *)(a1 + 8),
                (v9 >> 2) & 3,
                0x34u,
                9u,
                v14,
                v4 - (_QWORD)v14,
                (__int64)qword_AA080,
                (__int64)qword_AA2A0,
                (__int64)qword_A9B20,
                *(_DWORD *)(a1 + 30004),
                *(_DWORD *)(a1 + 30204),
                v5,
                v10,
                *(_DWORD *)(a1 + 30180));
        if ( v15 <= 0xFFFFFFFFFFFFFF88LL )
          return &v14[v15] - a3;
      }
    }
  }
  return -20;
}

