__int64 __fastcall sub_4034B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r13
  void **v4; // rbp
  void **v5; // r14
  void **v6; // r12
  _QWORD *v7; // r15
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  void **v14; // r14
  int v15; // eax
  void **v16; // r15
  _QWORD *v17; // r12
  unsigned __int8 v18; // al
  unsigned int v19; // r15d
  _QWORD *v20; // rax
  __int64 v23; // [rsp+10h] [rbp-58h]
  unsigned __int8 v24; // [rsp+10h] [rbp-58h]
  void **v25[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD **)(a1 + 264);
  v3 = &v2[2 * *(unsigned int *)(a1 + 272)];
  if ( v2 == v3 )
  {
LABEL_38:
    v4 = nullptr;
LABEL_39:
    v19 = 1;
    goto LABEL_36;
  }
  while ( *v2 <= 1u )
  {
    v2 += 2;
    if ( v3 == v2 )
      goto LABEL_38;
  }
  v4 = nullptr;
  if ( v3 == v2 )
    goto LABEL_39;
  while ( 1 )
  {
    v23 = v2[1];
    if ( v4 )
    {
      v5 = v4;
      v6 = &v4[*((unsigned int *)v4 - 1)];
      if ( v4 < v6 )
      {
        do
        {
          while ( 1 )
          {
            v7 = *v5;
            if ( *v5 )
            {
              v8 = (*(_DWORD *)v7)-- == 1;
              if ( v8 )
                break;
            }
            if ( ++v5 >= v6 )
              goto LABEL_21;
          }
          v9 = v7[6];
          if ( v9 )
          {
            v10 = v7[7];
            v8 = (*(_DWORD *)(v9 + 8))-- == 1;
            if ( v8 )
              sub_15D7BC0(v10, v9);
          }
          sub_41D1C0(v7 + 5);
          v11 = v7[3];
          if ( v11 )
            sub_186B220((void *)(v11 - 8));
          v12 = v7[1];
          if ( v12 )
          {
            v13 = v7[2];
            v8 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v8 )
              sub_15D7BC0(v13, v12);
          }
          sub_186B220(v7);
          ++v5;
        }
        while ( v5 < v6 );
      }
LABEL_21:
      *((_DWORD *)v4 - 1) = 0;
    }
    v25[0] = v4;
    sub_4032B0(v23, a2, v25);
    v4 = v25[0];
    if ( v25[0] )
    {
      v14 = &v25[0][*((unsigned int *)v25[0] - 1)];
      v15 = *((_DWORD *)v25[0] - 1);
      if ( v14 == v25[0] )
      {
        v24 = 0;
      }
      else
      {
        v24 = 0;
        v16 = v25[0];
        do
        {
          while ( 1 )
          {
            v17 = *v16;
            v18 = sub_1374270(a2, *((_QWORD *)*v16 + 1));
            if ( !v18 )
              break;
            ++v16;
            v24 = v18;
            if ( v14 == v16 )
              goto LABEL_28;
          }
          sub_3D4A90(a2, *(_QWORD *)(v17[6] + 16LL));
          ++v16;
        }
        while ( v14 != v16 );
LABEL_28:
        v15 = *((_DWORD *)v4 - 1);
      }
      v19 = v24;
      LOBYTE(v19) = (v15 == 0) | v24;
      if ( !(_BYTE)v19 )
        break;
    }
    v20 = v2 + 2;
    if ( v3 != v2 + 2 )
    {
      while ( 1 )
      {
        v2 = v20;
        if ( *v20 > 1u )
          break;
        v20 += 2;
        if ( v3 == v20 )
          goto LABEL_35;
      }
      if ( v3 != v20 )
        continue;
    }
LABEL_35:
    v19 = 1;
    break;
  }
LABEL_36:
  v25[0] = v4;
  sub_41D1C0(v25);
  return v19;
}

