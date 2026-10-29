__int64 __fastcall sub_9FC300(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  int v6; // ecx
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // rax
  unsigned int v9; // r8d
  int v10; // ebp
  unsigned int v11; // ecx
  int v12; // ebp
  unsigned __int64 v13; // rbp
  unsigned int v14; // esi
  char v15; // si
  unsigned __int64 v16; // rbp
  unsigned int v17; // esi
  char v18; // si
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  int v22; // eax
  _QWORD *v23; // [rsp+0h] [rbp-48h]
  unsigned int v24; // [rsp+Ch] [rbp-3Ch]

  sub_9FC180(a1, 2u, *(_DWORD *)(a1 + 56));
  sub_9FC1F0(a1, *(_DWORD *)(a2 + 8), 5);
  result = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)result )
  {
    v4 = 0;
    v5 = 16 * ((unsigned int)(result - 1) + 1LL);
    do
    {
      v6 = *(_DWORD *)(a1 + 48);
      v7 = (unsigned __int64 *)(v4 + *(_QWORD *)a2);
      v8 = v7[1];
      v9 = v8 & 1;
      v10 = (v7[1] & 1) << v6;
      v11 = v6 + 1;
      v12 = *(_DWORD *)(a1 + 52) | v10;
      *(_DWORD *)(a1 + 52) = v12;
      if ( v11 > 0x1F )
      {
        v19 = *(_QWORD **)(a1 + 24);
        v20 = v19[1];
        if ( (unsigned __int64)(v20 + 4) > v19[2] )
        {
          v23 = *(_QWORD **)(a1 + 24);
          v24 = v9;
          sub_22130D0(v23, v19 + 3, v20 + 4, 1);
          v19 = v23;
          v9 = v24;
          v20 = v23[1];
        }
        *(_DWORD *)(*v19 + v20) = v12;
        v21 = 0;
        v19[1] += 4LL;
        v22 = *(_DWORD *)(a1 + 48);
        if ( v22 )
          v21 = v9 >> (32 - v22);
        *(_DWORD *)(a1 + 52) = v21;
        *(_DWORD *)(a1 + 48) = ((_BYTE)v22 + 1) & 0x1F;
        v8 = v7[1];
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v11;
      }
      if ( (v8 & 1) != 0 )
      {
        v13 = *v7;
        v14 = *v7;
        if ( *v7 == v14 )
        {
          result = sub_9FC1F0(a1, v14, 8);
        }
        else
        {
          if ( v13 > 0x7F )
          {
            do
            {
              v15 = v13;
              v13 >>= 7;
              sub_9FC180(a1, v15 & 0x7F | 0x80, 8);
            }
            while ( v13 > 0x7F );
            v14 = v13;
          }
          result = sub_9FC180(a1, v14, 8);
        }
      }
      else
      {
        sub_9FC180(a1, (*((_BYTE *)v7 + 8) >> 1) & 7, 3);
        result = (*((_BYTE *)v7 + 8) >> 1) & 7;
        if ( ((*((_BYTE *)v7 + 8) >> 1) & 7) == 0 )
          goto LABEL_21;
        if ( (unsigned __int8)result > 2u )
        {
          if ( (unsigned __int8)result > 5u )
LABEL_21:
            sub_21FDF30("Invalid encoding", 1);
        }
        else
        {
          v16 = *v7;
          v17 = *v7;
          if ( *v7 == v17 )
          {
            result = sub_9FC1F0(a1, v17, 5);
          }
          else
          {
            if ( v16 > 0xF )
            {
              do
              {
                v18 = v16;
                v16 >>= 4;
                sub_9FC180(a1, v18 & 0xF | 0x10, 5);
              }
              while ( v16 > 0xF );
              v17 = v16;
            }
            result = sub_9FC180(a1, v17, 5);
          }
        }
      }
      v4 += 16;
    }
    while ( v5 != v4 );
  }
  return result;
}

