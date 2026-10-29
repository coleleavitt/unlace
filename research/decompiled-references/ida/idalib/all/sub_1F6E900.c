__int64 __fastcall sub_1F6E900(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  int v8; // r14d
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r14d
  _QWORD *v17; // r15
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  _QWORD *v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+0h] [rbp-48h]

  v4 = *(_DWORD *)(a3 + 8);
  sub_A1FEC0(a1, 3u, *(_DWORD *)(a1 + 56));
  sub_1F6E7D0(a1, a2);
  result = sub_1F6E7D0(a1, v4);
  if ( v4 )
  {
    v6 = 0;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)a3 + v6);
      result = (unsigned int)v7;
      if ( v7 == (unsigned int)v7 )
      {
        result = sub_1F6E7D0(a1, v7);
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 52);
        v9 = *(_DWORD *)(a1 + 48);
        if ( v7 > 0x1F )
        {
          do
          {
            v11 = (v7 & 0x1F | 0x20) << v9;
            v9 += 6;
            v8 |= v11;
            *(_DWORD *)(a1 + 52) = v8;
            if ( v9 > 0x1F )
            {
              v12 = *(_QWORD **)(a1 + 24);
              v13 = v12[1];
              if ( (unsigned __int64)(v13 + 4) > v12[2] )
              {
                v21 = *(_QWORD **)(a1 + 24);
                sub_2236E10(v21, v12 + 3, v13 + 4, 1);
                v12 = v21;
                v13 = v21[1];
              }
              *(_DWORD *)(*v12 + v13) = v8;
              v8 = 0;
              v12[1] += 4LL;
              v10 = *(_DWORD *)(a1 + 48);
              if ( v10 )
                v8 = (v7 & 0x1F | 0x20) >> (32 - (unsigned __int8)v10);
              v9 = ((_BYTE)v10 + 6) & 0x1F;
              *(_DWORD *)(a1 + 52) = v8;
            }
            v7 >>= 5;
            *(_DWORD *)(a1 + 48) = v9;
          }
          while ( v7 > 0x1F );
          result = (unsigned int)v7;
        }
        v14 = (_DWORD)result << v9;
        v15 = v9 + 6;
        v16 = v14 | v8;
        *(_DWORD *)(a1 + 52) = v16;
        if ( v15 > 0x1F )
        {
          v17 = *(_QWORD **)(a1 + 24);
          v18 = v17[1];
          if ( (unsigned __int64)(v18 + 4) > v17[2] )
          {
            v22 = result;
            sub_2236E10(*(_QWORD *)(a1 + 24), v17 + 3, v18 + 4, 1);
            v18 = v17[1];
            LODWORD(result) = v22;
          }
          *(_DWORD *)(*v17 + v18) = v16;
          v19 = *(_DWORD *)(a1 + 48);
          v17[1] += 4LL;
          result = (unsigned int)result >> (32 - v19);
          v20 = 0;
          if ( v19 )
            v20 = result;
          *(_DWORD *)(a1 + 52) = v20;
          *(_DWORD *)(a1 + 48) = ((_BYTE)v19 + 6) & 0x1F;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = v15;
        }
      }
      v6 += 8;
    }
    while ( 8LL * (v4 - 1) + 8 != v6 );
  }
  return result;
}
