__int64 __fastcall sub_CFFC0(int a1, unsigned __int16 *a2, __int64 a3)
{
  int v5; // edi
  unsigned int v6; // ebp
  int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // r14
  unsigned __int64 v13; // rbx
  int v14; // eax
  size_t v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD v19[41]; // [rsp+0h] [rbp-148h] BYREF

  v19[33] = __readfsqword(0x28u);
  if ( a1 == -1 )
    return 0;
  v5 = dword_252588;
  if ( dword_252744 )
    v5 = HIDWORD(qword_2524A0);
  v6 = sub_CFEA0(v5, a1, a3);
  if ( !(_BYTE)v6 )
    return 0;
  v8 = a2[1];
  if ( (_WORD)v8 )
  {
    v9 = *(_DWORD *)a3;
    if ( (~*(_DWORD *)a3 & 0xFFFFFFFD) != 0 )
    {
      v10 = v8 + (unsigned int)*a2;
      if ( v9 < -1 )
      {
        if ( v9 == -2 && (unsigned int)v10 <= 0x40 )
        {
          v12 = (_QWORD *)(a3 + 8);
          v13 = (v8 + 7) >> 3;
          goto LABEL_13;
        }
      }
      else if ( 8LL * *(_QWORD *)(a3 + 16) >= v10 )
      {
        v11 = v8 + 7;
        if ( (unsigned int)v11 <= 0x807 )
        {
          v12 = *(_QWORD **)(a3 + 8);
          v13 = v11 >> 3;
LABEL_13:
          getinf_flag();
          if ( !(unsigned __int8)bitrange_t_extract_using_bitrange() )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          v14 = *(_DWORD *)a3;
          if ( *(int *)a3 >= 0 )
          {
            v16 = *(_QWORD *)(a3 + 16);
            if ( v16 < v13 )
            {
              v17 = *(_QWORD *)(a3 + 8);
              if ( *(_QWORD *)(a3 + 24) < v13 )
              {
                v18 = qvector_reserve();
                v16 = *(_QWORD *)(a3 + 16);
                *(_QWORD *)(a3 + 8) = v18;
                v17 = v18;
              }
              memset((void *)(v17 + v16), 0, v13 - v16);
              *(_QWORD *)(a3 + 16) = v13;
            }
            else if ( v16 != v13 )
            {
              *(_QWORD *)(a3 + 16) = v13;
            }
          }
          else
          {
            if ( v14 == -1 )
              v15 = *(_QWORD *)(a3 + 16);
            else
              v15 = 8LL * (v14 == -2);
            memset(v12, 0, v15);
          }
          if ( (unsigned int)v13 >= 8 )
          {
            *v12 = v19[0];
            *(_QWORD *)((char *)v12 + v13 - 8) = *(_QWORD *)((char *)&v19[-1] + v13);
            qmemcpy(
              (void *)((unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              (const void *)((char *)v19 - ((char *)v12 - ((unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
              8LL * (((unsigned int)v13 + (_DWORD)v12 - (((_DWORD)v12 + 8) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v13 & 4) != 0 )
          {
            *(_DWORD *)v12 = v19[0];
            *(_DWORD *)((char *)v12 + (unsigned int)v13 - 4) = *(_DWORD *)((char *)v19 + (unsigned int)v13 - 4);
          }
          else if ( (_DWORD)v13 )
          {
            *(_BYTE *)v12 = v19[0];
            if ( (v13 & 2) != 0 )
              *(_WORD *)((char *)v12 + v13 - 2) = *(_WORD *)((char *)v19 + v13 - 2);
          }
          return v6;
        }
        sub_8F740((__int64)"warning: register %d size is too large.", a1);
        return 0;
      }
      sub_8F740((__int64)"warning: bad size for register %d from the debugger.", a1);
      return 0;
    }
  }
  return v6;
}

