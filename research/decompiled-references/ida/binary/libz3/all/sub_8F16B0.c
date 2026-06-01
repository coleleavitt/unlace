__int64 __fastcall sub_8F16B0(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int **v4; // r8
  unsigned int **v5; // rbx
  unsigned int **v7; // r15
  unsigned int v8; // edx
  unsigned int *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  char *v14; // rbp
  __int64 v16; // [rsp+10h] [rbp-E8h]
  unsigned int *v18; // [rsp+28h] [rbp-D0h] BYREF
  void *v19; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+40h] [rbp-B8h] BYREF

  result = 0x1000000000LL;
  v4 = *(unsigned int ***)(a1 + 8560);
  v19 = v21;
  v20 = 0x1000000000LL;
  if ( !v4 )
    return result;
  result = *((unsigned int *)v4 - 1);
  v5 = &v4[result];
  if ( v5 == v4 )
    return result;
  v7 = v4;
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 184);
      v9 = *v7;
      result = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 476LL);
      if ( (unsigned int)result > v8 )
        result = v8;
      if ( !(_DWORD)result
        || (result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 56LL))(
                       *(_QWORD *)(a1 + 7488),
                       *v7),
            (_BYTE)result) )
      {
        v10 = *(_QWORD *)(a1 + 104);
        if ( v9 != *(unsigned int **)(v10 + 864) )
        {
          v11 = *(_QWORD *)(a1 + 8832);
          v12 = *(_QWORD *)(a1 + 8848);
          if ( !*((_WORD *)v9 + 2)
            && (v13 = *(_QWORD **)(*((_QWORD *)v9 + 2) + 24LL)) != nullptr
            && *v13 == 0x800000000LL
            && v9[6] == 1 )
          {
            result = (unsigned int)-*(char *)(v12
                                            + (unsigned int)(2 * *(_DWORD *)(v11 + 4LL * **((unsigned int **)v9 + 4))));
          }
          else
          {
            result = (unsigned int)*(char *)(v12 + (unsigned int)(2 * *(_DWORD *)(v11 + 4LL * *v9)));
          }
          if ( (_DWORD)result == 1 )
          {
            LODWORD(v20) = 0;
            result = sub_15D3050(v10, v9, &v19);
            if ( (_BYTE)result )
            {
              if ( !a2 )
                goto LABEL_17;
              result = (__int64)v19 + 8 * (unsigned int)v20;
              v16 = result;
              if ( (void *)result != v19 )
                break;
            }
          }
        }
      }
LABEL_4:
      if ( v5 == ++v7 )
        goto LABEL_18;
    }
    v14 = (char *)v19;
    while ( 1 )
    {
      result = sub_180D470(v14, 64);
      if ( (_BYTE)result )
        break;
      v14 += 8;
      if ( (char *)v16 == v14 )
        goto LABEL_4;
    }
LABEL_17:
    ++v9[2];
    v18 = v9;
    result = sub_8F15F0((_QWORD *)(a3 + 8), &v18);
    ++v7;
  }
  while ( v5 != v7 );
LABEL_18:
  if ( v19 != v21 )
  {
    if ( v19 )
      return sub_186B220(v19);
  }
  return result;
}

