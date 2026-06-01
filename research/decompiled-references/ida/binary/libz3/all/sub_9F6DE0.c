__int64 __fastcall sub_9F6DE0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r12d
  __int64 v3; // rbx
  unsigned int v4; // esi
  void *v5; // rbx
  __int64 v7; // rax
  unsigned int **v8; // rbp
  __int64 v9; // rax
  unsigned int **v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdx
  void *v13; // r14
  int v14; // eax
  unsigned int v15; // [rsp+4h] [rbp-B4h]
  char v16; // [rsp+23h] [rbp-95h]
  unsigned int v17; // [rsp+24h] [rbp-94h]
  char v18; // [rsp+3Fh] [rbp-79h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v22[9]; // [rsp+70h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 824);
  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  if ( v1 )
  {
    v16 = 0;
    v2 = 0;
    v17 = 0;
    v15 = -1;
    do
    {
      if ( v2 >= *(_DWORD *)(v1 - 4) )
        break;
      v3 = *(unsigned int *)(v1 + 4LL * v2);
      v4 = *(_DWORD *)(v1 + 4LL * v2);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4 * v3 + 3) & 0x40) != 0 )
      {
        v18 = 0;
        if ( !(unsigned __int8)sub_9F68D0(a1, v4, &v18) )
        {
          v7 = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v3);
          v8 = (unsigned int **)(v7 + 32);
          v9 = *(unsigned int *)(v7 + 24);
          v10 = &v8[v9];
          if ( v9 * 8 )
          {
            do
            {
              v11 = sub_B39350(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v8),
                      *(unsigned int *)(a1 + 8));
              if ( !sub_9B1230(a1, v11) && (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v11 + 3) & 0x40) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v11)
                  && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v11)) != 0 )
                {
                  v21[0] = 0;
                  v21[1] = 0;
                  v22[0] = 1;
                  v22[1] = 0;
                  sub_27B950((__int64)qword_1C7F2C0, (__int64)v21, (int *)(v12 + 48));
                  sub_89ABF0(
                    (__int64)qword_1C7F2C0,
                    (__int64)v21,
                    *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v11) + 48LL,
                    (__int64)v21);
                  if ( v16 && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v21, (__int64)v19) )
                    v11 = v15;
                  else
                    sub_27B950((__int64)qword_1C7F2C0, (__int64)v19, (int *)v21);
                  v13 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v21);
                  sub_182CBA0(v13, v22);
                  v15 = v11;
                  v16 = 1;
                }
                else if ( !v16 )
                {
                  ++v17;
                  v14 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
                  *(_DWORD *)(a1 + 1112) = v14;
                  if ( (HIWORD(v14) & 0x7FFFu) % v17 )
                    v11 = v15;
                  v15 = v11;
                }
              }
              ++v8;
            }
            while ( v10 != v8 );
          }
        }
        v1 = *(_QWORD *)(a1 + 824);
      }
      ++v2;
    }
    while ( v1 );
  }
  else
  {
    v15 = -1;
  }
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v5, v20);
  return v15;
}

