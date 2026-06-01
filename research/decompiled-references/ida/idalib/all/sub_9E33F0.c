__int64 __fastcall sub_9E33F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 *v13; // rbp
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  if ( (unsigned __int8)sub_BFE550(a2) )
  {
    v3 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) != 48 )
      return sub_9E2140((__int64)a1, v3);
  }
  else
  {
    v5 = 0;
    v6 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v9 = v6;
    if ( v6 && (*(_BYTE *)(v6 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v10 = sub_B77AF0(v6);
      if ( v10 )
        v5 = sub_B7F990(*(_QWORD *)(v10 + 48));
      else
        v5 = sub_B7F990(v9);
    }
    v11 = *(unsigned int *)(a2 + 16);
    result = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
    v12 = (__int64 *)(a2 + result);
    v13 = (__int64 *)(result + 8 * v11 + a2);
    if ( (__int64 *)(a2 + result) != v13 )
    {
      v14 = 5 - (v5 == 0);
      v15 = v5 == 0 ? 3 : 5;
      do
      {
        v16 = *v12;
        v17 = *(_QWORD *)(*v12 + 8);
        if ( (*(_BYTE *)(*v12 + 1) & 6) != 0 )
        {
          if ( (v17 & 1) != 0 || (result = v17 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(result + 8) & 1) != 0) )
            result = sub_9E2CF0((__int64)a1, v16, v15);
        }
        else
        {
          v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
          result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
          {
            v19 = sub_F68450(v18, v16, v11, v7, v8);
            if ( (v19 & 1) != 0 || (result = v19 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(result + 8) & 1) != 0) )
            {
              v20 = *v12;
              v21 = sub_B8C1B0(*a1);
              v22 = sub_B8C330(v21);
              if ( !v20 )
LABEL_28:
                BUG();
              while ( 1 )
              {
                result = sub_BFD8A0(v20, v22);
                v11 = *(_WORD *)result & 0x1FF;
                v7 = (unsigned int)(v11 + 433);
                LOWORD(v7) = (v11 + 433) & 0x1FF;
                if ( (unsigned __int16)v7 > 9u )
                  break;
                v11 = (*(_WORD *)(result + 2) >> 3) & 0x7F;
                if ( ((*(_WORD *)(result + 2) >> 3) & 0x7F) != 2 )
                  goto LABEL_14;
                v20 = *(_QWORD *)(result + 16);
                if ( !v20 )
                  goto LABEL_28;
              }
              if ( (_WORD)v11 == 4 )
              {
                v11 = *(unsigned __int8 *)(result + 2);
                LOBYTE(v11) = (unsigned __int8)v11 >> 3;
                if ( (_BYTE)v11 == 4 )
                  result = sub_9E2CF0((__int64)a1, *(_QWORD *)(result + 16), v14);
              }
            }
          }
        }
LABEL_14:
        ++v12;
      }
      while ( v13 != v12 );
    }
  }
  return result;
}
