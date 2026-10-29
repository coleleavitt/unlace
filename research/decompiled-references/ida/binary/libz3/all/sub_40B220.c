__int64 __fastcall sub_40B220(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r12
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // rdx
  bool v13; // zf
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 648LL);
  if ( (_BYTE)v2 )
  {
    if ( *(_DWORD *)(a2 + 96) <= 0xFFFEu && (v4 = *(_QWORD *)(a2 + 88)) != 0 )
    {
      v24 = a1 + 400;
      if ( !*(_BYTE *)(a1 + 416) )
      {
        v23 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
        *(_BYTE *)(a1 + 416) = 1;
        v4 = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(a1 + 400) = v23;
      }
      v6 = sub_3FF130(a1, v4);
      if ( v6 )
      {
        sub_403090(v6, (_QWORD *)(a1 + 320));
        v7 = *(_QWORD *)(a1 + 320);
        if ( v7 )
        {
          v8 = *(unsigned int *)(v7 - 4);
          if ( (_DWORD)v8 )
          {
            v9 = 0;
            while ( 1 )
            {
              v14 = sub_3FCD00(
                      *(_QWORD **)(*(_QWORD *)(a1 + 16) + 264LL),
                      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 272LL),
                      *(_QWORD *)(v7 + 8 * v9));
              v15 = *(unsigned int *)(a2 + 96);
              v25 = 0;
              v16 = v14[1];
              v26 = *(_QWORD *)(a1 + 8);
              sub_40B100((__int64)v27, v16, v15, v17, v18, v19);
              v20 = v27[0];
              v21 = v25;
              v25 = v27[0];
              if ( v21 )
              {
                v13 = (*(_DWORD *)(v21 + 8))-- == 1;
                if ( v13 )
                {
                  sub_15D7BC0(v27[1], v21);
                  v20 = v25;
                }
              }
              sub_43D1D0(*(_QWORD *)a1 + 8LL, v20, 0, (unsigned int)(v9 + 1), &v25, 1);
              v10 = sub_13742D0(*(_QWORD *)(a2 + 88), v25);
              v11 = v25;
              v12 = v26;
              if ( v10 )
                break;
              if ( v25 )
              {
                v13 = (*(_DWORD *)(v25 + 8))-- == 1;
                if ( v13 )
                  sub_15D7BC0(v12, v11);
              }
              if ( v8 == ++v9 )
                goto LABEL_22;
              v7 = *(_QWORD *)(a1 + 320);
            }
            v2 = 0;
            sub_3FCDF0(v25, v26);
          }
        }
      }
      else
      {
        *(_BYTE *)(a2 + 108) |= 2u;
      }
LABEL_22:
      if ( *(_BYTE *)(a1 + 416) )
        sub_3FCC40(v24);
    }
    else
    {
      return 0;
    }
  }
  return v2;
}

