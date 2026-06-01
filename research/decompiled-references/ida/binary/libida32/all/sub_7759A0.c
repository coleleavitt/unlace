void __fastcall sub_7759A0(_DWORD *a1)
{
  int v1; // eax
  int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r15d
  __int64 v12; // rsi
  int v13; // ebx
  _QWORD v14[3]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v15; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v20; // [rsp+58h] [rbp-B0h]
  char v21[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+C8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v1 = a1[12] - 1;
  a1[12] = v1;
  if ( !v1 )
  {
    v2 = a1[13];
    if ( v2 )
    {
      while ( 1 )
      {
        v8 = sub_76D500(v2);
        v2 = *(_DWORD *)(v8 + 48);
        v9 = v8;
        if ( *(_DWORD *)(v8 + 88) != -1 )
        {
          a1[12] += 32;
          sub_7773B0(v14, 0, 1);
          v10 = v19;
          v11 = *(_DWORD *)(v9 + 88);
          v12 = v18;
          v13 = v16;
          if ( v20 < v19 + 1 )
          {
            v18 = qvector_reserve(&v18, v18, v19 + 1, 4);
            v12 = v18;
            v10 = v19;
          }
          *(_DWORD *)(v12 + 4 * v10) = v13;
          ++v19;
          v21[0] = 2;
          v23 = 0;
          v22 = 0;
          copy_idcv(v21);
          v4 = v16;
          v5 = v15;
          if ( v17 < v16 + 1 )
          {
            v15 = qvector_reserve(&v15, v15, v16 + 1, 32);
            v5 = v15;
            v4 = v16;
          }
          v6 = v5 + 32 * v4;
          *(_BYTE *)v6 = 2;
          *(_QWORD *)(v6 + 24) = 0;
          *(_OWORD *)(v6 + 8) = 0;
          copy_idcv(v6);
          ++v16;
          free_idcv(v21);
          sub_775860(v14, 0, nullptr, v11);
          sub_777510(v14);
          v7 = a1[12] == 32;
          a1[12] -= 32;
          if ( !v7 )
            break;
        }
        if ( !v2 )
        {
          v2 = a1[12];
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      if ( a1 )
      {
        if ( !v2 )
        {
          sub_77B350(*((_QWORD *)a1 + 2));
          operator delete(a1, 0x38u);
        }
      }
    }
  }
}

