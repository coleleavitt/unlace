__int64 __fastcall sub_9B6C60(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned int v4; // r12d
  int *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  void *v8; // r12
  void *v9; // rbx
  __int64 v11; // [rsp+8h] [rbp-C0h]
  void *v12; // [rsp+8h] [rbp-C0h]
  unsigned int v13; // [rsp+28h] [rbp-A0h]
  unsigned int v14; // [rsp+2Ch] [rbp-9Ch]
  _QWORD v15[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+80h] [rbp-48h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  v19[0] = 1024;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v20);
  v1 = *(_QWORD *)(a1 + 696);
  BYTE4(v20[0]) &= ~1u;
  LODWORD(v20[0]) = 1;
  if ( !v1 || (v2 = v1 + 24LL * *(unsigned int *)(v1 - 4), v1 == v2) )
  {
    v13 = -1;
  }
  else
  {
    v14 = 0;
    v3 = v1;
    v13 = -1;
    do
    {
      v4 = *(_DWORD *)(v3 + 12);
      if ( v4 != -1
        && ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v4 + 3) >> 4) & 3) == 1
        && (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v4 + 3) & 0x40) != 0 )
      {
        v5 = sub_9AD4F0(a1, v4);
        if ( *v5 || (v5[13] & 1) != 0 || v5[12] != 1 || v5[16] )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v4);
          if ( v11 )
          {
            v6 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v4);
            if ( v6 )
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v17, (int *)(v6 + 48));
              sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v17, v11 + 48, (__int64)v17);
              if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v19, (__int64)v17) )
              {
                if ( v13 == -1 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v17, (__int64)v15) )
                {
                  sub_27B950((__int64)qword_1C7F2C0, (__int64)v15, (int *)v17);
                  v13 = v4;
                  v14 = 1;
                }
                else if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)v17, (__int64)v15) )
                {
                  ++v14;
                  v7 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
                  *(_DWORD *)(a1 + 1112) = v7;
                  if ( !((HIWORD(v7) & 0x7FFFu) % v14) )
                  {
                    sub_27B950((__int64)qword_1C7F2C0, (__int64)v15, (int *)v17);
                    v13 = v4;
                  }
                }
              }
            }
          }
        }
      }
      v3 += 24;
    }
    while ( v2 != v3 );
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v12, v20);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v8, v18);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v9, v16);
  return v13;
}

