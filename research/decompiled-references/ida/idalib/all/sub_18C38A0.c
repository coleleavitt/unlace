unsigned __int64 __fastcall sub_18C38A0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  char *v7; // r12
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // r10
  __int64 v11; // r11
  _QWORD *v12; // rdx
  char *v13; // r11
  char *v14; // rbp
  __int64 v15[4]; // [rsp+0h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  if ( (v2 & 4) != 0 || (result = v2 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(result + 8) & 4) != 0) )
  {
    result = *(_QWORD *)(a1 + 232);
    if ( *(char *)(result + 1) < 0 )
    {
      result = sub_BFBAE0(a2);
      if ( ((*(_WORD *)result + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(result + 2) >> 3) & 0x3F) == 0x15 )
      {
        v4 = *(_QWORD *)(a1 + 4616);
        v5 = 640LL * *(unsigned int *)(a1 + 4624);
        v15[0] = *(_QWORD *)(result + 16);
        v6 = v4 + v5 - 640;
        v7 = *(char **)(v6 + 376);
        v8 = (char *)sub_18BC1F0(v7, (__int64)&v7[8 * *(unsigned int *)(v6 + 384)], v15);
        if ( v10 == v8 )
        {
          v14 = v10;
        }
        else
        {
          v12 = v8 + 8;
          if ( v10 == v8 + 8 )
          {
            v14 = v8;
          }
          else
          {
            while ( 1 )
            {
              if ( *v12 != v9 )
              {
                *(_QWORD *)v8 = *v12;
                v8 += 8;
              }
              if ( v10 == (char *)++v12 )
                break;
              v9 = v15[0];
            }
            v7 = *(char **)(v6 + 376);
            v13 = &v7[v11];
            v14 = &v8[v13 - v10];
            if ( v10 != v13 )
            {
              memmove(v8, v10, v13 - v10);
              v7 = *(char **)(v6 + 376);
            }
          }
        }
        result = (v14 - v7) >> 3;
        *(_DWORD *)(v6 + 384) = result;
      }
    }
  }
  return result;
}
