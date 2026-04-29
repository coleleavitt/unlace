__int64 __fastcall sub_9CBD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r8
  __int64 v5; // r13
  int v6; // eax
  char v7; // al
  _DWORD *v8; // rax
  unsigned __int8 v9; // [rsp+0h] [rbp-D8h]
  __int64 v10; // [rsp+0h] [rbp-D8h]
  _BYTE v11[16]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp-68h] BYREF
  __int128 v16; // [rsp+78h] [rbp-60h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  unsigned __int64 v18; // [rsp+98h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  result = 0;
  if ( *(_BYTE *)(a2 + 32) == 4 && **(_DWORD **)(a2 + 40) == 5 )
  {
    v13[1] = a1;
    v14[0] = 0xFFFFFFFF00000000LL;
    v15 = 0xFFFFFFFF00000000LL;
    v13[0] = &off_4C8F50;
    v13[2] = 0;
    v13[3] = 0;
    v14[1] = 0;
    v17 = 0xFFFFFFFFLL;
    v16 = 0;
    v3 = sub_91AB0((__int64)v13, a2, 0);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a2 + 40);
      if ( *(_DWORD *)(a2 + 68) == *(_DWORD *)(v4 + 36) / 2 )
      {
        if ( *(_DWORD *)v3 == 4 )
        {
          if ( *(_QWORD *)(v3 + 16) == a2 )
          {
            v5 = v3 + 32;
            if ( (unsigned __int8)sub_12E780(a1, v3, v3 + 32, a2, v4 + 32) )
            {
              v12[0] = a2;
              v8 = (_DWORD *)sub_125A00(a1, v3 + 32, v12, 0);
              if ( v8 )
              {
                if ( *v8 == 5 )
                {
                  v10 = (__int64)v8;
                  if ( (unsigned __int8)sub_122120(v8 + 16, v3 + 32, 0) )
                  {
                    if ( (unsigned __int8)sub_122120(v10 + 32, v3 + 32, 0) && !(unsigned __int8)sub_90130(a1, v10, a2) )
                    {
                      sub_119B60(v10);
                      goto LABEL_12;
                    }
                  }
                }
              }
            }
          }
        }
        else if ( *(_DWORD *)v3 == 5 && !(_DWORD)v17 )
        {
          v5 = v3 + 32;
          if ( (unsigned __int8)sub_12E780(a1, v3, v3 + 32, a2, v4 + 32) )
          {
            if ( !(unsigned __int8)sub_90130(a1, v3, a2) && !(unsigned __int8)sub_A61A0(a1, v3, *(_QWORD *)(v3 + 8), a2) )
            {
LABEL_12:
              sub_120000(v11, *(_QWORD *)(a2 + 40) + 32LL);
              sub_120000(v12, v3 + 64);
              sub_1537B0(a1, *(_QWORD *)(v3 + 8), v12, *(_QWORD *)(a2 + 8), a2 + 64, 1);
              *(_DWORD *)a2 = 5;
              sub_118FD0(a2 + 32, v11);
              sub_118FD0(a2 + 64, v12);
              if ( *(_DWORD *)v3 == 5 )
                sub_119B60(v3);
              else
                sub_118FD0(v5, v3 + 64);
              v6 = *(_DWORD *)(a1 + 24);
              BYTE1(v6) &= ~2u;
              LOBYTE(v6) = v6 | 0x80;
              *(_DWORD *)(a1 + 24) = v6;
              sub_119B90(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              sub_95890(a1, a2);
              sub_119360(v12);
              sub_119360(v11);
              v7 = 1;
              goto LABEL_16;
            }
          }
        }
      }
    }
    v7 = 0;
LABEL_16:
    v9 = v7;
    v13[0] = &off_4C8F50;
    sub_119360(&v15);
    sub_119360(v14);
    return v9;
  }
  return result;
}
