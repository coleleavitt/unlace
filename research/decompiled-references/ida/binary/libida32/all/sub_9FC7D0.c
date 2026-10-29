__int64 __fastcall sub_9FC7D0(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _BYTE *v11; // rbx
  _BYTE *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 (__fastcall *v19)(__int64); // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  int v22; // [rsp+Ch] [rbp-2Ch] BYREF
  char v23[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( a4 )
    sub_9FC5A0(a1, a3);
  v6 = *(_QWORD **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 48) )
  {
    v20 = *(_QWORD **)(a1 + 24);
    v22 = *(_DWORD *)(a1 + 52);
    sub_9FC110(v20, &v22, v23);
    *(_QWORD *)(a1 + 48) = 0;
    v6 = *(_QWORD **)(a1 + 24);
  }
  v7 = v6[1];
  if ( (unsigned __int64)(a3 + v7) > v6[2] )
  {
    sub_22130D0(v6, v6 + 3, a3 + v7, 1);
    v7 = v6[1];
  }
  v8 = *v6 + v7;
  if ( a3 > 0 )
  {
    if ( (v8 >= a2 + 16 || a2 >= *v6 + v7 + 16) && (unsigned __int64)(a3 - 1) > 0xE )
    {
      v9 = 0;
      do
      {
        *(__m128i *)(v8 + v9) = _mm_loadu_si128((const __m128i *)(a2 + v9));
        v9 += 16;
      }
      while ( v9 != (a3 & 0xFFFFFFFFFFFFFFF0LL) );
      v10 = a3 - (a3 & 0xFFFFFFFFFFFFFFF0LL);
      v11 = (_BYTE *)((a3 & 0xFFFFFFFFFFFFFFF0LL) + a2);
      v12 = (_BYTE *)((a3 & 0xFFFFFFFFFFFFFFF0LL) + v8);
      if ( a3 != (a3 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        *v12 = *v11;
        if ( v10 != 1 )
        {
          v12[1] = v11[1];
          if ( v10 != 2 )
          {
            v12[2] = v11[2];
            if ( v10 != 3 )
            {
              v12[3] = v11[3];
              if ( v10 != 4 )
              {
                v12[4] = v11[4];
                if ( v10 != 5 )
                {
                  v12[5] = v11[5];
                  if ( v10 != 6 )
                  {
                    v12[6] = v11[6];
                    if ( v10 != 7 )
                    {
                      v12[7] = v11[7];
                      if ( v10 != 8 )
                      {
                        v12[8] = v11[8];
                        if ( v10 != 9 )
                        {
                          v12[9] = v11[9];
                          if ( v10 != 10 )
                          {
                            v12[10] = v11[10];
                            if ( v10 != 11 )
                            {
                              v12[11] = v11[11];
                              if ( v10 != 12 )
                              {
                                v12[12] = v11[12];
                                if ( v10 != 13 )
                                {
                                  v12[13] = v11[13];
                                  if ( v10 != 14 )
                                    v12[14] = v11[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v21 = 0;
      do
      {
        *(_BYTE *)(v8 + v21) = *(_BYTE *)(a2 + v21);
        ++v21;
      }
      while ( a3 != v21 );
    }
    v7 = v6[1];
  }
  v6[1] = a3 + v7;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 24);
    v16 = *(_QWORD *)(a1 + 32);
    v17 = *(_QWORD *)(result + 8);
    if ( v16 )
    {
      result = sub_2259B60(v16);
      if ( (_BYTE)result )
      {
        v18 = *(_QWORD *)(a1 + 32);
        if ( !v18 || !(unsigned __int8)sub_2259B60(*(_QWORD *)(a1 + 32)) )
          BUG();
        v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 80LL);
        if ( v19 == sub_9FAD20 )
          result = *(_QWORD *)(v18 + 88);
        else
          result = v19(v18);
        LOBYTE(v17) = result + *(_BYTE *)(v18 + 32) - *(_BYTE *)(v18 + 16) + v17;
      }
    }
    if ( (v17 & 3) == 0 )
      break;
    v13 = *(_QWORD **)(a1 + 24);
    v14 = v13[1];
    if ( (unsigned __int64)(v14 + 1) > v13[2] )
    {
      sub_22130D0(*(_QWORD *)(a1 + 24), v13 + 3, v14 + 1, 1);
      v14 = v13[1];
    }
    *(_BYTE *)(*v13 + v14) = 0;
    ++v13[1];
  }
  return result;
}

