__int64 __fastcall sub_4039A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  void **v9; // rbx
  void **v10; // r14
  int v11; // eax
  unsigned int v12; // r15d
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v19; // [rsp+14h] [rbp-84h]
  void **v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  void **v24; // [rsp+48h] [rbp-50h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h]

  v22 = 0;
  v23 = 0;
  sub_403090(a2, &v23);
  v21 = v23;
  if ( v23 )
  {
    v19 = 0;
    v5 = 0;
    if ( *(_DWORD *)(v23 - 4) )
    {
      while ( 1 )
      {
        v6 = v5;
        v7 = sub_3FCD00(*(_QWORD **)(a1[2] + 264LL), *(_DWORD *)(a1[2] + 272LL), *(_QWORD *)(v21 + 8LL * v5));
        v25 = 0;
        v8 = (_QWORD *)v7[1];
        v24 = nullptr;
        v26 = a1[1];
        sub_403740(v8, a3, v6, &v24);
        v20 = v24;
        if ( v24 )
        {
          v9 = v24;
          v10 = &v24[*((unsigned int *)v24 - 1)];
          v11 = *((_DWORD *)v24 - 1);
          if ( v10 == v24 )
          {
            v12 = 0;
          }
          else
          {
            v12 = 0;
            do
            {
              while ( 1 )
              {
                v13 = *v9;
                sub_43D1D0(*a1 + 8LL, *((_QWORD *)*v9 + 1), 0, v19 + 1, &v25, 1);
                v14 = sub_1374270(a3, v25);
                if ( !(_BYTE)v14 )
                  break;
                ++v9;
                v12 = v14;
                if ( v10 == v9 )
                  goto LABEL_9;
              }
              sub_3D4A90(a3, *(_QWORD *)(v13[6] + 16LL));
              ++v9;
            }
            while ( v10 != v9 );
LABEL_9:
            v11 = *((_DWORD *)v20 - 1);
          }
          LOBYTE(v12) = (v11 == 0) | v12;
          if ( !(_BYTE)v12 )
            break;
        }
        sub_41D1C0(&v24);
        v15 = v25;
        if ( v25 )
        {
          v16 = v26;
          if ( (*(_DWORD *)(v25 + 8))-- == 1 )
            sub_15D7BC0(v16, v15);
        }
        v5 = ++v19;
        if ( v19 >= *(_DWORD *)(v21 - 4) )
          goto LABEL_15;
      }
      sub_41D1C0(&v24);
      sub_3FCDF0(v25, v26);
    }
    else
    {
LABEL_15:
      v12 = 1;
    }
    sub_186B220((void *)(v21 - 8));
  }
  else
  {
    v12 = 1;
  }
  sub_41D1C0(&v22);
  return v12;
}

