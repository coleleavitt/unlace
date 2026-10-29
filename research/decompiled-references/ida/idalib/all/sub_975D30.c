__int64 __fastcall sub_975D30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  _DWORD *v6; // rbx
  size_t v7; // r8
  unsigned __int64 v8; // rax
  size_t v9; // r8
  unsigned __int64 v10; // r13
  unsigned int *v11; // r11
  unsigned __int64 v12; // rax
  unsigned int *i; // r10
  unsigned int v14; // edx
  unsigned __int64 v16; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v17; // [rsp+8h] [rbp-E0h]
  _DWORD *v18; // [rsp+8h] [rbp-E0h]
  _DWORD *v19; // [rsp+8h] [rbp-E0h]
  __int64 v20; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-D0h]
  unsigned int v22; // [rsp+28h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+2Ch] [rbp-BCh] BYREF
  _BYTE v24[120]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a3 > 8 )
  {
    v4 = sub_9740D0((unsigned int *)(a1 + 10264), (unsigned __int8 *)(a2 + 8), a3 - 8, a1, 0x2818u, 0);
    if ( v4 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v5 = a2 + a3;
      v22 = 31;
      v6 = (_DWORD *)(a2 + 8 + v4);
      v16 = v5;
      v17 = sub_900A40(v24, &v22, (int *)&v23, v6, v5 - (_QWORD)v6);
      if ( v17 <= 0xFFFFFFFFFFFFFF88LL && v22 <= 0x1F && v23 <= 8 )
      {
        v20 = a1 + 26664;
        sub_97E660(
          a1 + 4104,
          (unsigned int)v24,
          v22,
          (unsigned int)&unk_23D8A20,
          (unsigned int)&unk_23D8A00,
          v23,
          a1 + 26664,
          628,
          0);
        v22 = 52;
        v7 = v16 - ((_QWORD)v6 + v17);
        v18 = (_DWORD *)((char *)v6 + v17);
        v8 = sub_900A40(v24, &v22, (int *)&v23, v18, v7);
        if ( v8 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v21 = v8;
          if ( v22 <= 0x34 && v23 <= 9 )
          {
            sub_97E660(
              a1 + 6160,
              (unsigned int)v24,
              v22,
              (unsigned int)&unk_23D8920,
              (unsigned int)&unk_23D8B40,
              v23,
              v20,
              628,
              0);
            v22 = 35;
            v9 = v16 - ((_QWORD)v18 + v21);
            v19 = (_DWORD *)((char *)v18 + v21);
            v10 = sub_900A40(v24, &v22, (int *)&v23, v19, v9);
            if ( v10 <= 0xFFFFFFFFFFFFFF88LL && v22 <= 0x23 && v23 <= 9 )
            {
              sub_97E660(
                a1,
                (unsigned int)v24,
                v22,
                (unsigned int)&unk_23D8AA0,
                (unsigned int)&unk_23D8B80,
                v23,
                v20,
                628,
                0);
              v11 = (_DWORD *)((char *)v19 + v10);
              v12 = (unsigned __int64)v19 + v10 + 12;
              if ( v12 <= v16 )
              {
                for ( i = (unsigned int *)(a1 + 26652); ; ++i )
                {
                  v14 = *v11++;
                  if ( !v14 || v14 > v16 - v12 )
                    break;
                  *i = v14;
                  if ( (unsigned int *)v12 == v11 )
                    return v12 - a2;
                }
              }
            }
          }
        }
      }
    }
  }
  return -30;
}
